typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct GetPowerStatsResponse {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned short field9;
    unsigned short field10;
    unsigned int field11;
    unsigned int field12;
} GetPowerStatsResponse;

typedef struct array<unsigned char, 8> {
    unsigned char field0;
} array<unsigned char, 8>;

typedef struct ResponderSuperframeRxPacketInfo {
} // Error Processing Struct Fields

typedef struct vector<Rose::ResponderSuperframeRxPacketInfo, std::allocator<Rose::ResponderSuperframeRxPacketInfo>> {
} // Error Processing Struct Fields

typedef struct ResponderSuperframeCompleteEvent {
    unsigned short field0;
    unsigned short field1;
    unsigned char field2;
    CGFloat field3;
    array<unsigned char, 8> field4;
    unsigned short field5;
    unsigned short field6;
    unsigned short field7;
    unsigned char field8;
    unsigned char field9;
    unsigned char field10;
    unsigned char field11;
    unsigned char field12;
    unsigned char field13;
    CGFloat field14;
    unsigned char field15;
    unsigned char field16;
    unsigned char field17;
    unsigned char field18;
    vector<Rose::ResponderSuperframeRxPacketInfo, std::allocator<Rose::ResponderSuperframeRxPacketInfo>> field19;
} ResponderSuperframeCompleteEvent;

typedef struct optional<double> {
    unk field0;
    char field1;
    CGFloat field2;
    BOOL field3;
} optional<double>;

typedef struct ResponderSuperframeStats {
    CGFloat field0;
    unsigned short field1;
    ResponderSuperframeCompleteEvent field2;
    optional<double> field3;
} ResponderSuperframeStats;

typedef struct shared_ptr<rose::ResponderSuperframeStats> {
} // Error Processing Struct Fields

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

typedef struct DaemonBackedService {
    id _connection;
} DaemonBackedService;

typedef struct BtProxData {
    CGFloat field0;
    CGFloat field1;
    unsigned int field2;
} BtProxData;

typedef struct __split_buffer<BtProxData *, std::allocator<BtProxData *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<BtProxData>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<BtProxData>>;

typedef struct deque<BtProxData, std::allocator<BtProxData>> {
    __split_buffer<BtProxData *, std::allocator<BtProxData *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<BtProxData>> __size_;
} deque<BtProxData, std::allocator<BtProxData>>;

typedef struct Estimator {
} // Error Processing Struct Fields

typedef struct __compressed_pair<SingleThresholdProx::Estimator *, std::default_delete<SingleThresholdProx::Estimator>> {
    Estimator __value_;
} __compressed_pair<SingleThresholdProx::Estimator *, std::default_delete<SingleThresholdProx::Estimator>>;

typedef struct unique_ptr<SingleThresholdProx::Estimator, std::default_delete<SingleThresholdProx::Estimator>> {
    __compressed_pair<SingleThresholdProx::Estimator *, std::default_delete<SingleThresholdProx::Estimator>> __ptr_;
} unique_ptr<SingleThresholdProx::Estimator, std::default_delete<SingleThresholdProx::Estimator>>;

typedef struct NeighborMeasurements {
    basic_string<char, std::char_traits<char>, std::allocator<char>> field0;
    CGFloat field1;
    BOOL field2;
    BOOL field3;
    CGFloat field4;
    CGFloat field5;
    BOOL field6;
    int field7;
    BOOL field8;
    CGFloat field9;
    BOOL field10;
    BOOL field11;
} NeighborMeasurements;

typedef struct vector<NeighborMeasurements, std::allocator<NeighborMeasurements>> {
} // Error Processing Struct Fields

typedef struct SharingImportanceMeasurements {
    vector<NeighborMeasurements, std::allocator<NeighborMeasurements>> userSharingInput;
} SharingImportanceMeasurements;

typedef struct SharingImportanceManager {
} // Error Processing Struct Fields

typedef struct __compressed_pair<SharingImportanceManager *, std::default_delete<SharingImportanceManager>> {
    SharingImportanceManager __value_;
} __compressed_pair<SharingImportanceManager *, std::default_delete<SharingImportanceManager>>;

typedef struct unique_ptr<SharingImportanceManager, std::default_delete<SharingImportanceManager>> {
    __compressed_pair<SharingImportanceManager *, std::default_delete<SharingImportanceManager>> __ptr_;
} unique_ptr<SharingImportanceManager, std::default_delete<SharingImportanceManager>>;

