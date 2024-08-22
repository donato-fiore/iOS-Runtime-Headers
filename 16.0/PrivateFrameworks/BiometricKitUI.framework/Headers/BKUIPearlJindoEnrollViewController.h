// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIPEARLJINDOENROLLVIEWCONTROLLER_H
#define BKUIPEARLJINDOENROLLVIEWCONTROLLER_H

@class NSLayoutConstraint, NSString, UIView;
@protocol BNPresentableObserving, BKUIPearlEnrollViewStateTransitionDelegate, BKUIAlertControllerListener, BKJindoPresentableObserving;


#import "BKUIPearlEnrollViewController.h"
#import "BKUIHostedJindoPresentable.h"

@interface BKUIPearlJindoEnrollViewController : BKUIPearlEnrollViewController <BNPresentableObserving, BKUIPearlEnrollViewStateTransitionDelegate, BKUIAlertControllerListener, BKJindoPresentableObserving>



@property (retain, nonatomic) NSLayoutConstraint *bottomContainerTopConstraint; // ivar: _bottomContainerTopConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *hostedTutorialMicaView; // ivar: _hostedTutorialMicaView
@property (retain, nonatomic) NSLayoutConstraint *hostedTutorialMicaViewCenterConstraint; // ivar: _hostedTutorialMicaViewCenterConstraint
@property (nonatomic) BOOL jindoNeedsResignActiveRevoke; // ivar: _jindoNeedsResignActiveRevoke
@property (retain, nonatomic) BKUIHostedJindoPresentable *presentable; // ivar: _presentable
@property (readonly) Class superclass;


-(BOOL)_isDarkMode;
-(id)_jindoBottomContainer;
-(id)_startOverTitleForState:(int)arg0 ;
-(id)buttonTray;
-(id)escapeHatchButton;
-(id)escapeHatchButton:(id)arg0 state:(int)arg1 ;
-(id)nextStateButton;
-(id)nextStateButtonContainer;
-(id)retryMatchOperationButton;
-(id)startOverButtonForState:(int)arg0 ;
-(struct CGSize )_fullEnrollViewSize;
-(void)_handleEnrollStateOnAppear;
-(void)_postBannerToDestinationWithInitialStateCollapsed:(BOOL)arg0 ;
-(void)_postBannerToDestinationWithInitialStateCollapsed:(BOOL)arg0 enrollViewStateConfiguration:(id)arg1 ;
-(void)_prepEnrollViewAndEnrollTutorialMica;
-(void)_sceneWillDeactivate:(id)arg0 ;
-(void)_setupUI;
-(void)alertActionTappedFromAlert;
-(void)animateToSuccessCompletionLayout:(NSInteger)arg0 ;
-(void)didBecomeActive:(id)arg0 ;
-(void)didChangeActiveLayoutMode:(id)arg0 ;
// -(void)navigateToMidFlowPeriocularSplashScreenWithPrepareAction:(id)arg0 completionAction:(unk)arg1  ;
-(void)nextStateButtonPressed:(id)arg0 ;
-(void)prepareBottomContainerForAnimationToState:(int)arg0 fromState:(int)arg1 subState:(int)arg2 advancing:(BOOL)arg3 ;
-(void)prepareForAnimationToState:(int)arg0 fromState:(int)arg1 subState:(int)arg2 advancing:(BOOL)arg3 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)stateTransitionDidComplete;
-(void)transitionToSuccessFromPeriocularSplash;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willResignActive:(id)arg0 ;


@end


#endif