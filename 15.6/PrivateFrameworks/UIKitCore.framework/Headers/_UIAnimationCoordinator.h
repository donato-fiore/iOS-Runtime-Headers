// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIANIMATIONCOORDINATOR_H
#define _UIANIMATIONCOORDINATOR_H

@class NSMutableDictionary, NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>

#import "_UIViewControllerOneToOneTransitionContext.h"
#import "UIPercentDrivenInteractiveTransition.h"
#import "UIView.h"
#import "UIViewController.h"

@interface _UIAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning>

 {
    NSMutableDictionary *_stash;
    _UIViewControllerOneToOneTransitionContext *_transitionContext;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}


@property (copy, nonatomic) id *animator; // ivar: _animator
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGRect endFrame; // ivar: _endFrame
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *preperation; // ivar: _preperation
@property (nonatomic) CGRect startFrame; // ivar: _startFrame
@property (readonly, retain, nonatomic) NSMutableDictionary *stash;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) _UIViewControllerOneToOneTransitionContext *transitionContext;
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)_updateTransitionContext;
-(void)animate;
-(void)animateInteractively;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)cancelInteractiveAnimation;
-(void)dealloc;
-(void)finishInteractiveAnimation;
-(void)updateInteractiveProgress:(CGFloat)arg0 ;


@end


#endif