// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBVIEWMORPHANIMATOR_H
#define SBVIEWMORPHANIMATOR_H

@class BSAbsoluteMachTimer, NSString, NSHashTable, SBFFluidBehaviorSettings, UIView, NSUUID;
@protocol SBViewMorphAnimatorObserver, SBViewMorphAnimatorDelegate, SBViewMorphAnimatorDataSource;

#import <Foundation/Foundation.h>

#import "SBViewMorphAnimatorContentBlackCurtainView.h"
#import "SBViewMorphAnimatorContentClippingView.h"

@interface SBViewMorphAnimator : NSObject <SBViewMorphAnimatorObserver>



@property (retain, nonatomic) BSAbsoluteMachTimer *allAnimationsTimeoutTimer; // ivar: _allAnimationsTimeoutTimer
@property (nonatomic) BOOL automaticallyStartSourceAnimations; // ivar: _automaticallyStartSourceAnimations
@property (nonatomic) BOOL automaticallyStartTargetAnimations; // ivar: _automaticallyStartTargetAnimations
@property (nonatomic) NSUInteger completedSourceAnimations; // ivar: _completedSourceAnimations
@property (nonatomic) NSUInteger completedTargetAnimations; // ivar: _completedTargetAnimations
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBViewMorphAnimatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) NSInteger fromOrientation; // ivar: _fromOrientation
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (retain, nonatomic) BSAbsoluteMachTimer *morphAnimationTimeout; // ivar: _morphAnimationTimeout
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (copy, nonatomic) id *sourceAllAnimationsCompletionBlock; // ivar: _sourceAllAnimationsCompletionBlock
@property (nonatomic) BOOL sourceAllEnded; // ivar: _sourceAllEnded
@property (retain, nonatomic) BSAbsoluteMachTimer *sourceAnimationsCompletionContinueBlockTimeoutTimer; // ivar: _sourceAnimationsCompletionContinueBlockTimeoutTimer
@property (nonatomic) CGRect sourceAppLayoutFrame; // ivar: _sourceAppLayoutFrame
@property (retain, nonatomic) SBViewMorphAnimatorContentBlackCurtainView *sourceBlackCurtainView; // ivar: _sourceBlackCurtainView
@property (retain, nonatomic) SBFFluidBehaviorSettings *sourceClipAnimationSettings; // ivar: _sourceClipAnimationSettings
@property (readonly, nonatomic) CGFloat sourceClippingCornerRadius;
@property (readonly, nonatomic) CGRect sourceClippingFrame;
@property (nonatomic) CGRect sourceContentFrame; // ivar: _sourceContentFrame
@property (nonatomic) BOOL sourceContentFrameWasAltered; // ivar: _sourceContentFrameWasAltered
@property (nonatomic) CGFloat sourceCornerRadius; // ivar: _sourceCornerRadius
@property (readonly, nonatomic) CGPoint sourceFinalCenter; // ivar: _sourceFinalCenter
@property (readonly, nonatomic) CGFloat sourceFinalScale; // ivar: _sourceFinalScale
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (nonatomic) NSUInteger startedSourceAnimations; // ivar: _startedSourceAnimations
@property (nonatomic) NSUInteger startedTargetAnimations; // ivar: _startedTargetAnimations
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFFluidBehaviorSettings *targetClipAnimationSettings; // ivar: _targetClipAnimationSettings
@property (retain, nonatomic) SBViewMorphAnimatorContentClippingView *targetContentClippingView; // ivar: _targetContentClippingView
@property (nonatomic) CGRect targetContentClippingViewInitialFrame; // ivar: _targetContentClippingViewInitialFrame
@property (weak, nonatomic) UIView *targetContentView; // ivar: _targetContentView
@property (readonly, nonatomic) CGFloat targetCornerRadius; // ivar: _targetCornerRadius
@property (weak, nonatomic) NSObject<SBViewMorphAnimatorDataSource> *targetDataSource; // ivar: _targetDataSource
@property (nonatomic) BOOL targetExternalPlaceholderAllEnded; // ivar: _targetExternalPlaceholderAllEnded
@property (readonly, nonatomic) CGRect targetFinalFrame; // ivar: _targetFinalFrame
@property (readonly, nonatomic) CGRect targetSourcePinningFrame; // ivar: _targetSourcePinningFrame
@property (weak, nonatomic) UIView *targetView; // ivar: _targetView
@property (nonatomic) NSInteger toOrientation; // ivar: _toOrientation
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(BOOL)_isReversed;
-(BOOL)_isTargetSourcePinningFrameEquivalentToSourceViewFrame;
-(BOOL)preflightCheck;
-(BOOL)startSourceAnimations:(NSUInteger)arg0 ;
-(BOOL)startTargetAnimations:(NSUInteger)arg0 ;
-(CGFloat)_sourceFinalScaleWithContentFrame:(struct CGRect )arg0 targetFinalFrame:(struct CGRect )arg1 ;
-(id)init;
-(id)initWithUUID:(id)arg0 direction:(NSInteger)arg1 ;
-(struct CGPoint )_source:(id)arg0 finalCenterWithFinalScale:(CGFloat)arg1 contentFrame:(struct CGRect )arg2 targetFinalFrame:(struct CGRect )arg3 ;
-(struct CGRect )_sourceAppLayoutFrameForSourceView:(id)arg0 withTargetDataSource:(id)arg1 ;
-(struct CGRect )_sourceContentFrameForSourceView:(id)arg0 withTargetDataSource:(id)arg1 ;
-(struct CGRect )_targetInitialClippingBoundsWithSourceContentFrame:(struct CGRect )arg0 sourceFinalScale:(CGFloat)arg1 targetViewBounds:(struct CGRect )arg2 ;
-(struct CGRect )_targetSourcePinningFrameWithSourceContentFrame:(struct CGRect )arg0 targetFinalFrame:(struct CGRect )arg1 ;
-(struct CGRect )_validatedSourceContentFrame:(struct CGRect )arg0 withinSourceView:(id)arg1 withSourceFinalScale:(CGFloat)arg2 ;
-(void)_checkAnimationsDependencies:(id)arg0 ;
-(void)_continueSourceAnimationsCompletionPendingBlock;
-(void)_handleHandoffTimeout;
-(void)_noteAnimatorWasCanceled;
-(void)_noteAnimatorWasInterrupted;
-(void)_noteDidEndAllAnimations;
-(void)_removeBlackCurtainView;
-(void)_removeMatchMoveAnimation;
-(void)_removeTargetClippingView;
-(void)_reset;
-(void)_resetAllAnimations;
-(void)_startMorphAnimationTimeoutTimer;
-(void)_updateParameters;
-(void)addObserver:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)dealloc;
-(void)didEndSourceAnimations:(NSUInteger)arg0 finished:(BOOL)arg1 continueBlock:(id)arg2 ;
-(void)didEndTargetAnimations:(NSUInteger)arg0 finished:(BOOL)arg1 continueBlock:(id)arg2 ;
-(void)interrupt:(id)arg0 ;
-(void)noteSourceAnimationsDidEnd:(NSUInteger)arg0 finished:(BOOL)arg1 continueBlock:(id)arg2 ;
-(void)noteSourceAnimationsWillStart:(NSUInteger)arg0 ;
-(void)noteTargetAnimationsDidEnd:(NSUInteger)arg0 finished:(BOOL)arg1 continueBlock:(id)arg2 ;
-(void)noteTargetAnimationsWillStart:(NSUInteger)arg0 ;
-(void)noteWillRemoveTargeMatchMoveAnimationAtFrame:(struct CGRect )arg0 withinSourceFrame:(struct CGRect )arg1 ;
-(void)willStartSourceAnimations:(NSUInteger)arg0 ;
-(void)willStartTargetAnimations:(NSUInteger)arg0 ;


@end


#endif