typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct File {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<siri::dialogengine::File> {
    File __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<siri::dialogengine::File>;

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

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<std::string>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<std::string>>;

typedef struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<std::string>> __pair3_;
} __tree<std::string, std::less<std::string>, std::allocator<std::string>>;

typedef struct set<std::string, std::less<std::string>, std::allocator<std::string>> {
    __tree<std::string, std::less<std::string>, std::allocator<std::string>> __tree_;
} set<std::string, std::less<std::string>, std::allocator<std::string>>;

typedef struct GrammarFeature {
    int mType;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mName;
    set<std::string, std::less<std::string>, std::allocator<std::string>> mValues;
    BOOL mIsUniqueValues;
} GrammarFeature;

typedef struct Variable {
} // Error Processing Struct Fields

typedef struct shared_ptr<siri::dialogengine::Variable> {
} // Error Processing Struct Fields

typedef struct PatternContext {
} // Error Processing Struct Fields

typedef struct shared_ptr<siri::dialogengine::PatternContext> {
} // Error Processing Struct Fields

typedef struct Node {
} // Error Processing Struct Fields

typedef struct shared_ptr<siri::dialogengine::Node> {
} // Error Processing Struct Fields

typedef struct ? {
    unsigned int ctx;
} ?;

typedef struct Parameter {
} // Error Processing Struct Fields

typedef struct shared_ptr<siri::dialogengine::Parameter> {
} // Error Processing Struct Fields

typedef struct PatternSetting {
} // Error Processing Struct Fields

typedef struct shared_ptr<siri::dialogengine::PatternSetting> {
} // Error Processing Struct Fields

typedef struct ObjectProperty {
    unk _vptr$PropertyBase;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mName;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mType;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mDescription;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mSampleValue;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mVersionAdded;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mDeprecated;
    BOOL mProfanityFilter;
    BOOL mOptional;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mSemanticConcept;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mValueFromCat;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mDefaultValue;
    BOOL mIsIterator;
    BOOL mCanOverride;
} ObjectProperty;

typedef struct shared_ptr<siri::dialogengine::ObjectProperty> {
} // Error Processing Struct Fields

typedef struct optional<siri::dialogengine::ObjectProperty> {
    unk ;
    char __null_state_;
    ObjectProperty __val_;
    BOOL __engaged_;
} optional<siri::dialogengine::ObjectProperty>;

typedef struct Group {
} // Error Processing Struct Fields

typedef struct shared_ptr<siri::dialogengine::Group> {
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

typedef struct CountAndTimestamp {
    NSUInteger field0;
    CGFloat field1;
} CountAndTimestamp;

typedef struct DialogStateFamily {
    CountAndTimestamp field0;
} DialogStateFamily;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, siri::dialogengine::GroundingInfo>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, siri::dialogengine::GroundingInfo>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, siri::dialogengine::GroundingInfo>, std::less<std::string>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, siri::dialogengine::GroundingInfo>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, siri::dialogengine::GroundingInfo>, std::__map_value_compare<std::string, std::__value_type<std::string, siri::dialogengine::GroundingInfo>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, siri::dialogengine::GroundingInfo>>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, siri::dialogengine::GroundingInfo>, void *>>> field1;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, siri::dialogengine::GroundingInfo>, std::less<std::string>, true>> field2;
} __tree<std::__value_type<std::string, siri::dialogengine::GroundingInfo>, std::__map_value_compare<std::string, std::__value_type<std::string, siri::dialogengine::GroundingInfo>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, siri::dialogengine::GroundingInfo>>>;

typedef struct map<std::string, siri::dialogengine::GroundingInfo, std::less<std::string>, std::allocator<std::pair<const std::string, siri::dialogengine::GroundingInfo>>> {
    __tree<std::__value_type<std::string, siri::dialogengine::GroundingInfo>, std::__map_value_compare<std::string, std::__value_type<std::string, siri::dialogengine::GroundingInfo>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, siri::dialogengine::GroundingInfo>>> field0;
} map<std::string, siri::dialogengine::GroundingInfo, std::less<std::string>, std::allocator<std::pair<const std::string, siri::dialogengine::GroundingInfo>>>;

typedef struct DialogStateUseCase {
    CountAndTimestamp field0;
    set<std::string, std::less<std::string>, std::allocator<std::string>> field1;
    set<std::string, std::less<std::string>, std::allocator<std::string>> field2;
    map<std::string, siri::dialogengine::GroundingInfo, std::less<std::string>, std::allocator<std::pair<const std::string, siri::dialogengine::GroundingInfo>>> field3;
} DialogStateUseCase;

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct GroundingInfo {
    NSUInteger mCount;
    vector<double, std::allocator<double>> mTimestamps;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mText;
} GroundingInfo;

typedef struct _CCCryptor {
} // Error Processing Struct Fields

typedef struct Context {
} // Error Processing Struct Fields

typedef struct shared_ptr<siri::dialogengine::Context> {
} // Error Processing Struct Fields

typedef struct ObjectInput {
    unk _vptr$PropertyBase;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mName;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mType;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mDescription;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mSampleValue;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mVersionAdded;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mDeprecated;
    BOOL mProfanityFilter;
    BOOL mOptional;
    int mAccessMode;
} ObjectInput;

typedef struct optional<siri::dialogengine::ObjectInput> {
    unk ;
    char __null_state_;
    ObjectInput __val_;
    BOOL __engaged_;
} optional<siri::dialogengine::ObjectInput>;

typedef struct Dialog {
} // Error Processing Struct Fields

typedef struct shared_ptr<siri::dialogengine::Dialog> {
} // Error Processing Struct Fields

typedef struct ObjectSchema {
} // Error Processing Struct Fields

typedef struct shared_ptr<siri::dialogengine::ObjectSchema> {
} // Error Processing Struct Fields

typedef struct CC_SHA256state_st {
    unsigned int count;
    unsigned int hash;
    unsigned int wbuf;
} CC_SHA256state_st;

typedef struct PatternSchema {
} // Error Processing Struct Fields

typedef struct shared_ptr<siri::dialogengine::PatternSchema> {
} // Error Processing Struct Fields

