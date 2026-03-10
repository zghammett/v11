body{
margin:0;
font-family:Arial, Helvetica, sans-serif;
background:#f8fafc;
color:#0f172a;
}

.container{
max-width:1200px;
margin:auto;
padding:20px;
}

.header{
background:white;
border-bottom:1px solid #ddd;
}

.nav{
display:flex;
justify-content:space-between;
align-items:center;
}

.brand{
display:flex;
align-items:center;
gap:12px;
}

.logo{
height:50px;
}

.subtitle{
font-size:12px;
letter-spacing:3px;
text-transform:uppercase;
}

.call{
background:#1d4ed8;
color:white;
padding:10px 16px;
border-radius:10px;
text-decoration:none;
}

.hero{
padding:80px 0;
background:linear-gradient(135deg,#fee2e2,#ffffff,#dbeafe);
}

.hero-grid{
display:grid;
grid-template-columns:1fr 1fr;
gap:40px;
align-items:center;
}

.hero-card{
background:white;
padding:30px;
border-radius:20px;
box-shadow:0 10px 25px rgba(0,0,0,.1);
}

.btn{
display:inline-block;
background:#dc2626;
color:white;
padding:12px 20px;
border-radius:10px;
text-decoration:none;
margin-top:20px;
}

.services{
padding:60px 0;
}

.service-grid{
display:grid;
grid-template-columns:repeat(auto-fit,minmax(200px,1fr));
gap:20px;
margin-top:30px;
}

.card{
background:white;
padding:20px;
border-radius:15px;
box-shadow:0 5px 15px rgba(0,0,0,.08);
}

.contact{
padding:60px 0;
background:#0f172a;
color:white;
}

.contact-grid{
display:grid;
grid-template-columns:1fr 1fr;
gap:40px;
}

.form input,
.form textarea{
width:100%;
padding:12px;
margin-bottom:10px;
border-radius:8px;
border:none;
}

.form button{
background:#dc2626;
color:white;
padding:12px;
border:none;
border-radius:8px;
cursor:pointer;
}

.footer{
background:#f1f5f9;
text-align:center;
padding:30px 0;
}
