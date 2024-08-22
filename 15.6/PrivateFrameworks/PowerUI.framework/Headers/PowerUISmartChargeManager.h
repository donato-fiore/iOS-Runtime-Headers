// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POWERUISMARTCHARGEMANAGER_H
#define POWERUISMARTCHARGEMANAGER_H

@class NSDate, _CDContextualKeyPath, ACCConnectionInfo, NSString, NSNumber, NSXPCListener, NSArray, NSDistributedNotificationCenter, NSDictionary, UNUserNotificationCenter;
@protocol UNUserNotificationCenterDelegate, NSXPCListenerDelegate, PowerUISignalMonitorDelegate, PowerUISmartChargeManagingPrivate, ACCConnectionInfoDelegateProtocol, PowerUISmartChargeManaging, _CDLocalContext, _DKKnowledgeQuerying><_DKKnowledgeSaving, OS_os_log, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PowerUIBatteryMitigationManager.h"
#import "PowerUIMLTwoStageModelPredictor.h"
#import "PowerUITrialManager.h"

@interface PowerUISmartChargeManager : NSObject <UNUserNotificationCenterDelegate, NSXPCListenerDelegate, PowerUISignalMonitorDelegate, PowerUISmartChargeManagingPrivate, ACCConnectionInfoDelegateProtocol, PowerUISmartChargeManaging>



