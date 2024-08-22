typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL sfr_flags;
    BOOL sfr_pathState;
    BOOL sfr_calculatedLengths;
    BOOL sfr_unused;
} ?;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct TSUFlushableObjectInfo {
    id field0;
    int field1;
    int field2;
    int field3;
    unsigned int field4;
} TSUFlushableObjectInfo;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> {
    id __value_;
} __compressed_pair<NSString *__strong *, std::allocator<NSString *>>;

typedef struct vector<NSString *, std::allocator<NSString *>> {
    id __begin_;
    id __end_;
    __compressed_pair<NSString *__strong *, std::allocator<NSString *>> __end_cap_;
} vector<NSString *, std::allocator<NSString *>>;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFDateFormatter {
} // Error Processing Struct Fields

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct __CFBundle {
} // Error Processing Struct Fields

typedef struct TSUIndexRange {
    NSInteger _begin;
    NSInteger _end;
} TSUIndexRange;

typedef struct TSUIndexSet {
} // Error Processing Struct Fields

typedef struct TSUNumberOrDateLexer {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct timeval {
    NSInteger tv_sec;
    int tv_usec;
} timeval;

typedef struct TSUOpstat_s {
    BOOL running;
    NSUInteger count;
    timeval min_time;
    timeval max_time;
    timeval total_time;
    timeval last_time;
} TSUOpstat_s;

typedef struct TSUIndexRangeStruct {
    NSInteger field0;
    NSInteger field1;
} TSUIndexRangeStruct;

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct __CFNumberFormatter {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::shared_ptr<TSUStringChunk> *, std::allocator<std::shared_ptr<TSUStringChunk>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<TSUStringChunk> *, std::allocator<std::shared_ptr<TSUStringChunk>>>;

typedef struct vector<std::shared_ptr<TSUStringChunk>, std::allocator<std::shared_ptr<TSUStringChunk>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<TSUStringChunk> *, std::allocator<std::shared_ptr<TSUStringChunk>>> __end_cap_;
} vector<std::shared_ptr<TSUStringChunk>, std::allocator<std::shared_ptr<TSUStringChunk>>>;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct PATHSEGMENT {
    BOOL field0;
    BOOL field1;
    CGPoint field2;
} PATHSEGMENT;

typedef struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> {
    uint8_t __a_value;
    NSUInteger field1;
} __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>>;

typedef struct atomic<unsigned long> {
    __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> __a_;
} atomic<unsigned long>;

typedef struct vector<_NSRange, std::allocator<_NSRange>> {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct _CCCryptor {
} // Error Processing Struct Fields

typedef struct _xmlNode {
} // Error Processing Struct Fields

typedef struct _xmlDoc {
} // Error Processing Struct Fields

typedef struct _xmlTextReader {
} // Error Processing Struct Fields

typedef struct CGDataProvider {
} // Error Processing Struct Fields

typedef struct __sbuf {
    char * field0;
    int field1;
} __sbuf;

typedef struct __sFILEX {
} // Error Processing Struct Fields

typedef struct __sFILE {
    char * field0;
    int field1;
    int field2;
    short field3;
    short field4;
    __sbuf field5;
    int field6;
    void field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    __sbuf field12;
    __sFILEX field13;
    int field14;
    unsigned char field15;
    unsigned char field16;
    __sbuf field17;
    int field18;
    NSInteger field19;
} __sFILE;

typedef struct gzFile_s {
    unsigned int field0;
    char * field1;
    NSInteger field2;
} gzFile_s;

typedef struct SFUZipEndOfCentralDirectory {
    NSUInteger field0;
    NSInteger field1;
    NSInteger field2;
} SFUZipEndOfCentralDirectory;

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

typedef struct vector<CGRect, std::allocator<CGRect>> {
} // Error Processing Struct Fields

typedef struct TSUDecimal {
    ? field0;
} TSUDecimal;

typedef struct tsuSaPage {
    unk field0;
} tsuSaPage;

typedef struct TSUDecimalFormatterCore {
    unk field0;
    void field1;
    id field2;
    NSInteger field3;
    id field4;
    id field5;
    id field6;
    id field7;
    id field8;
    id field9;
    BOOL field10;
    BOOL field11;
    BOOL field12;
} TSUDecimalFormatterCore;

typedef struct in_addr {
    unsigned int field0;
} in_addr;

typedef struct sockaddr_in {
    unsigned char field0;
    unsigned char field1;
    unsigned short field2;
    in_addr field3;
    char field4;
} sockaddr_in;

typedef struct __SCNetworkReachability {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGDataProviderSequentialCallbacks {
} // Error Processing Struct Fields

