// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBACKLIGHTCONTROLLER_H
#define SBBACKLIGHTCONTROLLER_H

@class NSHashTable, BrightnessSystemClient, BLSAssertion, SBAlwaysOnDefaults, NSString;
@protocol BLSBacklightStateObserving, BLSHBacklightHostObserving, SBBacklightControllerContextProviding, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBBacklightController : NSObject <BLSBacklightStateObserving, BLSHBacklightHostObserving>

 {
    id<SBBacklightControllerContextProviding> *_contextProvider;
    NSHashTable *_observers;
    NSHashTable *_informers;
    NSInteger _backlightState;
    id *_backlightCompletion;
    NSInteger _lastReportedWillTransitionState;
    BrightnessSystemClient *_brightnessSystemClient;
    BLSAssertion *_disableAODAssertion;
    SBAlwaysOnDefaults *_alwaysOnDefaults;
}


@property (readonly, nonatomic) NSInteger backlightState;
@property (retain, nonatomic) NSObject<BSInvalidatable> *currentDisplayStateAssertion; // ivar: _currentDisplayStateAssertion
@property (retain, nonatomic) NSObject<BSInvalidatable> *currentHIDUISensorModeAssertion; // ivar: _currentHIDUISensorModeAssertion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDigitizerDisabled) BOOL digitizerDisabled; // ivar: _digitizerDisabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPendingScreenUnblankAfterCACommit; // ivar: _isPendingScreenUnblankAfterCACommit
@property (readonly, nonatomic) NSInteger lastBacklightChangeSource; // ivar: _lastBacklightChangeSource
@property (readonly, nonatomic) BOOL screenIsDim;
@property (readonly, nonatomic) BOOL screenIsOn;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTapToWakeEnabled) BOOL tapToWakeEnabled; // ivar: _tapToWakeEnabled
@property (readonly, nonatomic) BOOL tapToWakeRequiresHitTestSuppression; // ivar: _tapToWakeRequiresHitTestSuppression


+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg0 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)shouldTurnOnScreenForBacklightSource:(NSInteger)arg0 ;
-(CGFloat)defaultLockScreenDimInterval;
-(CGFloat)defaultLockScreenDimIntervalWhenNotificationsPresent;
-(NSInteger)lastRequestedBacklightState;
-(float)_factorToPublishForBacklightState:(NSInteger)arg0 ;
-(id)init;
-(id)initWithContextProvider:(id)arg0 ;
-(void)_noteDigitizerDisabled:(BOOL)arg0 tapToWakeEnabled:(BOOL)arg1 disabledDigitizerMode:(NSInteger)arg2 ;
-(void)_notifyObserversDidAnimateToFactor:(float)arg0 source:(NSInteger)arg1 ;
-(void)_notifyObserversDidTransitionToBacklightState:(NSInteger)arg0 source:(NSInteger)arg1 ;
-(void)_notifyObserversWillAnimateToFactor:(float)arg0 source:(NSInteger)arg1 ;
-(void)_notifyObserversWillTransitionToBacklightState:(NSInteger)arg0 source:(NSInteger)arg1 ;
-(void)_performBacklightChangeRequest:(id)arg0 completion:(id)arg1 ;
-(void)_performDeferredBacklightRampWorkWithInfo:(id)arg0 ;
-(void)_startFadeOutAnimationFromLockSource:(int)arg0 ;
-(void)_undimFromSource:(NSInteger)arg0 ;
-(void)_updateHIDUISensorModeForBacklightState:(NSInteger)arg0 source:(NSInteger)arg1 ;
-(void)_userInterfaceStyleChanged;
-(void)addObserver:(id)arg0 ;
-(void)allowIdleSleep;
-(void)backlight:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)backlightHost:(id)arg0 willTransitionToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)completeStartup;
-(void)preventIdleSleep;
-(void)preventIdleSleepForNumberOfSeconds:(float)arg0 ;
-(void)registerInformer:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)turnOnScreenFullyWithBacklightSource:(NSInteger)arg0 ;
-(void)unregisterInformer:(id)arg0 ;


@end


#endif