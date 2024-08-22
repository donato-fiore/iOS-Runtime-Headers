// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSCALENDARUSERPARAMETER_H
#define ICSCALENDARUSERPARAMETER_H



#import "ICSPredefinedValue.h"

@interface ICSCalendarUserParameter : ICSPredefinedValue



+(id)calendarUserTypeParameterFromCode:(int)arg0 ;
+(id)calendarUserTypeParameterFromICSString:(id)arg0 ;
-(Class)classForCoder;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif