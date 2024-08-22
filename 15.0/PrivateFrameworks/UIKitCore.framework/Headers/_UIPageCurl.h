// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPAGECURL_H
#define _UIPAGECURL_H

@class NSMutableArray, NSMutableSet, NSNumber;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "_UIPageCurlState.h"

@interface _UIPageCurl : NSObject {
    CGRect _contentRect;
    UIView *_contentView;
    _UIPageCurlState *_manualPageCurlState;
    NSMutableArray *_pendingStateQueue;
    NSMutableArray *_activeStateQueue;
    NSMutableSet *_completedStates;
    CGFloat _delayBetweenSuccessiveAnimations;
    CGFloat _pageDiagonalAngle;
    CGFloat _pageDiagonalLength;
}


@property (readonly, nonatomic, getter=_isManualPageCurlInProgressAndUncommitted) BOOL _manualPageCurlInProgressAndUncommitted;
@property (nonatomic, setter=_setManualPageCurlMaxDAngle:) CGFloat _manualPageCurlMaxDAngle; // ivar: _manualPageCurlMaxDAngle
@property (readonly, nonatomic) NSInteger _spineLocation; // ivar: _spineLocation
@property (readonly, nonatomic) NSNumber *_wrappedManualPageCurlDirection;


-(BOOL)_areAnimationsInFlightOrPending;
-(BOOL)_isPreviousCurlCompatibleWithCurlOfType:(NSInteger)arg0 inDirection:(NSInteger)arg1 ;
-(BOOL)_populateFromValue:(*CGFloat)arg0 toValue:(*CGFloat)arg1 fromState:(id)arg2 forAnimationWithKeyPath:(id)arg3 ;
-(CGFloat)_baseAngleOffsetForState:(id)arg0 ;
-(CGFloat)_distanceToTravelWithCurrentSpineLocation;
-(CGFloat)_durationForManualCurlEndAnimationWithSuggestedVelocity:(CGFloat)arg0 shouldComplete:(BOOL)arg1 ;
-(CGFloat)_inputTimeForProgress:(CGFloat)arg0 distanceToTravel:(CGFloat)arg1 radius:(*CGFloat)arg2 minRadius:(CGFloat)arg3 angle:(CGFloat)arg4 dAngle:(CGFloat)arg5 touchLocation:(struct CGPoint )arg6 state:(id)arg7 ;
-(NSInteger)_validatedPageCurlTypeForPageCurlType:(NSInteger)arg0 inDirection:(NSInteger)arg1 ;
-(id)_animationKeyPaths;
-(id)_newAnimationForState:(id)arg0 withKeyPath:(id)arg1 duration:(CGFloat)arg2 fromValue:(id)arg3 ;
-(id)_newCurlFilter;
-(id)initWithSpineLocation:(NSInteger)arg0 andContentRect:(struct CGRect )arg1 inContentView:(id)arg2 ;
-(struct CGPoint )_referenceLocationForInitialLocation:(struct CGPoint )arg0 direction:(NSInteger)arg1 ;
-(struct CGRect )_pageViewFrame:(BOOL)arg0 ;
-(void)_abortManualCurlAtLocation:(struct CGPoint )arg0 withSuggestedVelocity:(CGFloat)arg1 ;
-(void)_beginCurlWithState:(id)arg0 previousState:(id)arg1 ;
-(void)_cancelAllActiveTransitionsAndAbandonCallbacks:(BOOL)arg0 ;
-(void)_cancelTransitionWithState:(id)arg0 invalidatingPageCurl:(BOOL)arg1 ;
-(void)_cleanupState:(id)arg0 ;
-(void)_completeManualCurlAtLocation:(struct CGPoint )arg0 withSuggestedVelocity:(CGFloat)arg1 ;
-(void)_endManualCurlAtLocation:(struct CGPoint )arg0 withSuggestedVelocity:(CGFloat)arg1 shouldComplete:(BOOL)arg2 ;
// -(void)_enqueueCurlOfType:(NSInteger)arg0 fromLocation:(struct CGPoint )arg1 inDirection:(NSInteger)arg2 withView:(id)arg3 revealingView:(id)arg4 completion:(id)arg5 finally:(unk)arg6  ;
-(void)_ensureCurlFilterOnLayer:(id)arg0 ;
-(void)_forceCleanupState:(id)arg0 finished:(BOOL)arg1 completed:(BOOL)arg2 ;
-(void)_fromValue:(*CGFloat)arg0 toValue:(*CGFloat)arg1 fromState:(id)arg2 forAnimationWithKeyPath:(id)arg3 ;
-(void)_pageCurlAnimationDidStop:(id)arg0 withState:(id)arg1 ;
-(void)_setContentRect:(struct CGRect )arg0 ;
-(void)_updateCurlFromState:(id)arg0 withTime:(CGFloat)arg1 radius:(CGFloat)arg2 angle:(CGFloat)arg3 addingAnimations:(id)arg4 ;
-(void)_updateManualCurlToLocation:(struct CGPoint )arg0 ;
-(void)_updatedInputsFromState:(id)arg0 forLocation:(struct CGPoint )arg1 time:(*CGFloat)arg2 radius:(*CGFloat)arg3 angle:(*CGFloat)arg4 ;
-(void)dealloc;


@end


#endif