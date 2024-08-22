typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    unsigned int val;
} ?;

typedef struct __IOHIDDevice {
} // Error Processing Struct Fields

typedef struct __IOHIDServiceClient {
} // Error Processing Struct Fields

typedef struct __IOHIDEventSystemClient {
} // Error Processing Struct Fields

typedef struct __IOHIDEvent {
} // Error Processing Struct Fields

typedef struct BTSessionImpl {
} // Error Processing Struct Fields

typedef struct BTAccessoryManagerImpl {
} // Error Processing Struct Fields

typedef struct BTDeviceImpl {
} // Error Processing Struct Fields

typedef struct BTLocalDeviceImpl {
} // Error Processing Struct Fields

typedef struct AXBColorFilterDescription {
    CGFloat field0;
} AXBColorFilterDescription;

typedef struct __CFRunLoopSource {
} // Error Processing Struct Fields

typedef struct __CFMachPort {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __IOHIDManager {
} // Error Processing Struct Fields

typedef struct objc_method {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct __IOHIDValue {
} // Error Processing Struct Fields

typedef struct __GSKeyboard {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct os_activity_scope_state_s {
    NSUInteger opaque;
} os_activity_scope_state_s;

typedef struct MIDIPacket {
    NSUInteger field0;
    unsigned short field1;
    unsigned char field2;
} MIDIPacket;

typedef struct MIDIPacketList {
    unsigned int field0;
    MIDIPacket field1;
} MIDIPacketList;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct MIDIObjectPropertyChangeNotification {
} // Error Processing Struct Fields

typedef struct MIDIIOErrorNotification {
    int field0;
    unsigned int field1;
    unsigned int field2;
    int field3;
} MIDIIOErrorNotification;

typedef struct MIDIObjectAddRemoveNotification {
    int field0;
    unsigned int field1;
    unsigned int field2;
    int field3;
    unsigned int field4;
    int field5;
} MIDIObjectAddRemoveNotification;

typedef struct _AXEventDataStorage {
    NSInteger eventSenderIdentifier;
    NSInteger page;
    NSInteger usage;
    NSInteger modifierFlags;
    float eventValue1;
    float eventValue2;
} _AXEventDataStorage;

typedef struct AXLogColorTheme {
    NSInteger errorColor;
    NSInteger warningColor;
    NSInteger infoColor;
    NSInteger debugColor;
} AXLogColorTheme;

