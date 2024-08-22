// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALTIMEINTERVALLOCALIZATION_H
#define CALTIMEINTERVALLOCALIZATION_H


#import <Foundation/Foundation.h>


@interface CalTimeIntervalLocalization : NSObject



+(id)_localizedStringWithTimeString:(id)arg0 rawDuration:(CGFloat)arg1 options:(NSUInteger)arg2 ;
+(id)_localizedTimeStringForAllDayEventDuration:(CGFloat)arg0 includeAlert:(BOOL)arg1 ;
+(id)_localizedTimeStringForTimedEventDuration:(CGFloat)arg0 abbreviate:(BOOL)arg1 ;
+(id)_stringWithDurations:(id)arg0 timeUnits:(id)arg1 ;
+(id)localizedStringForInterval:(CGFloat)arg0 withOptions:(NSUInteger)arg1 ;
+(void)_calculateDurations:(id)arg0 timeUnits:(id)arg1 forDuration:(CGFloat)arg2 allDay:(BOOL)arg3 abbreviate:(BOOL)arg4 ;
+(void)_calculateDurations:(id)arg0 timeUnits:(id)arg1 forDuration:(CGFloat)arg2 allDay:(BOOL)arg3 dayDuration:(*id)arg4 hourDuration:(*id)arg5 minuteDuration:(*id)arg6 secondDuration:(*id)arg7 abbreviate:(BOOL)arg8 ;


@end


#endif