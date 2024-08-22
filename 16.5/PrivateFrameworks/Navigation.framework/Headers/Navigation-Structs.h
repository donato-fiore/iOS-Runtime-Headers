typedef struct ? {
    CGFloat latitude;
    CGFloat longitude;
} ?;

typedef struct PolylineCoordinate {
    unsigned int index;
    float offset;
} PolylineCoordinate;

typedef struct GEOPolylineCoordinateRange {
    PolylineCoordinate start;
    PolylineCoordinate end;
} GEOPolylineCoordinateRange;

typedef struct Matrix<double, 2, 1> {
    CGFloat _e;
} Matrix<double, 2, 1>;

typedef struct CLLocationCoordinate2D {
    CGFloat latitude;
    CGFloat longitude;
} CLLocationCoordinate2D;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_state_hints_s {
    unsigned int field0;
    char * field1;
    unsigned int field2;
    unsigned int field3;
} os_state_hints_s;

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct LineSegment<double, 2> {
    Matrix<double, 2, 1> _origin;
    Matrix<double, 2, 1> _direction;
} LineSegment<double, 2>;

typedef struct _MNRouteConvergencePoint {
    ? field0;
    ? field1;
    ? field2;
    PolylineCoordinate field3;
    PolylineCoordinate field4;
    BOOL field5;
    BOOL field6;
} _MNRouteConvergencePoint;

typedef struct GEOTimepoint {
    CGFloat _currentUserTime;
    CGFloat _time;
    int _type;
    ? _has;
} GEOTimepoint;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

