typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct ? {
    BOOL implementsProvideAvailableEngines;
    BOOL implementsHandleFileRequest;
} ?;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _CFHTTPServerResponse {
} // Error Processing Struct Fields

typedef struct __CFHTTPMessage {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned short>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned short>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned short>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned short>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, unsigned short>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned short>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned short>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned short>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned short>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned short>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned short>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, unsigned short>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned short>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned short>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned short>>>;

typedef struct unordered_map<std::string, unsigned short, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned short>>> {
    __hash_table<std::__hash_value_type<std::string, unsigned short>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned short>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned short>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned short>>> __table_;
} unordered_map<std::string, unsigned short, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned short>>>;

typedef struct REFancyShrinkingDictionary {
    unordered_map<std::string, unsigned short, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned short>>> m_mapDocumentFrequency;
    NSUInteger m_maxSize;
    NSUInteger m_shrinkSize;
    int m_nVersion;
    BOOL m_trimTop;
    BOOL m_shinksOnTotalCount;
} REFancyShrinkingDictionary;

typedef struct REContentFeatureExtractor {
    _opaque_pthread_rwlock_t m_rwlock;
    REFancyShrinkingDictionary m_trueTopTokens;
    REFancyShrinkingDictionary m_falseTopTokens;
} REContentFeatureExtractor;

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct _CFHTTPServerRequest {
} // Error Processing Struct Fields

typedef struct __CFBag {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct _CFHTTPServerConnection {
} // Error Processing Struct Fields

typedef struct __CFBinaryHeap {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct _CFHTTPServer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long long, Gaussian>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher, true>, std::allocator<std::__hash_value_type<unsigned long long, Gaussian>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long long, Gaussian>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher, true>, std::allocator<std::__hash_value_type<unsigned long long, Gaussian>>>;

typedef struct unordered_map<unsigned long long, Gaussian, BayesianModel::SuperHasher, BayesianModel::SuperHasher, std::allocator<std::pair<const unsigned long long, Gaussian>>> {
    __hash_table<std::__hash_value_type<unsigned long long, Gaussian>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher, true>, std::allocator<std::__hash_value_type<unsigned long long, Gaussian>>> __table_;
} unordered_map<unsigned long long, Gaussian, BayesianModel::SuperHasher, BayesianModel::SuperHasher, std::allocator<std::pair<const unsigned long long, Gaussian>>>;

typedef struct Gaussian {
    CGFloat m_dPrecision;
    CGFloat m_dPredicionMean;
} Gaussian;

typedef struct BayesianModel {
    _opaque_pthread_rwlock_t m_rwlock;
    unordered_map<unsigned long long, Gaussian, BayesianModel::SuperHasher, BayesianModel::SuperHasher, std::allocator<std::pair<const unsigned long long, Gaussian>>> m_features;
    int m_nFeaturesCount;
    NSUInteger m_nTotalTrue;
    NSUInteger m_nTotalExamples;
    CGFloat m_dSumPredictions;
    CGFloat m_dLogScore;
    CGFloat m_dNormalizedLogScore;
    CGFloat m_dEpsilon;
    int m_nModelVersion;
    NSUInteger m_nCalibrationCurveTrue;
    NSUInteger m_nCalibrationCurveCount;
    NSUInteger m_maxFeatureCoordinates;
    NSUInteger m_nNumberOfTraining;
    Gaussian m_empty;
} BayesianModel;

