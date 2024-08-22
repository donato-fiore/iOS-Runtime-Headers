// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISHEETANIMATIONCONTROLLER_H
#define _UISHEETANIMATIONCONTROLLER_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning_Internal, UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIViewPropertyAnimator.h"

@interface _UISheetAnimationController : NSObject <UIViewControllerAnimatedTransitioning_Internal, UIViewControllerAnimatedTransitioning>



@property (nonatomic) CGPoint attachmentPoint; // ivar: _attachmentPoint
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *defaultSourceFrameProvider; // ivar: _defaultSourceFrameProvider
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *forwardView; // ivar: _forwardView
@property (nonatomic) CGRect forwardViewFullFrame; // ivar: _forwardViewFullFrame
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect interactiveFrame; // ivar: _interactiveFrame
@property (readonly, nonatomic) BOOL isForward;
@property (nonatomic) BOOL isInInitialLayout; // ivar: _isInInitialLayout
@property (nonatomic) BOOL isReversed; // ivar: _isReversed
@property (copy, nonatomic) id *noninteractiveAnimations; // ivar: _noninteractiveAnimations
@property (copy, nonatomic) id *noninteractiveCompletion; // ivar: _noninteractiveCompletion
@property (retain, nonatomic) UIViewPropertyAnimator *propertyAnimator; // ivar: _propertyAnimator
@property (nonatomic) BOOL scalesDownForwardView; // ivar: _scalesDownForwardView
@property (nonatomic) CGRect sourceFrame; // ivar: _sourceFrame
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<UIViewControllerContextTransitioning> *transitionContext; // ivar: _transitionContext


-(BOOL)_allowKeyboardToAnimateAlongside:(id)arg0 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(id)interruptibleAnimatorForTransition:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)layoutTransitionViews;
-(void)runNoninteractiveAnimationsIfPossible;


@end


#endif