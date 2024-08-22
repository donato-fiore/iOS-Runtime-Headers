// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HOURLYMAINTENANCEACTIVITY_H
#define HOURLYMAINTENANCEACTIVITY_H



#import "PeriodicMaintenanceActivity.h"

@interface HourlyMaintenanceActivity : PeriodicMaintenanceActivity



+(NSInteger)periodicActivityInterval;
+(char *)periodicActivityID;
+(id)sharedInstance;


@end


#endif