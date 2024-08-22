typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL shouldBypassLowPassFilter;
    float volumeForLowPassFilterGlobalGain;
    float effectMix;
} ?;

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

typedef struct AudioBuffer {
    unsigned int field0;
    unsigned int field1;
    void field2;
} AudioBuffer;

typedef struct AudioBufferList {
    unsigned int field0;
    AudioBuffer field1;
} AudioBufferList;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct SMPTETime {
    short mSubframes;
    short mSubframeDivisor;
    unsigned int mCounter;
    unsigned int mType;
    unsigned int mFlags;
    short mHours;
    short mMinutes;
    short mSeconds;
    short mFrames;
} SMPTETime;

typedef struct AudioTimeStamp {
    CGFloat mSampleTime;
    NSUInteger mHostTime;
    CGFloat mRateScalar;
    NSUInteger mWordClockTime;
    SMPTETime mSMPTETime;
    unsigned int mFlags;
    unsigned int mReserved;
} AudioTimeStamp;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

