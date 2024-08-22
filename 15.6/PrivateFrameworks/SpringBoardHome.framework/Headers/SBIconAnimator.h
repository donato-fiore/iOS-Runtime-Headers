// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONANIMATOR_H
#define SBICONANIMATOR_H

@class NSMutableArray, UIView;
@protocol SBIconAnimationContaining, SBIconAnimatorDelegate;

#import <Foundation/Foundation.h>

#import "SBFolderControllerAnimationContext.h"
#import "SBHIconAnimationSettings.h"

@interface SBIconAnimator : NSObject {
    CGFloat _fraction;
    BOOL _startAnimationAfterRotationEnds;
    BOOL _windowIsRotating;
    BOOL _cleanedUp;
    NSUInteger _animationCount;
    NSMutableArray *_pendedAnimationContexts;
    SBFolderControllerAnimationContext *_animationContext;
}


@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly, nonatomic) NSObject<SBIconAnimationContaining> *animationContainer; // ivar: _animationContainer
@property (retain, nonatomic) UIView *backgroundDarkeningView; // ivar: _backgroundDarkeningView
@property (weak, nonatomic) NSObject<SBIconAnimatorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat fraction;
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic, getter=isPastPointOfNoReturn) BOOL pastPointOfNoReturn;
@property (readonly, nonatomic) UIView *referenceView;
@property (retain, nonatomic) SBHIconAnimationSettings *settings; // ivar: _settings


-(BOOL)_isDelayedForRotation;
-(NSUInteger)_numberOfSignificantAnimations;
-(id)centralAnimationFactory;
-(id)initWithAnimationContainer:(id)arg0 ;
-(void)_animateToFraction:(CGFloat)arg0 afterDelay:(CGFloat)arg1 withSharedCompletion:(id)arg2 ;
-(void)_animateToFractionFromContext:(id)arg0 ;
-(void)_animateToFractionFromPendingContexts;
-(void)_cleanupAnimation;
-(void)_invalidateCompletions;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(CGFloat)arg0 ;
-(void)_windowFinishedRotating;
-(void)animateToFraction:(CGFloat)arg0 afterDelay:(CGFloat)arg1 withCompletion:(id)arg2 ;
-(void)cleanup;
-(void)dealloc;
-(void)prepare;


@end


#endif