// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLOGEVENTCOREDATASIGNIFICANTEVENT_H
#define HMDLOGEVENTCOREDATASIGNIFICANTEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDDiagnosticReportLogging;



@interface HMDLogEventCoreDataSignificantEvent : HMMLogEvent <HMDDiagnosticReportLogging>



@property (retain, nonatomic) NSString *context; // ivar: _context
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (copy, nonatomic) NSString *extraContext; // ivar: _extraContext
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason


-(id)initWithReason:(NSUInteger)arg0 ;
-(id)initWithReason:(NSUInteger)arg0 author:(NSUInteger)arg1 ;
-(void)updateDiagnosticReportSignature:(id)arg0 ;


@end


#endif