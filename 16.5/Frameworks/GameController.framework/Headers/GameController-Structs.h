typedef struct __IOHIDServiceClient {
} // Error Processing Struct Fields

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __IOHIDManager {
} // Error Processing Struct Fields

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct __CFRunLoopSource {
} // Error Processing Struct Fields

typedef struct __IOHIDEventSystemClient {
} // Error Processing Struct Fields

typedef struct __IOHIDEvent {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct _GCDevicePhysicalInputButtonInputParams {
    BOOL field0;
    float field1;
} _GCDevicePhysicalInputButtonInputParams;

typedef struct __IOHIDDevice {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct _UITraitCollectionTraitChanges {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
    BOOL field9;
} _UITraitCollectionTraitChanges;

typedef struct _UITraitCollectionChangeDescription {
    id field0;
    id field1;
    BOOL field2;
    _UITraitCollectionTraitChanges field3;
} _UITraitCollectionChangeDescription;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CATransform3D {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
    CGFloat field9;
    CGFloat field10;
    CGFloat field11;
    CGFloat field12;
    CGFloat field13;
    CGFloat field14;
    CGFloat field15;
} CATransform3D;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct PrimitiveStateEntry {
    NSUInteger field0;
} PrimitiveStateEntry;

typedef struct ObjectStateEntry {
    NSUInteger field0;
    id field1;
} ObjectStateEntry;

typedef struct pair<bool, float> {
    BOOL field0;
    float field1;
} pair<bool, float>;

typedef struct _GCDevicePhysicalInputAxisInputParams {
    BOOL field0;
    BOOL field1;
} _GCDevicePhysicalInputAxisInputParams;

typedef struct MessageHeader {
    unsigned short field0;
    unsigned short field1;
} MessageHeader;

typedef struct FixedParam {
    unsigned int field0;
    float field1;
} FixedParam;

typedef struct ItemList<FixedParam, 8> {
    unsigned int field0;
    FixedParam field1;
} ItemList<FixedParam, 8>;

typedef struct TokenAndParams {
    NSUInteger field0;
    ItemList<FixedParam, 8> field1;
} TokenAndParams;

typedef struct SequenceChannelParam {
    NSUInteger field0;
    NSUInteger field1;
    float field2;
} SequenceChannelParam;

typedef struct SequenceParam {
    unsigned short field0;
    float field1;
} SequenceParam;

typedef struct ParamPoint {
    float field0;
    float field1;
} ParamPoint;

typedef struct ItemList<ParamPoint, 16> {
    unsigned int field0;
    ParamPoint field1;
} ItemList<ParamPoint, 16>;

typedef struct HapticCommand {
    MessageHeader field0;
    unsigned int field1;
    CGFloat field2;
    NSUInteger field3;
    NSUInteger field4;
    TokenAndParams field5;
    SequenceChannelParam field6;
    SequenceParam field7;
    float field8;
    CGFloat field9;
    ItemList<ParamPoint, 16> field10;
} HapticCommand;

typedef struct GCQuaternion {
    CGFloat x;
    CGFloat y;
    CGFloat z;
    CGFloat w;
} GCQuaternion;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct BTSessionImpl {
} // Error Processing Struct Fields

typedef struct BTPairingAgentImpl {
} // Error Processing Struct Fields

typedef struct BTDiscoveryAgentImpl {
} // Error Processing Struct Fields

typedef struct UsagePage_Usage_Pair {
    NSInteger usagePage;
    NSInteger usage;
} UsagePage_Usage_Pair;

typedef struct HapticSharedMemory {
    unk _vptr$SharableMemoryBase;
    BOOL mIsOwner;
    BOOL mWasMapped;
    NSUInteger mSize;
    void mBuffer;
    unsigned int mPort;
    int mFileDesc;
    int mSerial;
    id mXPCObject;
} HapticSharedMemory;

