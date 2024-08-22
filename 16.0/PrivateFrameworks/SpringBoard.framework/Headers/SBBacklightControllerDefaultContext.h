// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBACKLIGHTCONTROLLERDEFAULTCONTEXT_H
#define SBBACKLIGHTCONTROLLERDEFAULTCONTEXT_H

@class BLSBacklight, NSString, SBIdleTimerDefaults, SBWakeLogger;
@protocol SBBacklightControllerContextProviding;

#import <Foundation/Foundation.h>

#import "SBHIDUISensorModeController.h"
#import "SBLockScreenManager.h"
#import "SBProximitySensorManager.h"
#import "SBScreenSleepCoordinator.h"
#import "SBScreenWakeAnimationController.h"

@interface SBBacklightControllerDefaultContext : NSObject <SBBacklightControllerContextProviding>



@property (readonly, nonatomic) SBHIDUISensorModeController *HIDUISensorModeController;
@property (readonly, nonatomic) BLSBacklight *blsBacklight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIdleTimerDefaults *idleTimerDefaults;
@property (readonly, nonatomic) SBLockScreenManager *lockScreenManager;
@property (readonly, nonatomic) SBProximitySensorManager *proximitySensorManager;
@property (readonly, nonatomic) SBScreenSleepCoordinator *screenSleepCoordinator;
@property (readonly, nonatomic) SBScreenWakeAnimationController *screenWakeAnimationController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBWakeLogger *wakeLogger;




@end


#endif