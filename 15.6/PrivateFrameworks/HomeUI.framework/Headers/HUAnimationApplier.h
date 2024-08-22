// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUANIMATIONAPPLIER_H
#define HUANIMATIONAPPLIER_H

@class CADisplayLink, NSMutableSet;


#import "HUApplier.h"
#import "HUAnimationSettings.h"

@interface HUAnimationApplier : HUApplier

@property (copy, nonatomic) HUAnimationSettings *animationSettings; // ivar: _animationSettings
@property (nonatomic) BOOL applyDynamically; // ivar: _applyDynamically
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (readonly, nonatomic) CGFloat effectiveProgress;
@property (readonly, nonatomic) NSMutableSet *effectiveProgressObservers; // ivar: _effectiveProgressObservers
@property (readonly, nonatomic) NSMutableSet *relativeAnimations; // ivar: _relativeAnimations
@property (nonatomic) CGFloat startTime; // ivar: _startTime


+(id)_applierWithAnimationSettings:(id)arg0 applyDynamically:(BOOL)arg1 ;
// +(id)_applyAnimationSettings:(id)arg0 withApplier:(id)arg1 completion:(unk)arg2 applyDynamically:(id)arg3  ;
// +(id)applyAnimationSettings:(id)arg0 withDynamicApplier:(id)arg1 completion:(unk)arg2  ;
// +(id)applyAnimationSettings:(id)arg0 withStaticApplier:(id)arg1 completion:(unk)arg2  ;
+(id)dynamicApplierWithAnimationSettings:(id)arg0 ;
+(id)staticApplierWithAnimationSettings:(id)arg0 ;
-(BOOL)addAlongsideAnimationApplier:(id)arg0 relativeStart:(CGFloat)arg1 relativeDuration:(CGFloat)arg2 ;
-(BOOL)cancel;
-(BOOL)complete:(BOOL)arg0 ;
-(BOOL)notifyUponEffectiveProgress:(CGFloat)arg0 withBlock:(id)arg1 ;
-(BOOL)start;
-(CGFloat)_effectiveDuration;
-(CGFloat)_remainingTimeIntervalForEffectiveProgress:(CGFloat)arg0 ;
-(id)init;
-(id)initWithAnimationSettings:(id)arg0 ;
-(void)_invalidateDisplayLinkIfNecessary;
-(void)_startEffectiveProgressTimerForObserver:(id)arg0 ;
-(void)_updateDynamicProgress:(CGFloat)arg0 ;


@end


#endif