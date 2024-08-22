// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BNTRANSITIONCONTEXT_H
#define BNTRANSITIONCONTEXT_H

@class _UIViewControllerOneToOneTransitionContext, UIView, NSString;
@protocol UIViewControllerContextTransitioning, UIViewControllerTransitionCoordinator;

#import <Foundation/Foundation.h>


@interface BNTransitionContext : NSObject <UIViewControllerContextTransitioning>

 {
    _UIViewControllerOneToOneTransitionContext *_transitionContext;
}


@property (nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExplicitCompletionRequired) BOOL explicitCompletionRequired; // ivar: _explicitCompletionRequired
@property (nonatomic) CGRect fromEndFrame;
@property (nonatomic) CGRect fromStartFrame;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) NSInteger presentationStyle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGAffineTransform targetTransform;
@property (nonatomic) CGRect toEndFrame;
@property (nonatomic) CGRect toStartFrame;
@property (readonly, weak, nonatomic) NSObject<UIViewControllerTransitionCoordinator> *transitionCoordinator;
@property (readonly, nonatomic) BOOL transitionWasCancelled;


+(id)transitionContextForTransitionFromViewController:(id)arg0 toViewController:(id)arg1 inContainerView:(id)arg2 ;
+(id)transitionContextForTransitionOfViewController:(id)arg0 fromFrame:(struct CGRect )arg1 toFrame:(struct CGRect )arg2 inContainerView:(id)arg3 ;
-(id)init;
-(id)viewControllerForKey:(id)arg0 ;
-(id)viewForKey:(id)arg0 ;
-(struct CGRect )finalFrameForViewController:(id)arg0 ;
-(struct CGRect )initialFrameForViewController:(id)arg0 ;
-(void)__runAlongsideAnimations;
-(void)cancelInteractiveTransition;
-(void)completeTransition:(BOOL)arg0 ;
-(void)explictlyCompleteTransition:(BOOL)arg0 ;
-(void)finishInteractiveTransition;
-(void)pauseInteractiveTransition;
-(void)performTransitionWithAnimator:(id)arg0 ;
-(void)updateInteractiveTransition:(CGFloat)arg0 ;


@end


#endif