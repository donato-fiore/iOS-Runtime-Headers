// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNPHYSICSSLIDERJOINT_H
#define SCNPHYSICSSLIDERJOINT_H



#import "SCNPhysicsBehavior.h"
#import "SCNPhysicsWorld.h"
#import "SCNPhysicsBody.h"

@interface SCNPhysicsSliderJoint : SCNPhysicsBehavior {
    ? _definition;
    *btSliderConstraint _constraint;
    SCNPhysicsWorld *_world;
}


@property (nonatomic) SCNVector3 anchorA;
@property (nonatomic) SCNVector3 anchorB;
@property (nonatomic) SCNVector3 axisA;
@property (nonatomic) SCNVector3 axisB;
@property (readonly, nonatomic) SCNPhysicsBody *bodyA;
@property (readonly, nonatomic) SCNPhysicsBody *bodyB;
@property (nonatomic) CGFloat maximumAngularLimit;
@property (nonatomic) CGFloat maximumLinearLimit;
@property (nonatomic) CGFloat minimumAngularLimit;
@property (nonatomic) CGFloat minimumLinearLimit;
@property (nonatomic) CGFloat motorMaximumForce;
@property (nonatomic) CGFloat motorMaximumTorque;
@property (nonatomic) CGFloat motorTargetAngularVelocity;
@property (nonatomic) CGFloat motorTargetLinearVelocity;


+(BOOL)supportsSecureCoding;
+(id)jointWithBody:(id)arg0 axis:(struct SCNVector3 )arg1 anchor:(struct SCNVector3 )arg2 ;
+(id)jointWithBodyA:(id)arg0 axisA:(struct SCNVector3 )arg1 anchorA:(struct SCNVector3 )arg2 bodyB:(id)arg3 axisB:(struct SCNVector3 )arg4 anchorB:(struct SCNVector3 )arg5 ;
-(id)initWithBody:(id)arg0 axis:(struct SCNVector3 )arg1 anchor:(struct SCNVector3 )arg2 ;
-(id)initWithBodyA:(id)arg0 axisA:(struct SCNVector3 )arg1 anchorA:(struct SCNVector3 )arg2 bodyB:(id)arg3 axisB:(struct SCNVector3 )arg4 anchorB:(struct SCNVector3 )arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_addToPhysicsWorld:(id)arg0 definition:(struct ? )arg1 ;
-(void)_copyDefinition:(struct ? *)arg0 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif