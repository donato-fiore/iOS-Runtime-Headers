// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNTRANSFORMCONSTRAINT_H
#define SCNTRANSFORMCONSTRAINT_H



#import "SCNConstraint.h"

@interface SCNTransformConstraint : SCNConstraint



+(BOOL)supportsSecureCoding;
+(id)orientationConstraintInWorldSpace:(BOOL)arg0 withBlock:(id)arg1 ;
+(id)positionConstraintInWorldSpace:(BOOL)arg0 withBlock:(id)arg1 ;
+(id)transformConstraintInWorldSpace:(BOOL)arg0 withBlock:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initOrientationInWorldSpace:(BOOL)arg0 withBlock:(id)arg1 ;
-(id)initPositionInWorld:(BOOL)arg0 withBlock:(id)arg1 ;
-(id)initTransformInWorld:(BOOL)arg0 withBlock:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif