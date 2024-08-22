// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASMYRIADCONTROLLER_H
#define SASMYRIADCONTROLLER_H

@class AFMyriadCoordinator, FBSDisplayLayoutMonitor, CMMotionActivityManager, NSString;
@protocol SASLockStateMonitorDelegate, AFMyriadDelegate, SASMyriadControllerDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "SASLockStateMonitor.h"

@interface SASMyriadController : NSObject <SASLockStateMonitorDelegate, AFMyriadDelegate>

 {
    id<SASMyriadControllerDelegate> *_delegate;
    AFMyriadCoordinator *_myriadCoordinator;
    BOOL _isLocked;
    NSObject<OS_dispatch_semaphore> *_myriadFinishedSemaphore;
    FBSDisplayLayoutMonitor *_displayMonitor;
    CGFloat _raiseToWakeTime;
    CGFloat _unlockTime;
    SASLockStateMonitor *_lockStateMonitor;
    BOOL _isStationary;
    CGFloat _liftEndTime;
    os_unfair_lock_s _activityManagerLock;
    CMMotionActivityManager *_activityManager;
}


@property (nonatomic) BOOL canceledByMyriad; // ivar: _canceledByMyriad
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)activateForRequest:(id)arg0 visible:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_configureMotionActivityManager;
-(void)_updateRaiseToWakeTimeForTransition:(id)arg0 ;
-(void)activateForInTaskRequest:(BOOL)arg0 isVisible:(BOOL)arg1 ;
-(void)dealloc;
-(void)didChangeLockState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;
-(void)shouldAbortAnotherDeviceBetter:(id)arg0 ;
-(void)shouldContinue:(id)arg0 ;


@end


#endif