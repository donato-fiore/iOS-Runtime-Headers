typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct UsoGraph {
} // Error Processing Struct Fields

typedef struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> {
    UsoGraph __value_;
} __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>>;

typedef struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> {
    __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> __ptr_;
} unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>>;

typedef struct UsoGraphNode {
} // Error Processing Struct Fields

typedef struct UsoOperatorNode {
} // Error Processing Struct Fields

typedef struct optional<double> {
    unk field0;
    char field1;
    CGFloat field2;
    BOOL field3;
} optional<double>;

typedef struct optional<siri::ontology::UsoIdentifier::NluComponent> {
    unk field0;
    char field1;
    int field2;
    BOOL field3;
} optional<siri::ontology::UsoIdentifier::NluComponent>;

typedef struct __long {
    char * field0;
    NSUInteger field1;
    NSUInteger field2;
} __long;

typedef struct ? {
    unsigned char field0;
} ?;

typedef struct __short {
    char field0;
    ? field1;
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

typedef struct UsoIdentifier {
    basic_string<char, std::char_traits<char>, std::allocator<char>> field0;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field1;
    optional<std::string> field2;
    optional<double> field3;
    optional<siri::ontology::UsoIdentifier::NluComponent> field4;
} UsoIdentifier;

typedef struct __compressed_pair<siri::ontology::UsoIdentifier *, std::default_delete<siri::ontology::UsoIdentifier>> {
    UsoIdentifier field0;
} __compressed_pair<siri::ontology::UsoIdentifier *, std::default_delete<siri::ontology::UsoIdentifier>>;

typedef struct unique_ptr<siri::ontology::UsoIdentifier, std::default_delete<siri::ontology::UsoIdentifier>> {
    __compressed_pair<siri::ontology::UsoIdentifier *, std::default_delete<siri::ontology::UsoIdentifier>> field0;
} unique_ptr<siri::ontology::UsoIdentifier, std::default_delete<siri::ontology::UsoIdentifier>>;

typedef struct optional<std::string> {
    unk field0;
    char field1;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field2;
    BOOL field3;
} optional<std::string>;

typedef struct UsoVocabManager {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<siri::ontology::UsoVocabManager> {
    UsoVocabManager field0;
    __shared_weak_count field1;
} shared_ptr<siri::ontology::UsoVocabManager>;

typedef struct RefCountBitsT<swift::RefCountIsInline> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> {
    uint8_t __a_value;
    RefCountBitsT<swift::RefCountIsInline> field1;
} __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>>;

typedef struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> {
    __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> __a_;
} atomic<swift::RefCountBitsT<swift::RefCountIsInline>>;

typedef struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> {
    atomic<swift::RefCountBitsT<swift::RefCountIsInline>> refCounts;
} RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>>;

