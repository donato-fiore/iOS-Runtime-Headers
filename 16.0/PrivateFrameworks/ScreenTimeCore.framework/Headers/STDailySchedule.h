// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STDAILYSCHEDULE_H
#define STDAILYSCHEDULE_H

@class NSManagedObject;


#import "STDowntime.h"

@interface STDailySchedule : NSManagedObject

@property (retain, nonatomic) STDowntime *downtime;
@property (nonatomic) NSInteger endHour;
@property (nonatomic) NSInteger endMinute;
@property (nonatomic) NSInteger startHour;
@property (nonatomic) NSInteger startMinute;
@property (nonatomic) NSInteger weekday;




@end


#endif