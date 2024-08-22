typedef struct ? {
    NSInteger domain;
    int error;
} ?;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct URLProtocolClient {
    unk field0;
} URLProtocolClient;

typedef struct _CFURLAuthChallenge {
} // Error Processing Struct Fields

typedef struct __CFHTTPMessage {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<NSObject<OS_nw_context>> {
    id __ptr_;
    __shared_weak_count NSObject<OS_nw_context>;
} shared_ptr<NSObject<OS_nw_context>>;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFAllocator {
} // Error Processing Struct Fields

typedef struct XCookieStorage {
    unk field0;
    __CFAllocator field1;
    int field2;
} XCookieStorage;

typedef struct XCredentialStorage {
    unk field0;
    __CFAllocator field1;
    int field2;
} XCredentialStorage;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct __CFURL {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct URLResponse {
} // Error Processing Struct Fields

typedef struct _CFURLResponse {
} // Error Processing Struct Fields

typedef struct __SecTrust {
} // Error Processing Struct Fields

typedef struct _CFHSTSPolicy {
} // Error Processing Struct Fields

typedef struct _CFURLCache {
} // Error Processing Struct Fields

typedef struct _CFURLCredentialStorage {
} // Error Processing Struct Fields

typedef struct OpaqueCFHTTPCookieStorage {
} // Error Processing Struct Fields

typedef struct __CFURLStorageSession {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct TransportConnection {
} // Error Processing Struct Fields

typedef struct shared_ptr<TransportConnection> {
} // Error Processing Struct Fields

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct _CFURLCredential {
} // Error Processing Struct Fields

typedef struct __SecIdentity {
} // Error Processing Struct Fields

typedef struct CFURLProtocolImplementation {
    NSInteger field0;
    void field1;
    unk field2;
    unk field3;
    unk field4;
    unk field5;
    unk field6;
    unk field7;
    unk field8;
} CFURLProtocolImplementation;

typedef struct CFURLProtocolInstanceCallbacks {
    NSInteger field0;
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
    void field13;
} CFURLProtocolInstanceCallbacks;

typedef struct CFURLProtocolClient {
    NSInteger version;
    void client;
    unk retain;
    unk release;
    unk copyDescription;
    unk wasRedirected;
    unk cacheResponseIsValid;
    unk didReceiveResponse;
    unk didLoadData;
    unk didFinishLoading;
    unk didFail;
    unk didReceiveAuthenticationChallenge;
} CFURLProtocolClient;

typedef struct _CFURLProtectionSpace {
} // Error Processing Struct Fields

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct InternalProtocolImplementation {
    NSInteger field0;
    void field1;
    unk field2;
    unk field3;
    unk field4;
    unk field5;
    unk field6;
    unk field7;
    unk field8;
    unk field9;
} InternalProtocolImplementation;

typedef struct _CFURLProtocol {
} // Error Processing Struct Fields

typedef struct NSCFURLProtocolClient {
    unk field0;
    unk field1;
    id field2;
    id field3;
} NSCFURLProtocolClient;

typedef struct UploadProgressInfo {
    NSInteger field0;
    NSInteger field1;
    NSInteger field2;
} UploadProgressInfo;

typedef struct SessionConnectionLoadable {
    unk field0;
    unk field1;
    unk field2;
    id field3;
} SessionConnectionLoadable;

typedef struct URLConnectionLoader {
} // Error Processing Struct Fields

typedef struct SmartBlockWithArgs<bool> {
} // Error Processing Struct Fields

typedef struct CBs {
    id field0;
    unk field1;
    id field2;
    unk field3;
    id field4;
    unk field5;
    id field6;
    unk field7;
    id field8;
    unk field9;
    id field10;
    unk field11;
} CBs;

typedef struct TCPIO_BlockCallbacks_Listener {
    unk field0;
    CBs field1;
    id field2;
    int field3;
} TCPIO_BlockCallbacks_Listener;

typedef struct TCPIO_EstablishBase {
} // Error Processing Struct Fields

typedef struct shared_ptr<TCPIO_EstablishBase> {
} // Error Processing Struct Fields

typedef struct TransportConnectionObjCPP {
} // Error Processing Struct Fields

typedef struct shared_ptr<TransportConnectionObjCPP> {
} // Error Processing Struct Fields

typedef struct HTTPProtocol {
} // Error Processing Struct Fields

typedef struct shared_ptr<HTTPProtocol> {
} // Error Processing Struct Fields

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>>;

typedef struct map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> {
    __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>> __tree_;
} map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>>>;

typedef struct map<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>, std::less<std::string>, std::allocator<std::pair<const std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>>> {
    __tree<std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>>> __tree_;
} map<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>, std::less<std::string>, std::allocator<std::pair<const std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::shared_ptr<__CoalescingConnectionKey>, std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, CoalescingConnectionKeyComparator, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::shared_ptr<__CoalescingConnectionKey>, std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, CoalescingConnectionKeyComparator, true>>;

typedef struct __tree<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, std::__map_value_compare<std::shared_ptr<__CoalescingConnectionKey>, std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, CoalescingConnectionKeyComparator, true>, std::allocator<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::shared_ptr<__CoalescingConnectionKey>, std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, CoalescingConnectionKeyComparator, true>> __pair3_;
} __tree<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, std::__map_value_compare<std::shared_ptr<__CoalescingConnectionKey>, std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, CoalescingConnectionKeyComparator, true>, std::allocator<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>>>;

typedef struct map<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>, CoalescingConnectionKeyComparator, std::allocator<std::pair<const std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>>> {
    __tree<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, std::__map_value_compare<std::shared_ptr<__CoalescingConnectionKey>, std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>, CoalescingConnectionKeyComparator, true>, std::allocator<std::__value_type<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>>> __tree_;
} map<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>, CoalescingConnectionKeyComparator, std::allocator<std::pair<const std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>>>;

typedef struct map<std::string, std::shared_ptr<__CoalescingConnectionKey>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<__CoalescingConnectionKey>>>> {
    __tree<std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::shared_ptr<__CoalescingConnectionKey>>>> __tree_;
} map<std::string, std::shared_ptr<__CoalescingConnectionKey>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<__CoalescingConnectionKey>>>>;

typedef struct CoalescingDomain {
    map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> _DNS;
    map<std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>, std::less<std::string>, std::allocator<std::pair<const std::string, std::set<std::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator>>>> _ipAddressToConnectionKey;
    map<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>, CoalescingConnectionKeyComparator, std::allocator<std::pair<const std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>>> _connectionKeyToAllIPAddresses;
    map<std::string, std::shared_ptr<__CoalescingConnectionKey>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<__CoalescingConnectionKey>>>> _requestHostToConnectionKey;
    map<std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>, CoalescingConnectionKeyComparator, std::allocator<std::pair<const std::shared_ptr<__CoalescingConnectionKey>, std::set<std::string>>>> _connectionKeyToAllRequestHosts;
} CoalescingDomain;

typedef struct HTTPConnectionInfo {
    unk field0;
} HTTPConnectionInfo;

typedef struct HTTPCookie {
    unk field0;
} HTTPCookie;

typedef struct CompactCookieHeader {
} // Error Processing Struct Fields

typedef struct CompactHTTPCookieWithData {
    unk field0;
    char * field1;
} CompactHTTPCookieWithData;

typedef struct CompactCookieArray {
} // Error Processing Struct Fields

typedef struct CompactHTTPCookieReference {
} // Error Processing Struct Fields

typedef struct OpaqueCFHTTPCookie {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct timespec {
    NSInteger tv_sec;
    NSInteger tv_nsec;
} timespec;

typedef struct stat {
    int st_dev;
    unsigned short st_mode;
    unsigned short st_nlink;
    NSUInteger st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    timespec st_atimespec;
    timespec st_mtimespec;
    timespec st_ctimespec;
    timespec st_birthtimespec;
    NSInteger st_size;
    NSInteger st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    NSInteger st_qspare;
} stat;

typedef struct CFNetworkTaskMetrics_s {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSInteger field3;
    NSInteger field4;
    NSInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    unsigned char field8;
    unsigned char field9;
    int field10;
    BOOL field11;
    ? field12;
} CFNetworkTaskMetrics_s;

typedef struct weak_ptr<TransportConnection> {
} // Error Processing Struct Fields

typedef struct __CFNetService {
} // Error Processing Struct Fields

typedef struct __CFNetServiceBrowser {
} // Error Processing Struct Fields

typedef struct CoreLoggable {
    unk field0;
} CoreLoggable;

typedef struct __CFError {
} // Error Processing Struct Fields

typedef struct ReadBuffer {
    unk field0;
    NSInteger field1;
    id field2;
    NSInteger field3;
    unsigned char field4;
} ReadBuffer;

typedef struct __CFData {
} // Error Processing Struct Fields

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

typedef struct URLRequest {
} // Error Processing Struct Fields

typedef struct HTTPConnectionCacheLimits {
    int fHTTPLoadWidth;
    int fHTTPPipeliningHighWatermark;
    int fHTTPPipeliningLowWatermark;
    int fHTTPPriorityNumLevels;
    int fHTTPNumFastLanes;
    int fHTTPMinimumFastLanePriority;
    int fHTTPConnectionCachePurgeTimeout;
    int fHTTPConnectionCacheCellPurgeTimeout;
    int fLongLivedConnectionCachePurgeTimeout;
    int fLongLivedConnectionCacheCellPurgeTimeout;
} HTTPConnectionCacheLimits;

typedef struct InternalInit {
    id field0;
    id field1;
    id field2;
    id field3;
    BOOL field4;
    NSInteger field5;
} InternalInit;

typedef struct __CFRunLoopSource {
} // Error Processing Struct Fields

typedef struct BaseSocketStreamClient {
    unk field0;
} BaseSocketStreamClient;

typedef struct __CFReadStream {
} // Error Processing Struct Fields

typedef struct __CFWriteStream {
} // Error Processing Struct Fields

typedef struct _CFURLConnection {
} // Error Processing Struct Fields

typedef struct __darwin_pthread_handler_rec {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_t {
    NSInteger field0;
    __darwin_pthread_handler_rec field1;
    char field2;
} _opaque_pthread_t;

typedef struct _CFURLDownload {
} // Error Processing Struct Fields

typedef struct internal_state {
} // Error Processing Struct Fields

typedef struct z_stream_s {
    char * next_in;
    unsigned int avail_in;
    NSUInteger total_in;
    char * next_out;
    unsigned int avail_out;
    NSUInteger total_out;
    char * msg;
    internal_state state;
    unk zalloc;
    unk zfree;
    void opaque;
    int data_type;
    NSUInteger adler;
    NSUInteger reserved;
} z_stream_s;

