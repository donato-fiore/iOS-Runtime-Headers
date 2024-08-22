typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct AudioRingBuffer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<AudioRingBuffer *, std::default_delete<AudioRingBuffer>> {
    AudioRingBuffer __value_;
} __compressed_pair<AudioRingBuffer *, std::default_delete<AudioRingBuffer>>;

typedef struct unique_ptr<AudioRingBuffer, std::default_delete<AudioRingBuffer>> {
    __compressed_pair<AudioRingBuffer *, std::default_delete<AudioRingBuffer>> __ptr_;
} unique_ptr<AudioRingBuffer, std::default_delete<AudioRingBuffer>>;

typedef struct AudioObjectPropertyAddress {
    unsigned int mSelector;
    unsigned int mScope;
    unsigned int mElement;
} AudioObjectPropertyAddress;

typedef struct Graph {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<DSPGraph::Graph> {
    Graph __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<DSPGraph::Graph>;

typedef struct ASDDSPStreamHelper {
} // Error Processing Struct Fields

typedef struct __compressed_pair<ASDDSPStreamHelper *, std::default_delete<ASDDSPStreamHelper>> {
    ASDDSPStreamHelper __value_;
} __compressed_pair<ASDDSPStreamHelper *, std::default_delete<ASDDSPStreamHelper>>;

typedef struct unique_ptr<ASDDSPStreamHelper, std::default_delete<ASDDSPStreamHelper>> {
    __compressed_pair<ASDDSPStreamHelper *, std::default_delete<ASDDSPStreamHelper>> __ptr_;
} unique_ptr<ASDDSPStreamHelper, std::default_delete<ASDDSPStreamHelper>>;

typedef struct __list_node_base<ASDDSPGraphHelper, void *> {
    void __prev_;
    void __next_;
} __list_node_base<ASDDSPGraphHelper, void *>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__list_node<ASDDSPGraphHelper, void *>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__list_node<ASDDSPGraphHelper, void *>>>;

typedef struct list<ASDDSPGraphHelper, std::allocator<ASDDSPGraphHelper>> {
    __list_node_base<ASDDSPGraphHelper, void *> __end_;
    __compressed_pair<unsigned long, std::allocator<std::__list_node<ASDDSPGraphHelper, void *>>> __size_alloc_;
} list<ASDDSPGraphHelper, std::allocator<ASDDSPGraphHelper>>;

typedef struct __compressed_pair<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> *, std::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>> {
    void __value_;
} __compressed_pair<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> *, std::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>>;

typedef struct unique_ptr<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>, std::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>> {
    __compressed_pair<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> *, std::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>> __ptr_;
} unique_ptr<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>, std::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>>;

typedef struct SMPTETime {
    short mSubframes;
    short mSubframeDivisor;
    unsigned int mCounter;
    unsigned int mType;
    unsigned int mFlags;
    short mHours;
    short mMinutes;
    short mSeconds;
    short mFrames;
} SMPTETime;

typedef struct AudioTimeStamp {
    CGFloat mSampleTime;
    NSUInteger mHostTime;
    CGFloat mRateScalar;
    NSUInteger mWordClockTime;
    SMPTETime mSMPTETime;
    unsigned int mFlags;
    unsigned int mReserved;
} AudioTimeStamp;

typedef struct AudioServerPlugInIOCycleInfo {
    NSUInteger mIOCycleCounter;
    unsigned int mNominalIOBufferFrameSize;
    AudioTimeStamp mCurrentTime;
    AudioTimeStamp mInputTime;
    AudioTimeStamp mOutputTime;
    unk ;
    CGFloat mMainHostTicksPerFrame;
    CGFloat mMasterHostTicksPerFrame;
    CGFloat mDeviceHostTicksPerFrame;
} AudioServerPlugInIOCycleInfo;

typedef struct AudioServerPlugInDriverInterface {
    void field0;
    unk field1;
    unk field2;
    unk field3;
    unk field4;
    unk field5;
    unk field6;
    unk field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    unk field12;
    unk field13;
    unk field14;
    unk field15;
    unk field16;
    unk field17;
    unk field18;
    unk field19;
    unk field20;
    unk field21;
    unk field22;
} AudioServerPlugInDriverInterface;

typedef struct AudioServerPlugInHostInterface {
    unk field0;
    unk field1;
    unk field2;
    unk field3;
    unk field4;
} AudioServerPlugInHostInterface;

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct ASDSRCStreamHelper {
} // Error Processing Struct Fields

typedef struct __compressed_pair<ASDSRCStreamHelper *, std::default_delete<ASDSRCStreamHelper>> {
    ASDSRCStreamHelper __value_;
} __compressed_pair<ASDSRCStreamHelper *, std::default_delete<ASDSRCStreamHelper>>;

typedef struct unique_ptr<ASDSRCStreamHelper, std::default_delete<ASDSRCStreamHelper>> {
    __compressed_pair<ASDSRCStreamHelper *, std::default_delete<ASDSRCStreamHelper>> __ptr_;
} unique_ptr<ASDSRCStreamHelper, std::default_delete<ASDSRCStreamHelper>>;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct AudioUnitParameterInfo {
} // Error Processing Struct Fields

typedef struct AudioServerPlugInClientInfo {
} // Error Processing Struct Fields

typedef struct AudioChannelDescription {
    unsigned int field0;
    unsigned int field1;
    float field2;
} AudioChannelDescription;

typedef struct ? {
    unsigned char valid;
    CGFloat sampleTime;
    NSUInteger hostTime;
    NSUInteger seed;
} ?;

typedef struct optional<AudioCapturerOptions> {
    unk field0;
    char field1;
    NSUInteger field2;
    BOOL field3;
} optional<AudioCapturerOptions>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> field0;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> {
    void field0;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> field1;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> field0;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> {
    void field0;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> field0;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float field0;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::string>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> field0;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>> field1;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>> field2;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>> field3;
} __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::string>>>;

typedef struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> {
    __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::string>>> field0;
} unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>>;

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void field0;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void field0;
    void field1;
    __compressed_pair<std::string *, std::allocator<std::string>> field2;
} vector<std::string, std::allocator<std::string>>;

typedef struct Interpreter {
} // Error Processing Struct Fields

typedef struct __compressed_pair<DSPGraph::Interpreter *, std::default_delete<DSPGraph::Interpreter>> {
    Interpreter __value_;
} __compressed_pair<DSPGraph::Interpreter *, std::default_delete<DSPGraph::Interpreter>>;

typedef struct unique_ptr<DSPGraph::Interpreter, std::default_delete<DSPGraph::Interpreter>> {
    __compressed_pair<DSPGraph::Interpreter *, std::default_delete<DSPGraph::Interpreter>> __ptr_;
} unique_ptr<DSPGraph::Interpreter, std::default_delete<DSPGraph::Interpreter>>;

typedef struct ASDBufferList {
} // Error Processing Struct Fields

typedef struct __compressed_pair<ASDBufferList *, std::default_delete<ASDBufferList>> {
    ASDBufferList __value_;
} __compressed_pair<ASDBufferList *, std::default_delete<ASDBufferList>>;

typedef struct unique_ptr<ASDBufferList, std::default_delete<ASDBufferList>> {
    __compressed_pair<ASDBufferList *, std::default_delete<ASDBufferList>> __ptr_;
} unique_ptr<ASDBufferList, std::default_delete<ASDBufferList>>;

typedef struct _ASDSliderRange {
    unsigned int mMinimum;
    unsigned int mMaximum;
} _ASDSliderRange;

typedef struct AudioStreamBasicDescription {
    CGFloat field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
} AudioStreamBasicDescription;

typedef struct AudioValueRange {
    CGFloat field0;
    CGFloat field1;
} AudioValueRange;

typedef struct AudioStreamRangedDescription {
    AudioStreamBasicDescription field0;
    AudioValueRange field1;
} AudioStreamRangedDescription;

