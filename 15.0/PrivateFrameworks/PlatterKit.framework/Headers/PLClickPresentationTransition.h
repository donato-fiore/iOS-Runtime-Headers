// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLICKPRESENTATIONTRANSITION_H
#define PLCLICKPRESENTATIONTRANSITION_H

@class MTMaterialView, UIViewPropertyAnimator, NSString, UITargetedPreview;
@protocol _UIClickPresentationTransition, UIViewControllerTransitioningDelegate;

#import <Foundation/Foundation.h>

#import "_PLViewControllerOneToOneTransitionContext.h"
#import "PLViewControllerAnimator.h"

@interface PLClickPresentationTransition : NSObject <_UIClickPresentationTransition>

 {
    id<UIViewControllerTransitioningDelegate> *_transitionDelegate;
    _PLViewControllerOneToOneTransitionContext *_transitionContext;
    PLViewControllerAnimator *_animator;
    id *_completion;
}


@property (weak, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL propagatesPresentingViewTransform; // ivar: _propagatesPresentingViewTransform
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (readonly) Class superclass;


-(id)_animator;
-(id)_newAnimator;
-(id)initWithTransitionDelegate:(id)arg0 presentingViewController:(id)arg1 presentedViewController:(id)arg2 completion:(id)arg3 ;
-(void)_configureTransitionContextWithFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)performTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)prepareTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)transitionDidEnd:(BOOL)arg0 ;
-(void)updateBackgroundViewForTransition;


@end


#endif