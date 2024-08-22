// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSCALENDARSERVERACCESSVALUE_H
#define ICSCALENDARSERVERACCESSVALUE_H



#import "ICSPredefinedValue.h"

@interface ICSCalendarServerAccessValue : ICSPredefinedValue



+(id)calendarServerAccessFromCode:(int)arg0 ;
+(id)calendarServerAccessFromICSString:(id)arg0 ;
-(Class)classForCoder;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif