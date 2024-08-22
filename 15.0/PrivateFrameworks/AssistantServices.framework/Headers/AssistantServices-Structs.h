typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _mutationFlags {
    BOOL isDirty;
    BOOL hasNearbyProductType;
    BOOL hasProximity;
    BOOL hasAlarmFiring;
    BOOL hasTimerFiring;
    BOOL hasPlaybackState;
    BOOL hasPlaybackRecency;
    BOOL hasHomeAnnouncementState;
    BOOL hasHomeAnnouncementRecency;
    BOOL hasNearbyDevicesRequestIdentifier;
    BOOL hasTargetedResult;
    BOOL hasContextIdentifier;
} _mutationFlags;

typedef struct ? {
    BOOL didRequestForBTLEScan;
    BOOL didRequestForBTLEAdvertisement;
} ?;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct atomic_flag {
    uint8_t _Value;
    BOOL field1;
} atomic_flag;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _flags {
    BOOL delegateRespondsToDidReceiveNotificationWithToken;
    BOOL delegateRespondsToDidChangeStateFromTo;
} _flags;

typedef struct AudioStreamPacketDescription {
} // Error Processing Struct Fields

typedef struct AudioQueueBuffer {
    unsigned int field0;
    void field1;
    unsigned int field2;
    void field3;
    unsigned int field4;
    AudioStreamPacketDescription field5;
    unsigned int field6;
} AudioQueueBuffer;

typedef struct AudioStreamBasicDescription {
    CGFloat field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
} AudioStreamBasicDescription;

typedef struct OpaqueAudioComponentInstance {
} // Error Processing Struct Fields

typedef struct AvailabilityState {
    BOOL availabilityIsKnown;
    BOOL isAvailable;
} AvailabilityState;

typedef struct MyriadMetricsDataV1 {
    unsigned char field0;
    NSUInteger field1;
    unsigned char field2;
    NSUInteger field3;
    unsigned char field4;
    CGFloat field5;
    CGFloat field6;
    unsigned char field7;
    unsigned char field8;
    unsigned char field9;
    unsigned char field10;
    unsigned char field11;
    unsigned char field12;
    CGFloat field13;
    unsigned char field14;
    unsigned char field15;
    unsigned char field16;
    unsigned char field17;
    unsigned char field18;
    unsigned char field19;
    unsigned char field20;
} MyriadMetricsDataV1;

typedef struct myrAccessoryMessage {
    unsigned char version;
    NSUInteger requestType;
    NSUInteger session;
    CGFloat voiceTriggerEndTime;
    unsigned short audioHash;
    unsigned char goodnessScore;
    unsigned char userConfidenceScore;
    unsigned char tieBreaker;
    unsigned char deviceClass;
    unsigned char deviceGroup;
    unsigned char productType;
    unsigned char electionDecision;
    unsigned char emergencyHandled;
    unsigned char ack;
} myrAccessoryMessage;

typedef struct __CFNotificationCenter {
} // Error Processing Struct Fields

