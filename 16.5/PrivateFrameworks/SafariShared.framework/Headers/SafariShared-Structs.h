typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct OpaqueJSValue {
} // Error Processing Struct Fields

typedef struct OpaqueJSContext {
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

typedef struct objc_ivar {
} // Error Processing Struct Fields

typedef struct URLCompletionEntry {
} // Error Processing Struct Fields

typedef struct HashTable<SafariShared::URLCompletionEntryKey, SafariShared::URLCompletionEntry, SafariShared::URLCompletionEntryKeyExtractor, SafariShared::URLCompletionEntryHash, SafariShared::URLCompletionEntryValueTraits, SafariShared::URLCompletionEntryKeyTraits> {
    unk ;
    URLCompletionEntry m_table;
    unsigned int m_tableForLLDB;
} HashTable<SafariShared::URLCompletionEntryKey, SafariShared::URLCompletionEntry, SafariShared::URLCompletionEntryKeyExtractor, SafariShared::URLCompletionEntryHash, SafariShared::URLCompletionEntryValueTraits, SafariShared::URLCompletionEntryKeyTraits>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::hash<NSString *>, std::equal_to<NSString *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::hash<NSString *>, std::equal_to<NSString *>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::equal_to<NSString *>, std::hash<NSString *>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::equal_to<NSString *>, std::hash<NSString *>, true>>;

typedef struct __hash_table<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::hash<NSString *>, std::equal_to<NSString *>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::equal_to<NSString *>, std::hash<NSString *>, true>> __p3_;
} __hash_table<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>>>;

typedef struct unordered_map<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>>> {
    __hash_table<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>>> __table_;
} unordered_map<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>>>;

typedef struct URLCompletionEntryMap {
    HashTable<SafariShared::URLCompletionEntryKey, SafariShared::URLCompletionEntry, SafariShared::URLCompletionEntryKeyExtractor, SafariShared::URLCompletionEntryHash, SafariShared::URLCompletionEntryValueTraits, SafariShared::URLCompletionEntryKeyTraits> _map;
    unordered_map<NSString *, std::unique_ptr<SafariShared::URLCompletionEntryExtras>, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, std::unique_ptr<SafariShared::URLCompletionEntryExtras>>>> _extras;
} URLCompletionEntryMap;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, NSString *>, std::hash<NSString *>, std::equal_to<NSString *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, NSString *>, std::hash<NSString *>, std::equal_to<NSString *>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, NSString *>, std::equal_to<NSString *>, std::hash<NSString *>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, NSString *>, std::equal_to<NSString *>, std::hash<NSString *>, true>>;

typedef struct __hash_table<std::__hash_value_type<NSString *, NSString *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, NSString *>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, NSString *>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, NSString *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, NSString *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, NSString *>, std::hash<NSString *>, std::equal_to<NSString *>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, NSString *>, std::equal_to<NSString *>, std::hash<NSString *>, true>> __p3_;
} __hash_table<std::__hash_value_type<NSString *, NSString *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, NSString *>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, NSString *>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, NSString *>>>;

typedef struct unordered_multimap<NSString *, NSString *, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, NSString *>>> {
    __hash_table<std::__hash_value_type<NSString *, NSString *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, NSString *>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, NSString *>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, NSString *>>> __table_;
} unordered_multimap<NSString *, NSString *, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, NSString *>>>;

typedef struct BookmarkAndHistoryCompletionMatch {
} // Error Processing Struct Fields

typedef struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> {
    BookmarkAndHistoryCompletionMatch m_ptr;
} RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>>;

typedef struct SuddenTerminationDisabler {
} // Error Processing Struct Fields

typedef struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> {
    SuddenTerminationDisabler __value_;
} __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>>;

typedef struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> {
    __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> __ptr_;
} unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>>;

typedef struct duration<long long, std::ratio<1, 1000000000>> {
    NSInteger __rep_;
} duration<long long, std::ratio<1, 1000000000>>;

typedef struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> {
    duration<long long, std::ratio<1, 1000000000>> __d_;
} time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>;

typedef struct duration<long long, std::ratio<1, 1000>> {
    NSInteger __rep_;
} duration<long long, std::ratio<1, 1000>>;

typedef struct __cxx_atomic_impl<WBSHistoryServiceStoreState, std::__cxx_atomic_base_impl<WBSHistoryServiceStoreState>> {
    uint8_t __a_value;
    NSInteger field1;
} __cxx_atomic_impl<WBSHistoryServiceStoreState, std::__cxx_atomic_base_impl<WBSHistoryServiceStoreState>>;

