// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEMORYLOGEVENT_H
#define HMDMEMORYLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMDDiagnosticReportLogging, HMMCoreAnalyticsLogging;



@interface HMDMemoryLogEvent : HMMLogEvent <HMDDiagnosticReportLogging, HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger maxMemoryUsage; // ivar: _maxMemoryUsage
@property (readonly) NSUInteger memoryUsage; // ivar: _memoryUsage
@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSDictionary *serializedEvent;


+(id)memoryLogEventWithReason:(id)arg0 memoryUsage:(NSUInteger)arg1 maxMemoryUsage:(NSUInteger)arg2 ;
-(id)__initWithReason:(id)arg0 memoryUsage:(NSUInteger)arg1 maxMemoryUsage:(NSUInteger)arg2 ;
-(id)init;
-(void)updateDiagnosticReportSignature:(id)arg0 ;


@end


#endif