// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGANIMATOR_H
#define PXGANIMATOR_H


#import <Foundation/Foundation.h>

#import "PXGAnimationDataStore.h"
#import "PXGAnimatorLayout.h"
#import "PXGIndexSetArray.h"
#import "PXGSpriteDataStore.h"

@interface PXGAnimator : NSObject {
    PXGAnimationDataStore *_animationDataStore;
    PXGAnimatorLayout *_animatorLayout;
    CGFloat _lastUpdateTime;
    unsigned int _numberOfProlongatedSprites;
    PXGIndexSetArray *_spriteIndexesByGroupIndex;
    PXGSpriteDataStore *_doubleSidedSpriteDataStore;
    PXGSpriteDataStore *_oldAnimationPresentationSpriteDataStore;
    BOOL _isSkippingAnimations;
}


@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (readonly, nonatomic) NSInteger computeCount; // ivar: _computeCount
@property (readonly, nonatomic) BOOL hasCriticalAnimations;
@property (readonly, nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) NSInteger preferredFramesPerSecond; // ivar: _preferredFramesPerSecond
@property (nonatomic) CGFloat speed; // ivar: _speed


-(id)_animationByAnimationIndexForAnimations:(id)arg0 ;
-(id)init;
-(void)_stopAllAnimations;
-(void)computeAnimationStateForTime:(CGFloat)arg0 inputSpriteDataStore:(id)arg1 inputChangeDetails:(id)arg2 inputLayout:(id)arg3 viewportShift:(struct CGPoint )arg4 animationPresentationSpriteDataStore:(id)arg5 animationTargetSpriteDataStore:(id)arg6 animationChangeDetails:(*id)arg7 animationLayout:(*id)arg8 ;
-(void)dealloc;
-(void)retargetAnimationsAfterStartTime:(CGFloat)arg0 newStartTime:(CGFloat)arg1 ;


@end


#endif