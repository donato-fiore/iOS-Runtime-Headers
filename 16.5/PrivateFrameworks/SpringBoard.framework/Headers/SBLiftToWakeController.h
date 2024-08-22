// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLIFTTOWAKECONTROLLER_H
#define SBLIFTTOWAKECONTROLLER_H

@class CMWakeGestureManager, NSHashTable, NSString, SBIdleTimerDefaults;
@protocol BLSBacklightStateObserving, CMWakeGestureDelegate;

#import <Foundation/Foundation.h>


@interface SBLiftToWakeController : NSObject <BLSBacklightStateObserving, CMWakeGestureDelegate>

 {
    CMWakeGestureManager *_wakeGestureManager;
    NSInteger _wakeGestureState;
    NSHashTable *_observers;
    BOOL _screenOn;
    BOOL _observingCMWakeGestureManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _isEnabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_idleTimerDefaults, setter=_setIdleTimerDefaults:) SBIdleTimerDefaults *idleTimerDefaults; // ivar: _idleTimerDefaults
@property (readonly) Class superclass;


+(id)sharedController;
-(BOOL)_isObservingWakeGestureManager;
-(id)init;
-(id)initWithBacklightController:(id)arg0 idleTimerDefaults:(id)arg1 ;
-(void)_handleBacklightLevelChanged:(id)arg0 ;
-(void)_ignoredTransition:(NSInteger)arg0 ;
-(void)_reconsiderEnablement;
-(void)_screenTurnedOff;
-(void)_screenTurnedOn;
-(void)_sendTransitionToObservers:(NSInteger)arg0 deviceOrientation:(NSInteger)arg1 ;
-(void)_startObservingIfNecessary;
-(void)_stopObservingIfNecessary;
-(void)addObserver:(id)arg0 ;
-(void)backlight:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)wakeGestureManager:(id)arg0 didUpdateWakeGesture:(NSInteger)arg1 ;
-(void)wakeGestureManager:(id)arg0 didUpdateWakeGesture:(NSInteger)arg1 orientation:(int)arg2 ;
-(void)wakeGestureManager:(id)arg0 didUpdateWakeGesture:(NSInteger)arg1 orientation:(int)arg2 detectedAt:(NSUInteger)arg3 ;


@end


#endif