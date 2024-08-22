// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMPORTONEUPMODALTRANSITION_H
#define PUIMPORTONEUPMODALTRANSITION_H

@class NSArray, UIViewPropertyAnimator, UIPanGestureRecognizer, PXPinchTracker, PXSwipeDownTracker;
@protocol UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "PUImportOneUpTransitionItem.h"
#import "PUPhotoPinchGestureRecognizer.h"

@interface PUImportOneUpModalTransition : NSObject

@property (nonatomic) NSInteger activeGesture; // ivar: _activeGesture
@property (retain, nonatomic) NSObject<UIViewControllerContextTransitioning> *context; // ivar: _context
@property (retain, nonatomic) NSArray *floatingItems; // ivar: _floatingItems
@property (retain, nonatomic) UIViewPropertyAnimator *floatingItemsAnimator; // ivar: _floatingItemsAnimator
@property (retain, nonatomic) PUImportOneUpTransitionItem *manipulatedFloatingItem; // ivar: _manipulatedFloatingItem
@property (readonly, nonatomic) NSInteger operation; // ivar: _operation
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (readonly, nonatomic) PUPhotoPinchGestureRecognizer *pinchGestureRecognizer; // ivar: _pinchGestureRecognizer
@property (readonly, nonatomic) PXPinchTracker *pinchTracker; // ivar: _pinchTracker
@property (nonatomic) CGFloat startingAnimationProgress; // ivar: _startingAnimationProgress
@property (readonly, nonatomic) PXSwipeDownTracker *swipeDownTracker; // ivar: _swipeDownTracker
@property (retain, nonatomic) UIViewPropertyAnimator *transitionAnimator; // ivar: _transitionAnimator


+(CGFloat)defaultAnimationDurationForOperation:(NSInteger)arg0 ;
+(id)propertyAnimatorWithInitialVelocity:(struct CGVector )arg0 forOperation:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
+(id)transitioningObjectInViewController:(id)arg0 ;
+(struct CGSize )scaledSizeForTargetSize:(struct CGSize )arg0 aspectFillingIntoSize:(struct CGSize )arg1 ;
-(BOOL)continuousGestureRecognizerIsActive:(id)arg0 ;
-(CGFloat)currentProgressForFloatingItem:(id)arg0 atSize:(struct CGSize )arg1 inDirection:(NSInteger)arg2 ;
-(NSInteger)animatingPositionForPinchTracker:(id)arg0 ;
-(NSInteger)animatingPositionForSwipeDownTracker:(id)arg0 ;
-(id)initWithOperation:(NSInteger)arg0 transitionContext:(id)arg1 pinchGestureRecognizer:(id)arg2 panGestureRecognizer:(id)arg3 startsInteractive:(BOOL)arg4 ;
-(struct CGVector )unitVelocityForDisplayVelocity:(struct PXDisplayVelocity )arg0 ;
-(void)animateToPosition:(NSInteger)arg0 ;
-(void)configureFloatingItemForInteractiveTracking;
-(void)endInteraction;
-(void)handleTapHoldGesture:(id)arg0 ;
-(void)handleTransitionComplete:(NSInteger)arg0 ;
-(void)pauseAnimation;
-(void)prepareFloatingItemsForAnimation;
-(void)startTransition;
-(void)updateTransitionWithPanGestureRecognizer:(id)arg0 ;
-(void)updateTransitionWithPinchGestureRecognizer:(id)arg0 ;


@end


#endif