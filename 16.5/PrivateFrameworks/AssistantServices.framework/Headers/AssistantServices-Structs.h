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

typedef struct AFPowerContext {
    NSUInteger cpuContext;
    NSUInteger aneContext;
    NSUInteger gpuContext;
} AFPowerContext;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __CFNotificationCenter {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct atomic_flag {
    uint8_t _Value;
    BOOL field1;
} atomic_flag;

typedef struct _flags {
    BOOL delegateRespondsToDidReceiveNotificationWithToken;
    BOOL delegateRespondsToDidChangeStateFromTo;
} _flags;

typedef struct MyriadMetricsDataV1 {
    unsigned char version;
    NSUInteger sessionId;
    unsigned char eventType;
    NSUInteger requestType;
    unsigned char state;
    CGFloat advDelay;
    CGFloat advInterval;
    unsigned char coordinationAllowed;
    unsigned char winnerGoodnessScore;
    unsigned char winnerProductType;
    unsigned char winnerDeviceClass;
    unsigned char homepodInvolved;
    unsigned char previousDecision;
    CGFloat previousDecisionTime;
    unsigned char deviceGroup;
    unsigned char decision;
    unsigned char lateToElection;
    unsigned char electionParticipantGoodnessScore;
    unsigned char electionParticipantDeviceType;
    unsigned char electionParticipantProductType;
    unsigned char electionParticipantCount;
} MyriadMetricsDataV1;

typedef struct AvailabilityState {
    BOOL availabilityIsKnown;
    BOOL isAvailable;
} AvailabilityState;

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

