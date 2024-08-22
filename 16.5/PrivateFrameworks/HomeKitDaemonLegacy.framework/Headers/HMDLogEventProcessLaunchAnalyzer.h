// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLOGEVENTPROCESSLAUNCHANALYZER_H
#define HMDLOGEVENTPROCESSLAUNCHANALYZER_H

@class NSDate, NSString, HMFTimer;
@protocol HMFTimerDelegate, HMDAggregationAnalysisEventContributing, HMMLogEventSubmitting;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCountersManager.h"
#import "HMDHomeManager.h"

@interface HMDLogEventProcessLaunchAnalyzer : HMDLogEventAnalyzer <HMFTimerDelegate, HMDAggregationAnalysisEventContributing>

 {
    NSInteger _launchInfoSubmissionState;
    NSDate *_processLaunchTime;
    NSDate *_processLastExitTime;
    NSString *_processExitType;
    NSString *_processExitReason;
    NSUInteger _numUncommittedRecords;
    NSUInteger _numUncommittedAndPushedRecords;
    NSString *_dataSyncStateAsString;
    CGFloat _timeIntervalSincePreviousProcessLaunch;
    NSUInteger _systemUptimeMillisecondsRecordedAtLaunch;
    NSUInteger _xpcMessageTransportReadyMilliseconds;
    NSUInteger _homeDataLoadedMilliseconds;
    NSUInteger _accountResolvedMilliseconds;
    NSUInteger _millisecondsSinceLaunchToDataSyncStateGood;
    BOOL _configurationLoaded;
    BOOL _processLaunchInfoEventSubmitted;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDEventCountersManager *eventCountersManager; // ivar: _eventCountersManager
@property (readonly) NSUInteger hash;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) CGFloat processRelaunchEventTimeIntervalThreshold; // ivar: _processRelaunchEventTimeIntervalThreshold
@property (readonly) HMFTimer *submitProcessLaunchInfoTimer; // ivar: _submitProcessLaunchInfoTimer
@property (readonly) Class superclass;


+(id)managedEventCounterRequestGroups;
-(id)initWithProcessLaunchInfoTimer:(id)arg0 eventCountersManager:(id)arg1 logEventSubmitter:(id)arg2 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)handleAccountResolvedEvent:(id)arg0 ;
-(void)handleArchiveReplayLogEvent:(id)arg0 ;
-(void)handleDataSyncStateUpdateLogEvent:(id)arg0 ;
-(void)handleExitContextForHomed:(id)arg0 ;
-(void)handleProcessLaunchLogEvent:(id)arg0 ;
-(void)handleXPCMessageTransportStartedEvent:(id)arg0 ;
-(void)homeKitConfigurationChangedWithHomeManager:(id)arg0 ;
-(void)populateAggregationAnalysisLogEvent:(id)arg0 ;
-(void)resetAggregationAnalysisContext;
-(void)submitMigrationLogEvent;
-(void)submitProcessLaunchEventWithCurrentAnalysis;
-(void)submitProcessLaunchInfoEventPendingAllConditions;
-(void)timerDidFire:(id)arg0 ;
-(void)updateProcessLaunchInfoFromDisk;


@end


#endif