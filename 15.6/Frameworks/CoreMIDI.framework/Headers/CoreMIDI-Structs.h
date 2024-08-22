typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct MIDICIDeviceIdentification {
    unsigned char manufacturer;
    unsigned char family;
    unsigned char modelNumber;
    unsigned char revisionLevel;
    unsigned char reserved;
} MIDICIDeviceIdentification;

typedef struct MIDINotification {
    int field0;
    unsigned int field1;
} MIDINotification;

typedef struct LocalCIResponder {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<LocalCIResponder> {
    LocalCIResponder __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<LocalCIResponder>;

