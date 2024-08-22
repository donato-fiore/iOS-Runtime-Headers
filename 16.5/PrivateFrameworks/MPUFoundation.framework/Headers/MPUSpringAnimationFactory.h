// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPUSPRINGANIMATIONFACTORY_H
#define MPUSPRINGANIMATIONFACTORY_H



#import "MPUAnimationFactory.h"

@interface MPUSpringAnimationFactory : MPUAnimationFactory

@property (nonatomic) CGFloat damping; // ivar: _damping
@property (nonatomic) CGFloat mass; // ivar: _mass
@property (nonatomic) CGFloat stiffness; // ivar: _stiffness
@property (nonatomic) CGFloat velocity; // ivar: _velocity


// +(void)animateUsingSpringWithDamping:(CGFloat)arg0 mass:(CGFloat)arg1 stiffness:(CGFloat)arg2 velocity:(CGFloat)arg3 animations:(id)arg4 options:(unk)arg5 completion:(NSUInteger)arg6  ;
-(CGFloat)durationForEpsilon:(CGFloat)arg0 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_newSpringAnimationForKeyPath:(id)arg0 ;


@end


#endif