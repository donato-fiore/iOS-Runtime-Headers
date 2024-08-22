typedef struct _MIORange {
    NSInteger lowerBound;
    NSInteger upperBound;
} _MIORange;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct InternalMetadataWithArenaLite {
    void ptr_;
} InternalMetadataWithArenaLite;

typedef struct Arena {
} // Error Processing Struct Fields

typedef struct Rep {
} // Error Processing Struct Fields

typedef struct RepeatedPtrField<CoreML::Specification::FeatureDescription> {
    Arena arena_;
    int current_size_;
    int total_size_;
    Rep rep_;
} RepeatedPtrField<CoreML::Specification::FeatureDescription>;

typedef struct ArenaStringPtr {
    void ptr_;
} ArenaStringPtr;

typedef struct Metadata {
} // Error Processing Struct Fields

typedef struct ModelDescription {
    unk _vptr$MessageLite;
    InternalMetadataWithArenaLite _internal_metadata_;
    RepeatedPtrField<CoreML::Specification::FeatureDescription> input_;
    RepeatedPtrField<CoreML::Specification::FeatureDescription> output_;
    RepeatedPtrField<CoreML::Specification::FeatureDescription> traininginput_;
    ArenaStringPtr predictedfeaturename_;
    ArenaStringPtr predictedprobabilitiesname_;
    Metadata metadata_;
    int _cached_size_;
} ModelDescription;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct NSEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSEdgeInsets;

typedef struct ImageFeatureType_ImageSize {
    unk _vptr$MessageLite;
    InternalMetadataWithArenaLite _internal_metadata_;
    NSUInteger width_;
    NSUInteger height_;
    int _cached_size_;
} ImageFeatureType_ImageSize;

typedef struct SizeRange {
} // Error Processing Struct Fields

typedef struct Int64FeatureType {
} // Error Processing Struct Fields

typedef struct StringFeatureType {
} // Error Processing Struct Fields

typedef struct SequenceFeatureType {
    unk _vptr$MessageLite;
    InternalMetadataWithArenaLite _internal_metadata_;
    SizeRange sizerange_;
    unk Type_;
    int int64type_;
    Int64FeatureType stringtype_;
    StringFeatureType _cached_size_;
    int _oneof_case_;
    unsigned int field8;
} SequenceFeatureType;

typedef struct DictionaryFeatureType {
} // Error Processing Struct Fields

typedef struct RepeatedField<long long> {
} // Error Processing Struct Fields

typedef struct ArrayFeatureType_EnumeratedShapes {
} // Error Processing Struct Fields

typedef struct ArrayFeatureType_ShapeRange {
} // Error Processing Struct Fields

typedef struct ArrayFeatureType {
    unk _vptr$MessageLite;
    InternalMetadataWithArenaLite _internal_metadata_;
    RepeatedField<long long> shape_;
    int _shape_cached_byte_size_;
    int datatype_;
    unsigned short ShapeFlexibility_;
    long enumeratedshapes_;
    int shaperange_;
    BOOL defaultOptionalValue_;
    int intdefaultvalue_;
    long floatdefaultvalue_;
    int doubledefaultvalue_;
    int _cached_size_;
    ArrayFeatureType_EnumeratedShapes _oneof_case_;
    ArrayFeatureType_ShapeRange field14;
    float field15;
    long field16;
    int field17;
    long field18;
    long field19;
    int field20;
    int field21;
    float field22;
    CGFloat field23;
    int field24;
    unsigned int field25;
} ArrayFeatureType;

typedef struct ImageFeatureType_EnumeratedImageSizes {
} // Error Processing Struct Fields

typedef struct ImageFeatureType_ImageSizeRange {
} // Error Processing Struct Fields

typedef struct ImageFeatureType {
    unk _vptr$MessageLite;
    InternalMetadataWithArenaLite _internal_metadata_;
    NSInteger width_;
    NSInteger height_;
    int colorspace_;
    unsigned short SizeFlexibility_;
    int enumeratedsizes_;
    long imagesizerange_;
    int _cached_size_;
    BOOL _oneof_case_;
    int field10;
    long field11;
    int field12;
    int field13;
    ImageFeatureType_EnumeratedImageSizes field14;
    ImageFeatureType_ImageSizeRange field15;
    int field16;
    unsigned int field17;
} ImageFeatureType;

typedef struct FeatureType {
} // Error Processing Struct Fields

typedef struct FeatureDescription {
    unk _vptr$MessageLite;
    InternalMetadataWithArenaLite _internal_metadata_;
    ArenaStringPtr name_;
    ArenaStringPtr shortdescription_;
    FeatureType type_;
    int _cached_size_;
} FeatureDescription;

typedef struct ZeroCopyInputStream {
} // Error Processing Struct Fields

typedef struct DescriptorPool {
} // Error Processing Struct Fields

typedef struct MessageFactory {
} // Error Processing Struct Fields

typedef struct CodedInputStream {
    char * field0;
    char * field1;
    ZeroCopyInputStream field2;
    int field3;
    int field4;
    unsigned int field5;
    BOOL field6;
    BOOL field7;
    int field8;
    int field9;
    int field10;
    int field11;
    int field12;
    BOOL field13;
    DescriptorPool field14;
    MessageFactory field15;
} CodedInputStream;

