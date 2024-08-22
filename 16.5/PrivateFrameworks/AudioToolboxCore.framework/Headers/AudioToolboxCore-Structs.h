typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ObjCImage {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct InterAppAudioAppInfo {
} // Error Processing Struct Fields

typedef struct AudioComponentDescription {
    unsigned int componentType;
    unsigned int componentSubType;
    unsigned int componentManufacturer;
    unsigned int componentFlags;
    unsigned int componentFlagsMask;
} AudioComponentDescription;

typedef struct type {
    unsigned char __lx;
} type;

typedef struct __value_func<void ()> {
    type __buf_;
    void __f_;
} __value_func<void ()>;

typedef struct function<void ()> {
    __value_func<void ()> __f_;
} function<void ()>;

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

typedef struct AUOOPSharedMemory {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_t {
} // Error Processing Struct Fields

typedef struct __thread_id {
    _opaque_pthread_t __id_;
} __thread_id;

typedef struct optional<std::__thread_id> {
    unk ;
    char __null_state_;
    __thread_id __val_;
    BOOL __engaged_;
} optional<std::__thread_id>;

typedef struct AUOOPRenderingServerUser {
    unk _vptr$CAPrint;
    unsigned int mSerialNum;
    id mAUAudioUnit;
    id AUAudioUnit;
    unk mRetainedRenderBlock;
    id mRenderBlock;
    unk mCanProcessInPlace;
    BOOL mIsV2AudioUnit;
    BOOL mMIDIOutBaseSampleTime;
    NSInteger mEventSchedule;
    AUEventSchedule mSharedBuffers;
    AUOOPSharedMemory mRenderThreadId;
    optional<std::__thread_id> field12;
} AUOOPRenderingServerUser;

typedef struct optional<AUOOPRenderingServerUser> {
    unk ;
    char __null_state_;
    AUOOPRenderingServerUser __val_;
    BOOL __engaged_;
} optional<AUOOPRenderingServerUser>;

typedef struct reply_watchdog_factory {
    BOOL mDebugging;
    int mDefaultTimeoutMS;
    function<void ()> mTimeoutHandler;
} reply_watchdog_factory;

typedef struct WorkgroupMirror {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<auoop::WorkgroupMirror> {
    WorkgroupMirror __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<auoop::WorkgroupMirror>;

typedef struct Record {
} // Error Processing Struct Fields

typedef struct vector<KVOAggregator::Record, std::allocator<KVOAggregator::Record>> {
} // Error Processing Struct Fields

typedef struct KVOAggregator {
    vector<KVOAggregator::Record, std::allocator<KVOAggregator::Record>> mRecords;
} KVOAggregator;

typedef struct __compressed_pair<AURemoteMessageChannel *__strong *, std::allocator<AURemoteMessageChannel *>> {
    id __value_;
} __compressed_pair<AURemoteMessageChannel *__strong *, std::allocator<AURemoteMessageChannel *>>;

typedef struct vector<AURemoteMessageChannel *, std::allocator<AURemoteMessageChannel *>> {
    id __begin_;
    id __end_;
    __compressed_pair<AURemoteMessageChannel *__strong *, std::allocator<AURemoteMessageChannel *>> __end_cap_;
} vector<AURemoteMessageChannel *, std::allocator<AURemoteMessageChannel *>>;

typedef struct ? {
    unsigned int field0;
} ?;

typedef struct OpaqueRemoteAudioUnit {
} // Error Processing Struct Fields

typedef struct OpaqueAUPB {
} // Error Processing Struct Fields

typedef struct AUPBMethods {
    unsigned int field0;
    unk field1;
    unk field2;
    unk field3;
    unk field4;
    unk field5;
    unk field6;
    unk field7;
} AUPBMethods;

typedef struct AUProcessingBlock {
    AUPBMethods field0;
    void field1;
} AUProcessingBlock;

typedef struct CAMutex {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CADeprecated::CAMutex *, std::default_delete<CADeprecated::CAMutex>> {
    CAMutex __value_;
} __compressed_pair<CADeprecated::CAMutex *, std::default_delete<CADeprecated::CAMutex>>;

typedef struct unique_ptr<CADeprecated::CAMutex, std::default_delete<CADeprecated::CAMutex>> {
    __compressed_pair<CADeprecated::CAMutex *, std::default_delete<CADeprecated::CAMutex>> __ptr_;
} unique_ptr<CADeprecated::CAMutex, std::default_delete<CADeprecated::CAMutex>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, RemoteAUHandleInfo>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, RemoteAUHandleInfo>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, RemoteAUHandleInfo>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, RemoteAUHandleInfo>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, RemoteAUHandleInfo>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, RemoteAUHandleInfo>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, RemoteAUHandleInfo>>>;

typedef struct map<unsigned int, RemoteAUHandleInfo, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, RemoteAUHandleInfo>>> {
    __tree<std::__value_type<unsigned int, RemoteAUHandleInfo>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, RemoteAUHandleInfo>>> __tree_;
} map<unsigned int, RemoteAUHandleInfo, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, RemoteAUHandleInfo>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, AUProcessingBlock>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, AUProcessingBlock>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, AUProcessingBlock>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, AUProcessingBlock>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, AUProcessingBlock>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, AUProcessingBlock>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, AUProcessingBlock>>>;

typedef struct map<unsigned int, AUProcessingBlock, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, AUProcessingBlock>>> {
    __tree<std::__value_type<unsigned int, AUProcessingBlock>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, AUProcessingBlock>>> __tree_;
} map<unsigned int, AUProcessingBlock, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, AUProcessingBlock>>>;

typedef struct TestAUProcessingBlock {
} // Error Processing Struct Fields

typedef struct __compressed_pair<TestAUProcessingBlock *, std::default_delete<TestAUProcessingBlock>> {
    TestAUProcessingBlock __value_;
} __compressed_pair<TestAUProcessingBlock *, std::default_delete<TestAUProcessingBlock>>;

typedef struct unique_ptr<TestAUProcessingBlock, std::default_delete<TestAUProcessingBlock>> {
    __compressed_pair<TestAUProcessingBlock *, std::default_delete<TestAUProcessingBlock>> __ptr_;
} unique_ptr<TestAUProcessingBlock, std::default_delete<TestAUProcessingBlock>>;

typedef struct BusPropertyObserver {
} // Error Processing Struct Fields

typedef struct vector<BusPropertyObserver, std::allocator<BusPropertyObserver>> {
} // Error Processing Struct Fields

typedef struct OpaqueAudioComponent {
} // Error Processing Struct Fields

typedef struct OpaqueAudioComponentInstance {
} // Error Processing Struct Fields

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

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct recursive_mutex {
    _opaque_pthread_mutex_t __m_;
} recursive_mutex;

typedef struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
} mach_timebase_info;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct AUProcAndUserData {
} // Error Processing Struct Fields

typedef struct __compressed_pair<AUProcAndUserData *, std::default_delete<AUProcAndUserData>> {
    AUProcAndUserData __value_;
} __compressed_pair<AUProcAndUserData *, std::default_delete<AUProcAndUserData>>;

typedef struct unique_ptr<AUProcAndUserData, std::default_delete<AUProcAndUserData>> {
    __compressed_pair<AUProcAndUserData *, std::default_delete<AUProcAndUserData>> __ptr_;
} unique_ptr<AUProcAndUserData, std::default_delete<AUProcAndUserData>>;

typedef struct AUAudioUnit_XPC_PropListener {
} // Error Processing Struct Fields

typedef struct vector<AUAudioUnit_XPC_PropListener, std::allocator<AUAudioUnit_XPC_PropListener>> {
} // Error Processing Struct Fields

typedef struct shared_ptr<caulk::synchronized<auoop::RenderPipePool, std::recursive_mutex>> {
} // Error Processing Struct Fields

typedef struct PipeSubPool {
} // Error Processing Struct Fields

typedef struct AUOOPRenderClientUser {
    id au;
    id AUAudioUnit_XPC;
    id xpcConnection;
    unk NSXPCConnection;
    id musicalContextBlock;
    unk transportStateBlock;
    id MIDIOutputEventBlock;
    unk MIDIOutputEventListBlock;
    id serviceProcessAUInstanceToken;
    unk isOffline;
    unsigned int isMIDIProcessor;
    BOOL field11;
    BOOL field12;
} AUOOPRenderClientUser;

typedef struct RenderPipeUser {
    PipeSubPool mPipeSubPool;
    AUOOPRenderClientUser mRenderClientUser;
    atomic<bool> mInvalidated;
} RenderPipeUser;

typedef struct optional<auoop::RenderPipeUser> {
    unk ;
    char __null_state_;
    RenderPipeUser __val_;
    BOOL __engaged_;
} optional<auoop::RenderPipeUser>;

typedef struct APComponent {
} // Error Processing Struct Fields

typedef struct shared_ptr<APComponent> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>>;

typedef struct AudioComponentVector {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> __end_cap_;
    BOOL mSorted;
} AudioComponentVector;

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct CASerializer {
    __CFData field0;
} CASerializer;

typedef struct CADeserializer {
} // Error Processing Struct Fields

typedef struct AURemoteParameterObserver {
} // Error Processing Struct Fields

typedef struct AddressToParameter {
} // Error Processing Struct Fields

typedef struct vector<AddressToParameter, std::allocator<AddressToParameter>> {
} // Error Processing Struct Fields

typedef struct AUObserverController {
} // Error Processing Struct Fields

typedef struct shared_ptr<AUObserverController> {
} // Error Processing Struct Fields

typedef struct AUParameterObserverExtendedToken {
    NSUInteger field0;
} AUParameterObserverExtendedToken;

typedef struct OpaqueAUPBServer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<NSObject<OS_dispatch_semaphore> **, std::allocator<NSObject<OS_dispatch_semaphore> *>> {
    id __value_;
} __compressed_pair<NSObject<OS_dispatch_semaphore> **, std::allocator<NSObject<OS_dispatch_semaphore> *>>;

typedef struct vector<NSObject<OS_dispatch_semaphore> *, std::allocator<NSObject<OS_dispatch_semaphore> *>> {
    id __begin_;
    id __end_;
    __compressed_pair<NSObject<OS_dispatch_semaphore> **, std::allocator<NSObject<OS_dispatch_semaphore> *>> __end_cap_;
} vector<NSObject<OS_dispatch_semaphore> *, std::allocator<NSObject<OS_dispatch_semaphore> *>>;

typedef struct PropertyListener {
} // Error Processing Struct Fields

typedef struct vector<PropertyListener, std::allocator<PropertyListener>> {
} // Error Processing Struct Fields

typedef struct NewServerListener {
} // Error Processing Struct Fields

typedef struct vector<NewServerListener, std::allocator<NewServerListener>> {
} // Error Processing Struct Fields

typedef struct AUListenerBase {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> {
    uint8_t __a_value;
    unsigned int field1;
} __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>>;

typedef struct atomic<unsigned int> {
    __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> __a_;
} atomic<unsigned int>;

typedef struct AUAudioUnitV2Bridge_Renderer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<AUAudioUnitV2Bridge_Renderer *, std::default_delete<AUAudioUnitV2Bridge_Renderer>> {
    AUAudioUnitV2Bridge_Renderer __value_;
} __compressed_pair<AUAudioUnitV2Bridge_Renderer *, std::default_delete<AUAudioUnitV2Bridge_Renderer>>;

typedef struct unique_ptr<AUAudioUnitV2Bridge_Renderer, std::default_delete<AUAudioUnitV2Bridge_Renderer>> {
    __compressed_pair<AUAudioUnitV2Bridge_Renderer *, std::default_delete<AUAudioUnitV2Bridge_Renderer>> __ptr_;
} unique_ptr<AUAudioUnitV2Bridge_Renderer, std::default_delete<AUAudioUnitV2Bridge_Renderer>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::hash<long>, std::equal_to<long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::hash<long>, std::equal_to<long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::equal_to<long>, std::hash<long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::equal_to<long>, std::hash<long>, true>>;

typedef struct __hash_table<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::hash<long>, std::equal_to<long>, true>, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::equal_to<long>, std::hash<long>, true>, std::allocator<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::hash<long>, std::equal_to<long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::equal_to<long>, std::hash<long>, true>> __p3_;
} __hash_table<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::hash<long>, std::equal_to<long>, true>, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::equal_to<long>, std::hash<long>, true>, std::allocator<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>>;

typedef struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> {
    __hash_table<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::hash<long>, std::equal_to<long>, true>, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::equal_to<long>, std::hash<long>, true>, std::allocator<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> __table_;
} unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>>;

typedef struct AudioChannelDescription {
    unsigned int field0;
    unsigned int field1;
    float field2;
} AudioChannelDescription;

typedef struct AudioChannelLayout {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    AudioChannelDescription field3;
} AudioChannelLayout;

typedef struct AudioChannelGroupSemantics {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    AudioChannelLayout field3;
} AudioChannelGroupSemantics;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct AVHapticPlayerFixedParameter {
    NSUInteger type;
    float value;
} AVHapticPlayerFixedParameter;

typedef struct __FSEventStream {
} // Error Processing Struct Fields

typedef struct __value_func<void (AudioComponentVector &, AudioComponentVector &)> {
    type __buf_;
    void __f_;
} __value_func<void (AudioComponentVector &, AudioComponentVector &)>;

typedef struct function<void (AudioComponentVector &, AudioComponentVector &)> {
    __value_func<void (AudioComponentVector &, AudioComponentVector &)> __f_;
} function<void (AudioComponentVector &, AudioComponentVector &)>;

typedef struct ConnectionInfo {
    id mConnection;
    int NSXPCConnection;
    BOOL mExtUsePermission;
} ConnectionInfo;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

