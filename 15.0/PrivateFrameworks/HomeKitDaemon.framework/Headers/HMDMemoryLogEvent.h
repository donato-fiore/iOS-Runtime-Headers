// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMEMORYLOGEVENT_H
#define HMDMEMORYLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDDiagnosticReportLogging, HMMCoreAnalyticsLogging;



@interface HMDMemoryLogEvent : HMMLogEvent <HMDDiagnosticReportLogging, HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly) NSUInteger maxMemoryUsage; // ivar: _maxMemoryUsage
@property (readonly) NSUInteger memoryUsage; // ivar: _memoryUsage
@property (readonly, nonatomic) NSString *reason; // ivar: _reason


+(id)memoryLogEventWithReason:(id)arg0 memoryUsage:(NSUInteger)arg1 maxMemoryUsage:(NSUInteger)arg2 ;
-(id)__initWithReason:(id)arg0 memoryUsage:(NSUInteger)arg1 maxMemoryUsage:(NSUInteger)arg2 ;
-(id)eventName;
-(id)init;
-(id)serializedEvent;
-(void)updateDiagnosticReportSignature:(id)arg0 ;


@end


#endif