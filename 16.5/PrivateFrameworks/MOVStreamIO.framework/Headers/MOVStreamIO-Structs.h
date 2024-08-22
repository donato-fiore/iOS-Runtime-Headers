typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct opaqueCMFormatDescription {
} // Error Processing Struct Fields

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct ? {
    NSInteger value;
    int timescale;
    unsigned int flags;
    NSInteger epoch;
} ?;

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct OpaqueVTCompressionSession {
} // Error Processing Struct Fields

typedef struct vector<CMTime, std::allocator<CMTime>> {
} // Error Processing Struct Fields

typedef struct vector<CMTimeRange, std::allocator<CMTimeRange>> {
} // Error Processing Struct Fields

typedef struct StreamRecordingData {
} // Error Processing Struct Fields

typedef struct __long {
    char * field0;
    NSUInteger field1;
    BOOL field2;
    BOOL field3;
} __long;

typedef struct __short {
    char field0;
    unsigned char field1;
    BOOL field2;
    BOOL field3;
} __short;

typedef struct __raw {
    NSUInteger field0;
} __raw;

typedef struct __rep {
    unk field0;
    __long field1;
    __short field2;
    __raw field3;
} __rep;

typedef struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
    __rep field0;
} __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> field0;
} basic_string<char, std::char_traits<char>, std::allocator<char>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>, std::__map_value_compare<std::string, std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>, std::__map_value_compare<std::string, std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>>>;

typedef struct map<std::string, (anonymous namespace)::StreamRecordingData, std::less<std::string>, std::allocator<std::pair<const std::string, (anonymous namespace)::StreamRecordingData>>> {
    __tree<std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>, std::__map_value_compare<std::string, std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, (anonymous namespace)::StreamRecordingData>>> __tree_;
} map<std::string, (anonymous namespace)::StreamRecordingData, std::less<std::string>, std::allocator<std::pair<const std::string, (anonymous namespace)::StreamRecordingData>>>;

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void __value_;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::string *, std::allocator<std::string>> __end_cap_;
} vector<std::string, std::allocator<std::string>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>, std::__map_value_compare<std::string, std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>, std::__map_value_compare<std::string, std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>>>;

typedef struct map<std::string, (anonymous namespace)::MetadataRecordingData, std::less<std::string>, std::allocator<std::pair<const std::string, (anonymous namespace)::MetadataRecordingData>>> {
    __tree<std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>, std::__map_value_compare<std::string, std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, (anonymous namespace)::MetadataRecordingData>>> __tree_;
} map<std::string, (anonymous namespace)::MetadataRecordingData, std::less<std::string>, std::allocator<std::pair<const std::string, (anonymous namespace)::MetadataRecordingData>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>>>;

typedef struct map<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>, std::less<std::string>, std::allocator<std::pair<const std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>>> {
    __tree<std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>>> __tree_;
} map<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>, std::less<std::string>, std::allocator<std::pair<const std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, CMTime>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, CMTime>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, CMTime>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, CMTime>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, CMTime>, std::__map_value_compare<std::string, std::__value_type<std::string, CMTime>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, CMTime>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, CMTime>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, CMTime>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, CMTime>, std::__map_value_compare<std::string, std::__value_type<std::string, CMTime>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, CMTime>>>;

typedef struct map<std::string, CMTime, std::less<std::string>, std::allocator<std::pair<const std::string, CMTime>>> {
    __tree<std::__value_type<std::string, CMTime>, std::__map_value_compare<std::string, std::__value_type<std::string, CMTime>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, CMTime>>> __tree_;
} map<std::string, CMTime, std::less<std::string>, std::allocator<std::pair<const std::string, CMTime>>>;

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct __CVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct OpaqueVTPixelTransferSession {
} // Error Processing Struct Fields

typedef struct OpaqueVTPixelRotationSession {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct HEVCLosslessEncoder {
} // Error Processing Struct Fields

