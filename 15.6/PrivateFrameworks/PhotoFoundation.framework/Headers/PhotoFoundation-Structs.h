typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct PFIntSize_st {
    NSUInteger field0;
    NSUInteger field1;
} PFIntSize_st;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct timespec {
    NSInteger field0;
    NSInteger field1;
} timespec;

typedef struct stat {
    int field0;
    unsigned short field1;
    unsigned short field2;
    NSUInteger field3;
    unsigned int field4;
    unsigned int field5;
    int field6;
    timespec field7;
    timespec field8;
    timespec field9;
    timespec field10;
    NSInteger field11;
    NSInteger field12;
    int field13;
    unsigned int field14;
    unsigned int field15;
    int field16;
    NSInteger field17;
} stat;

typedef struct __sbuf {
    char * field0;
    int field1;
} __sbuf;

typedef struct __sFILEX {
} // Error Processing Struct Fields

typedef struct __sFILE {
    char * field0;
    int field1;
    int field2;
    short field3;
    short field4;
    __sbuf field5;
    int field6;
    void field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    __sbuf field12;
    __sFILEX field13;
    int field14;
    unsigned char field15;
    unsigned char field16;
    __sbuf field17;
    int field18;
    NSInteger field19;
} __sFILE;

typedef struct ? {
    NSUInteger field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
} ?;

typedef struct _telldir {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_t {
} // Error Processing Struct Fields

typedef struct PFChecksumBytes {
    unsigned char data;
} PFChecksumBytes;

