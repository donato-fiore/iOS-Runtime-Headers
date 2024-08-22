typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct AVCRTPAudioSession {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct weak_ptr<AVCRTPAudioSession> {
    AVCRTPAudioSession __ptr_;
    __shared_weak_count __cntrl_;
} weak_ptr<AVCRTPAudioSession>;

typedef struct AVCRTPStackController {
} // Error Processing Struct Fields

typedef struct shared_ptr<AVCRTPStackController> {
} // Error Processing Struct Fields

typedef struct shared_ptr<AVCRTPAudioSession> {
    AVCRTPAudioSession field0;
    __shared_weak_count field1;
} shared_ptr<AVCRTPAudioSession>;

typedef struct AVCRTPRTTSession {
} // Error Processing Struct Fields

typedef struct weak_ptr<AVCRTPRTTSession> {
} // Error Processing Struct Fields

typedef struct shared_ptr<AVCRTPRTTSession> {
} // Error Processing Struct Fields

typedef struct __long {
    char * __data_;
    NSUInteger __size_;
    NSUInteger __cap_;
} __long;

typedef struct ? {
    unsigned char __size_;
} ?;

typedef struct __short {
    char __data_;
    ? ;
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

typedef struct ImsKeepAliveDelegate {
    unk field0;
} ImsKeepAliveDelegate;

typedef struct __WiFiManagerClient {
} // Error Processing Struct Fields

typedef struct ImsNetworkPathDelegate {
    unk field0;
} ImsNetworkPathDelegate;

