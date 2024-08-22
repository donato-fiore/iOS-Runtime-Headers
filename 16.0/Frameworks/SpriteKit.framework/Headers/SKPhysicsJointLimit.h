// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKPHYSICSJOINTLIMIT_H
#define SKPHYSICSJOINTLIMIT_H



#import "SKPhysicsJoint.h"

@interface SKPhysicsJointLimit : SKPhysicsJoint

@property (nonatomic) CGFloat maxLength; // ivar: _maxLength


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)jointWithBodyA:(id)arg0 bodyB:(id)arg1 anchorA:(struct CGPoint )arg2 anchorB:(struct CGPoint )arg3 ;


@end


#endif