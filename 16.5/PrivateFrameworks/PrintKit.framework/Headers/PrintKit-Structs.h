typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct _ipp_s {
} // Error Processing Struct Fields

typedef struct pwg_map_s {
    char * field0;
    char * field1;
} pwg_map_s;

typedef struct pwg_size_s {
    pwg_map_s field0;
    int field1;
    int field2;
    int field3;
    int field4;
    int field5;
    int field6;
} pwg_size_s;

typedef struct _pk_proxy_s {
} // Error Processing Struct Fields

typedef struct http_addrlist_s {
    http_addrlist_s field0;
    CGFloat field1;
    CGFloat field2;
    sockaddr field3;
    sockaddr_in field4;
    sockaddr_in6 field5;
    sockaddr_un field6;
    char field7;
} http_addrlist_s;

typedef struct sockaddr {
    unsigned char field0;
    unsigned char field1;
    char field2;
} sockaddr;

typedef struct in_addr {
    unsigned int field0;
} in_addr;

typedef struct sockaddr_in {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    in_addr field3;
    char field4;
} sockaddr_in;

typedef struct in6_addr {
    unk field0;
    unsigned char field1;
    unsigned short field2;
    unsigned int field3;
} in6_addr;

typedef struct sockaddr_in6 {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    unsigned int field3;
    in6_addr field4;
    unsigned int field5;
} sockaddr_in6;

typedef struct sockaddr_un {
    unsigned char field0;
    unsigned char field1;
    char field2;
} sockaddr_un;

typedef struct _http_s {
} // Error Processing Struct Fields

