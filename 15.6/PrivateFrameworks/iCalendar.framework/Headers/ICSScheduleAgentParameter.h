// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSSCHEDULEAGENTPARAMETER_H
#define ICSSCHEDULEAGENTPARAMETER_H



#import "ICSPredefinedValue.h"

@interface ICSScheduleAgentParameter : ICSPredefinedValue



+(id)scheduleAgentParameterFromCode:(int)arg0 ;
+(id)scheduleAgentParameterFromICSString:(id)arg0 ;
-(Class)classForCoder;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif