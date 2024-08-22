// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDASSERTIONLOGEVENT_H
#define HMDASSERTIONLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDDiagnosticReportLogging;



@interface HMDAssertionLogEvent : HMMLogEvent <HMDDiagnosticReportLogging>

 {
    NSString *_description;
}


@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *reason; // ivar: _reason


-(id)description;
-(id)initWithReason:(id)arg0 ;
-(void)updateDiagnosticReportSignature:(id)arg0 ;


@end


#endif