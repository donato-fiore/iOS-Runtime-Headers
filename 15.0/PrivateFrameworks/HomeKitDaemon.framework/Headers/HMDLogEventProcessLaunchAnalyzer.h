// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDLOGEVENTPROCESSLAUNCHANALYZER_H
#define HMDLOGEVENTPROCESSLAUNCHANALYZER_H

@class NSDate, NSString, HMFTimer;
@protocol HMFTimerDelegate, HMDAggregationAnalysisEventContributing, HMMLogEventSubmitting;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCountersManager.h"

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
    NSUInteger _millisecondsSinceLaunchToDataSyncStateGood;
    BOOL _configurationLoaded;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDEventCountersManager *eventCountersManager; // ivar: _eventCountersManager
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) CGFloat processRelaunchEventTimeIntervalThreshold; // ivar: _processRelaunchEventTimeIntervalThreshold
@property (readonly) HMFTimer *submitProcessLaunchInfoTimer; // ivar: _submitProcessLaunchInfoTimer
@property (readonly) Class superclass;


+(id)managedEventCounterRequestGroups;
-(id)initWithProcessLaunchInfoTimer:(id)arg0 eventCountersManager:(id)arg1 logEventSubmitter:(id)arg2 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)handleDataSyncStateUpdateLogEvent:(id)arg0 ;
-(void)handleExitContextForHomed:(id)arg0 ;
-(void)handleProcessLaunchLogEvent:(id)arg0 ;
-(void)populateAggregationAnalysisLogEvent:(id)arg0 ;
-(void)resetAggregationAnalysisContext;
-(void)submitProcessLaunchEventWithCurrentAnalysis;
-(void)submitProcessLaunchInfoEventPendingConfiguration;
-(void)timerDidFire:(id)arg0 ;
-(void)updateProcessLaunchInfoFromDisk;


@end


#endif