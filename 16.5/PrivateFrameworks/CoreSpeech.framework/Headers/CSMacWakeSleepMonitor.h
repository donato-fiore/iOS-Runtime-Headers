// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSMACWAKESLEEPMONITOR_H
#define CSMACWAKESLEEPMONITOR_H



#import "CSEventMonitor.h"

@interface CSMacWakeSleepMonitor : CSEventMonitor



+(id)sharedInstance;
-(BOOL)deviceIsInSleep;


@end


#endif