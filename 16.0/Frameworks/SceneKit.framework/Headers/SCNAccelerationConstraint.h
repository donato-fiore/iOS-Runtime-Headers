// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNACCELERATIONCONSTRAINT_H
#define SCNACCELERATIONCONSTRAINT_H



#import "SCNConstraint.h"

@interface SCNAccelerationConstraint : SCNConstraint {
    float _maximumLinearVelocity;
    float _maximumLinearAcceleration;
    float _decelerationDistance;
    float _damping;
}


@property (nonatomic) CGFloat damping;
@property (nonatomic) CGFloat decelerationDistance;
@property (nonatomic) CGFloat maximumLinearAcceleration;
@property (nonatomic) CGFloat maximumLinearVelocity;


+(BOOL)supportsSecureCoding;
+(id)accelerationConstraint;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif