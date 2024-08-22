// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHUDCONTROLLER_H
#define SBHUDCONTROLLER_H

@class NSCountedSet, NSString, UIWindow;
@protocol _SBHUDHostViewControllerDelegate, PTSettingsKeyObserver, BSDescriptionProviding, UIViewControllerTransitioningDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "_SBHUDHostViewController.h"
#import "SBHUDSettings.h"
#import "SBWindowScene.h"

@interface SBHUDController : NSObject <_SBHUDHostViewControllerDelegate, PTSettingsKeyObserver, BSDescriptionProviding, UIViewControllerTransitioningDelegate>

 {
    NSCountedSet *_hudHiddenAssertions;
    id<BSInvalidatable> *_stateCaptureHandle;
}


@property (readonly, nonatomic) BOOL anyHUDsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _SBHUDHostViewController *hudViewController; // ivar: _hudViewController
@property (readonly, nonatomic) UIWindow *hudWindow; // ivar: _hudWindow
@property (readonly, nonatomic) SBHUDSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


+(id)_defaultCrossfadeAnimatorForHUDController:(id)arg0 ;
-(id)HUDSessionForViewController:(id)arg0 identifier:(id)arg1 ;
-(id)acquireHUDHiddenAssertionForIdentifier:(id)arg0 withReason:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)knownHUDControllerForIdentifier:(id)arg0 ;
-(id)knownHUDs;
-(id)presentedHUDControllerForIdentifier:(id)arg0 ;
-(id)presentedHUDs;
-(id)presentingHUDs;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_createHUDWindowIfNeeded;
-(void)_dismissHUD:(id)arg0 animated:(BOOL)arg1 ;
-(void)_finishedTransitionForHUD:(id)arg0 intendedState:(NSInteger)arg1 finalState:(NSInteger)arg2 ;
-(void)_notificationWhichWeWantToUseToTearEverythingDown:(id)arg0 ;
-(void)_presentHUD:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setupStateCapture;
-(void)_tearDown;
-(void)_tearDownIfNoHuds;
-(void)dealloc;
-(void)dismissHUDs:(BOOL)arg0 ;
-(void)hudViewController:(id)arg0 didDismissHUD:(id)arg1 ;
-(void)hudViewController:(id)arg0 didPresentHUD:(id)arg1 ;
-(void)hudViewController:(id)arg0 willDismissHUD:(id)arg1 ;
-(void)hudViewController:(id)arg0 willPresentHUD:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)windowSceneDidConnect:(id)arg0 ;


@end


#endif