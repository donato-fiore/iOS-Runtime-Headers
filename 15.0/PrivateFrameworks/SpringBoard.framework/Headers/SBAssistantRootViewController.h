// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBASSISTANTROOTVIEWCONTROLLER_H
#define SBASSISTANTROOTVIEWCONTROLLER_H

@class SBFTouchPassThroughViewController, UIScreen, SBFHomeGrabberSettings, SiriPresentationSpringBoardMainScreenViewController, UIView, NSString;
@protocol SBFluidGestureDismissable;


#import "SBFluidDismissalState.h"
#import "SBHomeGrabberView.h"
#import "SBKeyboardHomeAffordanceAssertion.h"

@interface SBAssistantRootViewController : SBFTouchPassThroughViewController <SBFluidGestureDismissable>

 {
    SBFluidDismissalState *_fluidDismissalState;
    UIScreen *_screen;
    SBHomeGrabberView *_homeAffordanceView;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    SBFHomeGrabberSettings *_grabberSettings;
    BOOL _keyboardPresented;
    BOOL _keyboardStashed;
}


@property (retain, nonatomic) SiriPresentationSpringBoardMainScreenViewController *assistantController; // ivar: _assistantViewController
@property (readonly, nonatomic) UIView *clippingView; // ivar: _clippingView
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBFluidDismissalState *fluidDismissalState;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ownsHomeGesture; // ivar: _ownsHomeGesture
@property (nonatomic) BOOL showsHomeAffordance; // ivar: _showsHomeAffordance
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutorotate;
-(BOOL)wantsFullScreenLayout;
-(NSUInteger)supportedInterfaceOrientations;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)initWithScreen:(id)arg0 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(void)_keyboardWillHideNotification:(id)arg0 ;
-(void)_keyboardWillShowNotification:(id)arg0 ;
-(void)_updateHomeAffordance;
-(void)_updateKeyboardForHomeGesture;
-(void)hasContentAtPoint:(struct CGPoint )arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)setHomeGrabberPointerClickDelegate:(id)arg0 ;
-(void)setNeedsUpdateOfHomeIndicatorAutoHidden;
-(void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
-(void)viewWillLayoutSubviews;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif