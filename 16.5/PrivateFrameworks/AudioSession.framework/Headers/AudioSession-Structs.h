typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct AVAudioIOPeriod {
    CGFloat field0;
    CGFloat field1;
    NSUInteger field2;
    float field3;
} AVAudioIOPeriod;

typedef struct AVAudioTimeInterval {
    CGFloat field0;
    CGFloat field1;
    NSUInteger field2;
} AVAudioTimeInterval;

typedef struct SMPTETime {
    short field0;
    short field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    short field5;
    short field6;
    short field7;
    short field8;
} SMPTETime;

typedef struct AudioTimeStamp {
    CGFloat field0;
    NSUInteger field1;
    CGFloat field2;
    NSUInteger field3;
    SMPTETime field4;
    unsigned int field5;
    unsigned int field6;
} AudioTimeStamp;

typedef struct AudioPresentationTimeStamp {
    unsigned int field0;
    unsigned int field1;
    NSUInteger field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
} AudioPresentationTimeStamp;

typedef struct XPCConnection {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<as::client::XPCConnection> {
    XPCConnection field0;
    __shared_weak_count field1;
} shared_ptr<as::client::XPCConnection>;

typedef struct weak_ptr<as::client::XPCConnection> {
    XPCConnection __ptr_;
    __shared_weak_count __cntrl_;
} weak_ptr<as::client::XPCConnection>;

typedef struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> {
    uint8_t __a_value;
    unsigned int field1;
} __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>>;

typedef struct atomic<unsigned int> {
    __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> __a_;
} atomic<unsigned int>;

typedef struct DeviceTimeClient {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct unfair_lock {
    os_unfair_lock_s m_lock;
} unfair_lock;

typedef struct IOControllerImpl {
    id mSession;
    BOOL AVAudioSession;
    weak_ptr<as::client::XPCConnection> mIsDecoupledInput;
    atomic<unsigned int> mXPCConnection;
    DeviceTimeClient mTimingStateSlot;
    synchronized<(anonymous namespace)::ListenerMgr, caulk::mach::unfair_lock, caulk::empty_atomic_interface<(anonymous namespace)::ListenerMgr>> mDeviceTimeClient;
} IOControllerImpl;

typedef struct __compressed_pair<std::pair<long, void (^)(AVAudioIOControllerEvent)> *, std::allocator<std::pair<long, void (^)(AVAudioIOControllerEvent)>>> {
    void __value_;
} __compressed_pair<std::pair<long, void (^)(AVAudioIOControllerEvent)> *, std::allocator<std::pair<long, void (^)(AVAudioIOControllerEvent)>>>;

typedef struct vector<std::pair<long, void (^)(AVAudioIOControllerEvent)>, std::allocator<std::pair<long, void (^)(AVAudioIOControllerEvent)>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<long, void (^)(AVAudioIOControllerEvent)> *, std::allocator<std::pair<long, void (^)(AVAudioIOControllerEvent)>>> __end_cap_;
} vector<std::pair<long, void (^)(AVAudioIOControllerEvent)>, std::allocator<std::pair<long, void (^)(AVAudioIOControllerEvent)>>>;

typedef struct ListenerMgr {
    IOControllerImpl mOuter;
    vector<std::pair<long, void (^)(AVAudioIOControllerEvent)>, std::allocator<std::pair<long, void (^)(AVAudioIOControllerEvent)>>> mListeners;
} ListenerMgr;

typedef struct synchronized<(anonymous namespace)::ListenerMgr, caulk::mach::unfair_lock, caulk::empty_atomic_interface<(anonymous namespace)::ListenerMgr>> {
    unfair_lock mMutex;
    ListenerMgr mObject;
} synchronized<(anonymous namespace)::ListenerMgr, caulk::mach::unfair_lock, caulk::empty_atomic_interface<(anonymous namespace)::ListenerMgr>>;

typedef struct optional<(anonymous namespace)::IOControllerImpl> {
    unk ;
    char __null_state_;
    IOControllerImpl __val_;
    BOOL __engaged_;
} optional<(anonymous namespace)::IOControllerImpl>;

typedef struct PortDescriptionImpl {
    id field0;
    id field1;
    id field2;
    id field3;
    id field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
    BOOL field9;
    NSInteger field10;
    NSUInteger field11;
    id field12;
    id field13;
    id field14;
    id field15;
} PortDescriptionImpl;

typedef struct ? {
    unsigned int val;
} ?;

typedef struct AVAudioSessionNotificationState {
} // Error Processing Struct Fields

typedef struct shared_ptr<AVAudioSessionNotificationState> {
} // Error Processing Struct Fields

typedef struct ConnectionResult {
    int field0;
    unsigned int field1;
} ConnectionResult;

typedef struct DataSourceDescriptionImpl {
    unsigned int field0;
    id field1;
    id field2;
    id field3;
    id field4;
    id field5;
    id field6;
    id field7;
    id field8;
} DataSourceDescriptionImpl;

typedef struct ChannelDescriptionImpl {
    id field0;
    id field1;
    unsigned int field2;
    unsigned int field3;
} ChannelDescriptionImpl;

typedef struct RouteDescriptionImpl {
    id field0;
    id field1;
    id field2;
    NSUInteger field3;
    BOOL field4;
    BOOL field5;
} RouteDescriptionImpl;

