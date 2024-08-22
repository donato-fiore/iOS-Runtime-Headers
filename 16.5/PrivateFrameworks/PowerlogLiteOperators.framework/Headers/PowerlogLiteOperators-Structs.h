typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL timestamp;
    BOOL fR1;
    BOOL fR2;
    BOOL subsId;
} ?;

typedef struct _PLBasebandHWStatsHeader {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
} _PLBasebandHWStatsHeader;

typedef struct _PLBasebandHWStatsSystem {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} _PLBasebandHWStatsSystem;

typedef struct _PLBasebandHWStatsARMPerf {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} _PLBasebandHWStatsARMPerf;

typedef struct _PLBasebandHWOnOffComponentStats {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} _PLBasebandHWOnOffComponentStats;

typedef struct _PLBasebandHWStatsMDSP {
    _PLBasebandHWOnOffComponentStats field0;
    _PLBasebandHWOnOffComponentStats field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
} _PLBasebandHWStatsMDSP;

typedef struct _PLBasebandHWStatsADSP {
    _PLBasebandHWOnOffComponentStats field0;
    _PLBasebandHWOnOffComponentStats field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
} _PLBasebandHWStatsADSP;

typedef struct _PLBasebandHWStatsUART {
    _PLBasebandHWOnOffComponentStats field0;
    _PLBasebandHWOnOffComponentStats field1;
} _PLBasebandHWStatsUART;

typedef struct _PLBasebandHWStatsRXRSSI {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} _PLBasebandHWStatsRXRSSI;

typedef struct _PLBasebandHWStatsTXPower {
    unsigned int field0;
} _PLBasebandHWStatsTXPower;

typedef struct _PLMav4BasebandHWOnOffComponentStats {
    unsigned int field0;
} _PLMav4BasebandHWOnOffComponentStats;

typedef struct _PLMav4BasebandHWStatsMDSP {
    unsigned int field0;
} _PLMav4BasebandHWStatsMDSP;

typedef struct _PLMav4BasebandHWStatsQDSP {
    unsigned int field0;
} _PLMav4BasebandHWStatsQDSP;

typedef struct _PLMav4BasebandHWStatsRX {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} _PLMav4BasebandHWStatsRX;

typedef struct _PLMav4BasebandHWStatsTX {
    unsigned int field0;
} _PLMav4BasebandHWStatsTX;

typedef struct _PLMav4BasebandHWStatsHeader {
    unsigned short field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
} _PLMav4BasebandHWStatsHeader;

typedef struct _PLMav4BasebandHWStatsSystem {
    unsigned int field0;
} _PLMav4BasebandHWStatsSystem;

typedef struct _PLMav4BasebandHWStatsARMPerf {
    unsigned int field0;
} _PLMav4BasebandHWStatsARMPerf;

typedef struct _PLMav4BasebandHWSleepVeto {
    unsigned char field0;
} _PLMav4BasebandHWSleepVeto;

typedef struct _PLMav5BasebandHWStatsRX {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} _PLMav5BasebandHWStatsRX;

typedef struct _PLMav5BasebandHWStatsTX {
    unsigned int field0;
} _PLMav5BasebandHWStatsTX;

typedef struct _PLMav5BasebandHWStatsRXSQA {
    unsigned int field0;
    unsigned int field1;
} _PLMav5BasebandHWStatsRXSQA;

typedef struct _PLMav5BasebandHWStatsProtocol {
    unsigned int field0;
} _PLMav5BasebandHWStatsProtocol;

typedef struct _PLMav5BasebandHWClocksDuration {
    unsigned int field0;
    unsigned int field1;
} _PLMav5BasebandHWClocksDuration;

typedef struct _PLMav5BasebandHWStatsRPM {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
} _PLMav5BasebandHWStatsRPM;

typedef struct _PLMav5BasebandHWStatsAPPSPerf {
    unsigned int field0;
} _PLMav5BasebandHWStatsAPPSPerf;

typedef struct _PLMav5BasebandHWAPPSSleepVeto {
    unsigned int field0;
} _PLMav5BasebandHWAPPSSleepVeto;

typedef struct _PLMav5BasebandHWStatsSleep {
    unsigned int field0;
    unsigned int field1;
} _PLMav5BasebandHWStatsSleep;

typedef struct _PLMav5BasebandHWStatsUSB {
    unsigned int field0;
} _PLMav5BasebandHWStatsUSB;

typedef struct _PLMav5BasebandHWMPSSSleepVeto {
    unsigned int field0;
} _PLMav5BasebandHWMPSSSleepVeto;

typedef struct _PLMav5BasebandHWStatsMDSP {
    unsigned int field0;
} _PLMav5BasebandHWStatsMDSP;

typedef struct _PLMav5BasebandHWStatsQDSP {
    unsigned int field0;
} _PLMav5BasebandHWStatsQDSP;

typedef struct _PLMav7BasebandHWStatsRFTech {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
} _PLMav7BasebandHWStatsRFTech;

typedef struct _PLMav7BasebandHWStatsProtocol {
    unsigned int field0;
    unsigned int field1;
} _PLMav7BasebandHWStatsProtocol;

typedef struct _PLMav7BasebandHWStatsMCPMVeto {
    unsigned int field0;
} _PLMav7BasebandHWStatsMCPMVeto;

typedef struct _PLMav7BasebandHWStatsNPAVeto {
    unsigned int field0;
    unsigned int field1;
} _PLMav7BasebandHWStatsNPAVeto;

typedef struct _PLMav7BasebandHWStatsClockStateMask {
    unsigned int field0;
} _PLMav7BasebandHWStatsClockStateMask;

typedef struct _PLMav7BasebandHWStatsHSICState {
    unsigned int field0;
} _PLMav7BasebandHWStatsHSICState;

typedef struct _PLMav7BasebandGPSDPOBin {
    unsigned int field0;
} _PLMav7BasebandGPSDPOBin;

typedef struct __IOReportSubscriptionCF {
} // Error Processing Struct Fields

typedef struct _PLTimeIntervalRange {
    CGFloat field0;
    CGFloat field1;
} _PLTimeIntervalRange;

typedef struct _PLMav2BasebandHWStatsRX {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} _PLMav2BasebandHWStatsRX;

typedef struct _PLMav2BasebandHWStatsTX {
    unsigned int field0;
} _PLMav2BasebandHWStatsTX;

typedef struct timeval32 {
    int field0;
    int field1;
} timeval32;

typedef struct in_addr {
    unsigned int field0;
} in_addr;

typedef struct in6_addr {
    unk field0;
    unsigned char field1;
    unsigned short field2;
    unsigned int field3;
} in6_addr;

typedef struct net_port_info {
    unsigned short field0;
    unsigned short field1;
    timeval32 field2;
    unsigned char field3;
    unsigned short field4;
    unsigned short field5;
    int field6;
    CGFloat field7;
    CGFloat field8;
    in_addr field9;
    in6_addr field10;
    int field11;
    CGFloat field12;
    CGFloat field13;
    in_addr field14;
    in6_addr field15;
    int field16;
    int field17;
    char field18;
    char field19;
    unsigned char field20;
    unsigned char field21;
} net_port_info;

typedef struct __NStatSource {
} // Error Processing Struct Fields

typedef struct __NStatManager {
} // Error Processing Struct Fields

typedef struct SMCAccumPlatformInfo {
} // Error Processing Struct Fields

typedef struct SMCAccumChannelInfo {
} // Error Processing Struct Fields

typedef struct __CFMessagePort {
} // Error Processing Struct Fields

typedef struct BTSessionImpl {
} // Error Processing Struct Fields

typedef struct BTLocalDeviceImpl {
} // Error Processing Struct Fields

typedef struct _PLBasebandMessageHeader {
    unsigned char field0;
} _PLBasebandMessageHeader;

typedef struct _PLBasebandEventHeader {
    _PLBasebandMessageHeader field0;
    unsigned int field1;
    unsigned char field2;
    unsigned char field3;
} _PLBasebandEventHeader;

typedef struct _PLBasebandSystemSelectionEvent {
    unsigned short field0;
} _PLBasebandSystemSelectionEvent;

typedef struct _NewCMCallConnectPayload {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
} _NewCMCallConnectPayload;

typedef struct _CMCallConnectPayload {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
} _CMCallConnectPayload;

typedef struct _CMCallOrigPayload {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
} _CMCallOrigPayload;

typedef struct _NewCMCallOrigPayload {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
} _NewCMCallOrigPayload;

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct __IOPMConnection {
} // Error Processing Struct Fields

typedef struct IOReportGroupChecks {
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
    BOOL field10;
    BOOL field11;
    BOOL field12;
    BOOL field13;
    BOOL field14;
    BOOL field15;
    BOOL field16;
    BOOL field17;
    int field18;
    int field19;
} IOReportGroupChecks;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct AsyncContext {
    void field0;
    void field1;
    NSUInteger field2;
    id field3;
} AsyncContext;

typedef struct _IODataQueueEntry {
    unsigned int field0;
    unsigned char field1;
} _IODataQueueEntry;

typedef struct _IODataQueueMemory {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    _IODataQueueEntry field3;
} _IODataQueueMemory;

typedef struct __IOHIDEventSystemClient {
} // Error Processing Struct Fields

typedef struct __IOMobileFramebuffer {
} // Error Processing Struct Fields

typedef struct __FSEventStream {
} // Error Processing Struct Fields

typedef struct _PLBasebandLogHeader {
    _PLBasebandMessageHeader field0;
    unsigned short field1;
    unsigned short field2;
    unsigned char field3;
} _PLBasebandLogHeader;

typedef struct AudioObjectPropertyAddress {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} AudioObjectPropertyAddress;

typedef struct memorystatus_kernel_stats {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    NSUInteger field10;
    NSUInteger field11;
    NSUInteger field12;
    NSUInteger field13;
    NSUInteger field14;
    NSUInteger field15;
    char field16;
} memorystatus_kernel_stats;

typedef struct timeval64 {
    NSInteger field0;
    NSInteger field1;
} timeval64;

typedef struct jetsam_snapshot_entry {
    int field0;
    char field1;
    int field2;
    unsigned int field3;
    unsigned int field4;
    int field5;
    unsigned char field6;
    NSUInteger field7;
    NSUInteger field8;
    NSUInteger field9;
    NSUInteger field10;
    NSUInteger field11;
    NSUInteger field12;
    NSUInteger field13;
    NSUInteger field14;
    NSUInteger field15;
    NSUInteger field16;
    NSUInteger field17;
    NSUInteger field18;
    NSUInteger field19;
    NSUInteger field20;
    NSUInteger field21;
    NSUInteger field22;
    NSUInteger field23;
    NSUInteger field24;
    NSUInteger field25;
    timeval64 field26;
    NSUInteger field27;
    NSUInteger field28;
    NSUInteger field29;
    unsigned int field30;
} jetsam_snapshot_entry;

typedef struct jetsam_snapshot {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    memorystatus_kernel_stats field3;
    NSUInteger field4;
    jetsam_snapshot_entry field5;
} jetsam_snapshot;

typedef struct _launch_service_stats_record {
} // Error Processing Struct Fields

typedef struct __IOHIDEvent {
} // Error Processing Struct Fields

typedef struct coalition_resource_usage {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    NSUInteger field8;
    NSUInteger field9;
    NSUInteger field10;
    NSUInteger field11;
    NSUInteger field12;
    NSUInteger field13;
    NSUInteger field14;
    NSUInteger field15;
    NSUInteger field16;
    NSUInteger field17;
    NSUInteger field18;
    NSUInteger field19;
    NSUInteger field20;
    NSUInteger field21;
    NSUInteger field22;
    NSUInteger field23;
    NSUInteger field24;
    NSUInteger field25;
    NSUInteger field26;
    NSUInteger field27;
    NSUInteger field28;
    NSUInteger field29;
    NSUInteger field30;
} coalition_resource_usage;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __IOHIDManager {
} // Error Processing Struct Fields

typedef struct ggcontext {
} // Error Processing Struct Fields

typedef struct __SCDynamicStore {
} // Error Processing Struct Fields

typedef struct __CTServerConnection {
} // Error Processing Struct Fields

typedef struct __CFMachPort {
} // Error Processing Struct Fields

typedef struct __CFRunLoopSource {
} // Error Processing Struct Fields

typedef struct __WiFiManagerClient {
} // Error Processing Struct Fields

typedef struct __WiFiDeviceClient {
} // Error Processing Struct Fields

typedef struct __WiFiNetwork {
} // Error Processing Struct Fields

typedef struct AggState {
    int state;
    CGFloat level;
    CGFloat timestamp;
} AggState;

