// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPHYSICSJOINTWELD_H
#define PKPHYSICSJOINTWELD_H



#import "PKPhysicsJoint.h"

@interface PKPhysicsJointWeld : PKPhysicsJoint {
    b2WeldJointDef _jointDef;
    *b2WeldJoint _joint;
    CGPoint _anchor;
}




+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg0 bodyB:(id)arg1 anchor:(struct CGPoint )arg2 ;
-(?)_joint;
-(?)_jointDef;
-(?)set_joint;
-(BOOL)isEqualToWeldJoint:(id)arg0 ;
-(id)initWithBodyA:(id)arg0 bodyB:(id)arg1 anchor:(struct CGPoint )arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)create;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif