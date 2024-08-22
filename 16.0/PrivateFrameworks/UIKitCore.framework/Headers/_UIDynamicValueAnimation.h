// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDYNAMICVALUEANIMATION_H
#define _UIDYNAMICVALUEANIMATION_H

@class UIDynamicAnimation, NSArray;



@interface _UIDynamicValueAnimation : UIDynamicAnimation {
    id *_applier;
    id *_viewApplier;
    CGFloat _unitSize;
    CGFloat _decelerationFactor;
    CGFloat _decelerationLnFactor;
    CGFloat _multiplier;
    *void _stepFunction;
}


@property (copy, nonatomic) NSArray *activeValues; // ivar: _activeValues
@property (nonatomic) CGFloat friction; // ivar: _friction
@property (nonatomic) CGFloat value; // ivar: _value
@property (nonatomic) CGFloat velocity; // ivar: _velocity


+(id)_dynamicValueAnimationMatchingCASpringAnimationWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(float)arg2 velocity:(float)arg3 fromValue:(CGFloat)arg4 toValue:(CGFloat)arg5 ;
-(BOOL)_animateForInterval:(CGFloat)arg0 ;
-(CGFloat)_multiplier;
-(CGFloat)settlingDuration;
-(id)init;
-(id)initWithValue:(CGFloat)arg0 velocity:(CGFloat)arg1 unitSize:(CGFloat)arg2 ;
-(void)_appendSubclassDescription:(id)arg0 atLevel:(int)arg1 ;
-(void)_setDecelerationFactor:(CGFloat)arg0 ;
-(void)_setMultiplier:(CGFloat)arg0 ;
-(void)_stopAnimation;
-(void)_updateStepFunction;
-(void)addActiveValue:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeActiveValue:(id)arg0 ;
-(void)runWithCompletion:(id)arg0 ;
// -(void)runWithValueApplier:(id)arg0 completion:(unk)arg1  ;
// -(void)runWithValueApplier:(id)arg0 completion:(unk)arg1 forScreen:(id)arg2 runLoopMode:(unk)arg3  ;


@end


#endif