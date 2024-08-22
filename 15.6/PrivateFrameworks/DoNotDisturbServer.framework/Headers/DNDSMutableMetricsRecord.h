// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMUTABLEMETRICSRECORD_H
#define DNDSMUTABLEMETRICSRECORD_H

@class NSDate, NSDictionary;


#import "DNDSMetricsRecord.h"

@interface DNDSMutableMetricsRecord : DNDSMetricsRecord

@property (copy, nonatomic) NSDate *lastDailyHeartbeat;
@property (copy, nonatomic) NSDate *lastMonthlyHeartbeat;
@property (copy, nonatomic) NSDate *lastWeeklyHeartbeat;
@property (copy, nonatomic) NSDictionary *metricsByDay;
@property (copy, nonatomic) NSDictionary *metricsByMonth;
@property (copy, nonatomic) NSDictionary *metricsByWeek;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif