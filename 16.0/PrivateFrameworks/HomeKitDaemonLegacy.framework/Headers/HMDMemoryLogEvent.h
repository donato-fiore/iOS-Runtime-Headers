// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEMORYLOGEVENT_H
#define HMDMEMORYLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDDiagnosticReportLogging;



@interface HMDMemoryLogEvent : HMMLogEvent <HMDDiagnosticReportLogging>



@property (readonly) NSUInteger currentMemoryUsage; // ivar: _currentMemoryUsage
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly) NSUInteger intervalMaxMemoryUsage; // ivar: _intervalMaxMemoryUsage
@property (readonly) NSInteger reason; // ivar: _reason


-(id)init;
-(id)initWithReason:(NSInteger)arg0 currentMemoryUsage:(NSUInteger)arg1 intervalMaxMemoryUsage:(NSUInteger)arg2 ;
-(void)updateDiagnosticReportSignature:(id)arg0 ;


@end


#endif