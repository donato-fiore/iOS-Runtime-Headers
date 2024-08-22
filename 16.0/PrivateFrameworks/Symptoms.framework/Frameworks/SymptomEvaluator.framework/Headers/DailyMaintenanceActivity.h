// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAILYMAINTENANCEACTIVITY_H
#define DAILYMAINTENANCEACTIVITY_H



#import "PeriodicMaintenanceActivity.h"

@interface DailyMaintenanceActivity : PeriodicMaintenanceActivity



+(NSInteger)periodicActivityInterval;
+(char *)periodicActivityID;
+(id)sharedInstance;


@end


#endif