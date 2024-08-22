// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLIOREPORTAGENT_H
#define PLIOREPORTAGENT_H

@class PLAgent, PLEntryNotificationOperatorComposition, PLIOReportStats, NSDictionary, PLIOKitOperatorComposition, NSString, NSDate, NSMutableDictionary, NSMutableArray, PLTimer, PLNSNotificationOperatorComposition;


#import "PLIOReportAgentIOReportStats.h"

@interface PLIOReportAgent : PLAgent

@property NSInteger AOPTotalThreadTime; // ivar: _AOPTotalThreadTime
@property (retain) PLIOReportAgentIOReportStats *SoCIOReportStats; // ivar: _SoCIOReportStats
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChangedNotifications; // ivar: _batteryLevelChangedNotifications
@property BOOL collectionEnabled; // ivar: _collectionEnabled
@property (retain) PLIOReportStats *deviceStates; // ivar: _deviceStates
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification; // ivar: _displayOffNotification
@property (retain) PLEntryNotificationOperatorComposition *displayStateChangeNotification; // ivar: _displayStateChangeNotification
@property (retain, nonatomic) NSDictionary *entryTransformation; // ivar: _entryTransformation
@property (readonly) PLIOKitOperatorComposition *iokitAging; // ivar: _iokitAging
@property (readonly) PLIOKitOperatorComposition *iokitAudio; // ivar: _iokitAudio
@property (retain) NSString *lastFgApp; // ivar: _lastFgApp
@property (retain) NSDate *lastFgAppSwitch; // ivar: _lastFgAppSwitch
@property (retain) NSDate *lastSampleDate; // ivar: _lastSampleDate
@property unsigned int memCacheDriverConn; // ivar: _memCacheDriverConn
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsAudioEvent; // ivar: _sampleChannelsAudioEvent
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsDaily; // ivar: _sampleChannelsDaily
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsDisplayStateChange; // ivar: _sampleChannelsDisplayStateChange
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsHalfHour; // ivar: _sampleChannelsHalfHour
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsScreenState; // ivar: _sampleChannelsScreenState
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsSignificantBattery; // ivar: _sampleChannelsSignificantBattery
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsSnapshot; // ivar: _sampleChannelsSnapshot
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsTenMinutes; // ivar: _sampleChannelsTenMinutes
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsWake; // ivar: _sampleChannelsWake
@property (retain) NSMutableArray *sampledBundleIDs; // ivar: _sampledBundleIDs
@property (retain) PLEntryNotificationOperatorComposition *screenstateChangedNotifications; // ivar: _screenstateChangedNotifications
@property (retain) PLEntryNotificationOperatorComposition *sleepNotification; // ivar: _sleepNotification
@property (retain) PLTimer *tenMinuteSetTimer; // ivar: _tenMinuteSetTimer
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener; // ivar: _thermalMonitorListener
@property (retain) PLEntryNotificationOperatorComposition *wakeNotification; // ivar: _wakeNotification


+(BOOL)hasAOPSupport;
+(BOOL)hasAppleNeuralEngineSupport;
+(BOOL)hasLisaCapability;
+(BOOL)hasMesa;
+(BOOL)hasPlatinumCapability;
+(BOOL)isOldLostPerfLoggingModel;
+(BOOL)shouldLogAtAppSwitchTrigger;
+(BOOL)shouldLogAudioEvent;
+(BOOL)shouldLogDCPScanoutStats;
+(BOOL)shouldLogLostPerformance;
+(BOOL)shouldLogMTRAging;
+(BOOL)shouldLogMemCacheStats;
+(BOOL)shouldLogOpticalInterfaceStats;
+(BOOL)shouldLogSleepMedia;
+(BOOL)shouldLogSoCStats;
+(BOOL)shouldLogThermalUPOLimiting;
+(id)energyKeyToRootNodeID;
+(id)entryEventBackwardDefinition3DTouchforce;
+(id)entryEventBackwardDefinition3DTouchluna;
+(id)entryEventBackwardDefinitionAMCStatsPerfCounters;
+(id)entryEventBackwardDefinitionAOPAOPSensors;
+(id)entryEventBackwardDefinitionAOPAOP_Haptics;
+(id)entryEventBackwardDefinitionAOPAmpPower;
+(id)entryEventBackwardDefinitionAOPMConnectorPower;
+(id)entryEventBackwardDefinitionAOPPerformance;
+(id)entryEventBackwardDefinitionAOPPowerState;
+(id)entryEventBackwardDefinitionAOPProx;
+(id)entryEventBackwardDefinitionAOPaccelpower;
+(id)entryEventBackwardDefinitionAOPcmareceived;
+(id)entryEventBackwardDefinitionAOPcompasspower;
+(id)entryEventBackwardDefinitionAOPgyropower;
+(id)entryEventBackwardDefinitionAOPgyroreceived;
+(id)entryEventBackwardDefinitionAOPlasreceived;
+(id)entryEventBackwardDefinitionAOPmuxPower;
+(id)entryEventBackwardDefinitionAOPpressurepower;
+(id)entryEventBackwardDefinitionActuatorPowerState;
+(id)entryEventBackwardDefinitionAppleEmbeddedPCIELinkStates;
+(id)entryEventBackwardDefinitionBluetooth;
+(id)entryEventBackwardDefinitionBonnLisaStats;
+(id)entryEventBackwardDefinitionCLPCStatsAccumulators;
+(id)entryEventBackwardDefinitionCLPCStatsControlEffort;
+(id)entryEventBackwardDefinitionCLPCStatsCounters;
+(id)entryEventBackwardDefinitionCLPCStatsFeatures;
+(id)entryEventBackwardDefinitionCLPCStatsFrameRateHistogram;
+(id)entryEventBackwardDefinitionCLPCStatsLostPerformance;
+(id)entryEventBackwardDefinitionCPUStatsActiveTimeHistogram;
+(id)entryEventBackwardDefinitionCPUStatsCPUComplexPerformanceStatesData;
+(id)entryEventBackwardDefinitionCPUStatsCPUComplexThermalUPOLimiting;
+(id)entryEventBackwardDefinitionCPUStatsCPUCorePerformanceStatesData;
+(id)entryEventBackwardDefinitionCPUStatsCPUEvents;
+(id)entryEventBackwardDefinitionCPUStatsDVDStats;
+(id)entryEventBackwardDefinitionCPUStatsVoltageDomainPerformanceStates;
+(id)entryEventBackwardDefinitionCarnelianVaxholmStats;
+(id)entryEventBackwardDefinitionClpcStatsMetricHistograms;
+(id)entryEventBackwardDefinitionCorePerformanceLevelResidency;
+(id)entryEventBackwardDefinitionCoronetPowerStats;
+(id)entryEventBackwardDefinitionDCPEXT0Scanout;
+(id)entryEventBackwardDefinitionDCPEXT0Swap;
+(id)entryEventBackwardDefinitionDCPEXT1Scanout;
+(id)entryEventBackwardDefinitionDCPEXT1Swap;
+(id)entryEventBackwardDefinitionDCPEXT2Scanout;
+(id)entryEventBackwardDefinitionDCPEXT2Swap;
+(id)entryEventBackwardDefinitionDCPEXT3Scanout;
+(id)entryEventBackwardDefinitionDCPEXT3Swap;
+(id)entryEventBackwardDefinitionDCPScanout;
+(id)entryEventBackwardDefinitionDCPScanoutStats;
+(id)entryEventBackwardDefinitionDCPSwap;
+(id)entryEventBackwardDefinitionDisplay;
+(id)entryEventBackwardDefinitionDisplayPuvloB;
+(id)entryEventBackwardDefinitionEnergyModel;
+(id)entryEventBackwardDefinitionGPUCStates;
+(id)entryEventBackwardDefinitionGPUStatsActiveTimeHistogram;
+(id)entryEventBackwardDefinitionGPUStatsDVDRequestStates;
+(id)entryEventBackwardDefinitionGPUStatsGPUCLTM;
+(id)entryEventBackwardDefinitionGPUStatsGPUPerformanceStates;
+(id)entryEventBackwardDefinitionGPUStatsIdleTimeHistogram;
+(id)entryEventBackwardDefinitionH11ANEH11ANEEvents;
+(id)entryEventBackwardDefinitionH11ANEH11ANEPowerState;
+(id)entryEventBackwardDefinitionH13ISPH13ISPEvents;
+(id)entryEventBackwardDefinitionH6ISPH6ISPPowerState;
+(id)entryEventBackwardDefinitionHapticsStats;
+(id)entryEventBackwardDefinitionIOMFBFrameRatePhase;
+(id)entryEventBackwardDefinitionIOMFBNativeRate;
+(id)entryEventBackwardDefinitionIOMFBScanout;
+(id)entryEventBackwardDefinitionIOMFBSwap;
+(id)entryEventBackwardDefinitionIOMFBUSRHistogram;
+(id)entryEventBackwardDefinitionIOReport;
+(id)entryEventBackwardDefinitionMTPIOPState;
+(id)entryEventBackwardDefinitionMTPPower;
+(id)entryEventBackwardDefinitionMTRAging;
+(id)entryEventBackwardDefinitionMemCacheStats;
+(id)entryEventBackwardDefinitionMesaMesaPowerState;
+(id)entryEventBackwardDefinitionMultitouch;
+(id)entryEventBackwardDefinitionMultitouchCPUStats;
+(id)entryEventBackwardDefinitionMultitouchHighLevelStats;
+(id)entryEventBackwardDefinitionNVMe;
+(id)entryEventBackwardDefinitionNVMeBWLimits;
+(id)entryEventBackwardDefinitionNVMeTimeweightedthrottlestatistics;
+(id)entryEventBackwardDefinitionOpticalInterfaceStats;
+(id)entryEventBackwardDefinitionPMPDCS;
+(id)entryEventBackwardDefinitionPMPEnergyCounters;
+(id)entryEventBackwardDefinitionPMPFAB;
+(id)entryEventBackwardDefinitionPMPPerfDrivers;
+(id)entryEventBackwardDefinitionPMPSOC;
+(id)entryEventBackwardDefinitionPMPSOC0;
+(id)entryEventBackwardDefinitionPPMStatsCPMSFerocity;
+(id)entryEventBackwardDefinitionPPMStatsCPMSLanesEngagement;
+(id)entryEventBackwardDefinitionPPMStatsCPMSPowerReduction;
+(id)entryEventBackwardDefinitionPPMStatsDroopController;
+(id)entryEventBackwardDefinitionPRLUsageAttCheck;
+(id)entryEventBackwardDefinitionPRLUsageBCheck;
+(id)entryEventBackwardDefinitionPRLUsageJOn;
+(id)entryEventBackwardDefinitionPRLUsagePreCheck;
+(id)entryEventBackwardDefinitionPRLUsageProCheck;
+(id)entryEventBackwardDefinitionPRLUsageRStandby;
+(id)entryEventBackwardDefinitionSDXCController;
+(id)entryEventBackwardDefinitionSIOIOPState;
+(id)entryEventBackwardDefinitionSIOPower;
+(id)entryEventBackwardDefinitionSMCPower;
+(id)entryEventBackwardDefinitionSoCStatsClusterPowerStates;
+(id)entryEventBackwardDefinitionSoCStatsDeviceStates;
+(id)entryEventBackwardDefinitionSoCStatsDeviceStatesChannelID;
+(id)entryEventBackwardDefinitionSoCStatsEvents;
+(id)entryEventBackwardDefinitionSoCStatsEventsRaw;
+(id)entryEventBackwardDefinitionSoCStatsH6PMGRCounters;
+(id)entryEventBackwardDefinitionSoCStatsVoltageDomainPerformanceStates;
+(id)entryEventBackwardDefinitionSocStatsDvdStats;
+(id)entryEventBackwardDefinitionSpeakerPowerState;
+(id)entryEventBackwardDefinitionSpeakerSpeakerEvents;
+(id)entryEventBackwardDefinitionTrackpadPowerStats;
+(id)entryEventBackwardDefinitionVDDOK1;
+(id)entryEventBackwardDefinitionVDDOK2;
+(id)entryEventBackwardDefinitionWLANPowerConnections;
+(id)entryEventBackwardDefinitionWLANPowerPhyActivity;
+(id)entryEventBackwardDefinitionWLANPowerPhyScan;
+(id)entryEventBackwardDefinitionWifiChipAWDLActivity;
+(id)entryEventBackwardDefinitionWifiChipConnectionActivity;
+(id)entryEventBackwardDefinitionWifiChipHSICActivity;
+(id)entryEventBackwardDefinitionWifiChipPCIeActivity;
+(id)entryEventBackwardDefinitionWifiChipPMAwakeActivity;
+(id)entryEventBackwardDefinitionWifiChipRadioPhyicalLayerActivity;
+(id)entryEventBackwardDefinitionWifiChipRxChipErrorCounters;
+(id)entryEventBackwardDefinitionWifiChipRxPerRateCounters;
+(id)entryEventBackwardDefinitionWifiChipRxStatCounters;
+(id)entryEventBackwardDefinitionWifiChipScanActivity;
+(id)entryEventBackwardDefinitionWifiChipTxChipErrorCounters;
+(id)entryEventBackwardDefinitionWifiChipTxStatCounters;
+(id)entryEventBackwardDefinitionbacklightreportplaybackbacklightfactorsreport;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionMemCacheLabels;
+(id)entryEventForwardDefinitionSoCStatsOprtp;
+(id)entryEventForwardDefinitions;
+(id)entryEventPointDefinitionPmtelemetry_Flex;
+(id)entryEventPointDefinitionSampleSaturation;
+(id)entryEventPointDefinitions;
+(id)keyForSubBlock:(int)arg0 ;
+(void)load;
-(BOOL)allowlistedChannelID:(NSUInteger)arg0 ;
-(BOOL)fgAppChangedSince:(NSUInteger)arg0 ;
-(BOOL)processNotificationForChannelGroup:(id)arg0 ;
-(id)allowSamplingMemCacheStats:(id)arg0 ;
-(id)buildAudioEventSet:(struct IOReportGroupChecks *)arg0 ;
-(id)buildBaseSet:(struct IOReportGroupChecks *)arg0 ;
-(id)buildDailySet:(struct IOReportGroupChecks *)arg0 ;
-(id)buildDisplayStateChangeSet:(struct IOReportGroupChecks *)arg0 ;
-(id)buildHalfHourSet:(struct IOReportGroupChecks *)arg0 ;
-(id)buildScreenStateSet:(struct IOReportGroupChecks *)arg0 ;
-(id)buildSnapshotSet:(struct IOReportGroupChecks *)arg0 ;
-(id)buildTenMinutesSet:(struct IOReportGroupChecks *)arg0 ;
-(id)buildWakeSet:(struct IOReportGroupChecks *)arg0 ;
-(id)channelDictionaryWithChannelSet:(id)arg0 withMinProcessTime:(CGFloat)arg1 ;
-(id)entryForReportingGroup:(id)arg0 withKey:(id)arg1 withChannelGroup:(id)arg2 withEntryDate:(id)arg3 ;
-(id)entryKeyForEventWithGroupName:(id)arg0 withSubGroupName:(id)arg1 ;
-(id)getBucketName:(int)arg0 ;
-(id)init;
-(id)sampleDeltaForChannelGroup:(id)arg0 ;
-(id)sampleSnapshotForChannelGroup:(id)arg0 ;
-(int)addReportSample:(struct __CFDictionary *)arg0 toEntry:(id)arg1 ;
-(int)getAOPSensorsChannelId:(id)arg0 ;
-(int)getChannelId:(id)arg0 ;
-(int)getCoreChannelId:(id)arg0 ;
-(void)addReportingGroup:(id)arg0 toEntry:(id)arg1 ;
-(void)connectToMemCacheDriver;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)log;
-(void)logDroopSnapshot:(id)arg0 ;
-(void)logEngagementToCA:(id)arg0 ;
-(void)logEventBackwardAOPAOPSensors:(id)arg0 ;
-(void)logEventBackwardAOPPerformance:(id)arg0 withChannels:(id)arg1 ;
-(void)logEventBackwardAOPPowerState:(id)arg0 withChannels:(id)arg1 ;
-(void)logEventBackwardComplexPerformanceStates:(id)arg0 ;
-(void)logEventBackwardComplexThermalUPOLimiting:(id)arg0 withChannels:(id)arg1 ;
-(void)logEventBackwardCorePerformanceStates:(id)arg0 withChannels:(id)arg1 ;
-(void)logEventBackwardIOReport;
-(void)logEventBackwardIOReportAtAudioEvent;
-(void)logEventBackwardIOReportAtDisplayStateChange;
-(void)logEventBackwardIOReportAtScreenStateChange:(id)arg0 ;
-(void)logEventBackwardIOReportAtWake;
-(void)logEventBackwardIOReportWithDelta:(id)arg0 forChannelGroup:(id)arg1 ;
-(void)logEventBackwardMTRAging;
-(void)logEventBackwardMemCacheStats:(id)arg0 ;
-(void)logEventBackwardPSRToCA;
-(void)logEventBackwardSoCStatsDeviceStatesChannelID:(id)arg0 withChannelGroup:(id)arg1 withEntryDate:(id)arg2 ;
-(void)logEventForwardMemCacheLabels;
-(void)logEventForwardSoCStatsOperatingPoints;
-(void)logEventPointIOReport;
-(void)logEventPointIOReportSaturation:(id)arg0 ;
-(void)logEventPointPMTelemetryFlex;
-(void)logSOCHOT0Snapshot:(id)arg0 ;
-(void)logSnapshotValues:(id)arg0 ;
-(void)logStateResidency:(id)arg0 withKey:(id)arg1 withEntryDate:(id)arg2 ;
-(void)modelAPSoCPower:(id)arg0 ;
-(void)modelPMPAPSocPower:(id)arg0 ;
-(void)readAndLogMemCacheStats;
-(void)sampleDeltaForChannelSets;
-(void)subscribeToChannelSets;
-(void)triggerMemCacheLogging:(id)arg0 withDelay:(NSUInteger)arg1 ;


@end


#endif