typedef struct atomic<WBSHistoryServiceStoreState> {
    __cxx_atomic_impl<WBSHistoryServiceStoreState, std::__cxx_atomic_base_impl<WBSHistoryServiceStoreState>> __a_;
} atomic<WBSHistoryServiceStoreState>;

typedef struct __WBSFieldLabelPatternMatcherArray {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<long long, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<long long, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *>, std::allocator<std::__hash_node<long long, void *>>> {
    __hash_node_base<std::__hash_node<long long, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *>, std::allocator<std::__hash_node<long long, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<long long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<long long>>;

typedef struct __compressed_pair<float, std::equal_to<long long>> {
    float __value_;
} __compressed_pair<float, std::equal_to<long long>>;

typedef struct __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *>, std::allocator<std::__hash_node<long long, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<long long>> __p2_;
    __compressed_pair<float, std::equal_to<long long>> __p3_;
} __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>>;

typedef struct unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> {
    __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> __table_;
} unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>>;

typedef struct __SecTrust {
} // Error Processing Struct Fields

typedef struct OpaqueFormAutoFillFrame {
} // Error Processing Struct Fields

typedef struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>> {
    unk ;
    void m_table;
    unsigned int m_tableForLLDB;
} HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>>;

typedef struct HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::unique_ptr<SafariShared::FrameMetadata>>, WTF::HashTableTraits> {
    HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>> m_impl;
} HashMap<OpaqueFormAutoFillFrame *, std::unique_ptr<SafariShared::FrameMetadata>, WTF::DefaultHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::unique_ptr<SafariShared::FrameMetadata>>, WTF::HashTableTraits>;

typedef struct RetainPtr<_PCSIdentitySetData *> {
    void m_ptr;
} RetainPtr<_PCSIdentitySetData *>;

typedef struct RetainPtr<_OpaquePCSShareProtection *> {
    void m_ptr;
} RetainPtr<_OpaquePCSShareProtection *>;

typedef struct RetainPtr<const __CFData *> {
    void m_ptr;
} RetainPtr<const __CFData *>;

typedef struct _HistoryStreamedItem {
    ? field0;
    NSInteger field1;
    NSInteger field2;
    NSInteger field3;
    NSInteger field4;
    NSInteger field5;
    char * field6;
    int field7;
    NSUInteger field8;
    int field9;
    NSUInteger field10;
} _HistoryStreamedItem;

typedef struct WBSHistoryItemVisitCountScoresStorage {
} // Error Processing Struct Fields

typedef struct __compressed_pair<WBSHistoryItemVisitCountScoresStorage *, std::default_delete<WBSHistoryItemVisitCountScoresStorage>> {
    WBSHistoryItemVisitCountScoresStorage __value_;
} __compressed_pair<WBSHistoryItemVisitCountScoresStorage *, std::default_delete<WBSHistoryItemVisitCountScoresStorage>>;

typedef struct unique_ptr<WBSHistoryItemVisitCountScoresStorage, std::default_delete<WBSHistoryItemVisitCountScoresStorage>> {
    __compressed_pair<WBSHistoryItemVisitCountScoresStorage *, std::default_delete<WBSHistoryItemVisitCountScoresStorage>> __ptr_;
} unique_ptr<WBSHistoryItemVisitCountScoresStorage, std::default_delete<WBSHistoryItemVisitCountScoresStorage>>;

typedef struct __SecIdentity {
} // Error Processing Struct Fields

typedef struct Vector<double, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    CGFloat m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<double, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>;

typedef struct HistoryURLCompletionItem {
} // Error Processing Struct Fields

typedef struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::RawPtrTraits<SafariShared::HistoryURLCompletionItem>, WTF::DefaultRefDerefTraits<SafariShared::HistoryURLCompletionItem>> {
    HistoryURLCompletionItem m_ptr;
} RefPtr<SafariShared::HistoryURLCompletionItem, WTF::RawPtrTraits<SafariShared::HistoryURLCompletionItem>, WTF::DefaultRefDerefTraits<SafariShared::HistoryURLCompletionItem>>;

typedef struct _HistoryStreamedVisit {
    ? field0;
    NSInteger field1;
    NSInteger field2;
    CGFloat field3;
    char field4;
    char field5;
    char field6;
    int field7;
    NSInteger field8;
    NSInteger field9;
    NSInteger field10;
    NSInteger field11;
    NSInteger field12;
    char * field13;
} _HistoryStreamedVisit;

typedef struct JSRetainPtr<OpaqueJSContext *> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, long long>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, long long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<long long, long long>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, long long>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, long long>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<long long, long long>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, long long>>>;

typedef struct unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>> {
    __hash_table<std::__hash_value_type<long long, long long>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, long long>>> __table_;
} unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::hash<long long>, std::equal_to<long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::hash<long long>, std::equal_to<long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::equal_to<long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::equal_to<long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::hash<long long>, std::equal_to<long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::equal_to<long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>>>;

typedef struct unordered_map<long long, SafariShared::LatestVisitInformation, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, SafariShared::LatestVisitInformation>>> {
    __hash_table<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, SafariShared::LatestVisitInformation>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, SafariShared::LatestVisitInformation>>> __table_;
} unordered_map<long long, SafariShared::LatestVisitInformation, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, SafariShared::LatestVisitInformation>>>;

typedef struct LatestVisitInformationMap {
    unordered_map<long long, SafariShared::LatestVisitInformation, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, SafariShared::LatestVisitInformation>>> _map;
} LatestVisitInformationMap;

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct _HistoryStreamedMatchEntry {
    ? field0;
    char * field1;
    char * field2;
    float field3;
    NSInteger field4;
} _HistoryStreamedMatchEntry;

typedef struct __compressed_pair<SafariShared::_HistoryStreamedMatchEntry *, std::default_delete<SafariShared::_HistoryStreamedMatchEntry>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<SafariShared::_HistoryStreamedMatchEntry, std::default_delete<SafariShared::_HistoryStreamedMatchEntry>> {
    __compressed_pair<SafariShared::_HistoryStreamedMatchEntry *, std::default_delete<SafariShared::_HistoryStreamedMatchEntry>> __ptr_;
} unique_ptr<SafariShared::_HistoryStreamedMatchEntry, std::default_delete<SafariShared::_HistoryStreamedMatchEntry>>;

typedef struct _HistoryStreamedMatchData {
    ? field0;
    CGFloat field1;
    void field2;
    NSInteger field3;
    int field4;
    NSInteger field5;
    unsigned char field6;
    unsigned char field7;
    unsigned char field8;
} _HistoryStreamedMatchData;

typedef struct __compressed_pair<SafariShared::_HistoryStreamedMatchData *, std::default_delete<SafariShared::_HistoryStreamedMatchData>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<SafariShared::_HistoryStreamedMatchData, std::default_delete<SafariShared::_HistoryStreamedMatchData>> {
    __compressed_pair<SafariShared::_HistoryStreamedMatchData *, std::default_delete<SafariShared::_HistoryStreamedMatchData>> __ptr_;
} unique_ptr<SafariShared::_HistoryStreamedMatchData, std::default_delete<SafariShared::_HistoryStreamedMatchData>>;

typedef struct OpaqueJSScript {
} // Error Processing Struct Fields

typedef struct RetainPtr<const __CTFontDescriptor *> {
    void field0;
} RetainPtr<const __CTFontDescriptor *>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::hash<long long>, std::equal_to<long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::hash<long long>, std::equal_to<long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::equal_to<long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::equal_to<long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<long long, WBSHistoryItem *>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, WBSHistoryItem *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::hash<long long>, std::equal_to<long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::equal_to<long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<long long, WBSHistoryItem *>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, WBSHistoryItem *>>>;

typedef struct unordered_map<long long, WBSHistoryItem *, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, WBSHistoryItem *>>> {
    __hash_table<std::__hash_value_type<long long, WBSHistoryItem *>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, WBSHistoryItem *>>> __table_;
} unordered_map<long long, WBSHistoryItem *, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, WBSHistoryItem *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::hash<long long>, std::equal_to<long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::hash<long long>, std::equal_to<long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::equal_to<long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::equal_to<long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, WBSHistoryVisit *__weak>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::hash<long long>, std::equal_to<long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::equal_to<long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, WBSHistoryVisit *__weak>>>;

typedef struct unordered_map<long long, WBSHistoryVisit *__weak, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, WBSHistoryVisit *__weak>>> {
    __hash_table<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, WBSHistoryVisit *__weak>>> __table_;
} unordered_map<long long, WBSHistoryVisit *__weak, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, WBSHistoryVisit *__weak>>>;

typedef struct __cxx_atomic_impl<LoadingStatus, std::__cxx_atomic_base_impl<LoadingStatus>> {
    uint8_t __a_value;
    NSInteger field1;
} __cxx_atomic_impl<LoadingStatus, std::__cxx_atomic_base_impl<LoadingStatus>>;

typedef struct atomic<LoadingStatus> {
    __cxx_atomic_impl<LoadingStatus, std::__cxx_atomic_base_impl<LoadingStatus>> __a_;
} atomic<LoadingStatus>;

typedef struct Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    id m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>;

typedef struct __compressed_pair<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>> *, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>> {
    void __value_;
} __compressed_pair<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>> *, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>>;

typedef struct unique_ptr<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>> {
    __compressed_pair<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>> *, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>> __ptr_;
} unique_ptr<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>>;

