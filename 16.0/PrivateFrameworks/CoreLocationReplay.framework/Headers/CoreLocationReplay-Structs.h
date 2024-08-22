typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    CGFloat field0;
    CGFloat field1;
} ?;

typedef struct CLDaemonLocation {
    int field0;
    ? field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
    CGFloat field9;
    int field10;
    CGFloat field11;
    int field12;
    ? field13;
    CGFloat field14;
    int field15;
    unsigned int field16;
    int field17;
    int field18;
    int field19;
    CGFloat field20;
    BOOL field21;
} CLDaemonLocation;

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic_flag {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic_flag;

typedef struct SpinLock {
    atomic_flag flag_;
} SpinLock;

typedef struct VioData {
    int tracking_state;
    CLVisionTime t_origin;
    CLVisionTime t;
    DevicePose pose_camark2vio;
    DevicePose transform_camark2imu;
    MatrixMxNT<3UL, 1UL, double> v_vio;
    MatrixMxNT<3UL, 3UL, double> v_vio_cov;
    BOOL is_delta_p_vio_valid;
    MatrixMxNT<3UL, 1UL, double> delta_p_vio;
    MatrixMxNT<3UL, 3UL, double> delta_p_vio_cov;
    CGFloat delta_p_vio_time_interval;
    BOOL is_course_vio_valid;
    CGFloat course_vio;
    CGFloat course_vio_cov;
    BOOL is_synced;
} VioData;

typedef struct vector<clv::fusion::VioData, std::allocator<clv::fusion::VioData>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData> *, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData>>> {
    void __value_;
} __compressed_pair<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData> *, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData>>>;

typedef struct vector<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData>, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData>>> {
    void __begin_;
    void __end_;
    __compressed_pair<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData> *, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData>>> __end_cap_;
} vector<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData>, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData>>>;

typedef struct __compressed_pair<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData> *, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData>>> {
    void __value_;
} __compressed_pair<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData> *, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData>>>;

typedef struct vector<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData>, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData>>> {
    void __begin_;
    void __end_;
    __compressed_pair<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData> *, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData>>> __end_cap_;
} vector<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData>, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData>>>;

typedef struct array<double, 4UL> {
    CGFloat __elems_;
} array<double, 4UL>;

typedef struct bitset<4UL> {
    NSUInteger __first_;
} bitset<4UL>;

typedef struct QuaternionT<double> {
    unk _vptr$MatrixMxNT;
    array<double, 4UL> data_;
    bitset<4UL> visited_;
} QuaternionT<double>;

typedef struct array<double, 9UL> {
    CGFloat __elems_;
} array<double, 9UL>;

typedef struct bitset<9UL> {
    NSUInteger __first_;
} bitset<9UL>;

typedef struct MatrixMxNT<3UL, 3UL, double> {
    unk _vptr$MatrixMxNT;
    array<double, 9UL> data_;
    bitset<9UL> visited_;
} MatrixMxNT<3UL, 3UL, double>;

typedef struct MatrixMxNT<4UL, 1UL, double> {
    unk _vptr$MatrixMxNT;
    array<double, 4UL> data_;
    bitset<4UL> visited_;
} MatrixMxNT<4UL, 1UL, double>;

typedef struct array<double, 3UL> {
    CGFloat __elems_;
} array<double, 3UL>;

typedef struct bitset<3UL> {
    NSUInteger __first_;
} bitset<3UL>;

typedef struct MatrixMxNT<3UL, 1UL, double> {
    unk _vptr$MatrixMxNT;
    array<double, 3UL> data_;
    bitset<3UL> visited_;
} MatrixMxNT<3UL, 1UL, double>;

typedef struct array<double, 36UL> {
    CGFloat __elems_;
} array<double, 36UL>;

typedef struct bitset<36UL> {
    NSUInteger __first_;
} bitset<36UL>;

typedef struct MatrixMxNT<6UL, 6UL, double> {
    unk _vptr$MatrixMxNT;
    array<double, 36UL> data_;
    bitset<36UL> visited_;
} MatrixMxNT<6UL, 6UL, double>;

typedef struct DevicePose {
    BOOL is_deterministic_;
    QuaternionT<double> q_;
    MatrixMxNT<3UL, 3UL, double> R_;
    MatrixMxNT<4UL, 1UL, double> r_;
    MatrixMxNT<3UL, 1UL, double> p_;
    MatrixMxNT<6UL, 6UL, double> cov_;
} DevicePose;

typedef struct CLVisionTime {
    CGFloat cf_abs;
    CGFloat mach_abs;
    CGFloat mach_cont;
} CLVisionTime;

typedef struct LocData {
    int type;
    CLVisionTime t;
    MatrixMxNT<3UL, 1UL, double> p_lla;
    MatrixMxNT<3UL, 1UL, double> p_ecef;
    CGFloat p_horz_acc;
    CGFloat p_vert_acc;
    CGFloat course_enu;
    CGFloat course_enu_acc;
    CGFloat speed;
    CGFloat speed_acc;
    BOOL is_p_enu_valid;
    MatrixMxNT<3UL, 1UL, double> p_origin_lla;
    MatrixMxNT<3UL, 1UL, double> p_enu;
    MatrixMxNT<3UL, 3UL, double> p_enu_cov;
    BOOL is_course_enu_from_pos_valid;
    CGFloat course_enu_from_pos;
    CGFloat course_enu_from_pos_cov;
} LocData;

typedef struct LocationFuserMeasurement<clv::fusion::LocData> {
    LocData loc;
    VioData vio;
} LocationFuserMeasurement<clv::fusion::LocData>;

typedef struct LocationFuserState {
    BOOL initByFrames;
    BOOL initByPoints;
    DevicePose transform_vio2enu;
    DevicePose pose_camark2enu;
    MatrixMxNT<3UL, 1UL, double> p_origin_lla;
    MatrixMxNT<3UL, 1UL, double> p_origin_vio;
    LocData location;
    int status;
    BOOL is_heading_fused;
    CGFloat heading_enu;
    CGFloat heading_enu_acc;
    LocationFuserMeasurement<clv::fusion::LocData> locMeas;
} LocationFuserState;

typedef struct vector<clv::fusion::LocationFuserState, std::allocator<clv::fusion::LocationFuserState>> {
} // Error Processing Struct Fields

typedef struct VlfData {
    CLVisionTime t;
    DevicePose pose_cam3dv2ecef;
    DevicePose pose_camark2ecef;
    MatrixMxNT<3UL, 1UL, double> p_lla;
    CGFloat confidence;
    BOOL is_p_enu_valid;
    MatrixMxNT<3UL, 1UL, double> p_origin_lla;
    DevicePose pose_camark2enu;
} VlfData;

typedef struct CLVisionLocationFuser {
    BOOL activated_;
    SpinLock visionLock_;
    vector<clv::fusion::VioData, std::allocator<clv::fusion::VioData>> vioBuffer_;
    vector<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData>, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData>>> vlfBuffer_;
    vector<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData>, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData>>> locBuffer_;
    LocationFuserState initState_;
    LocationFuserState lastState_;
    vector<clv::fusion::LocationFuserState, std::allocator<clv::fusion::LocationFuserState>> prevStates_;
    LocationFuserState currState_;
    VioData lastValidVio_;
    VlfData lastValidVlf_;
    LocData lastValidLoc_;
    NSUInteger numReceivedVlf_;
} CLVisionLocationFuser;

