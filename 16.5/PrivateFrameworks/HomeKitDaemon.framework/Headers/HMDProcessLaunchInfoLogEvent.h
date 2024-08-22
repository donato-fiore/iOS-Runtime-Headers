// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPROCESSLAUNCHINFOLOGEVENT_H
#define HMDPROCESSLAUNCHINFOLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDProcessLaunchInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSString *dataSyncState; // ivar: _dataSyncState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL eventSubmittedOnTimeOut; // ivar: _eventSubmittedOnTimeOut
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger homeDataLoadedMilliseconds; // ivar: _homeDataLoadedMilliseconds
@property (readonly) BOOL isConfigurationLoaded; // ivar: _isConfigurationLoaded
@property (readonly) BOOL isTTSUInProgress; // ivar: _isTTSUInProgress
@property (readonly) NSUInteger millisecondsSinceLaunchToDataSyncStateGood; // ivar: _millisecondsSinceLaunchToDataSyncStateGood
@property (readonly) NSUInteger millisecondsToAccountResolved; // ivar: _millisecondsToAccountResolved
@property (readonly) NSInteger numUncommittedAndPushedRecords; // ivar: _numUncommittedAndPushedRecords
@property (readonly) NSInteger numUncommittedRecords; // ivar: _numUncommittedRecords
@property (readonly) NSUInteger processCrashCount; // ivar: _processCrashCount
@property (readonly, nonatomic) NSString *processExitReason; // ivar: _processExitReason
@property (readonly, nonatomic) NSString *processExitType; // ivar: _processExitType
@property (readonly) NSUInteger processJetsamCount; // ivar: _processJetsamCount
@property (readonly) NSUInteger processLaunchCount; // ivar: _processLaunchCount
@property (readonly) NSInteger submissionState; // ivar: _submissionState
@property (readonly) Class superclass;
@property (readonly) NSUInteger systemUptimeMillisecondsAtLaunch; // ivar: _systemUptimeMillisecondsAtLaunch
@property (readonly) CGFloat timeIntervalSincePreviousProcessLaunch; // ivar: _timeIntervalSincePreviousProcessLaunch
@property (readonly) NSUInteger xpcMessageTransportReadyMilliseconds; // ivar: _xpcMessageTransportReadyMilliseconds


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
-(id)initWithSubmissionState:(NSInteger)arg0 dataSyncState:(id)arg1 timeIntervalSincePreviousProcessLaunch:(CGFloat)arg2 millisecondsToHomeDataLoad:(NSUInteger)arg3 millisecondsToXPCMessageTransportReady:(NSUInteger)arg4 millisecondsSinceLaunchToDataSyncStateGood:(NSUInteger)arg5 millisecondsToAccountResolved:(NSUInteger)arg6 numUncommittedRecords:(NSInteger)arg7 numUncommittedAndPushedRecords:(NSInteger)arg8 processExitType:(id)arg9 processExitReason:(id)arg10 processLaunchCount:(NSUInteger)arg11 processJetsamCount:(NSUInteger)arg12 processCrashCount:(NSUInteger)arg13 isConfigurationLoaded:(BOOL)arg14 isTTSUInProgress:(BOOL)arg15 ;


@end


#endif