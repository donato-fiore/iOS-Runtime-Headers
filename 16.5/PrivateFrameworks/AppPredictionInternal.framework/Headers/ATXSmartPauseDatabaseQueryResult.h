// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSMARTPAUSEDATABASEQUERYRESULT_H
#define ATXSMARTPAUSEDATABASEQUERYRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXSmartPauseDatabaseQueryResult : NSObject

@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) NSUInteger countLastDayNotifications; // ivar: _countLastDayNotifications
@property (nonatomic) NSUInteger countLastDayPositiveEngagements; // ivar: _countLastDayPositiveEngagements
@property (nonatomic) NSUInteger countLastFiveMinutesNotifications; // ivar: _countLastFiveMinutesNotifications
@property (nonatomic) NSUInteger countLastFiveMinutesPositiveEngagements; // ivar: _countLastFiveMinutesPositiveEngagements
@property (nonatomic) NSUInteger countLastHourNotifications; // ivar: _countLastHourNotifications
@property (nonatomic) NSUInteger countLastHourPositiveEngagements; // ivar: _countLastHourPositiveEngagements
@property (nonatomic) NSUInteger countLastWeekNotifications; // ivar: _countLastWeekNotifications
@property (nonatomic) NSUInteger countLastWeekPositiveEngagements; // ivar: _countLastWeekPositiveEngagements
@property (nonatomic) NSUInteger countNotifications; // ivar: _countNotifications
@property (nonatomic) NSUInteger countPositiveEngagements; // ivar: _countPositiveEngagements
@property (retain, nonatomic) NSString *threadId; // ivar: _threadId


+(id)groupByBundleId:(id)arg0 ;
-(id)initWithBundleId:(id)arg0 threadId:(id)arg1 ;
-(void)mergeWithOther:(id)arg0 ;


@end


#endif