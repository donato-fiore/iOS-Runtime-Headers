// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUITOASTPRESENTATIONCONTROLLER_H
#define AMSUITOASTPRESENTATIONCONTROLLER_H

@class UIPresentationController, NSString, NSTimer, _UIHyperrectangle, _UIHyperInteractor, UIPanGestureRecognizer, NSArray, UITabBarController;
@protocol _UIHyperInteractorDelegate;


#import "AMSUITouchForwardingView.h"

@interface AMSUIToastPresentationController : UIPresentationController <_UIHyperInteractorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat dismissDelayTimeInterval; // ivar: _dismissDelayTimeInterval
@property (retain, nonatomic) NSTimer *dismissalTimer; // ivar: _dismissalTimer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UIHyperrectangle *interactiveRegion; // ivar: _interactiveRegion
@property (readonly, nonatomic) _UIHyperInteractor *interactor; // ivar: _interactor
@property (nonatomic) CGRect lastFrameOfPresentedViewInContainerView; // ivar: _lastFrameOfPresentedViewInContainerView
@property (retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // ivar: _panRecognizer
@property (retain, nonatomic) NSArray *passthroughViews; // ivar: _passthroughViews
@property (retain, nonatomic) UITabBarController *relativeTabBarController; // ivar: _relativeTabBarController
@property (nonatomic, getter=isShowing) BOOL showing; // ivar: _showing
@property (readonly) Class superclass;
@property (retain, nonatomic) AMSUITouchForwardingView *touchForwardingView; // ivar: _touchForwardingView


-(BOOL)shouldPresentInFullscreen;
-(CGFloat)_bottomMargin;
-(CGFloat)_yOffset;
-(NSInteger)presentationStyle;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)_didPanPresentedView:(id)arg0 ;
-(void)_dismissTimerFired:(id)arg0 ;
-(void)_dismissToast;
-(void)_hyperInteractorApplyPresentationPoint:(id)arg0 ;
-(void)_setupPanGestureRecognizer;
-(void)_setupPassthroughView;
-(void)_startDismissTimer;
-(void)containerViewWillLayoutSubviews;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif