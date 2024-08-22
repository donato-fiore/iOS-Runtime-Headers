// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABCSEMIDAILYMAINTENANCEACTIVITY_H
#define ABCSEMIDAILYMAINTENANCEACTIVITY_H



#import "ABCPeriodicMaintenanceActivity.h"

@interface ABCSemiDailyMaintenanceActivity : ABCPeriodicMaintenanceActivity



+(NSInteger)periodicActivityInterval;
+(char *)periodicActivityID;
+(id)sharedInstance;


@end


#endif