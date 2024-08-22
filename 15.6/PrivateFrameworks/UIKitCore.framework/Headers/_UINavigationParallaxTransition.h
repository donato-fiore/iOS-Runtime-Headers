// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINAVIGATIONPARALLAXTRANSITION_H
#define _UINAVIGATIONPARALLAXTRANSITION_H

@class NSUUID, NSString;
@protocol _UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "_UIParallaxDimmingView.h"
#import "UIView.h"
#import "_UINavigationInteractiveTransitionBase.h"
#import "UIColor.h"

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx>

 {
    NSUUID *_currentRunningAnimationsUUID;
    NSUUID *_currentTrackingAnimatorsAnimationsUUID;
}


@property (nonatomic, setter=_setShouldReverseLayoutDirection:) BOOL _shouldReverseLayoutDirection; // ivar: __shouldReverseLayoutDirection
@property (retain, nonatomic) _UIParallaxDimmingView *borderDimmingView; // ivar: _borderDimmingView
@property (retain, nonatomic) UIView *clipUnderView; // ivar: _clipUnderView
@property (nonatomic) BOOL clipUnderlapWhileTransitioning; // ivar: _clipUnderlapWhileTransitioning
@property (retain, nonatomic) UIView *containerFromView; // ivar: _containerFromView
@property (retain, nonatomic) UIView *containerToView; // ivar: _containerToView
@property (retain, nonatomic) _UIParallaxDimmingView *contentDimmingView; // ivar: _contentDimmingView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interactionAborted; // ivar: _interactionAborted
@property (nonatomic) _UINavigationInteractiveTransitionBase *interactionController; // ivar: _interactionController
@property (nonatomic) NSInteger operation; // ivar: _operation
@property (retain, nonatomic) UIColor *overrideDimmingColor; // ivar: _overrideDimmingColor
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<UIViewControllerContextTransitioning> *transitionContext; // ivar: _transitionContext
@property (nonatomic) CGFloat transitionGap; // ivar: _transitionGap
@property (nonatomic) NSInteger transitionStyle; // ivar: _transitionStyle


+(CGFloat)defaultSlidingTransitionDuration;
+(void)setDefaultSlidingTransitionDuration:(CGFloat)arg0 ;
-(CGFloat)gapBetweenViews;
-(CGFloat)parallaxOffset;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_timingFunctionForAnimation;
-(id)initWithCurrentOperation:(NSInteger)arg0 ;
-(id)resizedFromContainerView;
-(id)resizedToContainerView;
-(id)shadowContainerForKeyboardTransition:(id)arg0 ;
-(void)_stopTransitionImmediately;
-(void)animateKeyboard:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)completeKeyboard:(id)arg0 ;
-(void)prepareToAnimateKeyboard:(id)arg0 ;
-(void)resizeShadow:(id)arg0 ;


@end


#endif