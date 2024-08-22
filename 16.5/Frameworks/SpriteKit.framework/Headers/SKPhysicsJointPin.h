// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKPHYSICSJOINTPIN_H
#define SKPHYSICSJOINTPIN_H



#import "SKPhysicsJoint.h"

@interface SKPhysicsJointPin : SKPhysicsJoint

@property (readonly) CGPoint anchor; // ivar: _anchor
@property (nonatomic) CGFloat frictionTorque; // ivar: _frictionTorque
@property (nonatomic) CGFloat lowerAngleLimit; // ivar: _lowerAngleLimit
@property (nonatomic) CGFloat rotationSpeed; // ivar: _rotationSpeed
@property (nonatomic) BOOL shouldEnableLimits; // ivar: _shouldEnableLimits
@property (nonatomic) CGFloat upperAngleLimit; // ivar: _upperAngleLimit


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)jointWithBodyA:(id)arg0 bodyB:(id)arg1 anchor:(struct CGPoint )arg2 ;


@end


#endif