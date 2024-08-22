// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABCWEEKLYMAINTENANCEACTIVITY_H
#define ABCWEEKLYMAINTENANCEACTIVITY_H



#import "ABCPeriodicMaintenanceActivity.h"

@interface ABCWeeklyMaintenanceActivity : ABCPeriodicMaintenanceActivity



+(NSInteger)periodicActivityInterval;
+(char *)periodicActivityID;
+(id)sharedInstance;


@end


#endif