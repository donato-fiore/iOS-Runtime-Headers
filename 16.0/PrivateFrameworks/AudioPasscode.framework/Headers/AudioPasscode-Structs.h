typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct APCDecoderBase {
} // Error Processing Struct Fields

typedef struct __compressed_pair<APCDecoderBase *, std::default_delete<APCDecoderBase>> {
    APCDecoderBase __value_;
} __compressed_pair<APCDecoderBase *, std::default_delete<APCDecoderBase>>;

typedef struct unique_ptr<APCDecoderBase, std::default_delete<APCDecoderBase>> {
    __compressed_pair<APCDecoderBase *, std::default_delete<APCDecoderBase>> __ptr_;
} unique_ptr<APCDecoderBase, std::default_delete<APCDecoderBase>>;

typedef struct APCEncoderBase {
} // Error Processing Struct Fields

typedef struct __compressed_pair<APCEncoderBase *, std::default_delete<APCEncoderBase>> {
    APCEncoderBase __value_;
} __compressed_pair<APCEncoderBase *, std::default_delete<APCEncoderBase>>;

typedef struct unique_ptr<APCEncoderBase, std::default_delete<APCEncoderBase>> {
    __compressed_pair<APCEncoderBase *, std::default_delete<APCEncoderBase>> __ptr_;
} unique_ptr<APCEncoderBase, std::default_delete<APCEncoderBase>>;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct AudioComponentDescription {
    unsigned int componentType;
    unsigned int componentSubType;
    unsigned int componentManufacturer;
    unsigned int componentFlags;
    unsigned int componentFlagsMask;
} AudioComponentDescription;

typedef struct OpaqueAudioComponent {
} // Error Processing Struct Fields

typedef struct OpaqueAudioComponentInstance {
} // Error Processing Struct Fields

typedef struct ? {
    unsigned int field0;
} ?;

typedef struct AURenderEventHeader {
    uint8_t field0;
    CGFloat field1;
    void field2;
    NSInteger field3;
    unsigned char field4;
    unsigned char field5;
} AURenderEventHeader;

typedef struct AUParameterEvent {
    uint8_t field0;
    CGFloat field1;
    void field2;
    NSInteger field3;
    unsigned char field4;
    unsigned char field5;
    unsigned int field6;
    NSUInteger field7;
    float field8;
} AUParameterEvent;

typedef struct AUMIDIEvent {
    uint8_t field0;
    CGFloat field1;
    void field2;
    NSInteger field3;
    unsigned char field4;
    unsigned char field5;
    unsigned short field6;
    unsigned char field7;
    unsigned char field8;
} AUMIDIEvent;

typedef struct MIDIEventPacket {
    NSUInteger field0;
    unsigned int field1;
    unsigned int field2;
} MIDIEventPacket;

typedef struct MIDIEventList {
    int field0;
    unsigned int field1;
    MIDIEventPacket field2;
} MIDIEventList;

typedef struct AUMIDIEventList {
    uint8_t field0;
    CGFloat field1;
    void field2;
    NSInteger field3;
    unsigned char field4;
    unsigned char field5;
    unsigned char field6;
    MIDIEventList field7;
} AUMIDIEventList;

typedef struct type {
    unsigned char field0;
} type;

typedef struct __value_func<NSXPCConnection *(NSUUID *)> {
    type field0;
    void field1;
} __value_func<NSXPCConnection *(NSUUID *)>;

typedef struct function<NSXPCConnection *(NSUUID *)> {
    __value_func<NSXPCConnection *(NSUUID *)> field0;
} function<NSXPCConnection *(NSUUID *)>;

