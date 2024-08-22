typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct LoudsTrie {
} // Error Processing Struct Fields

typedef struct scoped_ptr<marisa::grimoire::trie::LoudsTrie> {
    LoudsTrie ptr_;
} scoped_ptr<marisa::grimoire::trie::LoudsTrie>;

typedef struct Trie {
    scoped_ptr<marisa::grimoire::trie::LoudsTrie> trie_;
} Trie;

typedef struct scoped_array<marisa::scoped_array<char>> {
    void array_;
} scoped_array<marisa::scoped_array<char>>;

typedef struct scoped_array<marisa::scoped_array<marisa::Key>> {
    void array_;
} scoped_array<marisa::scoped_array<marisa::Key>>;

typedef struct Keyset {
    scoped_array<marisa::scoped_array<char>> base_blocks_;
    NSUInteger base_blocks_size_;
    NSUInteger base_blocks_capacity_;
    scoped_array<marisa::scoped_array<char>> extra_blocks_;
    NSUInteger extra_blocks_size_;
    NSUInteger extra_blocks_capacity_;
    scoped_array<marisa::scoped_array<marisa::Key>> key_blocks_;
    NSUInteger key_blocks_size_;
    NSUInteger key_blocks_capacity_;
    char * ptr_;
    NSUInteger avail_;
    NSUInteger size_;
    NSUInteger total_length_;
} Keyset;

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

typedef struct _moFactoryClassFlags {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} _moFactoryClassFlags;

typedef struct ? {
    int field0;
    void field1;
    id field2;
    NSUInteger field3;
    unsigned char field4;
    NSUInteger field5;
    void field6;
    unsigned char field7;
    char * field8;
    _moFactoryClassFlags field9;
} ?;

