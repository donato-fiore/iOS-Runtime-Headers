typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct ? {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    unsigned short field5;
} ?;

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct timespec {
    NSInteger tv_sec;
    NSInteger tv_nsec;
} timespec;

typedef struct rb_tree {
    void field0;
} rb_tree;

typedef struct _LIFileAttributes {
    NSUInteger __fa_rsvd0;
    NSUInteger fa_validmask;
    NSUInteger fa_seqno;
    unsigned int fa_type;
    unsigned int fa_mode;
    unsigned int fa_nlink;
    unsigned int fa_uid;
    unsigned int fa_gid;
    unsigned int fa_bsd_flags;
    NSUInteger fa_size;
    NSUInteger fa_allocsize;
    NSUInteger fa_fileid;
    NSUInteger fa_parentid;
    timespec fa_atime;
    timespec fa_mtime;
    timespec fa_ctime;
    timespec fa_birthtime;
    timespec fa_backuptime;
    timespec fa_addedtime;
    unsigned int fa_int_flags;
    unsigned int _pad0;
} _LIFileAttributes;

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct apple_double_entry {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} apple_double_entry;

typedef struct apple_double_header {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned short field3;
    apple_double_entry field4;
    unsigned char field5;
    unsigned char field6;
} apple_double_header;

typedef struct attr_header {
    apple_double_header field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned short field7;
    unsigned short field8;
} attr_header;

typedef struct rsrcfork_header {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned char field4;
    unsigned char field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned short field11;
    unsigned char field12;
    unsigned char field13;
    unsigned short field14;
    unsigned short field15;
    unsigned short field16;
} rsrcfork_header;

typedef struct attr_entry {
    unsigned int field0;
    unsigned int field1;
    unsigned short field2;
    unsigned char field3;
    unsigned char field4;
} attr_entry;

