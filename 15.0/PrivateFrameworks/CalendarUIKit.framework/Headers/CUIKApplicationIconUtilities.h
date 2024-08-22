// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKAPPLICATIONICONUTILITIES_H
#define CUIKAPPLICATIONICONUTILITIES_H


#import <Foundation/Foundation.h>


@interface CUIKApplicationIconUtilities : NSObject



+(BOOL)_isDate:(id)arg0 withinNextWeekOfDate:(id)arg1 calendar:(id)arg2 ;
+(BOOL)_isDate:(id)arg0 withinPreviousWeekOfDate:(id)arg1 calendar:(id)arg2 ;
+(BOOL)_isWithinNextWeek:(id)arg0 calendar:(id)arg1 ;
+(BOOL)_isWithinPreviousWeek:(id)arg0 calendar:(id)arg1 ;
+(NSInteger)dateNameFormatType:(int)arg0 ;
+(NSInteger)iconDateNameFormatTypeForDateBasedOnDistanceFromNow:(id)arg0 calendar:(id)arg1 ;
+(id)dateFormatterWithCalendar:(id)arg0 ;


@end


#endif