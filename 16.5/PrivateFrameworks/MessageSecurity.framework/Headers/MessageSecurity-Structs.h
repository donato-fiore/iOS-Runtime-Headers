typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __SecCertificate {
} // Error Processing Struct Fields

typedef struct heim_base_data {
    NSUInteger field0;
    void field1;
} heim_base_data;

typedef struct heim_oid {
    NSUInteger length;
    unsigned int components;
} heim_oid;

typedef struct AlgorithmIdentifier {
} // Error Processing Struct Fields

typedef struct KeyTransRecipientInfo {
    int field0;
    heim_base_data field1;
    AlgorithmIdentifier field2;
    heim_base_data field3;
} KeyTransRecipientInfo;

typedef struct ccdigest_info {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    char * field4;
    void field5;
    unk field6;
    unk field7;
    int field8;
} ccdigest_info;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct heim_integer {
    NSUInteger field0;
    void field1;
    int field2;
} heim_integer;

typedef struct IssuerAndSerialNumber {
    heim_base_data field0;
    heim_integer field1;
} IssuerAndSerialNumber;

typedef struct __SecIdentity {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct ? {
    NSUInteger field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
} ?;

typedef struct Attribute_value {
} // Error Processing Struct Fields

typedef struct Attribute {
    heim_oid field0;
    Attribute_value field1;
} Attribute;

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __SecKeyDescriptor {
} // Error Processing Struct Fields

typedef struct __SecKey {
    __CFRuntimeBase field0;
    __SecKeyDescriptor field1;
    void field2;
} __SecKey;

typedef struct SignerInfo {
} // Error Processing Struct Fields

typedef struct __SecTrust {
} // Error Processing Struct Fields

