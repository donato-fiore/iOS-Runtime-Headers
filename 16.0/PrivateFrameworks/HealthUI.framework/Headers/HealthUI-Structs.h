typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

typedef struct HKLinearTransform {
    CGFloat offset;
    CGFloat scale;
} HKLinearTransform;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

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

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct APPLE_116 {
    BOOL earliestStartDate;
    BOOL latestEndDate;
} APPLE_116;

typedef struct APPLE_178 {
    BOOL latestSupportedVersion;
    BOOL minimumSupportedVersion;
    BOOL isUsingWheelchair;
} APPLE_178;

typedef struct APPLE_145 {
    BOOL discoveryDateData;
    BOOL diagramStyle;
} APPLE_145;

typedef struct APPLE_159 {
    BOOL algorithmVersionRawValue;
    BOOL classificationRawValue;
    BOOL timestampData;
} APPLE_159;

typedef struct APPLE_152 {
    BOOL classificationRawValue;
    BOOL dateData;
} APPLE_152;

typedef struct APPLE_156 {
    BOOL value;
} APPLE_156;

typedef struct pthread_override_s {
} // Error Processing Struct Fields

typedef struct APPLE_170 {
    BOOL latestSupportedVersion;
    BOOL minimumSupportedVersion;
} APPLE_170;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _HKLocationSpan {
    CGFloat field0;
    CGFloat field1;
} _HKLocationSpan;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct APPLE_161 {
    BOOL dataCount;
} APPLE_161;

typedef struct APPLE_109 {
    BOOL endDate;
    BOOL startDate;
} APPLE_109;

typedef struct CACornerRadii {
    CGSize field0;
    CGSize field1;
    CGSize field2;
    CGSize field3;
} CACornerRadii;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct _CARenderRendererInfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
} _CARenderRendererInfo;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _CAPropertyInfo {
    unsigned int field0;
    BOOL field1;
    BOOL field2;
    SEL field3;
    char * field4;
    __CFString field5;
} _CAPropertyInfo;

typedef struct _CALayerIvars {
    int refcount;
    unsigned int magic;
    void layer;
    void _objc_observation_info;
} _CALayerIvars;

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct HKRange {
    CGFloat field0;
    CGFloat field1;
} HKRange;

typedef struct HKAxisMinMaxDefinition {
    CGFloat field0;
    CGFloat field1;
} HKAxisMinMaxDefinition;

typedef struct APPLE_157 {
    BOOL timestampData;
} APPLE_157;

typedef struct _NSStoredContainerUsage {
    CGRect field0;
    CGRect field1;
    ? field2;
    CGRect field3;
    _NSRange field4;
} _NSStoredContainerUsage;

typedef struct __lmFlags {
    BOOL containersAreFull;
    BOOL glyphsMightDrawOutsideLines;
    BOOL backgroundLayoutEnabled;
    BOOL resizingInProgress;
    BOOL allowScreenFonts;
    BOOL cachedRectArrayInUse;
    BOOL displayInvalidationInProgress;
    BOOL insertionPointNeedsUpdate;
    BOOL layoutManagerInDirtyList;
    BOOL originalFontOverride;
    BOOL showInvisibleCharacters;
    BOOL showControlCharacters;
    BOOL delegateRespondsToDidInvalidate;
    BOOL delegateRespondsToDidComplete;
    BOOL glyphFormat;
    BOOL textStorageRespondsToIsEditing;
    BOOL notifyEditedInProgress;
    BOOL containersChanged;
    BOOL isGeneratingGlyphs;
    BOOL hasNonGeneratedGlyphData;
    BOOL syncAlignmentToDirection;
    BOOL defaultAttachmentScaling;
    BOOL usesFontLeading;
    BOOL seenRightToLeft;
    BOOL ignoresViewTransformations;
    BOOL needToFlushGlyph;
    BOOL flipsIfNeeded;
    BOOL allowNonContig;
    BOOL useNonContig;
    BOOL inBackgroundLayout;
} __lmFlags;

typedef struct APPLE_141 {
    BOOL dataType;
    BOOL endDate;
    BOOL int64Value;
    BOOL startDate;
} APPLE_141;

typedef struct APPLE_151 {
    BOOL contacts;
} APPLE_151;

typedef struct APPLE_121 {
    BOOL total;
} APPLE_121;

typedef struct APPLE_120 {
    BOOL dateData;
} APPLE_120;

typedef struct _UICollectionViewVisibleCellsUpdateResult {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    BOOL field3;
} _UICollectionViewVisibleCellsUpdateResult;

typedef struct APPLE_163 {
    BOOL dataPresent;
} APPLE_163;

typedef struct APPLE_154 {
    BOOL dayIndex;
    BOOL duration;
} APPLE_154;

typedef struct APPLE_101 {
    BOOL dateData;
    BOOL valueClamped;
} APPLE_101;

typedef struct __CTServerConnection {
} // Error Processing Struct Fields

typedef struct APPLE_139 {
    BOOL categoryValue;
    BOOL dataType;
    BOOL endDate;
    BOOL latestSupportedVersion;
    BOOL minimumSupportedVersion;
    BOOL startDate;
} APPLE_139;

typedef struct APPLE_181 {
    BOOL diagnostic;
    BOOL timestampData;
} APPLE_181;

typedef struct HKStepSizeTableEntryDefn {
    CGFloat field0;
    CGFloat field1;
} HKStepSizeTableEntryDefn;

typedef struct APPLE_148 {
    BOOL age;
    BOOL biologicalSex;
    BOOL cardioFitnessLevelEnabled;
} APPLE_148;

typedef struct APPLE_169 {
    BOOL activityMoveMode;
} APPLE_169;

typedef struct APPLE_107 {
    BOOL averageDailyCount;
    BOOL count;
    BOOL endDate;
    BOOL startDate;
    BOOL meetsGoal;
} APPLE_107;

typedef struct APPLE_166 {
    BOOL type;
} APPLE_166;

typedef struct APPLE_180 {
    BOOL daysOffsetFromCalendarMethod;
    BOOL endMean;
    BOOL endStandardDeviation;
    BOOL predictionPrimarySource;
    BOOL startMean;
    BOOL startStandardDeviation;
    BOOL isPartiallyLogged;
} APPLE_180;

typedef struct APPLE_164 {
    BOOL latestSupportedVersion;
    BOOL minimumSupportedVersion;
} APPLE_164;

typedef struct APPLE_112 {
    BOOL categoryValue;
    BOOL dateData;
} APPLE_112;

typedef struct APPLE_123 {
    BOOL latestSupportedVersion;
    BOOL minimumSupportedVersion;
} APPLE_123;

typedef struct APPLE_117 {
    BOOL category;
} APPLE_117;

typedef struct APPLE_174 {
    BOOL numberIntValue;
} APPLE_174;

typedef struct APPLE_134 {
    BOOL asleepDuration;
    BOOL endOfSleepTimeIntervalSinceReferenceDate;
    BOOL inBedDuration;
} APPLE_134;

typedef struct APPLE_103 {
    BOOL dateData;
} APPLE_103;

typedef struct APPLE_167 {
    BOOL endDate;
    BOOL startDate;
} APPLE_167;

typedef struct APPLE_149 {
    BOOL dateData;
    BOOL timeInterval;
} APPLE_149;

typedef struct APPLE_126 {
    BOOL value;
} APPLE_126;

typedef struct APPLE_175 {
    BOOL latestSupportedVersion;
    BOOL minimumSupportedVersion;
} APPLE_175;

typedef struct APPLE_108 {
    BOOL sectionType;
} APPLE_108;

typedef struct CLLocationCoordinate2D {
    CGFloat latitude;
    CGFloat longitude;
} CLLocationCoordinate2D;

typedef struct _WDActivitySummaryAverages {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
} _WDActivitySummaryAverages;

typedef struct APPLE_100 {
    BOOL count;
    BOOL endDate;
    BOOL startDate;
} APPLE_100;

typedef struct APPLE_140 {
    BOOL latestSupportedVersion;
    BOOL minimumSupportedVersion;
} APPLE_140;

typedef struct APPLE_118 {
    BOOL endDate;
    BOOL startDate;
} APPLE_118;

typedef struct APPLE_173 {
    BOOL count;
    BOOL dataType;
    BOOL latestSupportedVersion;
    BOOL minimumSupportedVersion;
} APPLE_173;

typedef struct APPLE_162 {
    BOOL activityMoveMode;
    BOOL creationDate;
    BOOL dateData;
    BOOL endDate;
    BOOL startDate;
    BOOL hasEverHadAWatch;
} APPLE_162;

typedef struct APPLE_179 {
    BOOL day;
    BOOL era;
    BOOL hour;
    BOOL minute;
    BOOL month;
    BOOL nanosecond;
    BOOL quarter;
    BOOL second;
    BOOL weekOfMonth;
    BOOL weekOfYear;
    BOOL weekday;
    BOOL weekdayOrdinal;
    BOOL year;
    BOOL yearForWeekOfYear;
} APPLE_179;

typedef struct IncrementalSearchResultsDefn {
    NSUInteger field0;
    _NSRange field1;
} IncrementalSearchResultsDefn;

typedef struct APPLE_115 {
    BOOL valueClamped;
} APPLE_115;

typedef struct APPLE_150 {
    BOOL category;
    BOOL latestSupportedVersion;
    BOOL minimumSupportedVersion;
    BOOL isPinned;
} APPLE_150;

typedef struct APPLE_128 {
    BOOL timestampData;
    BOOL hasImage;
} APPLE_128;

typedef struct APPLE_144 {
    BOOL daysAggregated;
    BOOL lastUpdatedDateData;
    BOOL secondsListened;
} APPLE_144;

typedef struct APPLE_143 {
    BOOL activeAlgorithmVersionRawValue;
    BOOL count;
} APPLE_143;

typedef struct APPLE_129 {
    BOOL algorithmVersionRawValue;
    BOOL classificationRawValue;
    BOOL privateSymptoms;
    BOOL symptomsStatusRawValue;
} APPLE_129;

typedef struct APPLE_155 {
    BOOL latestSupportedVersion;
    BOOL minimumSupportedVersion;
} APPLE_155;

typedef struct APPLE_106 {
    BOOL baselineRelativeValueState;
    BOOL dataCount;
    BOOL dataType;
    BOOL endDate;
    BOOL startDate;
} APPLE_106;

typedef struct APPLE_153 {
    BOOL classificationRawValue;
} APPLE_153;

typedef struct APPLE_171 {
    BOOL endDate;
    BOOL firstWeekday;
    BOOL startDate;
    BOOL type;
} APPLE_171;

