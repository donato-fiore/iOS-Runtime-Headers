typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    unsigned char __size_;
} ?;

typedef struct __long {
    char * __data_;
    NSUInteger __size_;
    NSUInteger __cap_;
} __long;

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

typedef struct optional<int> {
    unk ;
    char __null_state_;
    int __val_;
    BOOL __engaged_;
} optional<int>;

typedef struct optional<bool> {
    unk ;
    char __null_state_;
    BOOL __val_;
    BOOL __engaged_;
} optional<bool>;

typedef struct optional<GnssHal::ExtensionsFire::FrequencyBandsSetting> {
    unk ;
    char __null_state_;
    unsigned char __val_;
    BOOL __engaged_;
} optional<GnssHal::ExtensionsFire::FrequencyBandsSetting>;

typedef struct optional<GnssHal::ExtensionsFire::BlankingSetting> {
    unk ;
    char __null_state_;
    unsigned char __val_;
    BOOL __engaged_;
} optional<GnssHal::ExtensionsFire::BlankingSetting>;

typedef struct Options {
    basic_string<char, std::char_traits<char>, std::allocator<char>> uartPortName;
    basic_string<char, std::char_traits<char>, std::allocator<char>> gnssDeviceLibraryName;
    unsigned int logLevel;
    unsigned int secondaryLogLevel;
    NSUInteger logMask;
    BOOL clearNvStore;
    BOOL printNmeaMessage;
    BOOL hostPassThroughMode;
    BOOL doPeriodic;
    BOOL doCw;
    BOOL doModulated;
    BOOL doRecordIQ;
    BOOL doPowerMode;
    BOOL doHostWakeGpio;
    BOOL doTimeMarkGpio;
    BOOL doCommPing;
    BOOL doCommLoopback;
    optional<int> bandLteFilter;
    optional<bool> l5NotchFilter;
    optional<GnssHal::ExtensionsFire::FrequencyBandsSetting> rfFreqBand;
    optional<GnssHal::ExtensionsFire::BlankingSetting> blanking;
    int periodicDurationSec;
    int cwDurationSec;
    int cwBandwidthHz;
    int integrationTimeMilliseconds;
    unsigned char band;
    unsigned short subband;
    BOOL prn;
    BOOL fcn;
    CGFloat modulatedDurationSec;
    int recordIQDurationSec;
    int powerMode;
    int hostWakeGpioTimeoutMs;
    int timeMarkGpioTimeoutMs;
    int commPingTimeoutMs;
    int commLoopbackTimeoutSec;
    int extraOptions;
    int uartBaudRate;
    int xmlFile;
    basic_string<char, std::char_traits<char>, std::allocator<char>> testJob;
    int field40;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field41;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field42;
} Options;

