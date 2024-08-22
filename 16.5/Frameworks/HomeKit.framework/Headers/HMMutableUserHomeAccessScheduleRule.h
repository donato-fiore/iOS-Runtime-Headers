// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMUTABLEUSERHOMEACCESSSCHEDULERULE_H
#define HMMUTABLEUSERHOMEACCESSSCHEDULERULE_H

@class NSDateComponents, NSDate;


#import "HMUserHomeAccessScheduleRule.h"

@interface HMMutableUserHomeAccessScheduleRule : HMUserHomeAccessScheduleRule

@property NSUInteger daysOfTheWeek;
@property (copy) NSDateComponents *endTime;
@property (copy) NSDateComponents *startTime;
@property (copy) NSDate *validFrom;
@property (copy) NSDate *validThrough;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif