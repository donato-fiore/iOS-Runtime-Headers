// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPREVIEWINTERACTIONVIEWCONTROLLERHELPER_H
#define _UIPREVIEWINTERACTIONVIEWCONTROLLERHELPER_H

@class NSString;
@protocol UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIPreviewPresentationControllerDelegate, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "_UIPreviewInteractionHighlighter.h"
#import "UIWindow.h"
#import "UIViewController.h"
#import "UIView.h"
#import "_UIPreviewInteractionViewControllerPresentation.h"

@interface _UIPreviewInteractionViewControllerHelper : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIPreviewPresentationControllerDelegate>

 {
    _UIPreviewInteractionHighlighter *_highlighter;
    UIWindow *_presentingWindow;
    id *_presentationCompletion;
    id *_dismissalCompletion;
    BOOL _shouldActAsAppearanceAnimationController;
    BOOL _shouldUseDefaultPresentationController;
    UIViewController *_previousParentViewController;
    UIView *_previousSuperview;
    id<UIViewControllerContextTransitioning> *_currentTransitionContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UIPreviewInteractionViewControllerPresentation *viewControllerPresentation; // ivar: _viewControllerPresentation


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)customPresentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(id)defaultPresentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(id)initWithViewControllerPresentation:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)_finalizeAfterViewControllerPresentation;
-(void)_performDismissalCompletionIfNeeded;
-(void)_performPresentViewControllerFromViewController:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)dismissViewController;
// -(void)presentViewControllerFromViewController:(id)arg0 highlighter:(id)arg1 presentationCompletion:(id)arg2 dismissalCompletion:(unk)arg3  ;
-(void)previewPresentationController:(id)arg0 shouldDismissViewController:(id)arg1 ;


@end


#endif