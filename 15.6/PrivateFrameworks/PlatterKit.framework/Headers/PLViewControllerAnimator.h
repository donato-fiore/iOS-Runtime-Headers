// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLVIEWCONTROLLERANIMATOR_H
#define PLVIEWCONTROLLERANIMATOR_H

@class UIView, NSPointerArray, NSString, UIViewPropertyAnimator;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface PLViewControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning>

 {
    UIView *_sourceView;
    NSPointerArray *_observers;
    BOOL _didPrepareForTransition;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includePresentingViewInAnimation; // ivar: _includePresentingViewInAnimation
@property (readonly, nonatomic, getter=isPresenting) BOOL presenting; // ivar: _presenting
@property (readonly, nonatomic) UIViewPropertyAnimator *propertyAnimator; // ivar: _propertyAnimator
@property (nonatomic) BOOL runAlongsideAnimationsManually; // ivar: _runAlongsideAnimationsManually
@property (readonly) Class superclass;


+(BOOL)drivesAnimation;
-(BOOL)_isTransitionAnimated;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)_newPropertyAnimator;
-(id)_presentedExpandedPlatterForPresentedView:(id)arg0 ;
-(id)_presentedViewControllerForPresentation:(BOOL)arg0 withTransitionContext:(id)arg1 ;
-(id)_presentedViewForPresentation:(BOOL)arg0 withTransitionContext:(id)arg1 ;
-(id)_presentingViewControllerForPresentation:(BOOL)arg0 withTransitionContext:(id)arg1 ;
-(id)_presentingViewForPresentation:(BOOL)arg0 withTransitionContext:(id)arg1 ;
-(id)_previewInteractionPresentableViewControllerForPresentation:(BOOL)arg0 withTransitionContext:(id)arg1 ;
-(id)_sourceViewForPresentation:(BOOL)arg0 withTransitionContext:(id)arg1 ;
-(id)initForPresentation:(BOOL)arg0 withSourceView:(id)arg1 ;
-(void)_animateTransitionWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_notifyObserversWithBlock:(id)arg0 ;
-(void)_performTransitionWithContext:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)performTransitionWithContext:(id)arg0 ;
-(void)prepareForTransitionWithContext:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif