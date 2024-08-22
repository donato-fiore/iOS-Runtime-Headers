// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBACKLIGHTCONTROLLER_H
#define SBBACKLIGHTCONTROLLER_H

@class SBIdleTimerDefaults, NSHashTable;

#import <Foundation/Foundation.h>

#import "SBHIDUILockAssertion.h"

@interface SBBacklightController : NSObject {
    SBIdleTimerDefaults *_idleTimerDefaults;
    NSHashTable *_observers;
    NSHashTable *_informers;
}


@property (readonly, nonatomic) CGFloat backlightFactor;
@property (retain, nonatomic) SBHIDUILockAssertion *currentHIDUILockAssertion; // ivar: _currentHIDUILockAssertion
@property (readonly, nonatomic) BOOL isPendingScreenUnblankAfterCACommit; // ivar: _isPendingScreenUnblankAfterCACommit
@property (readonly, nonatomic) NSInteger lastBacklightChangeSource; // ivar: _lastBacklightChangeSource
@property (readonly, nonatomic) BOOL screenIsDim;
@property (readonly, nonatomic) BOOL screenIsOn;


+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg0 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)shouldTurnOnScreenForBacklightSource:(NSInteger)arg0 ;
-(CGFloat)defaultLockScreenDimInterval;
-(CGFloat)defaultLockScreenDimIntervalWhenNotificationsPresent;
-(id)init;
-(void)_animateBacklightToFactor:(float)arg0 duration:(CGFloat)arg1 source:(NSInteger)arg2 silently:(BOOL)arg3 completion:(id)arg4 ;
-(void)_deferredScreenUnblankDone;
-(void)_notifyObserversDidAnimateToFactor:(float)arg0 source:(NSInteger)arg1 ;
-(void)_notifyObserversWillAnimateToFactor:(float)arg0 source:(NSInteger)arg1 ;
-(void)_performDeferredBacklightRampWorkWithInfo:(id)arg0 ;
-(void)_startFadeOutAnimationFromLockSource:(int)arg0 ;
-(void)_suspendProxAndMultitouch:(BOOL)arg0 source:(NSInteger)arg1 ;
-(void)_undimFromSource:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)allowIdleSleep;
-(void)animateBacklightToFactor:(float)arg0 duration:(CGFloat)arg1 source:(NSInteger)arg2 completion:(id)arg3 ;
-(void)preventIdleSleep;
-(void)preventIdleSleepForNumberOfSeconds:(float)arg0 ;
-(void)registerInformer:(id)arg0 ;
-(void)reloadDefaults;
-(void)removeObserver:(id)arg0 ;
-(void)turnOnScreenFullyWithBacklightSource:(NSInteger)arg0 ;
-(void)unregisterInformer:(id)arg0 ;


@end


#endif