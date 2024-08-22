typedef struct _NSZone {
} // Error Processing Struct Fields

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

typedef struct ? {
    CGFloat width;
    CGFloat height;
} ?;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct os_unfair_recursive_lock_s {
    os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
} os_unfair_recursive_lock_s;

