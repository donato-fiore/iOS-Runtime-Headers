// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFMYRIADCOORDINATOR_H
#define AFMYRIADCOORDINATOR_H

@class NSData, NSMutableDictionary, NSString, NSUUID, NSDateFormatter, WPHeySiri, NSDate, SFDiagnostics, AWAttentionAwarenessClient;
@protocol AFNotifyObserverDelegate, WPHeySiriProtocol, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "AFWatchdogTimer.h"
#import "AFPowerAssertionManager.h"
#import "AFMyriadRecord.h"
#import "AFMyriadEmergencyCallPunchout.h"
#import "AFMyriadAdvertisementContextManager.h"
#import "AFMyriadAdvertisementContextRecord.h"
#import "AFMyriadGoodnessScoreEvaluator.h"
#import "AFMyriadSession.h"
#import "AFNotifyStatePublisher.h"
#import "AFNotifyObserver.h"
#import "AFMyriadPreferences.h"
#import "AFMyriadContext.h"
#import "AFMyriadInstrumentation.h"

@interface AFMyriadCoordinator : NSObject <AFNotifyObserverDelegate, WPHeySiriProtocol>

 {
    NSUInteger _myriadState;
    NSUInteger _nextState;
    NSUInteger _previousState;
    NSData *_previousAdvertisedData;
    NSMutableDictionary *_replies;
    NSMutableDictionary *_replyCounts;
    NSMutableDictionary *_repliesBeforeDecision;
    NSMutableDictionary *_previousTrumps;
    NSMutableDictionary *_incomingTrumps;
    NSMutableDictionary *_multipleContinuations;
    id *_delegate;
    NSString *_deviceClassName;
    unsigned char _deviceClass;
    unsigned char _productType;
    NSString *_productTypeName;
    int _deviceAdjust;
    CGFloat _deviceDelay;
    CGFloat _deviceTrumpDelay;
    CGFloat _deviceVTEndtimeDistanceThreshold;
    CGFloat _deviceInEarDelay;
    CGFloat _deviceInEarInterval;
    unsigned char _deviceGroup;
    NSObject<OS_dispatch_queue> *_myriadWorkQueue;
    NSObject<OS_dispatch_queue> *_myriadAdvertisementContextQueue;
    NSObject<OS_dispatch_queue> *_myriadAttentionQueue;
    NSString *_timerLabel;
    NSObject<OS_dispatch_source> *_timer;
    NSUUID *_eventToken;
    AFWatchdogTimer *_overallTimeout;
    AFPowerAssertionManager *_powerAssertionManager;
    *__CFNotificationCenter _center;
    AFMyriadRecord *_triggerRecord;
    NSInteger _recordType;
    NSUInteger _voiceTriggerTime;
    float _delayTarget;
    float _advertInterval;
    int _nTimesContinued;
    int _nTimesExtended;
    unsigned char _incomingAdjustment;
    AFMyriadRecord *_overrideMyriadRecord;
    int _slowdownMsecs;
    int _testInducedSlowdownMsecs;
    AFMyriadRecord *_maxSlowdownRecord;
    BOOL _BTLEReady;
    BOOL _inTask;
    BOOL _inSetupMode;
    BOOL _ducking;
    BOOL _stateMachineEncounteredError;
    BOOL _listenTimerIsRunning;
    BOOL _coordinationEnabled;
    BOOL _BLEActivityEnabled;
    BOOL _clientIsDirectActivating;
    BOOL _clientIsInEarActivation;
    BOOL _clientRecentlyLostElection;
    BOOL _clientLostDueToTrumping;
    BOOL _clientIsListeningAfterRecentWin;
    BOOL _clientIsWatchActivation;
    BOOL _clientIsWatchTrumpPromote;
    BOOL _clientIsRespondingToSlowdown;
    BOOL _clientDoneRespondingToSlowdown;
    BOOL _clientRespondingToCarPlay;
    BOOL _clientIsDeciding;
    int _constantGoodness;
    NSObject<OS_dispatch_source> *_timerSource;
    NSDateFormatter *_dateFormat;
    WPHeySiri *_heySiriBTLE;
    NSUUID *_designatedSelfID;
    NSDate *_triggerTime;
    int _nDeltaTs;
    AFMyriadEmergencyCallPunchout *_callPunchout;
    NSUInteger _lastDecisionTime;
    BOOL _lastDecision;
    unsigned short _lastPHash;
    CGFloat _lastEmergencyAttempt;
    BOOL _wasEmergency;
    BOOL _suppressLateTrigger;
    BOOL _ignoreInTaskTimer;
    SFDiagnostics *_sfdiagnostics;
    AFWatchdogTimer *_sfDiagnosticsTimer;
    ? _heySiriBTLEState;
    ? _wiproxReadinessTimer;
    ? _advTiming;
    AFMyriadAdvertisementContextManager *_advContextManager;
    AFMyriadAdvertisementContextRecord *_contextRecord;
    AFMyriadGoodnessScoreEvaluator *_goodnessScoreEvaluator;
    AFMyriadSession *_myriadSession;
    AFNotifyStatePublisher *_electionBeginPublisher;
    AFNotifyStatePublisher *_electionWinPublisher;
    AFNotifyStatePublisher *_electionLossPublisher;
    AFNotifyStatePublisher *_electionRepostWinDecisionPublisher;
    AFNotifyObserver *_preferencesChangedNotification;
    NSUInteger _electionPublisherState;
    AFMyriadPreferences *_preferences;
    AWAttentionAwarenessClient *_attentionClient;
    id *_waitForWiproxReadinessToScan;
    NSUInteger _latestRecordReceivedTime;
    AFMyriadContext *_currentMyriadContext;
    AFMyriadInstrumentation *_myriadInstrumentation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)currentCoordinator;
+(void)clearCurrentCoordinator;
+(void)didChangeDefaults;
-(BOOL)_deviceShouldContinue:(id)arg0 ;
-(BOOL)_inTaskTriggerWasTooSoon;
-(BOOL)_isAPhone:(unsigned char)arg0 ;
-(BOOL)_okayToSuppressOnOutput;
-(BOOL)_shouldContinueFor:(id)arg0 ;
-(BOOL)_shouldHandleEmergency;
-(BOOL)_shouldStopListeningBeforeAdvertising;
-(BOOL)_shouldUseContextCollector;
-(BOOL)_testAndUpdateWedgeFilter:(id)arg0 ;
-(BOOL)inTask;
-(CGFloat)_contextFetchDelayForAdvertimentInterval:(CGFloat)arg0 advertisementDelay:(CGFloat)arg1 ;
-(NSUInteger)_nextElectionPublisherState;
-(float)deviceTrumpDelay;
-(id)_endAdvertisingAnalyticsContext:(BOOL)arg0 ;
-(id)_myriadSession;
-(id)_phsSetupRecord;
-(id)_sortedReplies;
-(id)_sortedReplies:(id)arg0 ;
-(id)_stateAsString;
-(id)_stateAsString:(NSUInteger)arg0 ;
-(id)_testAndFilterAdvertisementsFromContextCollector:(id)arg0 voiceTriggerEndTime:(CGFloat)arg1 advertisementDispatchTime:(CGFloat)arg2 advertisement:(id)arg3 ;
-(id)continuationRecord;
-(id)directTriggerRecord;
-(id)emergencyHandledRecord;
-(id)emergencyRecord;
-(id)emptyRecord;
-(id)initWithDelegate:(id)arg0 ;
-(id)lateSuppressionRecord;
-(id)responseObject:(unsigned short)arg0 ;
-(id)slowdownRecord:(unsigned short)arg0 ;
-(id)stateAsString:(NSUInteger)arg0 ;
-(id)voiceTriggerRecord;
-(unsigned char)deviceClass;
-(unsigned char)deviceGroup;
-(void)_addElectionAdvertisementDataToMyriadSession:(id)arg0 ;
-(void)_adjustActionWindowsFromSlowdown:(int)arg0 ;
-(void)_advertise:(id)arg0 afterDelay:(float)arg1 maxInterval:(float)arg2 andMoveTo:(NSUInteger)arg3 ;
-(void)_advertise:(id)arg0 andMoveTo:(NSUInteger)arg1 ;
-(void)_advertiseIndefinite:(id)arg0 ;
-(void)_advertiseSlowdown;
-(void)_advertiseSuppressTriggerInOutput;
-(void)_advertiseTrigger;
-(void)_advertiseWith:(id)arg0 afterDelay:(float)arg1 maxInterval:(float)arg2 thenExecute:(id)arg3 ;
-(void)_ageWedgeFilter;
-(void)_cancelOverallTimeout;
-(void)_cancelTimer;
-(void)_clearMyriadSession;
-(void)_clearWiProxReadinessTimer;
-(void)_createDispatchTimerFor:(CGFloat)arg0 toExecute:(id)arg1 ;
-(void)_createDispatchTimerForEvent:(id)arg0 toExecute:(id)arg1 ;
-(void)_createDispatchTimerWithTime:(NSUInteger)arg0 toExecute:(id)arg1 ;
-(void)_createMyriadSessionIfRequired;
-(void)_createWaitWiProxTimer:(NSInteger)arg0 waitBlock:(id)arg1 ;
-(void)_duringNextWindowEnterState:(NSUInteger)arg0 ;
-(void)_duringNextWindowExecute:(id)arg0 ;
-(void)_endAdvertising:(id)arg0 ;
-(void)_endAdvertisingWithDeviceProhibitions:(id)arg0 ;
-(void)_enterBLEDiagnosticMode;
-(void)_enterState:(NSUInteger)arg0 ;
-(void)_enteringIntoState:(NSUInteger)arg0 fromState:(NSUInteger)arg1 ;
-(void)_handleStateMachineErrorIfNeeded;
-(void)_initDeviceClassAndAdjustments;
-(void)_initializeTimer;
-(void)_initializeWiProxReadinessTimer;
-(void)_leaveBLEDiagnosticMode;
-(void)_loseElection;
-(void)_pushMyriadAdvertisementContextToContextCollectorWithAdvertisementInterval:(CGFloat)arg0 advertisementDelay:(CGFloat)arg1 ;
-(void)_readDefaults;
-(void)_resetActionWindows;
-(void)_resetAdvertisementTimings;
-(void)_resetAudioData;
-(void)_resumeWiProxReadinessTimer;
-(void)_setMyriadContext:(id)arg0 ;
-(void)_setOverallTimeout;
-(void)_setupActionWindows;
-(void)_signalEmergencyCallHandled;
-(void)_startAdvertising:(id)arg0 afterDelay:(float)arg1 maxInterval:(float)arg2 ;
-(void)_startAdvertisingFromInTaskVoiceTrigger;
-(void)_startAdvertisingFromVoiceTrigger;
-(void)_startListenTimer;
-(void)_startListening:(id)arg0 ;
-(void)_startListeningAfterWiProxIsReady:(BOOL)arg0 inState:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_startTimer:(id)arg0 for:(float)arg1 thenEnterState:(NSUInteger)arg2 ;
-(void)_startTimer:(id)arg0 for:(float)arg1 thenExecute:(id)arg2 ;
-(void)_stopAdvertising:(id)arg0 ;
-(void)_stopAdvertisingAndListening;
-(void)_stopListening:(id)arg0 ;
-(void)_suppressDeviceIfNeededWithVoiceTriggerEndTime:(CGFloat)arg0 adverisementDispatchTime:(CGFloat)arg1 ;
-(void)_suspendWiProxReadinessTimer;
-(void)_triggerABCForType:(id)arg0 context:(id)arg1 ;
-(void)_unduck;
-(void)_updateRepliesWith:(id)arg0 id:(id)arg1 data:(id)arg2 ;
-(void)_waitWiProx:(NSInteger)arg0 andExecute:(id)arg1 ;
-(void)_waitWiProxAndExecute:(id)arg0 ;
-(void)_winElection;
-(void)advertiseWith:(id)arg0 ;
-(void)advertiseWith:(id)arg0 afterDelay:(float)arg1 maxInterval:(float)arg2 ;
-(void)dealloc;
-(void)endAdvertising;
-(void)endAdvertising:(id)arg0 ;
-(void)endAdvertisingAfterDelay:(float)arg0 ;
-(void)endAdvertisingWithDeviceProhibitions:(id)arg0 ;
-(void)endTask;
-(void)enterState:(NSUInteger)arg0 ;
-(void)heySiri:(id)arg0 failedToStartAdvertisingWithError:(id)arg1 ;
-(void)heySiri:(id)arg0 failedToStartScanningWithError:(id)arg1 ;
-(void)heySiri:(id)arg0 foundDevice:(id)arg1 withInfo:(id)arg2 ;
-(void)heySiriAdvertisingPending:(id)arg0 ;
-(void)heySiriDidUpdateState:(id)arg0 ;
-(void)heySiriStartedAdvertising:(id)arg0 ;
-(void)heySiriStartedScanning:(id)arg0 ;
-(void)heySiriStoppedAdvertising:(id)arg0 ;
-(void)heySiriStoppedScanning:(id)arg0 ;
-(void)injectAdvertisementForTesting:(id)arg0 forDevice:(id)arg1 ;
-(void)instrumentationUpdateBoost:(unsigned char)arg0 value:(unsigned int)arg1 ;
-(void)myriadSession:(id)arg0 ;
-(void)notifyCurrentDecisionResult;
-(void)notifyObserver:(id)arg0 didReceiveNotificationWithToken:(int)arg1 ;
-(void)preheatWiProx;
-(void)readDefaults;
-(void)resetMyriadCoordinator:(id)arg0 ;
-(void)resetReplies;
-(void)resetStateMachine;
-(void)setInTask:(BOOL)arg0 ;
-(void)setupActionWindows;
-(void)setupAdvIntervalsInDelay:(*float)arg0 interval:(*float)arg1 withSlowdown:(int)arg2 ;
-(void)setupEnabled:(BOOL)arg0 ;
-(void)startAdvertising:(id)arg0 afterDelay:(float)arg1 maxInterval:(float)arg2 ;
-(void)startAdvertisingEmergency;
-(void)startAdvertisingEmergencyHandled;
-(void)startAdvertisingEmergencySignal;
-(void)startAdvertisingForPHSSetupAfterDelay:(float)arg0 maxInterval:(float)arg1 ;
-(void)startAdvertisingFromAlertFiringVoiceTrigger;
-(void)startAdvertisingFromAlertFiringVoiceTriggerWithContext:(id)arg0 ;
-(void)startAdvertisingFromCarPlayTrigger;
-(void)startAdvertisingFromDirectTrigger;
-(void)startAdvertisingFromDirectTriggerWithContext:(id)arg0 ;
-(void)startAdvertisingFromInEarTrigger;
-(void)startAdvertisingFromInTaskTriggerWithContext:(id)arg0 ;
-(void)startAdvertisingFromInTaskVoiceTrigger;
-(void)startAdvertisingFromInTaskVoiceTriggerWithContext:(id)arg0 ;
-(void)startAdvertisingFromOutgoingTrigger;
-(void)startAdvertisingFromOutgoingTriggerWithContext:(id)arg0 ;
-(void)startAdvertisingFromVoiceTrigger;
-(void)startAdvertisingFromVoiceTriggerAdjusted:(char)arg0 ;
-(void)startAdvertisingFromVoiceTriggerAdjusted:(char)arg0 withContext:(id)arg1 ;
-(void)startAdvertisingFromVoiceTriggerWithContext:(id)arg0 ;
-(void)startAdvertisingFromVoiceTriggerWithGoodnessScoreContext:(id)arg0 withContext:(id)arg1 ;
-(void)startAdvertisingSlowdown:(unsigned short)arg0 ;
-(void)startListening;
-(void)startListening:(id)arg0 ;
-(void)startListeningToEmergencySignal;
-(void)startResponseAdvertising:(unsigned short)arg0 ;
-(void)startWatchAdvertisingFromDirectTrigger;
-(void)startWatchAdvertisingFromDirectTriggerWithContext:(id)arg0 ;
-(void)startWatchAdvertisingFromVoiceTrigger;
-(void)startWatchAdvertisingFromVoiceTriggerWithContext:(id)arg0 ;
-(void)stopListening;
-(void)stopListening:(id)arg0 ;
-(void)updateRepliesWith:(id)arg0 id:(id)arg1 data:(id)arg2 ;
-(void)waitWiProx:(NSInteger)arg0 andExecute:(id)arg1 ;


@end


#endif