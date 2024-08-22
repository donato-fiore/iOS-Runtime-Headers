// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POWERUIPREDICTORHELPER_H
#define POWERUIPREDICTORHELPER_H


#import <Foundation/Foundation.h>


@interface PowerUIPredictorHelper : NSObject



+(CGFloat)getHourBinID:(id)arg0 forHourBin:(NSUInteger)arg1 ;
+(CGFloat)hoursUntilUseFromBucketedUsage:(id)arg0 withCurrentHour:(int)arg1 withComponentsMinutes:(NSInteger)arg2 ;
+(CGFloat)meanEventDuration:(id)arg0 ;
+(CGFloat)meanOf:(id)arg0 ;
+(CGFloat)medianOf:(id)arg0 ;
+(CGFloat)medianTimeBetweenDescendingEvents:(id)arg0 ;
+(CGFloat)standardDeviationOf:(id)arg0 ;
+(id)events:(id)arg0 forHourBin:(NSUInteger)arg1 date:(id)arg2 withMaxDuration:(CGFloat)arg3 ;
+(id)filterEvents:(id)arg0 startOnSameWeekdayAs:(id)arg1 ;
+(id)filterEventsSortedByStartDateAscending:(id)arg0 startsBefore:(id)arg1 dynamicallyAroundDate:(id)arg2 withHourBinWidth:(NSUInteger)arg3 ;
+(id)getDurationsFromEvents:(id)arg0 withUnit:(CGFloat)arg1 cappedAt:(CGFloat)arg2 ;
+(id)getUsageBucketsForEvents:(id)arg0 forDate:(id)arg1 withLog:(id)arg2 ;
+(id)timeBetweenUsesForSortedDescendingByAgeEvents:(id)arg0 forHourBin:(NSUInteger)arg1 atDate:(id)arg2 addAtDate:(BOOL)arg3 ;


@end


#endif