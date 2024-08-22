typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct ? {
    CGFloat beginTime;
    CGFloat endTime;
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

typedef struct AudioUnitMeterClipping {
    float peakValueSinceLastCall;
    unsigned char sawInfinity;
    unsigned char sawNotANumber;
} AudioUnitMeterClipping;

typedef struct PowerMeter {
    CGFloat mSampleRate;
    CGFloat mPeakDecay1;
    CGFloat mPeakDecay;
    CGFloat mDecay1;
    CGFloat mDecay;
    int mPrevBlockSize;
    int mPeakHoldCount;
    CGFloat mMaxPeak;
    AudioUnitMeterClipping mClipping;
} PowerMeter;

typedef struct __compressed_pair<float *, std::allocator<float> > {
    float __value_;
} __compressed_pair<float *, std::allocator<float> >;

typedef struct vector<float, std::allocator<float> > {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float> > __end_cap_;
} vector<float, std::allocator<float> >;

typedef struct _fetchResultsControllerFlags {
    BOOL _changedResultsSinceLastSave;
    BOOL _hasBatchedArrayResults;
    BOOL _hasMutableFetchedResults;
    BOOL _hasSections;
    BOOL _includesSubentities;
    BOOL _sendDidChangeContentDiffNotifications;
    BOOL _sendDidChangeContentNotifications;
    BOOL _sendDidChangeContentSnapshotNotifications;
    BOOL _sendObjectChangeNotifications;
    BOOL _sendSectionChangeNotifications;
    BOOL _sendSectionIndexTitleForSectionName;
    BOOL _sendWillChangeContentNotifications;
    BOOL _usesNonpersistedProperties;
    BOOL _reservedFlags;
} _fetchResultsControllerFlags;

typedef struct _moFactoryClassFlags {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} _moFactoryClassFlags;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct ct_green_tea_logger_s {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

