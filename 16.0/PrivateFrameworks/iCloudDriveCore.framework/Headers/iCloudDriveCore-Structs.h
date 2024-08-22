typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct sqlite3_value {
} // Error Processing Struct Fields

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL clientTruthDirFaultCount;
    BOOL serverTruthDirCount;
    BOOL serverTruthDirFaultCount;
    BOOL serverTruthTotalItemsCount;
    BOOL timeSinceLogin;
} ?;

typedef struct fsid {
    int val;
} fsid;

typedef struct statfs {
    unsigned int f_bsize;
    int f_iosize;
    NSUInteger f_blocks;
    NSUInteger f_bfree;
    NSUInteger f_bavail;
    NSUInteger f_files;
    NSUInteger f_ffree;
    fsid f_fsid;
    unsigned int f_owner;
    unsigned int f_type;
    unsigned int f_flags;
    unsigned int f_fssubtype;
    char f_fstypename;
    char f_mntonname;
    char f_mntfromname;
    unsigned int f_flags_ext;
    unsigned int f_reserved;
} statfs;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct cache_s {
} // Error Processing Struct Fields

typedef struct NSFileProviderTypeAndCreator {
    unsigned int field0;
    unsigned int field1;
} NSFileProviderTypeAndCreator;

typedef struct _NSProgressFraction {
    NSInteger field0;
    NSInteger field1;
    BOOL field2;
} _NSProgressFraction;

typedef struct _NSProgressFractionTuple {
    _NSProgressFraction field0;
    _NSProgressFraction field1;
} _NSProgressFractionTuple;

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

typedef struct timespec {
    NSInteger tv_sec;
    NSInteger tv_nsec;
} timespec;

typedef struct brc_mutex {
    _opaque_pthread_mutex_t pthread;
} brc_mutex;

typedef struct CC_SHA1state_st {
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data;
    int num;
} CC_SHA1state_st;

typedef struct brc_job_update {
    int field0;
    NSInteger field1;
} brc_job_update;

typedef struct throttle_stamps {
    unsigned int field0;
    int field1;
    NSInteger field2;
    NSInteger field3;
    NSInteger field4;
} throttle_stamps;

typedef struct __CFUserNotification {
} // Error Processing Struct Fields

typedef struct __CFRunLoopSource {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct NSEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSEdgeInsets;

typedef struct RootItemObject {
    unsigned char field0;
    unk field1;
    unsigned int field2;
    unsigned int field3;
} RootItemObject;

typedef struct _UUIDItemObject_OLD {
    unsigned char field0;
    unsigned int field1;
    unsigned char field2;
} _UUIDItemObject_OLD;

typedef struct backup_detector {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
} backup_detector;

typedef struct _telldir {
} // Error Processing Struct Fields

typedef struct CacheDeleteToken {
} // Error Processing Struct Fields

