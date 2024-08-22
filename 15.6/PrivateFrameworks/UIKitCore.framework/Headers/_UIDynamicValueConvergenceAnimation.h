// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDYNAMICVALUECONVERGENCEANIMATION_H
#define _UIDYNAMICVALUECONVERGENCEANIMATION_H

@class UIDynamicAnimation;



@interface _UIDynamicValueConvergenceAnimation : UIDynamicAnimation {
    id *_applier;
}


@property (nonatomic) CGFloat convergenceRate; // ivar: _convergenceRate
@property (nonatomic) CGFloat minimumDifference; // ivar: _minimumDifference
@property (nonatomic) CGFloat targetValue; // ivar: _targetValue
@property (nonatomic) CGFloat value; // ivar: _value


-(BOOL)_animateForInterval:(CGFloat)arg0 ;
-(id)initWithValue:(CGFloat)arg0 targetValue:(CGFloat)arg1 convergenceRate:(CGFloat)arg2 minimumDifference:(CGFloat)arg3 ;
// -(void)runWithValueApplier:(id)arg0 completion:(unk)arg1  ;


@end


#endif