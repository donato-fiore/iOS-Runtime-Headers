typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ProfileInfo {
    unsigned char field0;
} ProfileInfo;

typedef struct DatasetInfo {
    unsigned char field0;
} DatasetInfo;

typedef struct Allocator {
} // Error Processing Struct Fields

typedef struct vector_downward {
    Allocator allocator_;
    BOOL own_allocator_;
    NSUInteger initial_size_;
    NSUInteger buffer_minalign_;
    NSUInteger reserved_;
    char * buf_;
    char * cur_;
    char * scratch_;
} vector_downward;

typedef struct FlatBufferBuilder {
    vector_downward buf_;
    unsigned int num_field_loc;
    unsigned short max_voffset_;
    BOOL nested;
    BOOL finished;
    NSUInteger minalign_;
    BOOL force_defaults_;
    BOOL dedup_vtables_;
    void string_pool;
} FlatBufferBuilder;

typedef struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>> {
    void __value_;
} __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>>;

typedef struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>> {
    void __begin_;
    void __end_;
    __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>> __end_cap_;
} vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>>;

typedef struct Field {
    unsigned char field0;
} Field;

typedef struct Item {
    unsigned char field0;
} Item;

typedef struct Dataset {
    unsigned char field0;
} Dataset;

typedef struct Profile {
    unsigned char field0;
} Profile;

typedef struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> {
    void __value_;
} __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>>;

typedef struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> {
    void __begin_;
    void __end_;
    __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> __end_cap_;
} vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>>;

typedef struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> {
    void __value_;
} __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>>;

typedef struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> {
    void __begin_;
    void __end_;
    __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> __end_cap_;
} vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>>;

