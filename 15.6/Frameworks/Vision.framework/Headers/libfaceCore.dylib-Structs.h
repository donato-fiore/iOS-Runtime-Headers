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

typedef struct vector<apple::vision::libraries::facecore::coord, std::allocator<apple::vision::libraries::facecore::coord>> {
} // Error Processing Struct Fields

typedef struct naturalSmileData {
} // Error Processing Struct Fields

typedef struct Face {
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
    vector<apple::vision::libraries::facecore::coord, std::allocator<apple::vision::libraries::facecore::coord>> field10;
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
} Face;

typedef struct FaceCoreAPI {
} // Error Processing Struct Fields

typedef struct __compressed_pair<apple::vision::libraries::facecore::FaceCoreAPI *, std::default_delete<apple::vision::libraries::facecore::FaceCoreAPI>> {
    FaceCoreAPI __value_;
} __compressed_pair<apple::vision::libraries::facecore::FaceCoreAPI *, std::default_delete<apple::vision::libraries::facecore::FaceCoreAPI>>;

typedef struct unique_ptr<apple::vision::libraries::facecore::FaceCoreAPI, std::default_delete<apple::vision::libraries::facecore::FaceCoreAPI>> {
    __compressed_pair<apple::vision::libraries::facecore::FaceCoreAPI *, std::default_delete<apple::vision::libraries::facecore::FaceCoreAPI>> __ptr_;
} unique_ptr<apple::vision::libraries::facecore::FaceCoreAPI, std::default_delete<apple::vision::libraries::facecore::FaceCoreAPI>>;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

