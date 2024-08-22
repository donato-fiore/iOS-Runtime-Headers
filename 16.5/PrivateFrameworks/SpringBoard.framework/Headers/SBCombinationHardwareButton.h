// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCOMBINATIONHARDWAREBUTTON_H
#define SBCOMBINATIONHARDWAREBUTTON_H

@class NSMutableDictionary, NSString;
@protocol UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBSOSLockGestureObserverDelegate, SBSOSClawGestureObserverDelegate, SBPressPrecedenceArbiter;

#import <Foundation/Foundation.h>

#import "SBCombinationHardwareButtonActions.h"
#import "SBClickGestureRecognizer.h"
#import "SBHomeHardwareButton.h"
#import "SBLockHardwareButton.h"
#import "SBVolumeHardwareButton.h"
#import "SBProximitySensorManager.h"
#import "SBBacklightController.h"
#import "SBPressGestureRecognizer.h"
#import "SBSOSClawGestureObserver.h"
#import "SBSOSLockGestureObserver.h"
#import "SBLongPressGestureRecognizer.h"

@interface SBCombinationHardwareButton : NSObject <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBSOSLockGestureObserverDelegate, SBSOSClawGestureObserverDelegate, SBPressPrecedenceArbiter>

 {
    NSMutableDictionary *_screenshotDisableAssertions;
    SBCombinationHardwareButtonActions *_buttonActions;
    SBClickGestureRecognizer *_screenshotGestureRecognizer;
    SBHomeHardwareButton *_homeHardwareButton;
    SBLockHardwareButton *_lockHardwareButton;
    SBVolumeHardwareButton *_volumeHardwareButton;
    SBProximitySensorManager *_proximitySensorManager;
    SBBacklightController *_backlightController;
    SBPressGestureRecognizer *_sosGestureRecognizer;
    SBSOSClawGestureObserver *_sosClawGestureObserver;
    SBSOSLockGestureObserver *_sosLockGestureObserver;
    SBLongPressGestureRecognizer *_shutdownGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg0 shutdownGestureRecognizer:(id)arg1 homeHardwareButton:(id)arg2 lockHardwareButton:(id)arg3 volumeHardwareButton:(id)arg4 proximitySensorManager:(id)arg5 backlightController:(id)arg6 ;
-(id)preemptablePressGestureRecognizers;
-(void)_backlightChanged:(id)arg0 ;
-(void)_configureGestureRecognizers;
-(void)_configureSOSGestureBehaviors;
-(void)_setScreenshotDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)_sosTriggerMechanismDidChange;
-(void)dealloc;
-(void)provider:(id)arg0 didUpdateButtonGestureParameters:(id)arg1 ;
-(void)screenshotGesture:(id)arg0 ;
-(void)shutdownGesture:(id)arg0 ;
-(void)sosClawAutoCallInteractiveStateChanged:(id)arg0 interacting:(BOOL)arg1 ;
-(void)sosClawDidBecomeActive:(id)arg0 ;
-(void)sosClawDidBecomeInactive:(id)arg0 ;
-(void)sosClawDidTriggerSOS:(id)arg0 completion:(id)arg1 ;
-(void)sosGesture:(id)arg0 ;
-(void)sosLockDidTriggerSOS:(id)arg0 completion:(id)arg1 ;
-(void)sosLockTriggerDidBecomeActive:(id)arg0 ;
-(void)sosLockTriggerDidBecomeInactive:(id)arg0 ;


@end


#endif