// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEMIDAILYMAINTENANCEACTIVITY_H
#define SEMIDAILYMAINTENANCEACTIVITY_H



#import "PeriodicMaintenanceActivity.h"

@interface SemiDailyMaintenanceActivity : PeriodicMaintenanceActivity



+(NSInteger)periodicActivityInterval;
+(char *)periodicActivityID;
+(id)sharedInstance;


@end


#endif