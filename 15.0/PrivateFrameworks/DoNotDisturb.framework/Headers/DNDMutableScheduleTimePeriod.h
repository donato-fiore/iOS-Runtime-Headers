// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDMUTABLESCHEDULETIMEPERIOD_H
#define DNDMUTABLESCHEDULETIMEPERIOD_H



#import "DNDScheduleTimePeriod.h"
#import "DNDScheduleTime.h"

@interface DNDMutableScheduleTimePeriod : DNDScheduleTimePeriod

@property (copy, nonatomic) DNDScheduleTime *endTime;
@property (copy, nonatomic) DNDScheduleTime *startTime;
@property (nonatomic) NSUInteger weekdays;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif