// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSWIPEINTERACTION_H
#define PLSWIPEINTERACTION_H

@class UIPanGestureRecognizer, UIViewFloatAnimatableProperty, NSString, UIView;
@protocol UIGestureRecognizerDelegate, UIInteraction, MTMaterialGrouping, PLSwipeInteractionDelegate;

#import <Foundation/Foundation.h>

#import "PLActionButtonsPresentingView.h"

@interface PLSwipeInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction, MTMaterialGrouping>

 {
    UIPanGestureRecognizer *_panGestureRecognizer;
    CGFloat _panGestureStartingPosition;
    UIViewFloatAnimatableProperty *_targetPositionAnimatableProperty;
    PLActionButtonsPresentingView *_actionButtonsPresentingView;
    id *_swipeHintingHideAnimationBlock;
    id *_animationCompletion;
    id *_performWithoutRetargetingAnimationCompletion;
    NSUInteger _animationCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PLSwipeInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (nonatomic, getter=isPerformingSwipeHinting) BOOL performingSwipeHinting; // ivar: _performingSwipeHinting
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view
@property (weak, nonatomic) UIView *viewToMove; // ivar: _viewToMove


-(BOOL)_shouldContinuePresentingActionButtons;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_actionButtonTriggerDistanceForView:(id)arg0 ;
-(CGFloat)_panHorizontalTranslation;
-(CGFloat)_panHorizontalVelocity;
-(CGFloat)_updateActionRevealStateForTargetPosition:(CGFloat)arg0 currentPosition:(CGFloat)arg1 velocity:(CGFloat)arg2 ;
-(NSUInteger)_interfaceEdgeForLayoutLocation:(NSUInteger)arg0 ;
-(NSUInteger)_interfaceEdgeToPresentOnForAbsoluteTranslation:(CGFloat)arg0 ;
-(NSUInteger)_interfaceEdgeToPresentOnForComparisonValue:(CGFloat)arg0 ;
-(NSUInteger)_interfaceEdgeToPresentOnForInitialPanTranslation:(CGFloat)arg0 andInitialPanVelocity:(CGFloat)arg1 ;
-(NSUInteger)_layoutLocationForInterfaceEdge:(NSUInteger)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)senderForActionWithIdentifier:(id)arg0 ;
-(void)_addActionButtonViewsAtLayoutLocation:(NSUInteger)arg0 interfaceEdge:(NSUInteger)arg1 ;
-(void)_addActionButtonsAndRevealAnimated:(BOOL)arg0 fastAnimation:(BOOL)arg1 layoutLocation:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_hideAnimated:(BOOL)arg0 fastAnimation:(BOOL)arg1 velocity:(CGFloat)arg2 completion:(id)arg3 ;
-(void)_performSwipeHintingForLayoutLocation:(NSUInteger)arg0 ;
-(void)_removeActionButtons;
-(void)_revealToPosition:(CGFloat)arg0 animated:(BOOL)arg1 fastAnimation:(BOOL)arg2 velocity:(CGFloat)arg3 completion:(id)arg4 ;
-(void)_setupContentOffsetFloatAnimatableProperty;
-(void)_updateActionButtonRevealPercentageForTargetPosition:(CGFloat)arg0 ;
-(void)_updatePosition:(CGFloat)arg0 ;
-(void)_updateRevealPercentage:(CGFloat)arg0 ;
-(void)_updateTargetPosition:(CGFloat)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)hideActionsAnimated:(BOOL)arg0 fastAnimation:(BOOL)arg1 completion:(id)arg2 ;
-(void)hintActionsForLayoutLocation:(NSUInteger)arg0 ;
-(void)revealActionsForLayoutLocation:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif