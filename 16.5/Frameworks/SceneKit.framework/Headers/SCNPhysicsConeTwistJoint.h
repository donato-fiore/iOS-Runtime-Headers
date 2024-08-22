// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNPHYSICSCONETWISTJOINT_H
#define SCNPHYSICSCONETWISTJOINT_H



#import "SCNPhysicsBehavior.h"
#import "SCNPhysicsWorld.h"
#import "SCNPhysicsBody.h"

@interface SCNPhysicsConeTwistJoint : SCNPhysicsBehavior {
    ? _definition;
    *btConeTwistConstraint _constraint;
    SCNPhysicsWorld *_world;
}


@property (readonly, nonatomic) SCNPhysicsBody *bodyA;
@property (readonly, nonatomic) SCNPhysicsBody *bodyB;
@property (nonatomic) SCNMatrix4 frameA;
@property (nonatomic) SCNMatrix4 frameB;
@property (nonatomic) CGFloat maximumAngularLimit1;
@property (nonatomic) CGFloat maximumAngularLimit2;
@property (nonatomic) CGFloat maximumTwistAngle;


+(BOOL)supportsSecureCoding;
+(id)jointWithBody:(id)arg0 frame:(struct SCNMatrix4 )arg1 ;
+(id)jointWithBodyA:(id)arg0 frameA:(struct SCNMatrix4 )arg1 bodyB:(id)arg2 frameB:(struct SCNMatrix4 )arg3 ;
-(id)initWithBody:(id)arg0 frame:(struct SCNMatrix4 )arg1 ;
-(id)initWithBodyA:(id)arg0 frameA:(struct SCNMatrix4 )arg1 bodyB:(id)arg2 frameB:(struct SCNMatrix4 )arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_addToPhysicsWorld:(id)arg0 definition:(struct ? )arg1 ;
-(void)_copyDefinition:(struct ? *)arg0 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif