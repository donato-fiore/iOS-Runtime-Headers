typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>> {
    void __value_;
} __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>>;

typedef struct unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> {
    __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>> __ptr_;
} unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>>;

typedef struct World {
} // Error Processing Struct Fields

typedef struct ? {
    unsigned int field0;
} ?;

typedef struct ProcessToken {
    unsigned int mValue;
} ProcessToken;

typedef struct __long {
    char * __data_;
    NSUInteger __size_;
    BOOL __cap_;
    BOOL __is_long_;
} __long;

typedef struct __short {
    char __data_;
    unsigned char __padding_;
    BOOL __size_;
    BOOL __is_long_;
} __short;

typedef struct __raw {
    NSUInteger __words;
} __raw;

typedef struct __rep {
    unk ;
    __long __l;
    __short __s;
    __raw __r;
} __rep;

typedef struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
    __rep __value_;
} __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> __r_;
} basic_string<char, std::char_traits<char>, std::allocator<char>>;

typedef struct ProcessInfo {
    ProcessToken token;
    id xpcConnection;
    id NSXPCConnection;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mClientRelay;
} ProcessInfo;

typedef struct __tuple_impl<std::__tuple_indices<0, 1>, NSError *, NSDictionary *> {
    id field0;
    id field1;
} __tuple_impl<std::__tuple_indices<0, 1>, NSError *, NSDictionary *>;

typedef struct tuple<NSError *, NSDictionary *> {
    __tuple_impl<std::__tuple_indices<0, 1>, NSError *, NSDictionary *> field0;
} tuple<NSError *, NSDictionary *>;

typedef struct duration<long long, std::ratio<1, 1000000>> {
    NSInteger __rep_;
} duration<long long, std::ratio<1, 1000000>>;

typedef struct time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>> {
    duration<long long, std::ratio<1, 1000000>> __d_;
} time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>>;

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

typedef struct reply_watchdog_factory {
    BOOL mDebugging;
    int mDefaultTimeoutMS;
    function<void ()> mTimeoutHandler;
} reply_watchdog_factory;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>>;

typedef struct __tree<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>, std::less<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>, std::allocator<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>> __pair3_;
} __tree<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>, std::less<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>, std::allocator<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>>;

typedef struct set<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>, std::less<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>, std::allocator<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>> {
    __tree<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>, std::less<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>, std::allocator<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>> __tree_;
} set<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>, std::less<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>, std::allocator<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>>;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct unfair_lock {
    os_unfair_lock_s m_lock;
} unfair_lock;

typedef struct __compressed_pair<as::server::DeferredMessageState::EventType *, std::allocator<as::server::DeferredMessageState::EventType>> {
    int __value_;
} __compressed_pair<as::server::DeferredMessageState::EventType *, std::allocator<as::server::DeferredMessageState::EventType>>;

typedef struct vector<as::server::DeferredMessageState::EventType, std::allocator<as::server::DeferredMessageState::EventType>> {
    int __begin_;
    int __end_;
    __compressed_pair<as::server::DeferredMessageState::EventType *, std::allocator<as::server::DeferredMessageState::EventType>> __end_cap_;
} vector<as::server::DeferredMessageState::EventType, std::allocator<as::server::DeferredMessageState::EventType>>;

typedef struct __compressed_pair<std::unique_ptr<as::server::SessionUpdateSummary> *, std::allocator<std::unique_ptr<as::server::SessionUpdateSummary>>> {
    void __value_;
} __compressed_pair<std::unique_ptr<as::server::SessionUpdateSummary> *, std::allocator<std::unique_ptr<as::server::SessionUpdateSummary>>>;

typedef struct vector<std::unique_ptr<as::server::SessionUpdateSummary>, std::allocator<std::unique_ptr<as::server::SessionUpdateSummary>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::unique_ptr<as::server::SessionUpdateSummary> *, std::allocator<std::unique_ptr<as::server::SessionUpdateSummary>>> __end_cap_;
} vector<std::unique_ptr<as::server::SessionUpdateSummary>, std::allocator<std::unique_ptr<as::server::SessionUpdateSummary>>>;

typedef struct ChangedObject {
} // Error Processing Struct Fields

typedef struct __compressed_pair<as::server::ChangedObject *, std::default_delete<as::server::ChangedObject>> {
    ChangedObject __value_;
} __compressed_pair<as::server::ChangedObject *, std::default_delete<as::server::ChangedObject>>;

typedef struct unique_ptr<as::server::ChangedObject, std::default_delete<as::server::ChangedObject>> {
    __compressed_pair<as::server::ChangedObject *, std::default_delete<as::server::ChangedObject>> __ptr_;
} unique_ptr<as::server::ChangedObject, std::default_delete<as::server::ChangedObject>>;

typedef struct ConfigChangeSummary {
    unk _vptr$Base;
    vector<std::unique_ptr<as::server::SessionUpdateSummary>, std::allocator<std::unique_ptr<as::server::SessionUpdateSummary>>> _sessionChanges;
    unique_ptr<as::server::ChangedObject, std::default_delete<as::server::ChangedObject>> _hardwareSystemChange;
} ConfigChangeSummary;

typedef struct optional<as::server::ConfigChangeSummary> {
    unk ;
    char __null_state_;
    ConfigChangeSummary __val_;
    BOOL __engaged_;
} optional<as::server::ConfigChangeSummary>;

typedef struct RouteIdentifier {
} // Error Processing Struct Fields

typedef struct vector<as::RouteIdentifier, std::allocator<as::RouteIdentifier>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> {
    unsigned int __value_;
} __compressed_pair<unsigned int *, std::allocator<unsigned int>>;

typedef struct vector<unsigned int, std::allocator<unsigned int>> {
    unsigned int __begin_;
    unsigned int __end_;
    __compressed_pair<unsigned int *, std::allocator<unsigned int>> __end_cap_;
} vector<unsigned int, std::allocator<unsigned int>>;

typedef struct __compressed_pair<std::pair<unsigned int, NSDictionary *> *, std::allocator<std::pair<unsigned int, NSDictionary *>>> {
    void __value_;
} __compressed_pair<std::pair<unsigned int, NSDictionary *> *, std::allocator<std::pair<unsigned int, NSDictionary *>>>;

typedef struct vector<std::pair<unsigned int, NSDictionary *>, std::allocator<std::pair<unsigned int, NSDictionary *>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<unsigned int, NSDictionary *> *, std::allocator<std::pair<unsigned int, NSDictionary *>>> __end_cap_;
} vector<std::pair<unsigned int, NSDictionary *>, std::allocator<std::pair<unsigned int, NSDictionary *>>>;

typedef struct __compressed_pair<std::pair<unsigned int, bool> *, std::allocator<std::pair<unsigned int, bool>>> {
    void __value_;
} __compressed_pair<std::pair<unsigned int, bool> *, std::allocator<std::pair<unsigned int, bool>>>;

typedef struct vector<std::pair<unsigned int, bool>, std::allocator<std::pair<unsigned int, bool>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<unsigned int, bool> *, std::allocator<std::pair<unsigned int, bool>>> __end_cap_;
} vector<std::pair<unsigned int, bool>, std::allocator<std::pair<unsigned int, bool>>>;

typedef struct ControlValue {
} // Error Processing Struct Fields

typedef struct vector<as::server::ControlValue, std::allocator<as::server::ControlValue>> {
} // Error Processing Struct Fields

typedef struct DeferredMessageState {
    BOOL mMessagePending;
    unsigned int mDeferredMessageCount;
    id proxy;
    ProcessToken <SessionManagerXPCServerCallbackProtocol>;
    vector<as::server::DeferredMessageState::EventType, std::allocator<as::server::DeferredMessageState::EventType>> mToken;
    optional<as::server::ConfigChangeSummary> mFIFO;
    vector<as::RouteIdentifier, std::allocator<as::RouteIdentifier>> mDeferredConfigChange;
    vector<unsigned int, std::allocator<unsigned int>> mDeferredDefaultRouteChanges;
    vector<unsigned int, std::allocator<unsigned int>> mDeferredStopForAppStateChange;
    vector<std::pair<unsigned int, NSDictionary *>, std::allocator<std::pair<unsigned int, NSDictionary *>>> mDeferredNeedsStateSync;
    vector<std::pair<unsigned int, bool>, std::allocator<std::pair<unsigned int, bool>>> mDeferredInterruptions;
    vector<as::server::ControlValue, std::allocator<as::server::ControlValue>> mDeferredHasProxies;
} DeferredMessageState;

typedef struct synchronized<as::server::DeferredMessageState, caulk::mach::unfair_lock, caulk::empty_atomic_interface<as::server::DeferredMessageState>> {
    unfair_lock mMutex;
    DeferredMessageState mObject;
} synchronized<as::server::DeferredMessageState, caulk::mach::unfair_lock, caulk::empty_atomic_interface<as::server::DeferredMessageState>>;

typedef struct opaqueCMSession {
} // Error Processing Struct Fields

typedef struct __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> {
    opaqueCMSession field0;
    void field1;
    unsigned int field2;
} __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int>;

typedef struct tuple<opaqueCMSession *, const void *, unsigned int> {
    __tuple_impl<std::__tuple_indices<0, 1, 2>, opaqueCMSession *, const void *, unsigned int> field0;
} tuple<opaqueCMSession *, const void *, unsigned int>;

typedef struct __tuple_impl<std::__tuple_indices<0, 1>, int, bool> {
    int field0;
    BOOL field1;
} __tuple_impl<std::__tuple_indices<0, 1>, int, bool>;

typedef struct tuple<int, bool> {
    __tuple_impl<std::__tuple_indices<0, 1>, int, bool> field0;
} tuple<int, bool>;

typedef struct __tuple_impl<std::__tuple_indices<0, 1, 2>, int, std::string, int> {
    int field0;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field1;
    int field2;
} __tuple_impl<std::__tuple_indices<0, 1, 2>, int, std::string, int>;

typedef struct tuple<int, std::string, int> {
    __tuple_impl<std::__tuple_indices<0, 1, 2>, int, std::string, int> field0;
} tuple<int, std::string, int>;

typedef struct AudioSessionDuckingInfo {
    BOOL field0;
    float field1;
    float field2;
} AudioSessionDuckingInfo;

typedef struct __tuple_impl<std::__tuple_indices<0, 1>, int, AudioSessionDuckingInfo> {
    int field0;
    AudioSessionDuckingInfo field1;
} __tuple_impl<std::__tuple_indices<0, 1>, int, AudioSessionDuckingInfo>;

typedef struct tuple<int, AudioSessionDuckingInfo> {
    __tuple_impl<std::__tuple_indices<0, 1>, int, AudioSessionDuckingInfo> field0;
} tuple<int, AudioSessionDuckingInfo>;

