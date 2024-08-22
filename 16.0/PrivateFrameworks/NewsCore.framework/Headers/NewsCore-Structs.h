typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

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

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __CFCachedURLResponse {
} // Error Processing Struct Fields

typedef struct _CFCachedURLResponse {
    __CFRuntimeBase field0;
    __CFCachedURLResponse field1;
} _CFCachedURLResponse;

typedef struct _CFURLRequest {
} // Error Processing Struct Fields

typedef struct _moFactoryClassFlags {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} _moFactoryClassFlags;

typedef struct FCEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} FCEdgeInsets;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::equal_to<NTPBKeyValuePair_ValueType>, std::hash<int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::equal_to<NTPBKeyValuePair_ValueType>, std::hash<int>, true>>;

typedef struct __hash_table<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::__unordered_map_hasher<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>, true>, std::__unordered_map_equal<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::equal_to<NTPBKeyValuePair_ValueType>, std::hash<int>, true>, std::allocator<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::equal_to<NTPBKeyValuePair_ValueType>, std::hash<int>, true>> __p3_;
} __hash_table<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::__unordered_map_hasher<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>, true>, std::__unordered_map_equal<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::equal_to<NTPBKeyValuePair_ValueType>, std::hash<int>, true>, std::allocator<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>>;

typedef struct unordered_map<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>, std::allocator<std::pair<const NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>> {
    __hash_table<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::__unordered_map_hasher<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>, true>, std::__unordered_map_equal<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::equal_to<NTPBKeyValuePair_ValueType>, std::hash<int>, true>, std::allocator<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>> __table_;
} unordered_map<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>, std::allocator<std::pair<const NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>>;

