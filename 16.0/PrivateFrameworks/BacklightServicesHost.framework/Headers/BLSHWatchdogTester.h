// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHWATCHDOGTESTER_H
#define BLSHWATCHDOGTESTER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "BLSHWatchdogProvider.h"

@interface BLSHWatchdogTester : NSObject {
    NSMapTable *_testables;
    NSUInteger _lock_nextTimerID;
    os_unfair_lock_s _lock;
    BLSHWatchdogProvider *_watchdogProvider;
}




-(id)_watchdogProvider;
-(id)initWithWatchdogTestables:(id)arg0 ;
-(void)_triggerTestWatchdog:(id)arg0 ;


@end


#endif