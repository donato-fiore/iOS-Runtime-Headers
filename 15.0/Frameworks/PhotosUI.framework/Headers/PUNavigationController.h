// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUNAVIGATIONCONTROLLER_H
#define PUNAVIGATIONCONTROLLER_H

@class UINavigationController, UIKeyCommand, UIViewController, _UINavigationControllerPalette, NSString;
@protocol PXForcedDismissableViewController, UINavigationControllerDelegate;


#import "PUAbstractNavigationBanner.h"

@interface PUNavigationController : UINavigationController <PXForcedDismissableViewController, UINavigationControllerDelegate>



@property (retain, nonatomic, setter=_setAlternateBackKeyCommand:) UIKeyCommand *_alternateBackKeyCommand; // ivar: __alternateBackKeyCommand
@property (retain, nonatomic, setter=_setBanner:) PUAbstractNavigationBanner *_banner; // ivar: __banner
@property (nonatomic, setter=_setBarStyle:) NSInteger _barStyle; // ivar: __barStyle
@property (weak, nonatomic, setter=_setCurrentToolbarViewController:) UIViewController *_currentToolbarViewController; // ivar: __currentToolbarViewController
@property (nonatomic, getter=_isNavigating, setter=_setNavigating:) BOOL _navigating; // ivar: __navigating
@property (retain, nonatomic, setter=_setPalette:) _UINavigationControllerPalette *_palette; // ivar: __palette
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, setter=ppt_setOnDidShowViewControllerBlock:) id *ppt_onDidShowViewControllerBlock; // ivar: _ppt_onDidShowViewControllerBlock
@property (nonatomic, setter=pu_setAlwaysForwardsPreferredStatusBarStyle:) BOOL pu_alwaysForwardsPreferredStatusBarStyle; // ivar: _pu_alwaysForwardsPreferredStatusBarStyle
@property (nonatomic, setter=pu_setAlwaysForwardsPreferredStatusBarHidden:) BOOL pu_alwaysForwardsPrefersStatusBarHidden; // ivar: _pu_alwaysForwardsPrefersStatusBarHidden
@property (readonly, nonatomic) BOOL pu_preventsAutorotation; // ivar: _pu_preventsAutorotation
@property (readonly, nonatomic) NSUInteger pu_supportedInterfaceOrientations; // ivar: _pu_supportedInterfaceOrientations
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)_canPerformAlternateBackKeyCommandToPopViewController;
-(BOOL)_canShowWhileLocked;
-(BOOL)_canUseAlternateBackKeyCommandToTriggerSidebarKeyCommandWithSender:(id)arg0 ;
-(BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg0 ;
-(BOOL)_shouldOptOutFromChromelessBars;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_extendedToolbar;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)navigationController:(id)arg0 interactionControllerForAnimationController:(id)arg1 ;
-(void)_commonPUNavigationControllerInitialization;
-(void)_performAlternateBackKeyCommand:(id)arg0 ;
-(void)_setShouldOptOutChromelessBars:(BOOL)arg0 ;
-(void)_updateBarStyle;
-(void)_updateChromelessBarsIsBeforeTransition:(BOOL)arg0 ;
-(void)_updateStatusBarOverrides;
-(void)loadView;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pu_navigationTransitionDidEnd:(id)arg0 ;
-(void)pu_setPreventsAutorotation:(BOOL)arg0 ;
-(void)pu_setSupportedInterfaceOrientations:(NSUInteger)arg0 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewController:(id)arg0 willSetupInitialBarsVisibilityOnViewWillAppearAnimated:(BOOL)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif