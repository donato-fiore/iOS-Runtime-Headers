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

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct PSCSessionInternal_ {
} // Error Processing Struct Fields

typedef struct IBagDataSource {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<AMSCore::IBagDataSource> {
    IBagDataSource __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<AMSCore::IBagDataSource>;

typedef struct Bag {
    unk _vptr$Bag;
    shared_ptr<AMSCore::IBagDataSource> mDataSource;
} Bag;

typedef struct optional<AMSCore::Bag> {
    unk ;
    char __null_state_;
    Bag __val_;
    BOOL __engaged_;
} optional<AMSCore::Bag>;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct os_unfair_recursive_lock_s {
    os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
} os_unfair_recursive_lock_s;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct __SecAccessControl {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct __SecKey {
    __CFRuntimeBase field0;
    __SecKeyDescriptor field1;
    void field2;
} __SecKey;

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __SecKeyDescriptor {
} // Error Processing Struct Fields

typedef struct __SecCertificate {
} // Error Processing Struct Fields

typedef struct FutureImp {
} // Error Processing Struct Fields

typedef struct shared_ptr<AMSCore::Future<PromiseResult>::FutureImp> {
} // Error Processing Struct Fields

typedef struct Promise<PromiseResult> {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct FPSAPContextOpaque_ {
} // Error Processing Struct Fields

typedef struct FairPlayHWInfo_ {
    unsigned int IDLength;
    unsigned char ID;
} FairPlayHWInfo_;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __CFUserNotification {
} // Error Processing Struct Fields

typedef struct ButtonKey {
} // Error Processing Struct Fields

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct __CFURL {
} // Error Processing Struct Fields

typedef struct _CFURLRequest {
} // Error Processing Struct Fields

typedef struct __SecTrust {
} // Error Processing Struct Fields

typedef struct OptionsImp {
} // Error Processing Struct Fields

typedef struct shared_ptr<AMSCore::Options::OptionsImp> {
} // Error Processing Struct Fields

typedef struct Options {
} // Error Processing Struct Fields

