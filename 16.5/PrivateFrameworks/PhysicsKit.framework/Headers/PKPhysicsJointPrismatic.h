// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPHYSICSJOINTPRISMATIC_H
#define PKPHYSICSJOINTPRISMATIC_H



#import "PKPhysicsJoint.h"

@interface PKPhysicsJointPrismatic : PKPhysicsJoint {
    b2PrismaticJointDef _jointDef;
    *b2PrismaticJoint _joint;
    CGPoint _anchor;
    CGVector _axis;
}


@property (nonatomic) CGFloat lowerDistanceLimit;
@property (nonatomic) BOOL shouldEnableLimits;
@property (nonatomic) CGFloat upperDistanceLimit;


+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg0 bodyB:(id)arg1 anchor:(struct CGPoint )arg2 axis:(struct CGVector )arg3 ;
-(?)_joint;
-(?)_jointDef;
-(?)set_joint;
-(BOOL)isEqualToPrismaticJoint:(id)arg0 ;
-(id)initWithBodyA:(id)arg0 bodyB:(id)arg1 anchor:(struct CGPoint )arg2 axis:(struct CGVector )arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)create;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif