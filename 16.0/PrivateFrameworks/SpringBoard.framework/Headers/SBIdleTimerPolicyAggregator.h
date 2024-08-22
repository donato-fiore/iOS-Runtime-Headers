// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBIDLETIMERPOLICYAGGREGATOR_H
#define SBIDLETIMERPOLICYAGGREGATOR_H

@class NSString;
@protocol SBIdleTimerObserving, SBIdleTimerGlobalCoordinatorDelegate, SBIdleTimerIdleEventHandler, SBIdleTimer;

#import <Foundation/Foundation.h>

#import "SBProximitySensorManager.h"
#import "SBIdleTimerGlobalStateMonitor.h"
#import "SBBacklightController.h"
#import "SBDeviceUnlockAggdLogger.h"

@interface SBIdleTimerPolicyAggregator : NSObject <SBIdleTimerObserving, SBIdleTimerGlobalCoordinatorDelegate>

 {
    SBProximitySensorManager *_proximitySensorManager;
    id<SBIdleTimerIdleEventHandler> *_idleEventHandler;
    SBIdleTimerGlobalStateMonitor *_globalStateMonitor;
    BOOL _disableAutoDimming;
}


@property (readonly, nonatomic, getter=_backlightController) SBBacklightController *backlightController; // ivar: _backlightController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setIdleTimer:) NSObject<SBIdleTimer> *idleTimer; // ivar: _idleTimer
@property (readonly, nonatomic, getter=_logger) SBDeviceUnlockAggdLogger *logger; // ivar: _logger
@property (readonly) Class superclass;


-(id)_initWithBacklightController:(id)arg0 proximitySensorManager:(id)arg1 idleEventHandler:(id)arg2 globalStateMonitor:(id)arg3 unlockLogger:(id)arg4 ;
-(id)initWithBacklightController:(id)arg0 proximitySensorManager:(id)arg1 idleEventHandler:(id)arg2 ;
-(void)idleTimerDidExpire:(id)arg0 ;
-(void)idleTimerDidRefresh:(id)arg0 ;
-(void)idleTimerDidResetForUserAttention:(id)arg0 ;
-(void)idleTimerDidWarn:(id)arg0 ;
-(void)idleTimerGlobalCoordinator:(id)arg0 didActivateIdleTimer:(id)arg1 ;


@end


#endif