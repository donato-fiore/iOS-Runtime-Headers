// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNPHYSICSBALLSOCKETJOINT_H
#define SCNPHYSICSBALLSOCKETJOINT_H



#import "SCNPhysicsBehavior.h"
#import "SCNPhysicsWorld.h"
#import "SCNPhysicsBody.h"

@interface SCNPhysicsBallSocketJoint : SCNPhysicsBehavior {
    ? _definition;
    *btPoint2PointConstraint _constraint;
    SCNPhysicsWorld *_world;
}


@property (nonatomic) SCNVector3 anchorA;
@property (nonatomic) SCNVector3 anchorB;
@property (readonly, nonatomic) SCNPhysicsBody *bodyA;
@property (readonly, nonatomic) SCNPhysicsBody *bodyB;


+(BOOL)supportsSecureCoding;
+(id)jointWithBody:(id)arg0 anchor:(struct SCNVector3 )arg1 ;
+(id)jointWithBodyA:(id)arg0 anchorA:(struct SCNVector3 )arg1 bodyB:(id)arg2 anchorB:(struct SCNVector3 )arg3 ;
-(id)initWithBody:(id)arg0 anchor:(struct SCNVector3 )arg1 ;
-(id)initWithBodyA:(id)arg0 anchorA:(struct SCNVector3 )arg1 bodyB:(id)arg2 anchorB:(struct SCNVector3 )arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_addToPhysicsWorld:(id)arg0 definition:(struct ? )arg1 ;
-(void)_copyDefinition:(struct ? *)arg0 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif