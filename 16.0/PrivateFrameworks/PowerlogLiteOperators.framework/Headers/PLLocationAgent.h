// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLOCATIONAGENT_H
#define PLLOCATIONAGENT_H

@class PLAgent, NSMutableSet, NSMutableDictionary, PLXPCListenerOperatorComposition, NSDate, PLEntryNotificationOperatorComposition, PLCFNotificationOperatorComposition, NSNumber, PLNSNotificationOperatorComposition;



@interface PLLocationAgent : PLAgent

@property (retain) NSMutableSet *activeBackgroundLocationClients; // ivar: _activeBackgroundLocationClients
@property (retain) NSMutableDictionary *activeClients; // ivar: _activeClients
@property (retain) NSMutableDictionary *bundleIDToWeightUsingGPSCache; // ivar: _bundleIDToWeightUsingGPSCache
@property (retain) NSMutableDictionary *bundleIDToWeightUsingLocationCache; // ivar: _bundleIDToWeightUsingLocationCache
@property (retain) NSMutableDictionary *bundleIDToWeightUsingWiFiCache; // ivar: _bundleIDToWeightUsingWiFiCache
@property (retain) PLXPCListenerOperatorComposition *clientStatusNotification; // ivar: _clientStatusNotification
@property (retain) NSMutableDictionary *clientStatusTypeStrings; // ivar: _clientStatusTypeStrings
@property (retain) NSDate *gps_segment_date; // ivar: _gps_segment_date
@property (retain) NSDate *gps_segment_lastWrittenDate; // ivar: _gps_segment_lastWrittenDate
@property CGFloat gps_segment_lastWrittenTimestamp; // ivar: _gps_segment_lastWrittenTimestamp
@property CGFloat gps_segment_power; // ivar: _gps_segment_power
@property CGFloat gps_segment_timestamp; // ivar: _gps_segment_timestamp
@property (retain) NSDate *lastResyncActiveClientsDate; // ivar: _lastResyncActiveClientsDate
@property (retain) NSDate *lastTechStatusNotificationDate; // ivar: _lastTechStatusNotificationDate
@property (retain) NSMutableDictionary *localCache; // ivar: _localCache
@property (retain) PLXPCListenerOperatorComposition *locationGPSListener; // ivar: _locationGPSListener
@property (retain) PLXPCListenerOperatorComposition *logLevelNotification; // ivar: _logLevelNotification
@property (retain) PLXPCListenerOperatorComposition *mapsBusynessStateListener; // ivar: _mapsBusynessStateListener
@property (retain) NSMutableSet *processes; // ivar: _processes
@property (retain) PLEntryNotificationOperatorComposition *sbcLevelChanged; // ivar: _sbcLevelChanged
@property (retain) PLXPCListenerOperatorComposition *separationAlertListener; // ivar: _separationAlertListener
@property (retain) PLXPCListenerOperatorComposition *statusBarNotification; // ivar: _statusBarNotification
@property (retain) PLCFNotificationOperatorComposition *techStatusChangedNotification; // ivar: _techStatusChangedNotification
@property (retain) NSNumber *techStatusLimiterIsActive; // ivar: _techStatusLimiterIsActive
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener; // ivar: _thermalMonitorListener


+(id)defaults;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionClientStatus;
+(id)entryEventForwardDefinitionLogLevel;
+(id)entryEventForwardDefinitionStatusBar;
+(id)entryEventForwardDefinitionTechStatus;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitionMapsBusyness;
+(id)entryEventIntervalDefinitionSeparationAlert;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitionClientStatusDebug;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionClientStatus;
+(id)entryEventPointDefinitionGeoFenceHandoff;
+(id)entryEventPointDefinitions;
+(void)load;
-(BOOL)shouldRateLimitTechStatus;
-(id)getOpenEntryForClientSettings:(id)arg0 withTimeStarted:(id)arg1 withClient:(id)arg2 withType:(id)arg3 withEntryKey:(id)arg4 ;
-(id)humanReadableNameForTechnology:(id)arg0 ;
-(id)init;
-(id)lastEntryWithClient:(id)arg0 withType:(id)arg1 withBundleID:(id)arg2 withEntryKey:(id)arg3 ;
-(void)closeOpenEntryForClient:(id)arg0 withOpenEntry:(id)arg1 withTimeStopped:(id)arg2 ;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventForwardClientStatuswithPayload:(id)arg0 ;
-(void)logEventForwardTechStatus;
-(void)logEventForwardTechStatus_withLimiter;
-(void)logEventIntervalMapsBusynessState:(id)arg0 ;
-(void)logEventIntervalSeparationAlert:(id)arg0 ;
-(void)logEventNoneClientStatus;
-(void)logEventNoneClientStatusDebugWithClients:(id)arg0 ;
-(void)logEventPointClientStatus;
-(void)modelGpsSegmentPower:(id)arg0 withGpsPower:(CGFloat)arg1 withTotalDuration:(CGFloat)arg2 ;
-(void)processesOfInterest:(id)arg0 ;
-(void)resyncActiveClients;
-(void)updateClientsLocationInfo:(id)arg0 ;
-(void)updateGnssPowerMetric:(id)arg0 ;
-(void)updateLocalCacheWithClient:(id)arg0 withType:(id)arg1 withBundleID:(id)arg2 withEntry:(id)arg3 ;
-(void)updateLocationDistributionEvents;
-(void)updateLocationQualificationEvents;
-(void)writeModeledPower;


@end


#endif