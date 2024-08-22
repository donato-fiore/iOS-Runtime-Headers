// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKFULLSCREENANIMATIONCONTROLLER_H
#define WKFULLSCREENANIMATIONCONTROLLER_H

@class NSString, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>


@interface WKFullscreenAnimationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>

 {
    CGRect _initialMaskViewBounds;
    CGRect _finalMaskViewBounds;
    CGAffineTransform _initialAnimatingViewTransform;
    CGAffineTransform _finalAnimatingViewTransform;
    CGPoint _initialMaskViewCenter;
    CGPoint _finalMaskViewCenter;
    RetainPtr<UIView> _maskView;
    RetainPtr<UIView> _animatingView;
    RetainPtr<id<UIViewControllerContextTransitioning>> _context;
    CGFloat _initialBackgroundAlpha;
    CGFloat _finalBackgroundAlpha;
}


@property (nonatomic, getter=isAnimatingIn) BOOL animatingIn; // ivar: _animatingIn
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionSpeed;
@property (readonly, nonatomic) NSObject<UIViewControllerContextTransitioning> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect finalFrame; // ivar: _finalFrame
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect initialFrame; // ivar: _initialFrame
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)_createViewsForTransitionContext:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)configureInitialAndFinalStatesForTransition:(id)arg0 ;
-(void)dealloc;
-(void)end:(BOOL)arg0 ;
-(void)startInteractiveTransition:(id)arg0 ;
-(void)updateWithProgress:(CGFloat)arg0 ;
-(void)updateWithProgress:(CGFloat)arg0 scale:(CGFloat)arg1 translation:(struct CGSize )arg2 anchor:(struct CGPoint )arg3 ;
-(void)updateWithProgress:(CGFloat)arg0 translation:(struct CGSize )arg1 anchor:(struct CGPoint )arg2 ;


@end


#endif