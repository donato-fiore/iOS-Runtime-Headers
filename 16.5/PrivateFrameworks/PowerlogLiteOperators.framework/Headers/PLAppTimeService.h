// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLAPPTIMESERVICE_H
#define PLAPPTIMESERVICE_H

@class PLService, PLEntryNotificationOperatorComposition, NSMutableSet, NSString, NSMutableDictionary, NSDictionary, NSSet, NSDate, NSArray, PLTimer;



@interface PLAppTimeService : PLService

@property (retain) PLEntryNotificationOperatorComposition *InCallServiceCallback; // ivar: _InCallServiceCallback
@property (retain) NSMutableSet *PiPModeApps; // ivar: _PiPModeApps
@property (retain) NSString *aggregatedEntryKeyForAppRunTime; // ivar: _aggregatedEntryKeyForAppRunTime
@property (retain) PLEntryNotificationOperatorComposition *applicationCallback; // ivar: _applicationCallback
@property (retain) NSMutableSet *appsOnScreen; // ivar: _appsOnScreen
@property (retain) PLEntryNotificationOperatorComposition *audioCallback; // ivar: _audioCallback
@property (retain) NSMutableDictionary *audioPlaybackBundleIDs; // ivar: _audioPlaybackBundleIDs
@property (readonly) NSDictionary *backgroundAppToBundleID; // ivar: _backgroundAppToBundleID
@property (retain) PLEntryNotificationOperatorComposition *backgroundTransferCallback; // ivar: _backgroundTransferCallback
@property (retain) PLEntryNotificationOperatorComposition *batteryCallback; // ivar: _batteryCallback
@property (retain) NSMutableSet *bundleIDsInBackground; // ivar: _bundleIDsInBackground
@property (readonly) PLEntryNotificationOperatorComposition *canSleepEntryNotifications; // ivar: _canSleepEntryNotifications
@property (retain) PLEntryNotificationOperatorComposition *cellularConditionCallback; // ivar: _cellularConditionCallback
@property (retain) PLEntryNotificationOperatorComposition *coalitionCallback; // ivar: _coalitionCallback
@property (retain) NSMutableSet *coalitionsAppsOnScreen; // ivar: _coalitionsAppsOnScreen
@property BOOL deviceIsPluggedIn; // ivar: _deviceIsPluggedIn
@property (retain) PLEntryNotificationOperatorComposition *displayCallback; // ivar: _displayCallback
@property int displayState; // ivar: _displayState
@property (readonly) NSString *entryKeyPLCoalitionAgentEventIntervalCoalition; // ivar: _entryKeyPLCoalitionAgentEventIntervalCoalition
@property (readonly) NSString *entryKeyPLScreenStateAgentScreenState; // ivar: _entryKeyPLScreenStateAgentScreenState
@property (retain) NSString *entryKeyUsageTime; // ivar: _entryKeyUsageTime
@property (readonly) NSSet *excludedBGAppsSet; // ivar: _excludedBGAppsSet
@property (retain) NSSet *excludedBundleIDsInBackground; // ivar: _excludedBundleIDsInBackground
@property (readonly) NSSet *excludedFGAppsSet; // ivar: _excludedFGAppsSet
@property (retain) NSDate *firstBGAppTimeSBC; // ivar: _firstBGAppTimeSBC
@property BOOL inCallNow; // ivar: _inCallNow
@property (retain) NSMutableDictionary *inFlightBundleIDStartTime; // ivar: _inFlightBundleIDStartTime
@property BOOL isAPOn; // ivar: _isAPOn
@property (retain) NSDate *lastAPOnTimeSBC; // ivar: _lastAPOnTimeSBC
@property BOOL lastAirplaneModeStatus; // ivar: _lastAirplaneModeStatus
@property (retain) NSString *lastCallBundleID; // ivar: _lastCallBundleID
@property (retain) NSDate *lastCallTime; // ivar: _lastCallTime
@property (retain) NSDate *lastCellularConditionTime; // ivar: _lastCellularConditionTime
@property (retain) NSArray *lastLayoutEntries; // ivar: _lastLayoutEntries
@property (retain) NSDate *lastNowPlayingTime; // ivar: _lastNowPlayingTime
@property (retain) NSDate *lastPluggedInTime; // ivar: _lastPluggedInTime
@property (retain) NSDate *lastScreenEventAccountingTime; // ivar: _lastScreenEventAccountingTime
@property (retain) NSDate *lastScreenOnTime; // ivar: _lastScreenOnTime
@property (retain) NSDate *lastScreenOnTimeSBC; // ivar: _lastScreenOnTimeSBC
@property NSInteger lastSignalBar; // ivar: _lastSignalBar
@property (retain) NSDate *lastStatusBarTime; // ivar: _lastStatusBarTime
@property BOOL lastTelephonyRegistrationStatus; // ivar: _lastTelephonyRegistrationStatus
@property BOOL musicPlayerForeground; // ivar: _musicPlayerForeground
@property (retain) NSString *nowPlayingBundleID; // ivar: _nowPlayingBundleID
@property (retain) PLEntryNotificationOperatorComposition *nowPlayingCallback; // ivar: _nowPlayingCallback
@property (retain) PLEntryNotificationOperatorComposition *pluginCallback; // ivar: _pluginCallback
@property (retain) PLTimer *runTimeAggregatorTimer; // ivar: _runTimeAggregatorTimer
@property (retain) PLEntryNotificationOperatorComposition *screenstateCallback; // ivar: _screenstateCallback
@property (retain) NSString *statusBarBundleID; // ivar: _statusBarBundleID
@property (retain) PLEntryNotificationOperatorComposition *statusBarCallback; // ivar: _statusBarCallback
@property (retain) PLEntryNotificationOperatorComposition *telephonyRegistrationCallback; // ivar: _telephonyRegistrationCallback
@property CGFloat totalAPOnTimeSBC; // ivar: _totalAPOnTimeSBC
@property CGFloat totalBGTimeSBC; // ivar: _totalBGTimeSBC
@property CGFloat totalFGTimeSBC; // ivar: _totalFGTimeSBC
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications; // ivar: _wakeEntryNotifications
@property (retain) NSMutableSet *watchkitExtensions; // ivar: _watchkitExtensions


+(id)defaults;
+(id)entryAggregateDefinitionAppRunTime;
+(id)entryAggregateDefinitionCellularCondition;
+(id)entryAggregateDefinitionMetrics;
+(id)entryAggregateDefinitionUsageTime;
+(id)entryAggregateDefinitions;
+(void)load;
-(CGFloat)convertCPUTimeToBackgroundTime:(CGFloat)arg0 withDuration:(CGFloat)arg1 ;
-(CGFloat)getCPUTime:(id)arg0 ;
-(id)buildCallBack:(id)arg0 withGroup:(BOOL)arg1 withHandler:(id)arg2 ;
-(id)generateExcludedBGBundleIDs;
-(id)init;
-(id)remapCloudDocsBundleID:(id)arg0 ;
-(void)addAudioAndLocationTimeAtDate:(id)arg0 ;
-(void)addAudioTimeAtDate:(id)arg0 ;
-(void)addAudioTimeAtDate:(id)arg0 forBundleID:(id)arg1 ;
-(void)addCellularConditionTimeAtDate:(id)arg0 ;
-(void)addForegroundTimeAtDate:(id)arg0 withNewLayoutElementsArray:(id)arg1 ;
-(void)addNowPlayingTimeAtDate:(id)arg0 ;
-(void)addStatusBarTimeAtDate:(id)arg0 ;
-(void)chunkScreenOnAggregationAtDate:(id)arg0 ;
-(void)debugAppTimeService;
-(void)handleApplicationCallback:(id)arg0 ;
-(void)handleAudioCallback:(id)arg0 ;
-(void)handleBackgroundTransferCallback:(id)arg0 ;
-(void)handleBatteryCallback:(id)arg0 ;
-(void)handleCellularConditionCallback:(id)arg0 ;
-(void)handleCoalitionCallback:(id)arg0 ;
-(void)handleCoalitionCallback:(id)arg0 withNewCoalitionArray:(id)arg1 ;
-(void)handleDisplayCallback:(id)arg0 ;
-(void)handleInCallServiceCallback:(id)arg0 ;
-(void)handleNowPlayingCallback:(id)arg0 ;
-(void)handlePluginCallback:(id)arg0 ;
-(void)handleScreenStateCallback:(id)arg0 ;
-(void)handleSleepCallBack:(id)arg0 ;
-(void)handleStatusBarCallback:(id)arg0 ;
-(void)handleTelephonyRegistrationCallback:(id)arg0 ;
-(void)handleWakeCallBack:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)loadWatchKitExtensionsSet;
-(void)periodicUpdateAppRunTimeWithDate:(id)arg0 ;
-(void)resetLayoutElementsPLEntryArray:(id)arg0 withNowDate:(id)arg1 ;
-(void)testService;
-(void)updateAggregationsAtDate:(id)arg0 withNewAPState:(BOOL)arg1 ;
-(void)updateAggregationsAtDate:(id)arg0 withNewPluggedInState:(BOOL)arg1 ;
-(void)updateAggregationsAtDate:(id)arg0 withNewScreenState:(int)arg1 ;
-(void)updateAggregationsAtSBCWithDate:(id)arg0 withLongestCoalitionBGTime:(CGFloat)arg1 withCoalitionLength:(CGFloat)arg2 ;
-(void)updateAppRunTimeForBundleId:(id)arg0 withAppStateUpdateType:(int)arg1 withNowDate:(id)arg2 ;
-(void)updateBackgroundAppsForBundleID:(id)arg0 withState:(unsigned int)arg1 withDate:(id)arg2 ;
-(void)updateBackgroundTimeForAppStateEntry:(id)arg0 ;
-(void)updateBackgroundTimeInDBForBundleId:(id)arg0 withTime:(CGFloat)arg1 withDate:(id)arg2 ;
-(void)updateCoalitionsAppsOnScreenSet:(id)arg0 ;
-(void)updateInCallServiceTimeAtDate:(id)arg0 ;
-(void)updateInCallServiceTimeInDBForBundleId:(id)arg0 withTime:(CGFloat)arg1 withDate:(id)arg2 ;
-(void)updatePiPModeAppsSet:(id)arg0 withAppRole:(id)arg1 ;
-(void)updatePluggedInTimeAtDate:(id)arg0 withDiff:(CGFloat)arg1 ;
-(void)updateScreenOffTimeAtDate:(id)arg0 withDiff:(CGFloat)arg1 ;
-(void)updateScreenOnTimeAtDate:(id)arg0 withDiff:(CGFloat)arg1 ;
-(void)updateScreenOnTimeInDBForBundleId:(id)arg0 withTime:(CGFloat)arg1 withDate:(id)arg2 ;


@end


#endif