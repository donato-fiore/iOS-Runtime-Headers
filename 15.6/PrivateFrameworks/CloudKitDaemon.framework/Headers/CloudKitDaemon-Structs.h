typedef struct _OpaquePCSShareProtection {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct objc_ivar {
} // Error Processing Struct Fields

typedef struct _NSZone {
} // Error Processing Struct Fields

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

typedef struct ? {
    id __prevOp;
    id NSOperation;
    id __nextOp;
    id NSOperation;
    id __nextPriOp;
    id NSOperation;
    NSInteger __queue;
    id NSOperationQueue;
    unk __dependencies;
    void NSMutableArray;
    void __down_dependencies;
    CGFloat NSHashTable;
    char * __unfinished_deps;
    id __completion;
    id __obsInfo;
    unk __implicitObsInfo;
    _opaque_pthread_mutex_t __thread_prio;
    _opaque_pthread_cond_t __nameBuffer;
    os_unfair_lock_s _voucher;
    BOOL NSObject<OS_voucher>;
    uint8_t __schedule;
    unsigned char __wait_mutex;
    char __wait_cond;
    uint8_t __lock;
    BOOL _shouldRemoveDependenciesAfterFinish;
    uint8_t __state;
    BOOL __prio;
    uint8_t __cached_isReady;
    unsigned char __isCancelled;
    uint8_t __propertyQoS;
    unsigned char __isExecutingObserverCount;
    uint8_t __isFinishedObserverCount;
    unsigned char __isReadyObserverCount;
    uint8_t __isCancelledObserverCount;
    unsigned char field34;
    uint8_t field35;
    unsigned char field36;
} ?;

typedef struct os_activity_stream_s {
} // Error Processing Struct Fields

typedef struct _PCSIdentityData {
} // Error Processing Struct Fields

typedef struct _PCSPublicIdentityData {
} // Error Processing Struct Fields

typedef struct __CFError {
} // Error Processing Struct Fields

typedef struct _PCSIdentitySetData {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct internal_state {
} // Error Processing Struct Fields

typedef struct z_stream_s {
    char * next_in;
    unsigned int avail_in;
    NSUInteger total_in;
    char * next_out;
    unsigned int avail_out;
    NSUInteger total_out;
    char * msg;
    internal_state state;
    unk zalloc;
    unk zfree;
    void opaque;
    int data_type;
    NSUInteger adler;
    NSUInteger reserved;
} z_stream_s;

typedef struct MGNotificationTokenStruct {
} // Error Processing Struct Fields

typedef struct _mkbbackupref {
} // Error Processing Struct Fields

typedef struct _mmcs_engine {
} // Error Processing Struct Fields

typedef struct __SecPolicy {
} // Error Processing Struct Fields

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __SecKeyDescriptor {
} // Error Processing Struct Fields

typedef struct __SecKey {
    __CFRuntimeBase field0;
    __SecKeyDescriptor field1;
    void field2;
} __SecKey;

typedef struct __SecTrust {
} // Error Processing Struct Fields

typedef struct MMCSItemReaderWriter {
} // Error Processing Struct Fields

typedef struct __SecIdentity {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct sqlite3_value {
} // Error Processing Struct Fields

typedef struct pcc_wrapped_invocation_key {
    char * field0;
    NSUInteger field1;
} pcc_wrapped_invocation_key;

typedef struct pcc_invocation_key {
    unsigned char field0;
} pcc_invocation_key;

