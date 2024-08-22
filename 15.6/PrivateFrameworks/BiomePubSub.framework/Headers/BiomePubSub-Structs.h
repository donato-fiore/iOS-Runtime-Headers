typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct os_unfair_recursive_lock_s {
    os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
} os_unfair_recursive_lock_s;

typedef struct hll_state {
    unsigned char field0;
} hll_state;

typedef struct ? {
    float list;
    NSUInteger count;
    NSUInteger size;
} ?;

