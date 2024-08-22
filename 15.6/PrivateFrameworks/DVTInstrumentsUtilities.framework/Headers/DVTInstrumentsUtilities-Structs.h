typedef struct XRTimeRange {
    NSUInteger field0;
    NSUInteger field1;
} XRTimeRange;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct Ring {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<xray::scheduler::Ring> {
    Ring __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<xray::scheduler::Ring>;

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

typedef struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
    uint8_t __a_value;
    int field1;
} __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>>;

typedef struct atomic<int> {
    __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> __a_;
} atomic<int>;

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct _XRIndexRange {
    NSUInteger field0;
    NSUInteger field1;
} _XRIndexRange;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<xray::internal::RangeImp<unsigned long long>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<xray::internal::RangeImp<unsigned long long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<xray::internal::RangeImp<unsigned long long>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<xray::internal::RangeImp<unsigned long long>>>;

typedef struct __tree<xray::internal::RangeImp<unsigned long long>, std::less<xray::internal::RangeImp<unsigned long long>>, std::allocator<xray::internal::RangeImp<unsigned long long>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<xray::internal::RangeImp<unsigned long long>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<xray::internal::RangeImp<unsigned long long>>> __pair3_;
} __tree<xray::internal::RangeImp<unsigned long long>, std::less<xray::internal::RangeImp<unsigned long long>>, std::allocator<xray::internal::RangeImp<unsigned long long>>>;

typedef struct multiset<xray::internal::RangeImp<unsigned long long>, std::less<xray::internal::RangeImp<unsigned long long>>, std::allocator<xray::internal::RangeImp<unsigned long long>>> {
    __tree<xray::internal::RangeImp<unsigned long long>, std::less<xray::internal::RangeImp<unsigned long long>>, std::allocator<xray::internal::RangeImp<unsigned long long>>> __tree_;
} multiset<xray::internal::RangeImp<unsigned long long>, std::less<xray::internal::RangeImp<unsigned long long>>, std::allocator<xray::internal::RangeImp<unsigned long long>>>;

typedef struct RangeImp<unsigned long long> {
    NSUInteger first;
    NSUInteger last;
} RangeImp<unsigned long long>;

typedef struct array<xray::internal::RangeImp<unsigned long long>, 4UL> {
    RangeImp<unsigned long long> __elems_;
} array<xray::internal::RangeImp<unsigned long long>, 4UL>;

typedef struct XRIndexSetImpl<unsigned long long, 4, std::allocator<xray::internal::RangeImp<unsigned long long>>> {
    multiset<xray::internal::RangeImp<unsigned long long>, std::less<xray::internal::RangeImp<unsigned long long>>, std::allocator<xray::internal::RangeImp<unsigned long long>>> _ranges;
    array<xray::internal::RangeImp<unsigned long long>, 4UL> _cache;
    BOOL _cacheIsValid;
} XRIndexSetImpl<unsigned long long, 4, std::allocator<xray::internal::RangeImp<unsigned long long>>>;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __CFNumberFormatter {
} // Error Processing Struct Fields

typedef struct _xmlError {
    int field0;
    int field1;
    char * field2;
    int field3;
    char * field4;
    int field5;
    char * field6;
    char * field7;
    char * field8;
    int field9;
    int field10;
    void field11;
    void field12;
} _xmlError;

typedef struct ActivityManager {
} // Error Processing Struct Fields

typedef struct shared_ptr<xray::scheduler::ActivityManager> {
} // Error Processing Struct Fields

typedef struct Commutator {
} // Error Processing Struct Fields

typedef struct __compressed_pair<xray::scheduler::Commutator *, std::default_delete<xray::scheduler::Commutator>> {
    Commutator __value_;
} __compressed_pair<xray::scheduler::Commutator *, std::default_delete<xray::scheduler::Commutator>>;

typedef struct unique_ptr<xray::scheduler::Commutator, std::default_delete<xray::scheduler::Commutator>> {
    __compressed_pair<xray::scheduler::Commutator *, std::default_delete<xray::scheduler::Commutator>> __ptr_;
} unique_ptr<xray::scheduler::Commutator, std::default_delete<xray::scheduler::Commutator>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long long, id>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, id>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, id>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long long, id>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, id>>>;

typedef struct unordered_map<unsigned long long, id, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, id>>> {
    __hash_table<std::__hash_value_type<unsigned long long, id>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, id>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, id>>> __table_;
} unordered_map<unsigned long long, id, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, id>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<const void *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<const void *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<const void *, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<const void *, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *>, std::allocator<std::__hash_node<const void *, void *>>> {
    __hash_node_base<std::__hash_node<const void *, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *>, std::allocator<std::__hash_node<const void *, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<const void *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<const void *>>;

typedef struct __compressed_pair<float, std::equal_to<const void *>> {
    float __value_;
} __compressed_pair<float, std::equal_to<const void *>>;

typedef struct __hash_table<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<const void *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *>, std::allocator<std::__hash_node<const void *, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<const void *>> __p2_;
    __compressed_pair<float, std::equal_to<const void *>> __p3_;
} __hash_table<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>>;

typedef struct unordered_set<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>> {
    __hash_table<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>> __table_;
} unordered_set<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>>;

