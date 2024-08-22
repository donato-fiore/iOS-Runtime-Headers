// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSLEEPSCREENUNLOCKDETECTOR_H
#define HDSPSLEEPSCREENUNLOCKDETECTOR_H

@class NSString;
@protocol HDSPSleepActionObserver, HDSPSleepModeObserver, HDSPWakeDetector, HDSPEnvironmentAware, HDSPWakeDetectorDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPSleepScreenUnlockDetector : NSObject <HDSPSleepActionObserver, HDSPSleepModeObserver, HDSPWakeDetector, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger detectionWindowMinutes;
@property (readonly, nonatomic) os_unfair_lock_s dismissCounterLock; // ivar: _dismissCounterLock
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDetecting; // ivar: _isDetecting
@property (nonatomic) NSUInteger numberOfTimesDismissed;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<HDSPWakeDetectorDelegate> *wakeDetectorDelegate; // ivar: _wakeDetectorDelegate


-(id)initWithEnvironment:(id)arg0 ;
-(void)_resetCounter;
-(void)_withLock:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)sleepLockWasDismissed;
-(void)sleepModeDidChange:(NSInteger)arg0 previousMode:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)startDetecting;
-(void)stopDetecting;


@end


#endif