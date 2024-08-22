// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPROCESSLAUNCHINFOLOGEVENT_H
#define HMDPROCESSLAUNCHINFOLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDProcessLaunchInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *dataSyncState; // ivar: _dataSyncState
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger millisecondsSinceLaunchToDataSyncStateGood; // ivar: _millisecondsSinceLaunchToDataSyncStateGood
@property (readonly) NSInteger numUncommittedAndPushedRecords; // ivar: _numUncommittedAndPushedRecords
@property (readonly) NSInteger numUncommittedRecords; // ivar: _numUncommittedRecords
@property (readonly) NSUInteger processCrashCount; // ivar: _processCrashCount
@property (readonly, nonatomic) NSString *processExitReason; // ivar: _processExitReason
@property (readonly, nonatomic) NSString *processExitType; // ivar: _processExitType
@property (readonly) NSUInteger processJetsamCount; // ivar: _processJetsamCount
@property (readonly) NSUInteger processLaunchCount; // ivar: _processLaunchCount
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly) NSInteger submissionState; // ivar: _submissionState
@property (readonly) CGFloat timeIntervalSincePreviousProcessLaunch; // ivar: _timeIntervalSincePreviousProcessLaunch


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
-(id)initWithSubmissionState:(NSInteger)arg0 dataSyncState:(id)arg1 timeIntervalSincePreviousProcessLaunch:(CGFloat)arg2 millisecondsSinceLaunchToDataSyncStateGood:(NSUInteger)arg3 numUncommittedRecords:(NSInteger)arg4 numUncommittedAndPushedRecords:(NSInteger)arg5 processExitType:(id)arg6 processExitReason:(id)arg7 processLaunchCount:(NSUInteger)arg8 processJetsamCount:(NSUInteger)arg9 processCrashCount:(NSUInteger)arg10 ;


@end


#endif