typedef struct CountAndSema {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<caulk::pooled_semaphore_mutex::CountAndSema, std::__cxx_atomic_base_impl<caulk::pooled_semaphore_mutex::CountAndSema>> {
    uint8_t __a_value;
    CountAndSema field1;
} __cxx_atomic_impl<caulk::pooled_semaphore_mutex::CountAndSema, std::__cxx_atomic_base_impl<caulk::pooled_semaphore_mutex::CountAndSema>>;

typedef struct atomic<caulk::pooled_semaphore_mutex::CountAndSema> {
    __cxx_atomic_impl<caulk::pooled_semaphore_mutex::CountAndSema, std::__cxx_atomic_base_impl<caulk::pooled_semaphore_mutex::CountAndSema>> __a_;
} atomic<caulk::pooled_semaphore_mutex::CountAndSema>;

typedef struct pooled_semaphore_mutex {
    atomic<caulk::pooled_semaphore_mutex::CountAndSema> mCountAndSema;
} pooled_semaphore_mutex;

typedef struct Node {
} // Error Processing Struct Fields

typedef struct NodeStack {
    Node mHead;
} NodeStack;

typedef struct TThreadSafeList<RenderObserver> {
    NodeStack mActiveList;
    NodeStack mPendingList;
    NodeStack mFreeList;
} TThreadSafeList<RenderObserver>;

typedef struct RenderObserverList {
    TThreadSafeList<RenderObserver> mObservers;
    BOOL mTouched;
} RenderObserverList;

typedef struct AUv2GetParameterSynchronizer {
    atomic<AUv2GetParameterSynchronizer::SeqNumPair> mSeqNums;
    semaphore mSyncGetParamSema;
} AUv2GetParameterSynchronizer;

typedef struct AURenderEventAllocator {
} // Error Processing Struct Fields

typedef struct AUScheduledParameterRefresher2 {
} // Error Processing Struct Fields

typedef struct AURenderEventNode {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<AURenderEventNode *, std::__cxx_atomic_base_impl<AURenderEventNode *>> {
    uint8_t __a_value;
    AURenderEventNode field1;
} __cxx_atomic_impl<AURenderEventNode *, std::__cxx_atomic_base_impl<AURenderEventNode *>>;

typedef struct atomic<AURenderEventNode *> {
    __cxx_atomic_impl<AURenderEventNode *, std::__cxx_atomic_base_impl<AURenderEventNode *>> __a_;
} atomic<AURenderEventNode *>;

typedef struct lf_mpsc_queue<AURenderEventNode, caulk::concurrent::intrusive_single_link_member<AURenderEventNode, &AURenderEventNode::next>> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct Snapshot {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<PreviousRenderTime::Snapshot, std::__cxx_atomic_base_impl<PreviousRenderTime::Snapshot>> {
    uint8_t __a_value;
    Snapshot field1;
} __cxx_atomic_impl<PreviousRenderTime::Snapshot, std::__cxx_atomic_base_impl<PreviousRenderTime::Snapshot>>;

typedef struct atomic<PreviousRenderTime::Snapshot> {
    __cxx_atomic_impl<PreviousRenderTime::Snapshot, std::__cxx_atomic_base_impl<PreviousRenderTime::Snapshot>> __a_;
} atomic<PreviousRenderTime::Snapshot>;

typedef struct PreviousRenderTime {
    CGFloat mSampleRate;
    atomic<PreviousRenderTime::Snapshot> mLastRender;
} PreviousRenderTime;

typedef struct AUEventSchedule {
    AUv2GetParameterSynchronizer mAUv2GetParameterSynchronizer;
    AURenderEventAllocator mAllocator;
    AUScheduledParameterRefresher2 mScheduledParameterRefresher;
    lf_mpsc_queue<AURenderEventNode, caulk::concurrent::intrusive_single_link_member<AURenderEventNode, &AURenderEventNode::next>> mAddedEventQueue;
    atomic<bool> mHavePendingSetParameter;
    uint8_t mScheduleHead;
    CGFloat mOwningAU;
    void mRenderBlock;
    void mPreviousRenderTime;
    id field9;
    unk field10;
    PreviousRenderTime field11;
} AUEventSchedule;

typedef struct SeqNumPair {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<AUv2GetParameterSynchronizer::SeqNumPair, std::__cxx_atomic_base_impl<AUv2GetParameterSynchronizer::SeqNumPair>> {
    uint8_t __a_value;
    SeqNumPair field1;
} __cxx_atomic_impl<AUv2GetParameterSynchronizer::SeqNumPair, std::__cxx_atomic_base_impl<AUv2GetParameterSynchronizer::SeqNumPair>>;

typedef struct atomic<AUv2GetParameterSynchronizer::SeqNumPair> {
    __cxx_atomic_impl<AUv2GetParameterSynchronizer::SeqNumPair, std::__cxx_atomic_base_impl<AUv2GetParameterSynchronizer::SeqNumPair>> __a_;
} atomic<AUv2GetParameterSynchronizer::SeqNumPair>;

typedef struct semaphore {
    unsigned int mMachSem;
    BOOL mOwned;
} semaphore;

typedef struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
    uint8_t __a_value;
    int field1;
} __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>>;

typedef struct atomic<int> {
    __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> __a_;
} atomic<int>;

typedef struct RenderContextChangeGenerator {
    void mLastWorkgroup;
    id mObserver;
    unk field2;
} RenderContextChangeGenerator;

typedef struct optional<RenderContextChangeGenerator> {
    unk ;
    char __null_state_;
    RenderContextChangeGenerator __val_;
    BOOL __engaged_;
} optional<RenderContextChangeGenerator>;

typedef struct RealtimeState {
    pooled_semaphore_mutex mMultipleRenderMutex;
    pooled_semaphore_mutex mResetVsRenderMutex;
    RenderObserverList renderObserverList;
    AUEventSchedule eventSchedule;
    AUv2GetParameterSynchronizer auv2GetParameterSynchronizer;
    optional<RenderContextChangeGenerator> contextChangeGenerator;
    int renderBlockType;
    int cachedMIDIProtocol;
} RealtimeState;

typedef struct messenger {
} // Error Processing Struct Fields

typedef struct __compressed_pair<caulk::concurrent::messenger *, std::default_delete<caulk::concurrent::messenger>> {
    messenger __value_;
} __compressed_pair<caulk::concurrent::messenger *, std::default_delete<caulk::concurrent::messenger>>;

typedef struct unique_ptr<caulk::concurrent::messenger, std::default_delete<caulk::concurrent::messenger>> {
    __compressed_pair<caulk::concurrent::messenger *, std::default_delete<caulk::concurrent::messenger>> __ptr_;
} unique_ptr<caulk::concurrent::messenger, std::default_delete<caulk::concurrent::messenger>>;

typedef struct AudioBufferList {
} // Error Processing Struct Fields

typedef struct BufferedInputBus {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
    char * __value_;
} __compressed_pair<unsigned char *, std::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<unsigned char *, std::allocator<unsigned char>> __end_cap_;
} vector<unsigned char, std::allocator<unsigned char>>;

typedef struct DecodedDataMessage {
} // Error Processing Struct Fields

typedef struct __compressed_pair<DecodedDataMessage *, std::default_delete<DecodedDataMessage>> {
    DecodedDataMessage __value_;
} __compressed_pair<DecodedDataMessage *, std::default_delete<DecodedDataMessage>>;

typedef struct unique_ptr<DecodedDataMessage, std::default_delete<DecodedDataMessage>> {
    __compressed_pair<DecodedDataMessage *, std::default_delete<DecodedDataMessage>> __ptr_;
} unique_ptr<DecodedDataMessage, std::default_delete<DecodedDataMessage>>;

typedef struct array<std::unique_ptr<DecodedDataMessage>, 10UL> {
    unique_ptr<DecodedDataMessage, std::default_delete<DecodedDataMessage>> __elems_;
} array<std::unique_ptr<DecodedDataMessage>, 10UL>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::any>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::any>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::any>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::any>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, std::any>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::any>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, std::any>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::any>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::any>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, std::any>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::any>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, std::any>>>;

typedef struct map<unsigned int, std::any, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::any>>> {
    __tree<std::__value_type<unsigned int, std::any>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::any>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, std::any>>> __tree_;
} map<unsigned int, std::any, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::any>>>;

typedef struct AudioCapturerIfc {
} // Error Processing Struct Fields

typedef struct __compressed_pair<AudioCapturerIfc *, std::default_delete<AudioCapturerIfc>> {
    AudioCapturerIfc __value_;
} __compressed_pair<AudioCapturerIfc *, std::default_delete<AudioCapturerIfc>>;

typedef struct unique_ptr<AudioCapturerIfc, std::default_delete<AudioCapturerIfc>> {
    __compressed_pair<AudioCapturerIfc *, std::default_delete<AudioCapturerIfc>> __ptr_;
} unique_ptr<AudioCapturerIfc, std::default_delete<AudioCapturerIfc>>;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct EOFReachedMessage {
} // Error Processing Struct Fields

typedef struct __compressed_pair<EOFReachedMessage *, std::default_delete<EOFReachedMessage>> {
    EOFReachedMessage __value_;
} __compressed_pair<EOFReachedMessage *, std::default_delete<EOFReachedMessage>>;

typedef struct unique_ptr<EOFReachedMessage, std::default_delete<EOFReachedMessage>> {
    __compressed_pair<EOFReachedMessage *, std::default_delete<EOFReachedMessage>> __ptr_;
} unique_ptr<EOFReachedMessage, std::default_delete<EOFReachedMessage>>;

typedef struct OpaqueExtAudioFile {
} // Error Processing Struct Fields

typedef struct __compressed_pair<OpaqueExtAudioFile *, applesauce::raii::detail::opaque_deletion_functor<OpaqueExtAudioFile *, &ExtAudioFileDispose>> {
    OpaqueExtAudioFile __value_;
} __compressed_pair<OpaqueExtAudioFile *, applesauce::raii::detail::opaque_deletion_functor<OpaqueExtAudioFile *, &ExtAudioFileDispose>>;

typedef struct unique_ptr<OpaqueExtAudioFile, applesauce::raii::detail::opaque_deletion_functor<OpaqueExtAudioFile *, &ExtAudioFileDispose>> {
    __compressed_pair<OpaqueExtAudioFile *, applesauce::raii::detail::opaque_deletion_functor<OpaqueExtAudioFile *, &ExtAudioFileDispose>> __ptr_;
} unique_ptr<OpaqueExtAudioFile, applesauce::raii::detail::opaque_deletion_functor<OpaqueExtAudioFile *, &ExtAudioFileDispose>>;

typedef struct __compressed_pair<char *, std::allocator<char>> {
    char * __value_;
} __compressed_pair<char *, std::allocator<char>>;

typedef struct vector<char, std::allocator<char>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<char *, std::allocator<char>> __end_cap_;
} vector<char, std::allocator<char>>;

typedef struct BufferList {
    vector<char, std::allocator<char>> mStorage;
} BufferList;

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

