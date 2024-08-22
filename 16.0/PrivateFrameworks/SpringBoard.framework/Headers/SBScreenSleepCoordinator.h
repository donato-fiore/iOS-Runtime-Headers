// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCREENSLEEPCOORDINATOR_H
#define SBSCREENSLEEPCOORDINATOR_H

@class NSDictionary, NSString;
@protocol SBScreenWakeAnimationControllerDelegate, SBFAuthenticationStatusProvider, SBFAuthenticationAssertionProviding, BLSHBacklightSceneHostEnvironment;

#import <Foundation/Foundation.h>

#import "SBScreenWakeAnimationController.h"
#import "SBLockScreenManager.h"
#import "SBBacklightController.h"
#import "SBCoverSheetPresentationManager.h"
#import "SBAlertItemsController.h"
#import "SBAlwaysOnSettings.h"
#import "SBScreenSleepTransitionWindow.h"

@interface SBScreenSleepCoordinator : NSObject <SBScreenWakeAnimationControllerDelegate>

 {
    SBScreenWakeAnimationController *_screenWakeAnimationController;
    SBLockScreenManager *_lockScreenManager;
    SBBacklightController *_backlightController;
    SBCoverSheetPresentationManager *_coverSheetPresentationManager;
    id<SBFAuthenticationStatusProvider> *_authenticationStatusProvider;
    id<SBFAuthenticationAssertionProviding> *_authenticationAssertionProvider;
    SBAlertItemsController *_alertItemsController;
    BOOL _didLock;
    int _lastLockSource;
    NSDictionary *_lastLockOptions;
    SBAlwaysOnSettings *_alwaysOnSettings;
    SBScreenSleepTransitionWindow *_transitionWindow;
}


@property (readonly, nonatomic) NSObject<BLSHBacklightSceneHostEnvironment> *backlightSceneHostEnvironment; // ivar: _backlightSceneHostEnvironment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)targetBacklightStateForSource:(NSInteger)arg0 isWake:(BOOL)arg1 ;
-(id)initWithScreenWakeAnimationController:(id)arg0 lockScreenManager:(id)arg1 backlightController:(id)arg2 coverSheetPresentationManager:(id)arg3 authenticationStatusProvider:(id)arg4 authenticationAssertionProvider:(id)arg5 alertItemsController:(id)arg6 ;
-(void)_performLock;
-(void)_performLockAnimated:(BOOL)arg0 ;
-(void)_setTransitionWindowVisible:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)sleepAndLockUIFromSource:(int)arg0 completion:(id)arg1 ;
-(void)sleepAndLockUIFromSource:(int)arg0 lockOptions:(id)arg1 completion:(id)arg2 ;
-(void)transitionToVisualState:(id)arg0 fromVisualState:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif