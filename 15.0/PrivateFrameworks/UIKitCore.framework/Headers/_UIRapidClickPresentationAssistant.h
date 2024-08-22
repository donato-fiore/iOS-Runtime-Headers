// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIRAPIDCLICKPRESENTATIONASSISTANT_H
#define _UIRAPIDCLICKPRESENTATIONASSISTANT_H

@class NSString, NSValue;
@protocol UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting;

#import <Foundation/Foundation.h>

#import "_UIClickPresentation.h"
#import "UITargetedPreview.h"
#import "UIViewController.h"
#import "UIView.h"

@interface _UIRapidClickPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting>

 {
    int _animationCount;
    BOOL _isInteractionInitiatedDismiss;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *lifecycleCompletion; // ivar: lifecycleCompletion
@property (retain, nonatomic) _UIClickPresentation *presentation; // ivar: presentation
@property (retain, nonatomic) NSValue *preservedInputViewId; // ivar: _preservedInputViewId
@property (retain, nonatomic) UITargetedPreview *sourcePreview; // ivar: _sourcePreview
@property (retain, nonatomic) UIViewController *stashedParentViewController; // ivar: _stashedParentViewController
@property (retain, nonatomic) UIView *stashedSuperView; // ivar: _stashedSuperView
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)initWithClickPresentation:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
// -(void)_animateDismissalWithReason:(NSUInteger)arg0 actions:(id)arg1 completion:(unk)arg2  ;
// -(void)_animateUsingFluidSpringWithType:(NSUInteger)arg0 animations:(id)arg1 completion:(unk)arg2  ;
-(void)_applyStashedParentViewControllerIfNecessary;
// -(void)_nonAnimatedDismissalWithReason:(NSUInteger)arg0 actions:(id)arg1 completion:(unk)arg2  ;
-(void)_performPresentationAnimationsFromViewController:(id)arg0 ;
-(void)_restoreInputViewWithReason:(NSUInteger)arg0 forPresentation:(id)arg1 ;
-(void)_stashParentViewControllerIfNecessary;
-(void)animateTransition:(id)arg0 ;
// -(void)dismissWithReason:(NSUInteger)arg0 alongsideActions:(id)arg1 completion:(unk)arg2  ;
-(void)presentFromSourcePreview:(id)arg0 lifecycleCompletion:(id)arg1 ;


@end


#endif