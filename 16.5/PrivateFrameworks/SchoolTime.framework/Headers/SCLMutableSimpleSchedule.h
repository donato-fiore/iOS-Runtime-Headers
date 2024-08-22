// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLMUTABLESIMPLESCHEDULE_H
#define SCLMUTABLESIMPLESCHEDULE_H



#import "SCLSimpleSchedule.h"
#import "SCLScheduleTime.h"

@interface SCLMutableSimpleSchedule : SCLSimpleSchedule

@property (copy, nonatomic) SCLScheduleTime *endTime;
@property (nonatomic) NSInteger repeatSchedule;
@property (copy, nonatomic) SCLScheduleTime *startTime;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif