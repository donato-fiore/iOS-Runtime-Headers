// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPHYSICSJOINTREVOLUTE_H
#define PKPHYSICSJOINTREVOLUTE_H



#import "PKPhysicsJoint.h"

@interface PKPhysicsJointRevolute : PKPhysicsJoint {
    b2RevoluteJointDef _jointDef;
    *b2RevoluteJoint _joint;
}


@property (readonly) CGPoint anchor; // ivar: _anchor
@property (nonatomic) CGFloat frictionTorque;
@property (nonatomic) CGFloat lowerAngleLimit;
@property (nonatomic) CGFloat rotationSpeed;
@property (nonatomic) BOOL shouldEnableLimits;
@property (nonatomic) CGFloat upperAngleLimit;


+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg0 bodyB:(id)arg1 anchor:(struct CGPoint )arg2 ;
-(?)_joint;
-(?)_jointDef;
-(?)set_joint;
-(BOOL)isEqualToRevoluteJoint:(id)arg0 ;
-(id)initWithBodyA:(id)arg0 bodyB:(id)arg1 anchor:(struct CGPoint )arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)create;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif