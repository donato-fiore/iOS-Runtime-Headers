typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct ? {
    CGPoint center;
    CGRect bounds;
} ?;

typedef struct FaceCoreAPIInternal {
} // Error Processing Struct Fields

typedef struct FaceCoreContext {
} // Error Processing Struct Fields

typedef struct FaceCoreAPI {
    unk field0;
    FaceCoreAPIInternal field1;
    FaceCoreContext field2;
    void field3;
} FaceCoreAPI;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct image {
    char * field0;
    int field1;
    int field2;
} image;

typedef struct coord {
    int field0;
    int field1;
} coord;

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat field0;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat field0;
    CGFloat field1;
    __compressed_pair<double *, std::allocator<double>> field2;
} vector<double, std::allocator<double>>;

typedef struct vector<vision::lib::coord, std::allocator<vision::lib::coord>> {
} // Error Processing Struct Fields

typedef struct naturalSmileData {
} // Error Processing Struct Fields

typedef struct face {
    int field0;
    coord field1;
    coord field2;
    coord field3;
    coord field4;
    float field5;
    int field6;
    int field7;
    vector<double, std::allocator<double>> field8;
    int field9;
    vector<vision::lib::coord, std::allocator<vision::lib::coord>> field10;
    int field11;
    BOOL field12;
    BOOL field13;
    float field14;
    float field15;
    BOOL field16;
    float field17;
    BOOL field18;
    float field19;
    naturalSmileData field20;
} face;

