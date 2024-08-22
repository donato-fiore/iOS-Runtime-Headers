typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct TSUFlushableObjectInfo {
    id field0;
    int field1;
    int field2;
    int field3;
    unsigned int field4;
} TSUFlushableObjectInfo;

typedef struct ? {
    id mCurrencyCode;
    BOOL NSString;
    BOOL mDecimalPlaces;
    BOOL mNegativeStyle;
    BOOL mShowThousandsSeparator;
} ?;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFDateFormatter {
} // Error Processing Struct Fields

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct __CFDate {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __CFNumberFormatter {
} // Error Processing Struct Fields

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::shared_ptr<TSUStringChunk> *, std::allocator<std::shared_ptr<TSUStringChunk> > > {
    void __value_;
} __compressed_pair<std::shared_ptr<TSUStringChunk> *, std::allocator<std::shared_ptr<TSUStringChunk> > >;

typedef struct vector<std::shared_ptr<TSUStringChunk>, std::allocator<std::shared_ptr<TSUStringChunk> > > {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<TSUStringChunk> *, std::allocator<std::shared_ptr<TSUStringChunk> > > __end_cap_;
} vector<std::shared_ptr<TSUStringChunk>, std::allocator<std::shared_ptr<TSUStringChunk> > >;

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

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct __SCNetworkReachability {
} // Error Processing Struct Fields

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

