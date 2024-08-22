// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDISCOVERYARTICLEANIMATEDTRANSITIONINGHANDLER_H
#define PKDISCOVERYARTICLEANIMATEDTRANSITIONINGHANDLER_H

@class UIView, NSString;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "PKPassGroupsViewController.h"
#import "PKDiscoveryArticleViewController.h"

@interface PKDiscoveryArticleAnimatedTransitioningHandler : NSObject <UIViewControllerAnimatedTransitioning>

 {
    PKPassGroupsViewController *_presentingVC;
    UIView *_presentingView;
    PKDiscoveryArticleViewController *_presentedVC;
    UIView *_presentedView;
    UIView *_containerView;
    id<UIViewControllerContextTransitioning> *_transitionContext;
    BOOL _completed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPresenting) BOOL presenting; // ivar: _presenting
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)_moveCardView:(id)arg0 toView:(id)arg1 belowView:(id)arg2 ;
-(void)_updateWithTransitionContext:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif