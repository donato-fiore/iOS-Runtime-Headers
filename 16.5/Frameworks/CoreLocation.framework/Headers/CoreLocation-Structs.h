typedef struct ? {
    CGFloat latitude;
    CGFloat longitude;
} ?;

typedef struct CLLocationCoordinate2D {
    CGFloat latitude;
    CGFloat longitude;
} CLLocationCoordinate2D;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CLConnectionClient {
} // Error Processing Struct Fields

typedef struct CLAssertionInternal {
    id field0;
    CLConnectionClient field1;
} CLAssertionInternal;

typedef struct os_state_hints_s {
    unsigned int field0;
    char * field1;
    unsigned int field2;
    unsigned int field3;
} os_state_hints_s;

typedef struct _CLLocationManagerStateTrackerState {
    CGFloat distanceFilter;
    CGFloat desiredAccuracy;
    BOOL updatingLocation;
    BOOL requestingLocation;
    BOOL requestingRanging;
    BOOL updatingRanging;
    BOOL updatingHeading;
    CGFloat headingFilter;
    BOOL allowsLocationPrompts;
    BOOL allowsAlteredAccessoryLocations;
    BOOL dynamicAccuracyReductionEnabled;
    BOOL previousAuthorizationStatusValid;
    int previousAuthorizationStatus;
    BOOL limitsPrecision;
    NSInteger activityType;
    int pausesLocationUpdatesAutomatically;
    BOOL paused;
    BOOL allowsBackgroundLocationUpdates;
    BOOL showsBackgroundLocationIndicator;
    BOOL allowsMapCorrection;
    BOOL batchingLocation;
    BOOL updatingVehicleSpeed;
    BOOL updatingVehicleHeading;
    BOOL matchInfoEnabled;
    BOOL groundAltitudeEnabled;
    BOOL fusionInfoEnabled;
    BOOL courtesyPromptNeeded;
    BOOL isAuthorizedForWidgetUpdates;
    BOOL trackRunInfoEnabled;
} _CLLocationManagerStateTrackerState;

typedef struct __CLClient {
} // Error Processing Struct Fields

typedef struct CLGnssDisablementAssertionInternal {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CLGnssDisablementAssertionInternal *, std::default_delete<CLGnssDisablementAssertionInternal>> {
    CLGnssDisablementAssertionInternal __value_;
} __compressed_pair<CLGnssDisablementAssertionInternal *, std::default_delete<CLGnssDisablementAssertionInternal>>;

typedef struct unique_ptr<CLGnssDisablementAssertionInternal, std::default_delete<CLGnssDisablementAssertionInternal>> {
    __compressed_pair<CLGnssDisablementAssertionInternal *, std::default_delete<CLGnssDisablementAssertionInternal>> __ptr_;
} unique_ptr<CLGnssDisablementAssertionInternal, std::default_delete<CLGnssDisablementAssertionInternal>>;

typedef struct CLConnectionMessage {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<CLConnectionMessage> {
    CLConnectionMessage field0;
    __shared_weak_count field1;
} shared_ptr<CLConnectionMessage>;

typedef struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> {
    __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> __ptr_;
} unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>>;

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

typedef struct CLRegulatoryConfigInternal {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CLRegulatoryConfigInternal *, std::default_delete<CLRegulatoryConfigInternal>> {
    CLRegulatoryConfigInternal __value_;
} __compressed_pair<CLRegulatoryConfigInternal *, std::default_delete<CLRegulatoryConfigInternal>>;

typedef struct unique_ptr<CLRegulatoryConfigInternal, std::default_delete<CLRegulatoryConfigInternal>> {
    __compressed_pair<CLRegulatoryConfigInternal *, std::default_delete<CLRegulatoryConfigInternal>> __ptr_;
} unique_ptr<CLRegulatoryConfigInternal, std::default_delete<CLRegulatoryConfigInternal>>;

typedef struct CLCallbackAssertionInternal {
} // Error Processing Struct Fields

typedef struct CLClientServiceTypeMaskTuple {
    NSUInteger field0;
    NSUInteger field1;
} CLClientServiceTypeMaskTuple;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct CLDistanceCalc {
    CGFloat fM;
    CGFloat fN;
    CGFloat fRefLatRads;
    CGFloat fRefLatDegs;
    CGFloat fCosRefLat;
} CLDistanceCalc;

typedef struct RouteBoundingBox {
    CGFloat fMinLatitude_deg;
    CGFloat fMaxLatitude_deg;
    CGFloat fMinLongitude_deg;
    CGFloat fMaxLongitude_deg;
    int fRows;
    int fColumns;
} RouteBoundingBox;

typedef struct __compressed_pair<std::vector<std::pair<int, int>> *, std::allocator<std::vector<std::pair<int, int>>>> {
    void __value_;
} __compressed_pair<std::vector<std::pair<int, int>> *, std::allocator<std::vector<std::pair<int, int>>>>;

typedef struct vector<std::vector<std::pair<int, int>>, std::allocator<std::vector<std::pair<int, int>>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<std::pair<int, int>> *, std::allocator<std::vector<std::pair<int, int>>>> __end_cap_;
} vector<std::vector<std::pair<int, int>>, std::allocator<std::vector<std::pair<int, int>>>>;

typedef struct RacingRouteState {
    CGFloat fLatitude_deg;
    CGFloat fLongitude_deg;
    CGFloat fAltitude_m;
    CGFloat fOdometer_m;
    CGFloat fTimestamp_s;
    CGFloat fTimeSinceStartOfRace_s;
    CGFloat fOffRouteTraveledTime_s;
    CGFloat fDistanceSinceStartOfRace_m;
    CGFloat fOffRouteTraveledDistance_m;
    CGFloat fAveragePace_s_per_m;
    CGFloat fDistanceAlongReferenceRoute_m;
} RacingRouteState;

typedef struct CLRacingRoute {
    CLDistanceCalc fDistanceCalculator;
    int fSignalEnvironmentType;
    int fWorkoutActivity;
    id fRoutePoints;
    RouteBoundingBox NSMutableArray;
    vector<std::vector<std::pair<int, int>>, std::allocator<std::vector<std::pair<int, int>>>> fRouteBoundingBox;
    RacingRouteState fRouteMatrixIndexVec;
    RacingRouteState fRaceStartPointOnCurrentRoute;
    RacingRouteState fRaceStartPointOnReferenceRoute;
    RacingRouteState fLastOnRouteDataPoint;
    BOOL fLastProjectedDataPoint;
    BOOL fRoutePointsArrayInitialized;
    BOOL fRecoveryMode;
    BOOL fRaceStartPointDetected;
    BOOL fRaceEndPointDetected;
    BOOL fUserIsOffRoute;
    BOOL fProjectedOnNearestPoint;
    BOOL fRaceSessionExpired;
    BOOL fRollingBufferReachedEndOfReferenceRoute;
    BOOL fRouteConfigurationSuccessful;
    BOOL fRacingRouteAnalyticsSent;
    BOOL fPrematureRaceEndDetected;
    BOOL fReferenceRouteTotalLengthDetermined;
    BOOL fLocationPointIsOutsideOfAcceptedRange;
    int fLocationPointNotMatched;
    int fRoutePointsBufferSize;
    int fNumberOfRoutePointsToAdd;
    int fOffRouteGraceDuration_s;
    int fMatchedPointCounter;
    int fReferenceRouteDataPointCounter;
    int fCurrentRouteDataPointCounter;
    int fOffRouteDataPointCounter;
    int fInutileDataPointCounter;
    int fRollingBufferUpdateCounter;
    int fLastMatchedPointIndex;
    int fLastMatchedPointIndexOnReferenceRoute;
    int fRollingBufferStartIndexOnReferenceRoute;
    int fMatrixCellIndexForLastMatchedPoint;
    CGFloat fRaceStartLineProximityIndex;
    CGFloat fReferenceRouteTotalLength_m;
    CGFloat fTimestampOfLastMatchedPointOnReferenceRoute_s;
    CGFloat fRegisteredTimeAtThresholdDistance_s;
    CGFloat fEndOfRaceTimeThreshold_s;
} CLRacingRoute;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

