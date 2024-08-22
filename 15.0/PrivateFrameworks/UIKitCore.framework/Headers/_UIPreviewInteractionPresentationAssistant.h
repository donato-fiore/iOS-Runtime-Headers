// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPREVIEWINTERACTIONPRESENTATIONASSISTANT_H
#define _UIPREVIEWINTERACTIONPRESENTATIONASSISTANT_H

@class NSString;
@protocol UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "_UIPreviewInteractionHighlighter.h"
#import "_UIPreviewInteractionViewControllerPresentation.h"
#import "UIViewPropertyAnimator.h"
#import "_UIPortalView.h"
#import "UITargetedPreview.h"
#import "UIViewController.h"
#import "UIView.h"

@interface _UIPreviewInteractionPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>

 {
    id<UIViewControllerContextTransitioning> *_currentContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissalCompletion; // ivar: _dismissalCompletion
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIPreviewInteractionHighlighter *highlighter; // ivar: _highlighter
@property (nonatomic) BOOL isAppearing; // ivar: _isAppearing
@property (retain, nonatomic) _UIPreviewInteractionViewControllerPresentation *presentation; // ivar: _presentation
@property (readonly, nonatomic) UIViewPropertyAnimator *presentationAnimator; // ivar: _presentationAnimator
@property (retain, nonatomic) _UIPortalView *presentationSourcePortalView; // ivar: _presentationSourcePortalView
@property (retain, nonatomic) UITargetedPreview *sourcePreview; // ivar: _sourcePreview
@property (retain, nonatomic) UIViewController *stashedParentViewController; // ivar: _stashedParentViewController
@property (retain, nonatomic) UIView *stashedSuperView; // ivar: _stashedSuperView
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithViewControllerPresentation:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)_applyStashedParentViewControllerIfNecessary;
-(void)_createpresentationAnimatorIfNecessary:(id)arg0 ;
-(void)_postInteractionCleanup;
-(void)_stashParentViewControllerIfNecessary;
-(void)animateTransition:(id)arg0 ;
-(void)dismissViewController;
-(void)presentFromViewController:(id)arg0 sourcePreview:(id)arg1 dismissalCompletion:(id)arg2 ;


@end


#endif