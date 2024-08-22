// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDLAUNCHEVENT_H
#define HMDLAUNCHEVENT_H

@class HMMLogEvent, NSDate, NSString, HMFActivity;
@protocol HMDDiagnosticReportLogging, HMMCoreAnalyticsLogging;



@interface HMDLaunchEvent : HMMLogEvent <HMDDiagnosticReportLogging, HMMCoreAnalyticsLogging>

 {
    NSDate *_XPCMessageTransportStartedDate;
}


@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (retain) HMFActivity *activity; // ivar: _activity
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly) CGFloat diagnosticReportThreshold;
@property BOOL hasUncommittedAndPushedRecords; // ivar: _hasUncommittedAndPushedRecords
@property BOOL hasUncommittedRecords; // ivar: _hasUncommittedRecords
@property NSInteger numUncommittedAndPushedRecords; // ivar: _numUncommittedAndPushedRecords
@property NSInteger numUncommittedRecords; // ivar: _numUncommittedRecords
@property (readonly) NSUInteger systemUptimeMillisecondsRecordedAtLaunch; // ivar: _systemUptimeMillisecondsRecordedAtLaunch


-(id)eventName;
-(id)init;
-(id)serializedEvent;
-(void)markXPCMessageTransportStarted;
-(void)updateDiagnosticReportSignature:(id)arg0 ;


@end


#endif