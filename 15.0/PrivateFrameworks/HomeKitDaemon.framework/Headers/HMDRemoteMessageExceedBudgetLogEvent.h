// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEMESSAGEEXCEEDBUDGETLOGEVENT_H
#define HMDREMOTEMESSAGEEXCEEDBUDGETLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDDiagnosticReportLogging;



@interface HMDRemoteMessageExceedBudgetLogEvent : HMMLogEvent <HMDDiagnosticReportLogging>



@property (readonly, nonatomic) _HMFRate budgetRate; // ivar: _budgetRate
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;


+(id)eventWithBudgetRate:(struct _HMFRate )arg0 ;
-(id)initWithBudgetRate:(struct _HMFRate )arg0 ;
-(void)updateDiagnosticReportSignature:(id)arg0 ;


@end


#endif