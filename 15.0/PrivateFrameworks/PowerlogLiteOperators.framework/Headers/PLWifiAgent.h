// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLWIFIAGENT_H
#define PLWIFIAGENT_H

@class PLAgent, PLEntryNotificationOperatorComposition, PLCFNotificationOperatorComposition, PLNSNotificationOperatorComposition, NSString, NSDate;



@interface PLWifiAgent : PLAgent

@property NSUInteger autoJoinScanDuration; // ivar: _autoJoinScanDuration
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // ivar: _batteryLevelChanged
@property (retain) PLEntryNotificationOperatorComposition *deviceWake; // ivar: _deviceWake
@property NSUInteger lastLoggedTimestamp; // ivar: _lastLoggedTimestamp
@property NSUInteger locationScanDuration; // ivar: _locationScanDuration
@property (readonly) PLCFNotificationOperatorComposition *notificationWiFiChanged; // ivar: _notificationWiFiChanged
@property NSUInteger pipelineScanDuration; // ivar: _pipelineScanDuration
@property NSUInteger remainingAllowedRSSIEntryCount; // ivar: _remainingAllowedRSSIEntryCount
@property (retain) PLEntryNotificationOperatorComposition *sbcLevelChanged; // ivar: _sbcLevelChanged
@property NSUInteger setupScanDuration; // ivar: _setupScanDuration
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener; // ivar: _thermalMonitorListener
@property NSUInteger unknownScanDuration; // ivar: _unknownScanDuration
@property (nonatomic) *__WiFiDeviceClient wifiAwdlDevice; // ivar: _wifiAwdlDevice
@property (readonly) NSString *wifiChipset; // ivar: _wifiChipset
@property (nonatomic) *__WiFiDeviceClient wifiDevice; // ivar: _wifiDevice
@property (nonatomic) *__WiFiDeviceClient wifiHotspotDevice; // ivar: _wifiHotspotDevice
@property (nonatomic) *__WiFiManagerClient wifiManager; // ivar: _wifiManager
@property (readonly) NSString *wifiManufacturer; // ivar: _wifiManufacturer
@property (retain) NSDate *wifi_segment_date; // ivar: _wifi_segment_date
@property (retain) NSDate *wifi_segment_lastWrittenDate; // ivar: _wifi_segment_lastWrittenDate
@property CGFloat wifi_segment_lastWrittenTimestamp; // ivar: _wifi_segment_lastWrittenTimestamp
@property CGFloat wifi_segment_power_data; // ivar: _wifi_segment_power_data
@property CGFloat wifi_segment_power_idle; // ivar: _wifi_segment_power_idle
@property CGFloat wifi_segment_power_location; // ivar: _wifi_segment_power_location
@property CGFloat wifi_segment_power_pipeline; // ivar: _wifi_segment_power_pipeline
@property CGFloat wifi_segment_timestamp; // ivar: _wifi_segment_timestamp


+(BOOL)isBeaconLoggingEnabled;
+(BOOL)isNonUDMMac;
+(id)entryEventBackwardDefinitionBeaconProfile;
+(id)entryEventBackwardDefinitionCumulativeBasic;
+(id)entryEventBackwardDefinitionCumulativeBasicMac;
+(id)entryEventBackwardDefinitionCumulativeMultiCore;
+(id)entryEventBackwardDefinitionDiffBasic;
+(id)entryEventBackwardDefinitionHotspotPowerStats;
+(id)entryEventBackwardDefinitionUserScan;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionAWDLState;
+(id)entryEventForwardDefinitionHotspotState;
+(id)entryEventForwardDefinitionModuleInfo;
+(id)entryEventForwardDefinitionPowerState;
+(id)entryEventForwardDefinitionRSSI;
+(id)entryEventForwardDefinitionWifiAssist;
+(id)entryEventForwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionJoin;
+(id)entryEventPointDefinitionWake;
+(id)entryEventPointDefinitions;
+(void)load;
-(BOOL)hasWiFi;
-(BOOL)isWiFiPowered;
-(BOOL)isWowEnabled;
-(BOOL)isWowSupported;
-(NSUInteger)getCurrentChannelWidth:(struct __WiFiNetwork *)arg0 ;
-(id)decodeWifiEventLinkReason:(unsigned int)arg0 ;
-(id)init;
-(void)findWifiDevice;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventBackwardCumulativeProperties;
-(void)logEventBackwardDiffProperties;
-(void)logEventBackwardUserScanDuration;
-(void)logEventBackwardWifiProperties:(BOOL)arg0 ;
-(void)logEventBackwardWifiProperties:(id)arg0 withNetworkProperties:(id)arg1 shallModelPower:(BOOL)arg2 ;
-(void)logEventBackwardWifiPropertiesMac:(BOOL)arg0 ;
-(void)logEventBackwardWifiPropertiesMac:(id)arg0 withNetworkProperties:(id)arg1 ;
-(void)logEventForwardAWDLState:(id)arg0 ;
-(void)logEventForwardHotspotState:(id)arg0 ;
-(void)logEventForwardModuleInfo;
-(void)logEventForwardPowerState:(BOOL)arg0 ;
-(void)logEventForwardRSSI:(id)arg0 ;
-(void)logEventForwardWifiAssist:(BOOL)arg0 ;
-(void)logEventPointJoin:(unsigned char)arg0 withStats:(id)arg1 ;
-(void)logEventPointWake:(id)arg0 ;
-(void)logEventPointWakeDataFrame:(id)arg0 withParams:(id)arg1 toEntry:(id)arg2 ;
-(void)logEventPointWakeLink:(id)arg0 withParams:(id)arg1 toEntry:(id)arg2 ;
-(void)logEventPointWakePNO:(id)arg0 withParams:(id)arg1 toEntry:(id)arg2 ;
-(void)logFromAJCallback:(id)arg0 withFlag:(unsigned char)arg1 withStats:(id)arg2 ;
-(void)logFromLinkChangeCallback:(id)arg0 withStats:(id)arg1 ;
-(void)logFromWiFiNoAvailableCallback:(id)arg0 withAvailability:(BOOL)arg1 withWakeParams:(id)arg2 ;
-(void)modelWiFiPower:(id)arg0 ;
-(void)modelWiFiSegmentPower:(id)arg0 withDataPower:(CGFloat)arg1 withIdlePower:(CGFloat)arg2 withLocationPower:(CGFloat)arg3 withPipelinePower:(CGFloat)arg4 withTotalDuration:(CGFloat)arg5 ;
-(void)setWiFiAWDLDevice:(struct __WiFiDeviceClient *)arg0 ;
-(void)setWiFiHotspotDevice:(struct __WiFiDeviceClient *)arg0 ;
-(void)updateEventBackwardUserScanDuration:(id)arg0 ;
-(void)writeModeledPower;


@end


#endif