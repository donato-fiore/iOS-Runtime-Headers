// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCONTROLCENTERMODULETRANSIENTOVERLAYVIEWCONTROLLER_H
#define SBCONTROLCENTERMODULETRANSIENTOVERLAYVIEWCONTROLLER_H

@class CCUIModuleAlertViewController, NSString, CCSModulePresentationOptions;
@protocol CCUIModuleAlertViewControllerDelegate, SBControlCenterModuleTransientOverlayViewControllerDelegate;


#import "SBTransientOverlayViewController.h"

@interface SBControlCenterModuleTransientOverlayViewController : SBTransientOverlayViewController <CCUIModuleAlertViewControllerDelegate>

 {
    CCUIModuleAlertViewController *_moduleOverlayViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBControlCenterModuleTransientOverlayViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) CCSModulePresentationOptions *presentationOptions;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldBlurBackground;
-(BOOL)handleHomeButtonPress;
-(BOOL)shouldDisableControlCenter;
-(BOOL)shouldDisableOrientationUpdates;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredLockedGestureDismissalStyle;
-(NSInteger)preferredUnlockedGestureDismissalStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModuleIdentifier:(id)arg0 presentationOptions:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
// -(void)_animateTransitionFromViewController:(id)arg0 toViewController:(id)arg1 containerView:(id)arg2 isAnimated:(BOOL)arg3 otherAnimations:(id)arg4 completion:(unk)arg5  ;
-(void)_dismiss;
-(void)contentModuleAlertViewControllerNeedsDismissal:(id)arg0 ;
-(void)handleGestureDismissal;
-(void)viewDidLoad;


@end


#endif