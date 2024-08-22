typedef struct __sbuf {
    char * field0;
    int field1;
} __sbuf;

typedef struct __sFILEX {
} // Error Processing Struct Fields

typedef struct __sFILE {
    char * field0;
    int field1;
    int field2;
    short field3;
    short field4;
    __sbuf field5;
    int field6;
    void field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    __sbuf field12;
    __sFILEX field13;
    int field14;
    unsigned char field15;
    unsigned char field16;
    __sbuf field17;
    int field18;
    NSInteger field19;
} __sFILE;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __CSStore {
} // Error Processing Struct Fields

typedef struct _CSWriteUnitState {
    id field0;
    id field1;
    unk field2;
    id field3;
    unk field4;
    id field5;
} _CSWriteUnitState;

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct Unit {
    BOOL field0;
    BOOL field1;
    unsigned int field2;
    char field3;
} Unit;

typedef struct Table {
    Unit field0;
    char field1;
    NSUInteger field2;
    NSUInteger field3;
    unsigned int field4;
    unsigned int field5;
} Table;

typedef struct Data {
    unsigned int field0;
    unsigned char field1;
    unsigned char field2;
    unsigned short field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    Table field7;
} Data;

typedef struct array<unsigned int, 64UL> {
    unsigned int __elems_;
} array<unsigned int, 64UL>;

typedef struct Store {
} // Error Processing Struct Fields

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct _predicateFlags {
    BOOL _evaluationBlocked;
    BOOL _reservedPredicateFlags;
} _predicateFlags;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

