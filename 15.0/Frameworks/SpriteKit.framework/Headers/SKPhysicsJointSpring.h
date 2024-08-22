// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPHYSICSJOINTSPRING_H
#define SKPHYSICSJOINTSPRING_H



#import "SKPhysicsJoint.h"

@interface SKPhysicsJointSpring : SKPhysicsJoint

@property (nonatomic) CGFloat damping; // ivar: _damping
@property (nonatomic) CGFloat frequency; // ivar: _frequency


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)jointWithBodyA:(id)arg0 bodyB:(id)arg1 anchorA:(struct CGPoint )arg2 anchorB:(struct CGPoint )arg3 ;


@end


#endif