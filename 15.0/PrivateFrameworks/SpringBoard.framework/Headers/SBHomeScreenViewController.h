// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMESCREENVIEWCONTROLLER_H
#define SBHOMESCREENVIEWCONTROLLER_H

@class UIViewController, NSMutableSet, UIView, NSMapTable, SBHIconManager, _UILegibilitySettings;
@protocol BSInvalidatable;


#import "SBFloatingDockBehaviorAssertion.h"
#import "SBAppStatusBarSettingsAssertion.h"
#import "SBUIController.h"
#import "SBIconController.h"

@interface SBHomeScreenViewController : UIViewController {
    NSMutableSet *_iconRotationPreventionReasons;
    BOOL _disableAnimationForNextIconRotation;
    SBFloatingDockBehaviorAssertion *_homeScreenFloatingDockAssertion;
    SBAppStatusBarSettingsAssertion *_childOrPresentedStatusBarAssertion;
    UIView *_contentView;
    NSMapTable *_appIconForceTouchControllerOrientationUpdateDeferralAssertions;
    NSMapTable *_appIconForceTouchControllerWindowLevelAssertions;
}


@property (readonly, weak, nonatomic) SBUIController *UIController; // ivar: _UIController
@property (nonatomic) BOOL homeScreenAutorotatesEvenWhenIconIsDragging; // ivar: _homeScreenAutorotatesEvenWhenIconIsDragging
@property (readonly, weak, nonatomic) SBIconController *iconController; // ivar: _iconController
@property (nonatomic, getter=isIconControllerHidden) BOOL iconControllerHidden; // ivar: _iconControllerHidden
@property (readonly, weak, nonatomic) SBHIconManager *iconManager;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *widgetEditFloatingDockAssertion; // ivar: _widgetEditFloatingDockAssertion
@property (retain, nonatomic) NSObject<BSInvalidatable> *widgetEditViewControllerOrientationUpdateDeferralAssertion; // ivar: _widgetEditViewControllerOrientationUpdateDeferralAssertion


-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_autorotationPreventionReasons;
-(id)homeScreenView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIconController:(id)arg0 UIController:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_acquireForceTouchOrientationUpdateDeferralAssertionForIconView:(id)arg0 ;
-(void)_acquireForceTouchWindowLevelAssertionForIconView:(id)arg0 ;
-(void)_animateTransitionToSize:(struct CGSize )arg0 andInterfaceOrientation:(NSInteger)arg1 withTransitionContext:(id)arg2 ;
-(void)_appIconForceTouchControllerDidDismissNotification:(id)arg0 ;
-(void)_appIconForceTouchControllerWillPresentNotification:(id)arg0 ;
-(void)_cleanupAfterTransitionToSize:(struct CGSize )arg0 fromInterfaceOrientation:(NSInteger)arg1 withTransitionContext:(id)arg2 ;
-(void)_dismissAllIconForceTouchControllersDidFire:(id)arg0 ;
-(void)_prepareForTransitionToSize:(struct CGSize )arg0 andInterfaceOrientation:(NSInteger)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_relinquishForceTouchOrientationUpdateDeferralAssertionForIconView:(id)arg0 ;
-(void)_relinquishForceTouchWindowLevelAssertionForIconView:(id)arg0 ;
-(void)_widgetEditViewDidDisappear:(id)arg0 ;
-(void)_widgetEditViewDidDisappearImplementation;
-(void)_widgetEditViewWillAppear:(id)arg0 ;
-(void)disableAnimationForNextIconRotation;
-(void)loadView;
-(void)nudgeIconInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)setAllowIconRotation:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif