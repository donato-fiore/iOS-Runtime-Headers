// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKHARDWAREBUTTONACTIONS_H
#define SBLOCKHARDWAREBUTTONACTIONS_H

@class SOSManager, NSString;
@protocol SBHardwareButtonGestureParametersObserver, SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider;


#import "SBHardwareButtonGestureParametersProviderBase.h"
#import "SBApplication.h"
#import "SBProximitySensorManager.h"
#import "SBHardwareButtonService.h"
#import "SBWalletPreArmController.h"
#import "SBHardwareButtonGestureParameters.h"
#import "SBAccessibilityHardwareButtonInteraction.h"
#import "SBSiriHardwareButtonInteraction.h"
#import "SBSleepWakeHardwareButtonInteraction.h"

@interface SBLockHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver>

 {
    NSInteger _homeButtonType;
    SBApplication *_lastLockButtonEventRecipient;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    SBWalletPreArmController *_walletPreArmController;
    SOSManager *_sosManager;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
    SBHardwareButtonGestureParameters *_proximitySensorGestureParameters;
    NSInteger _sosTriggerMechanism;
}


@property (retain, nonatomic) SBAccessibilityHardwareButtonInteraction *accessibilityButtonInteraction; // ivar: _accessibilityButtonInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isButtonDown; // ivar: _isButtonDown
@property (retain, nonatomic) NSObject<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> *proximitySensorButtonInteraction; // ivar: _proximitySensorButtonInteraction
@property (retain, nonatomic) SBSiriHardwareButtonInteraction *siriButtonInteraction; // ivar: _siriButtonInteraction
@property (retain, nonatomic) SBSleepWakeHardwareButtonInteraction *sleepWakeButtonInteraction; // ivar: _sleepWakeButtonInteraction
@property (readonly) Class superclass;


-(BOOL)_isSOSActive;
-(BOOL)_sendButtonDownToRegisteredApp;
-(BOOL)_sendButtonUpToRegisteredApp;
-(BOOL)_shouldWaitForDoublePress;
-(BOOL)_usesLockButtonForSecureIntent;
-(BOOL)_usesLockButtonForSiri;
-(BOOL)disallowsDoublePressForReason:(*id)arg0 ;
-(BOOL)disallowsLongPressForReason:(*id)arg0 ;
-(BOOL)disallowsSinglePressForReason:(*id)arg0 ;
-(BOOL)disallowsTriplePressForReason:(*id)arg0 ;
-(BOOL)performButtonUpPreActions;
-(BOOL)reverseFadeOutIfNeeded;
-(BOOL)shouldBeginDoublePressGestureWhileObjectWithinProximity;
-(id)_foregroundAppRegisteredForLockButtonEvents;
-(id)hardwareButtonGestureParameters;
-(id)initWithHomeButtonType:(NSInteger)arg0 proximitySensorManager:(id)arg1 ;
-(void)_performSOSDidTriggerActions;
-(void)_registeredLockButtonAppsDidChange:(id)arg0 ;
-(void)_sendButtonEventToApp:(id)arg0 down:(BOOL)arg1 ;
-(void)_showPowerDownTransientOverlayOnForceReset;
-(void)performDoublePressActions;
-(void)performFinalButtonUpActions;
-(void)performForceResetSequenceBeganActions;
-(void)performInitialButtonDownActions;
-(void)performInitialButtonUpActions;
-(void)performKeyboardShortcut;
-(void)performLongPressActions;
-(void)performLongPressCancelledActions;
-(void)performSOSActionsWithUUID:(id)arg0 triggerMechanism:(NSInteger)arg1 completion:(id)arg2 ;
-(void)performSOSGestureBeganActions;
-(void)performSOSGestureEndedActions;
-(void)performSecondButtonDownActions;
-(void)performSinglePressAction;
-(void)performSinglePressDidFailActions;
-(void)performTerminalLockLongPressActions;
-(void)performTriplePressActions;
-(void)provider:(id)arg0 didUpdateButtonGestureParameters:(id)arg1 ;


@end


#endif