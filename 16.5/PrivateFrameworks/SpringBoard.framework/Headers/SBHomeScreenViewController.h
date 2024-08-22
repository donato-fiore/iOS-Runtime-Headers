// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMESCREENVIEWCONTROLLER_H
#define SBHOMESCREENVIEWCONTROLLER_H

@class UIViewController, NSMutableSet, UIView, NSMapTable, NSString, SBHIconManager, _UILegibilitySettings, SBFZStackParticipant;
@protocol SBFloatingDockControllerObserver, SBFZStackParticipantDelegate, BSInvalidatable;


#import "SBWindowSceneStatusBarSettingsAssertion.h"
#import "SBUIController.h"
#import "SBFloatingDockBehaviorAssertion.h"
#import "SBIconController.h"

@interface SBHomeScreenViewController : UIViewController <SBFloatingDockControllerObserver, SBFZStackParticipantDelegate>

 {
    NSMutableSet *_iconRotationPreventionReasons;
    BOOL _disableAnimationForNextIconRotation;
    SBWindowSceneStatusBarSettingsAssertion *_childOrPresentedStatusBarAssertion;
    UIView *_contentView;
    NSMapTable *_appIconForceTouchControllerOrientationUpdateDeferralAssertions;
    NSMapTable *_appIconForceTouchControllerWindowLevelAssertions;
}


@property (readonly, weak, nonatomic) SBUIController *UIController; // ivar: _UIController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL homeScreenAutorotatesEvenWhenIconIsDragging; // ivar: _homeScreenAutorotatesEvenWhenIconIsDragging
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *homeScreenFloatingDockAssertion; // ivar: _homeScreenFloatingDockAssertion
@property (readonly, weak, nonatomic) SBIconController *iconController; // ivar: _iconController
@property (nonatomic, getter=isIconControllerHidden) BOOL iconControllerHidden; // ivar: _iconControllerHidden
@property (readonly, weak, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *widgetEditFloatingDockAssertion; // ivar: _widgetEditFloatingDockAssertion
@property (retain, nonatomic) NSObject<BSInvalidatable> *widgetEditViewControllerOrientationUpdateDeferralAssertion; // ivar: _widgetEditViewControllerOrientationUpdateDeferralAssertion
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant


-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_autorotationPreventionReasons;
-(id)_homeScreenView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIconController:(id)arg0 UIController:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_acquireFloatingDockBehaviorAssertionIfNecessaryForFloatingDockController:(id)arg0 ;
-(void)_acquireForceTouchOrientationUpdateDeferralAssertionForIconView:(id)arg0 ;
-(void)_acquireForceTouchWindowLevelAssertionForIconView:(id)arg0 ;
-(void)_animateTransitionToSize:(struct CGSize )arg0 andInterfaceOrientation:(NSInteger)arg1 withTransitionContext:(id)arg2 ;
-(void)_appIconForceTouchControllerDidDismissNotification:(id)arg0 ;
-(void)_appIconForceTouchControllerWillPresentNotification:(id)arg0 ;
-(void)_cleanupAfterTransitionToSize:(struct CGSize )arg0 fromInterfaceOrientation:(NSInteger)arg1 withTransitionContext:(id)arg2 ;
-(void)_dismissAllIconForceTouchControllersDidFire:(id)arg0 ;
-(void)_iconEditingDidChange:(id)arg0 ;
-(void)_prepareForTransitionToSize:(struct CGSize )arg0 andInterfaceOrientation:(NSInteger)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_relinquishForceTouchOrientationUpdateDeferralAssertionForIconView:(id)arg0 ;
-(void)_relinquishForceTouchWindowLevelAssertionForIconView:(id)arg0 ;
-(void)_widgetEditViewDidDisappear:(id)arg0 ;
-(void)_widgetEditViewDidDisappearImplementation;
-(void)_widgetEditViewWillAppear:(id)arg0 ;
-(void)dealloc;
-(void)disableAnimationForNextIconRotation;
-(void)floatingDockControllerDidRegister:(id)arg0 ;
-(void)loadView;
-(void)nudgeIconInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)setAllowIconRotation:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif