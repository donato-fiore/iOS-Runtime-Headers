// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPHYSICSJOINTROPE_H
#define PKPHYSICSJOINTROPE_H



#import "PKPhysicsJoint.h"

@interface PKPhysicsJointRope : PKPhysicsJoint {
    b2RopeJointDef _jointDef;
    *b2RopeJoint _joint;
    CGPoint _anchorA;
    CGPoint _anchorB;
}


@property (nonatomic) CGFloat maxLength;


+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg0 bodyB:(id)arg1 anchorA:(struct CGPoint )arg2 anchorB:(struct CGPoint )arg3 ;
-(?)_joint;
-(?)_jointDef;
-(?)set_joint;
-(BOOL)isEqualToRopeJoint:(id)arg0 ;
-(id)initWithBodyA:(id)arg0 bodyB:(id)arg1 anchorA:(struct CGPoint )arg2 anchorB:(struct CGPoint )arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)create;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif