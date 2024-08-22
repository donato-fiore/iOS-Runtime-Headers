// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPHYSICSJOINTDISTANCE_H
#define PKPHYSICSJOINTDISTANCE_H



#import "PKPhysicsJoint.h"

@interface PKPhysicsJointDistance : PKPhysicsJoint {
    b2DistanceJointDef _jointDef;
    *b2DistanceJoint _joint;
    CGPoint _anchorA;
    CGPoint _anchorB;
}


@property (nonatomic) BOOL collideConnected;
@property (nonatomic) CGFloat damping;
@property (nonatomic) CGFloat frequency;
@property (nonatomic) CGFloat length;


+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg0 bodyB:(id)arg1 anchorA:(struct CGPoint )arg2 anchorB:(struct CGPoint )arg3 ;
+(id)jointWithBodyA:(id)arg0 bodyB:(id)arg1 localAnchorA:(struct CGPoint )arg2 localAnchorB:(struct CGPoint )arg3 ;
-(?)_joint;
-(?)_jointDef;
-(?)set_joint;
-(BOOL)isEqualToDistanceJoint:(id)arg0 ;
-(id)initWithBodyA:(id)arg0 bodyB:(id)arg1 anchorA:(struct CGPoint )arg2 anchorB:(struct CGPoint )arg3 ;
-(id)initWithBodyA:(id)arg0 bodyB:(id)arg1 localAnchorA:(struct CGPoint )arg2 localAnchorB:(struct CGPoint )arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)create;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif