typedef struct ? {
    BOOL timestamp;
    BOOL version;
    BOOL deleted;
} ?;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct HDSyncAnchorRange {
    NSInteger start;
    NSInteger end;
} HDSyncAnchorRange;

typedef struct HDSQLiteRow {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct __compressed_pair<std::tuple<long long, HKSample *> *, std::allocator<std::tuple<long long, HKSample *>>> {
    void __value_;
} __compressed_pair<std::tuple<long long, HKSample *> *, std::allocator<std::tuple<long long, HKSample *>>>;

typedef struct vector<std::tuple<long long, HKSample *>, std::allocator<std::tuple<long long, HKSample *>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::tuple<long long, HKSample *> *, std::allocator<std::tuple<long long, HKSample *>>> __end_cap_;
} vector<std::tuple<long long, HKSample *>, std::allocator<std::tuple<long long, HKSample *>>>;

typedef struct __compressed_pair<std::tuple<long long, HKDeletedObject *> *, std::allocator<std::tuple<long long, HKDeletedObject *>>> {
    void __value_;
} __compressed_pair<std::tuple<long long, HKDeletedObject *> *, std::allocator<std::tuple<long long, HKDeletedObject *>>>;

typedef struct vector<std::tuple<long long, HKDeletedObject *>, std::allocator<std::tuple<long long, HKDeletedObject *>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::tuple<long long, HKDeletedObject *> *, std::allocator<std::tuple<long long, HKDeletedObject *>>> __end_cap_;
} vector<std::tuple<long long, HKDeletedObject *>, std::allocator<std::tuple<long long, HKDeletedObject *>>>;

typedef struct __tuple_impl<std::__tuple_indices<0, 1>, long long, HKSample *> {
    NSInteger __value_;
    id __value_;
} __tuple_impl<std::__tuple_indices<0, 1>, long long, HKSample *>;

typedef struct tuple<long long, HKSample *> {
    __tuple_impl<std::__tuple_indices<0, 1>, long long, HKSample *> __base_;
} tuple<long long, HKSample *>;

typedef struct __tuple_impl<std::__tuple_indices<0, 1>, long long, HKDeletedObject *> {
    NSInteger __value_;
    id __value_;
} __tuple_impl<std::__tuple_indices<0, 1>, long long, HKDeletedObject *>;

typedef struct tuple<long long, HKDeletedObject *> {
    __tuple_impl<std::__tuple_indices<0, 1>, long long, HKDeletedObject *> __base_;
} tuple<long long, HKDeletedObject *>;

typedef struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> {
    unsigned int __x_;
} linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U>;

typedef struct param_type {
    CGFloat __mean_;
    CGFloat __stddev_;
} param_type;

typedef struct normal_distribution<double> {
    param_type __p_;
    CGFloat _V_;
    BOOL _V_hot_;
} normal_distribution<double>;

typedef struct MGNotificationTokenStruct {
} // Error Processing Struct Fields

typedef struct atomic_flag {
    uint8_t _Value;
    BOOL field1;
} atomic_flag;

typedef struct _NSProgressFraction {
    NSInteger field0;
    NSInteger field1;
    BOOL field2;
} _NSProgressFraction;

typedef struct _NSProgressFractionTuple {
    _NSProgressFraction field0;
    _NSProgressFraction field1;
} _NSProgressFractionTuple;

typedef struct _HDWrappedSource {
} // Error Processing Struct Fields

typedef struct vector<_HDWrappedSource, std::allocator<_HDWrappedSource>> {
} // Error Processing Struct Fields

typedef struct HDActivityCacheActiveSource {
    CGFloat field0;
    NSInteger field1;
    vector<long long, std::allocator<long long>> field2;
} HDActivityCacheActiveSource;

typedef struct vector<HDActivityCacheActiveSource, std::allocator<HDActivityCacheActiveSource>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<long long *, std::allocator<long long>> {
    NSInteger field0;
} __compressed_pair<long long *, std::allocator<long long>>;

typedef struct vector<long long, std::allocator<long long>> {
    NSInteger field0;
    NSInteger field1;
    __compressed_pair<long long *, std::allocator<long long>> field2;
} vector<long long, std::allocator<long long>>;

typedef struct HDActivityCacheStatisticsBuilderWorkoutSample {
} // Error Processing Struct Fields

typedef struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> {
} // Error Processing Struct Fields

typedef struct _HDObjectDeletionInfo {
    BOOL field0;
    NSInteger field1;
    NSInteger field2;
    NSInteger field3;
} _HDObjectDeletionInfo;

typedef struct HDActivityCacheStatisticsBuilderSample {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    NSInteger field3;
} HDActivityCacheStatisticsBuilderSample;

typedef struct vector<HDActivityCacheStatisticsBuilderSample, std::allocator<HDActivityCacheStatisticsBuilderSample>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, bool>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, bool>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<long long, bool>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, bool>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, bool>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<long long, bool>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, bool>>>;

typedef struct unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>> {
    __hash_table<std::__hash_value_type<long long, bool>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, bool>>> __table_;
} unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>>;

typedef struct HDActivityCacheStatisticsBuilderStandHourSample {
} // Error Processing Struct Fields

typedef struct vector<HDActivityCacheStatisticsBuilderStandHourSample, std::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> {
} // Error Processing Struct Fields

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<_HKDataTypeCode, std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::less<_HKDataTypeCode>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<_HKDataTypeCode, std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::less<_HKDataTypeCode>, true>>;

typedef struct __tree<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::__map_value_compare<_HKDataTypeCode, std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::less<_HKDataTypeCode>, true>, std::allocator<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<_HKDataTypeCode, std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::less<_HKDataTypeCode>, true>> __pair3_;
} __tree<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::__map_value_compare<_HKDataTypeCode, std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::less<_HKDataTypeCode>, true>, std::allocator<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>>>;

typedef struct map<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>, std::less<_HKDataTypeCode>, std::allocator<std::pair<const _HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>>> {
    __tree<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::__map_value_compare<_HKDataTypeCode, std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::less<_HKDataTypeCode>, true>, std::allocator<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>>> __tree_;
} map<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>, std::less<_HKDataTypeCode>, std::allocator<std::pair<const _HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>>>;

typedef struct DataStore {
} // Error Processing Struct Fields

typedef struct __compressed_pair<health::DataStore *, std::default_delete<health::DataStore>> {
    DataStore field0;
} __compressed_pair<health::DataStore *, std::default_delete<health::DataStore>>;

typedef struct unique_ptr<health::DataStore, std::default_delete<health::DataStore>> {
    __compressed_pair<health::DataStore *, std::default_delete<health::DataStore>> field0;
} unique_ptr<health::DataStore, std::default_delete<health::DataStore>>;

typedef struct VirtualFilesystem {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<health::VirtualFilesystem> {
    VirtualFilesystem __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<health::VirtualFilesystem>;

typedef struct shared_ptr<health::DataStore> {
} // Error Processing Struct Fields

typedef struct __SecKey {
} // Error Processing Struct Fields

typedef struct AEAContext_impl {
} // Error Processing Struct Fields

typedef struct AAByteStream_impl {
} // Error Processing Struct Fields

typedef struct HistogramBucket {
} // Error Processing Struct Fields

typedef struct vector<HistogramBucket, std::allocator<HistogramBucket>> {
} // Error Processing Struct Fields

typedef struct HistogramState {
    vector<HistogramBucket, std::allocator<HistogramBucket>> _dateBuckets;
    CGFloat _histogramBucketAnchor;
    CGFloat _histogramBucketSize;
    NSInteger _currentStartDateBucket;
} HistogramState;

typedef struct __compressed_pair<std::tuple<double, double, float> **, std::allocator<std::tuple<double, double, float> *>> {
    void __value_;
} __compressed_pair<std::tuple<double, double, float> **, std::allocator<std::tuple<double, double, float> *>>;

typedef struct __split_buffer<std::tuple<double, double, float> *, std::allocator<std::tuple<double, double, float> *>> {
    void __first_;
    void __begin_;
    void __end_;
    __compressed_pair<std::tuple<double, double, float> **, std::allocator<std::tuple<double, double, float> *>> __end_cap_;
} __split_buffer<std::tuple<double, double, float> *, std::allocator<std::tuple<double, double, float> *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::tuple<double, double, float>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::tuple<double, double, float>>>;

typedef struct deque<std::tuple<double, double, float>, std::allocator<std::tuple<double, double, float>>> {
    __split_buffer<std::tuple<double, double, float> *, std::allocator<std::tuple<double, double, float> *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<std::tuple<double, double, float>>> __size_;
} deque<std::tuple<double, double, float>, std::allocator<std::tuple<double, double, float>>>;

typedef struct ObjectIdentifier {
    NSInteger objectType;
    NSUInteger identifier;
} ObjectIdentifier;

typedef struct archive {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
    char * __value_;
} __compressed_pair<unsigned char *, std::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<unsigned char *, std::allocator<unsigned char>> __end_cap_;
} vector<unsigned char, std::allocator<unsigned char>>;

typedef struct _HDStatisticsCollectionCalculatorImplementation {
} // Error Processing Struct Fields

typedef struct __compressed_pair<_HDStatisticsCollectionCalculatorImplementation *, std::default_delete<_HDStatisticsCollectionCalculatorImplementation>> {
    _HDStatisticsCollectionCalculatorImplementation __value_;
} __compressed_pair<_HDStatisticsCollectionCalculatorImplementation *, std::default_delete<_HDStatisticsCollectionCalculatorImplementation>>;

typedef struct unique_ptr<_HDStatisticsCollectionCalculatorImplementation, std::default_delete<_HDStatisticsCollectionCalculatorImplementation>> {
    __compressed_pair<_HDStatisticsCollectionCalculatorImplementation *, std::default_delete<_HDStatisticsCollectionCalculatorImplementation>> __ptr_;
} unique_ptr<_HDStatisticsCollectionCalculatorImplementation, std::default_delete<_HDStatisticsCollectionCalculatorImplementation>>;

typedef struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {
} // Error Processing Struct Fields

typedef struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> {
} // Error Processing Struct Fields

typedef struct HDRawQuantitySample {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    NSInteger field3;
    BOOL field4;
    BOOL field5;
} HDRawQuantitySample;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash, true>>;

typedef struct __hash_table<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash, true>, std::allocator<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash, true>> __p3_;
} __hash_table<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash, true>, std::allocator<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>>>;

typedef struct unordered_map<NSString *, std::deque<HDRawQuantitySample>, HDStringHash, HDStringEqual, std::allocator<std::pair<NSString *const, std::deque<HDRawQuantitySample>>>> {
    __hash_table<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash, true>, std::allocator<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>>> __table_;
} unordered_map<NSString *, std::deque<HDRawQuantitySample>, HDStringHash, HDStringEqual, std::allocator<std::pair<NSString *const, std::deque<HDRawQuantitySample>>>>;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<long, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<long, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<long, void *> *>, std::allocator<std::__hash_node<long, void *>>> {
    __hash_node_base<std::__hash_node<long, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<long, void *> *>, std::allocator<std::__hash_node<long, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<long>>;

typedef struct __compressed_pair<float, std::equal_to<long>> {
    float __value_;
} __compressed_pair<float, std::equal_to<long>>;

typedef struct __hash_table<long, std::hash<long>, std::equal_to<long>, std::allocator<long>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<long, void *> *>, std::allocator<std::__hash_node<long, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<long>> __p2_;
    __compressed_pair<float, std::equal_to<long>> __p3_;
} __hash_table<long, std::hash<long>, std::equal_to<long>, std::allocator<long>>;

typedef struct unordered_set<long, std::hash<long>, std::equal_to<long>, std::allocator<long>> {
    __hash_table<long, std::hash<long>, std::equal_to<long>, std::allocator<long>> __table_;
} unordered_set<long, std::hash<long>, std::equal_to<long>, std::allocator<long>>;

