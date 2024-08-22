// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSHOSTPOWERSOURCEMONITOR_H
#define CSHOSTPOWERSOURCEMONITOR_H



#import "CSEventMonitor.h"

@interface CSHostPowerSourceMonitor : CSEventMonitor



+(id)sharedInstance;
-(NSInteger)currentPowerSource;
-(id)init;


@end


#endif