@property (retain, nonatomic) NSDate *_fullChargeDeadline; // ivar: __fullChargeDeadline
@property (nonatomic) BOOL _hasLegitimateUsage; // ivar: __hasLegitimateUsage
@property (copy, nonatomic) id *afterBatteryCallback; // ivar: _afterBatteryCallback
@property (retain, nonatomic) PowerUIBatteryMitigationManager *batteryMitigationManager; // ivar: _batteryMitigationManager
@property (copy, nonatomic) id *beforeBatteryCallback; // ivar: _beforeBatteryCallback
@property (nonatomic) int chargingStateNotification; // ivar: _chargingStateNotification
@property (nonatomic) NSUInteger checkpoint; // ivar: _checkpoint
@property (retain, nonatomic) _CDContextualKeyPath *checkpointKP; // ivar: _checkpointKP
@property (retain, nonatomic) ACCConnectionInfo *connectionInfoProvider; // ivar: _connectionInfoProvider
@property (retain, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context
@property (retain) NSString *currentChargePackInductiveConnectionUUID; // ivar: _currentChargePackInductiveConnectionUUID
@property (retain) NSString *currentChargePackNFCConnectionUUID; // ivar: _currentChargePackNFCConnectionUUID
@property (nonatomic) NSUInteger currentState; // ivar: _currentState
@property (nonatomic) NSInteger deadlineSignalID; // ivar: _deadlineSignalID
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *defaultsDomain; // ivar: _defaultsDomain
@property (readonly, copy) NSString *description;
@property (retain) NSDate *disabledUntilDate; // ivar: _disabledUntilDate
@property (nonatomic) CGFloat empiricalTimeToFullChargeDurationMinutes; // ivar: _empiricalTimeToFullChargeDurationMinutes
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL encounteredTLCDuringTopOff; // ivar: _encounteredTLCDuringTopOff
@property (retain) NSDate *engagementTimeOverride; // ivar: _engagementTimeOverride
@property (retain, nonatomic) NSNumber *engagementsLastMonthBucket; // ivar: _engagementsLastMonthBucket
@property (retain) NSDate *fullChargeDeadlineOverride; // ivar: _fullChargeDeadlineOverride
@property (readonly) NSUInteger hash;
@property BOOL isChargePackConnected; // ivar: _isChargePackConnected
@property (nonatomic) BOOL isDesktopDevice; // ivar: _isDesktopDevice
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving> *knowledgeStore; // ivar: _knowledgeStore
@property (nonatomic) int lastBatteryLevel; // ivar: _lastBatteryLevel
@property (nonatomic) BOOL lastChargerWasWireless; // ivar: _lastChargerWasWireless
@property (retain, nonatomic) NSDate *lastComputedSignalDeadline; // ivar: _lastComputedSignalDeadline
@property (retain, nonatomic) NSDate *lastDesktopModeChangeDate; // ivar: _lastDesktopModeChangeDate
@property (nonatomic) int lastFullyCharged; // ivar: _lastFullyCharged
@property (retain, nonatomic) NSDate *lastInterruptedTime; // ivar: _lastInterruptedTime
@property (retain, nonatomic) NSNumber *lastNonEngagementSignalID; // ivar: _lastNonEngagementSignalID
@property (nonatomic) int lastPluginStatus; // ivar: _lastPluginStatus
@property (retain, nonatomic) NSNumber *lastReportedNumberOfPluginEvents; // ivar: _lastReportedNumberOfPluginEvents
@property (retain, nonatomic) NSString *lastScheduledFullChargeNotificationID; // ivar: _lastScheduledFullChargeNotificationID
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property NSUInteger mcmCurrentState; // ivar: _mcmCurrentState
@property (retain, nonatomic) NSObject<OS_dispatch_source> *mcmFidgetMitigationTimer; // ivar: _mcmFidgetMitigationTimer
@property BOOL mcmForbidsCharging; // ivar: _mcmForbidsCharging
@property (retain, nonatomic) NSObject<OS_os_log> *mcmLog; // ivar: _mcmLog
@property (retain, nonatomic) NSNumber *medianPluginLength; // ivar: _medianPluginLength
@property (retain, nonatomic) PowerUIMLTwoStageModelPredictor *modelTwoStagePredictor; // ivar: _modelTwoStagePredictor
@property (retain, nonatomic) NSArray *monitors; // ivar: _monitors
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (nonatomic) NSUInteger numberOfTimesMCMNotificationWasDisplayed; // ivar: _numberOfTimesMCMNotificationWasDisplayed
@property (nonatomic) BOOL overrideAllSignals; // ivar: _overrideAllSignals
@property (retain) NSDictionary *powerLogStatus; // ivar: _powerLogStatus
@property (nonatomic) int powerlogToken; // ivar: _powerlogToken
@property (nonatomic) NSUInteger predictorType; // ivar: _predictorType
@property (retain, nonatomic) NSDate *previousDecisionMakerDate; // ivar: _previousDecisionMakerDate
@property (nonatomic) NSInteger previousDecisionMakerID; // ivar: _previousDecisionMakerID
@property (retain) NSDictionary *previousPowerLogStatus; // ivar: _previousPowerLogStatus
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSDate *repeatEngagementOverrideEndDate; // ivar: _repeatEngagementOverrideEndDate
@property (nonatomic) unsigned int service; // ivar: _service
@property (retain, nonatomic) NSDictionary *signalDeadline; // ivar: _signalDeadline
@property (nonatomic) BOOL signalsIgnored; // ivar: _signalsIgnored
@property (readonly) Class superclass;
@property (nonatomic) BOOL temporarilyDisabled; // ivar: _temporarilyDisabled
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (retain, nonatomic) PowerUITrialManager *trialManager; // ivar: _trialManager
@property (retain, nonatomic) NSDate *uiDeadline; // ivar: _uiDeadline
@property (retain, nonatomic) UNUserNotificationCenter *unCenter; // ivar: _unCenter


+(id)manager;
-(BOOL)deviceHasEnoughPluggedInTime;
-(BOOL)deviceHasOverriddenLegitimateUsageDetection;
-(BOOL)deviceHasSeveralInteractions;
-(BOOL)deviceWasRecentlyActive;
-(BOOL)deviceWasRecentlyConnectedToCharger;
-(BOOL)isDeviceWithLegitimateUsage;
-(BOOL)isExternalConnected;
-(BOOL)isMCMSupported;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)setChargingStatus:(BOOL)arg0 ;
-(BOOL)shouldDisableChargingOverrideModel:(NSUInteger)arg0 ;
-(BOOL)watchIsInternalAndCarrySwitchDisabled;
-(CGFloat)durationToFullChargeFromBatteryLevel:(NSUInteger)arg0 ;
-(CGFloat)durationToFullChargeFromBatteryLevel:(NSUInteger)arg0 includeTLCDelay:(BOOL)arg1 ;
-(CGFloat)idleDurationWithEngagedCheckpoints:(id)arg0 withTopOffStartCheckpoints:(id)arg1 withDisabledCheckpoints:(id)arg2 withTopOffStart:(id)arg3 withIdleStart:(id)arg4 withTemporarilyDisabledStart:(id)arg5 withPluginEnd:(id)arg6 ;
-(CGFloat)periodicCheckDuration;
-(CGFloat)totalTemporarilyDisabledHours:(id)arg0 withEngagements:(id)arg1 withPluginEnd:(id)arg2 ;
-(CGFloat)totalTopOffDurationWithTopOffStartCheckpoints:(id)arg0 withFullyChargedCheckpoints:(id)arg1 withTopOffStart:(id)arg2 withFullyChargedDate:(id)arg3 withPluginEnd:(id)arg4 ;
-(NSUInteger)projectedBatteryLevelForDuration:(NSUInteger)arg0 withInitialBatteryLevel:(NSUInteger)arg1 ;
-(id)adjustedFullChargeDeadlineWithSignals:(id)arg0 andBatteryMitigationAdvancement:(CGFloat)arg1 withDesktopMode:(BOOL)arg2 withFullChargeDeadline:(id)arg3 withResult:(id)arg4 ;
-(id)chargePrediction:(NSUInteger)arg0 fullyCharged:(BOOL)arg1 previousCheckpoint:(NSUInteger)arg2 predictor:(NSUInteger)arg3 ;
-(id)checkpointNameFromCheckpoint:(NSUInteger)arg0 ;
-(id)cloakingMetrics:(id)arg0 withIdleCheckpoints:(id)arg1 withIdleStart:(id)arg2 withTopOffStart:(id)arg3 withPluginEnd:(id)arg4 ;
-(id)computeSignalDeadline;
-(id)constructAnalyticsStatus;
-(id)constructAnalyticsStatusFromEvents:(id)arg0 ;
-(id)constructDailyStats:(id)arg0 ;
-(id)dailyStatsFromLastReported:(id)arg0 ;
-(id)defaultDateToDisableUntilGivenDate:(id)arg0 ;
-(id)desktopModeOverride;
-(id)eligibleEngagementIntervalFromTimelineEvents:(id)arg0 ;
-(id)fullChargeDeadline;
-(id)fullChargeDeadlineStringFromDate:(id)arg0 ;
-(id)genericOBCFailureNotification:(id)arg0 ;
// -(id)initWithDefaultsDomain:(id)arg0 knowledgeStore:(id)arg1 contextStore:(id)arg2 beforeHandlingBatteryChangeCallback:(id)arg3 afterHandlingBatteryChangeCallback:(unk)arg4  ;
-(id)lastAcquiredLocation;
-(id)mcmActiveNotificationRequest;
-(id)readAndRemoveRecentEngagements;
-(id)readDateForPreferenceKey:(id)arg0 ;
-(id)readNumberForPreferenceKey:(id)arg0 ;
-(id)readStringForPreferenceKey:(id)arg0 ;
-(id)recentEngagements;
-(id)setFullChargeDeadline:(id)arg0 withOCVMitigationWaitTime:(CGFloat)arg1 ;
-(id)shouldDisableChargingAsOfDate:(id)arg0 atBatteryLevel:(NSUInteger)arg1 overrideAllSignals:(BOOL)arg2 withPredictor:(id)arg3 bypassSaved:(BOOL)arg4 ;
-(id)shouldDisableChargingAtBatteryLevel:(NSUInteger)arg0 withPredictor:(id)arg1 ;
-(id)shouldDisableChargingMLPredictor:(NSUInteger)arg0 ;
-(id)smartTopOffEngagedContent:(BOOL)arg0 ;
-(id)smartTopOffEngagedRequest:(BOOL)arg0 ;
-(id)smartTopOffFailureNotificationAtBatteryLevel:(int)arg0 withDate:(id)arg1 ;
-(id)stringFromDecisionMaker:(NSInteger)arg0 decisionDate:(id)arg1 ;
-(id)stringFromInterval:(id)arg0 ;
-(id)stringFromState:(NSUInteger)arg0 ;
-(id)timeStringFromDate:(id)arg0 ;
-(id)ttrURLforBatteryLevel:(int)arg0 withDate:(id)arg1 ;
-(id)ttrURLforGenericFailure:(id)arg0 ;
-(id)uiDeadlineFromFullChargeDeadline:(id)arg0 atDate:(id)arg1 ;
-(id)updateAnalyticsWithPluginMetrics:(id)arg0 withBatteryLevel:(int)arg1 ;
-(void)accessoryConnectionAttached:(id)arg0 type:(int)arg1 ;
-(void)accessoryConnectionDetached:(id)arg0 ;
-(void)accessoryNFCConnectionCallback:(id)arg0 ;
-(void)addEngagementFromDate:(id)arg0 withDuration:(CGFloat)arg1 ;
-(void)addPowerLogEventForCheckpoint:(NSUInteger)arg0 decisionSignalID:(id)arg1 decisionDate:(id)arg2 ;
-(void)cleanupOverrides;
-(void)cleanupPluginHistoryWithActivity:(id)arg0 ;
-(void)clearAllNotificationState;
-(void)clearPluginTimeline;
-(void)client:(id)arg0 setChargingStatus:(BOOL)arg1 withHandler:(id)arg2 ;
-(void)client:(id)arg0 setMCMState:(NSUInteger)arg1 withHandler:(id)arg2 ;
-(void)client:(id)arg0 setState:(NSUInteger)arg1 withHandler:(id)arg2 ;
-(void)currentLeewayWithHandler:(id)arg0 ;
-(void)disableCharging;
-(void)dispatchAlarmAfter:(NSInteger)arg0 withName:(id)arg1 ;
-(void)enableCharging;
-(void)engageFrom:(id)arg0 until:(id)arg1 repeatUntil:(id)arg2 overrideAllSignals:(BOOL)arg3 withHandler:(id)arg4 ;
-(void)enterDevelopmentMode;
-(void)evaluateIfDesktopDevice;
-(void)evaluateIfDesktopDeviceForced:(BOOL)arg0 ;
-(void)forceModelUpdate;
-(void)fullChargeDeadlineWithHandler:(id)arg0 ;
-(void)handleAlarmEvent:(id)arg0 ;
-(void)handleCallback;
-(void)handleCallback:(BOOL)arg0 ;
-(void)handleInternalCarryPromptEvent;
-(void)handleNewBatteryLevel:(int)arg0 whileExternalConnected:(BOOL)arg1 fullyCharged:(BOOL)arg2 ;
-(void)handleTopOffSupervisorEvent;
-(void)handleTopOffSupervisorEventInternal;
-(void)handleXPCActivityOnBoot;
-(void)isMCMCurrentlyEnabledWithHandler:(id)arg0 ;
-(void)isOBCEngagedWithHandler:(id)arg0 ;
-(void)isOBCSupportedWithHandler:(id)arg0 ;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(id)arg0 ;
-(void)listMonitorSignals;
-(void)loadCheckpoint;
-(void)loadDefaults;
-(void)mcmDisableCharging;
-(void)mcmEnableCharging;
-(void)monitor:(id)arg0 maySuggestNewFullChargeDeadline:(id)arg1 ;
-(void)pluginTimelineAddEvent:(id)arg0 atDate:(id)arg1 withBatteryLevel:(NSUInteger)arg2 ;
-(void)powerLogStatusWithHandler:(id)arg0 ;
-(void)recallPeriodicCheck;
-(void)recomputeEmpiricalTimeToFullCharge;
-(void)recordAnalytics;
-(void)reportAggDKeys:(id)arg0 ;
-(void)reportBatteryHealthMetrics;
-(void)reportHistoricalEngagements;
-(void)reportMCMStatusWithBatteryLevel:(int)arg0 ;
-(void)requestPeriodicCheck;
-(void)resetDevelopmentMode;
-(void)resetDeviceHasLegitimateUsage;
-(void)resetEngagementOverrideWithHandler:(id)arg0 ;
-(void)resetState;
-(void)setDate:(id)arg0 forPreferenceKey:(id)arg1 ;
-(void)setNumber:(id)arg0 forPreferenceKey:(id)arg1 ;
-(void)setString:(id)arg0 forPreferenceKey:(id)arg1 ;
-(void)shouldMCMBeDisplayedWithHandler:(id)arg0 ;
-(void)simulateCurrentOutputAsOfDate:(id)arg0 overrideAllSignals:(BOOL)arg1 withHandler:(id)arg2 ;
-(void)startAllMonitoring;
-(void)startFidgetMitigationTimer;
-(void)statusWithHandler:(id)arg0 ;
-(void)stopAllMonitoring;
-(void)updateChargingTimeSaved;
-(void)updateDecisionMakerID:(NSInteger)arg0 withCheckpoint:(NSUInteger)arg1 ;
-(void)updateNotificationSettings:(BOOL)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif