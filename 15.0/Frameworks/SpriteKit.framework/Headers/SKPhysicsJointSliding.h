// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPHYSICSJOINTSLIDING_H
#define SKPHYSICSJOINTSLIDING_H



#import "SKPhysicsJoint.h"

@interface SKPhysicsJointSliding : SKPhysicsJoint

@property (nonatomic) CGFloat lowerDistanceLimit; // ivar: _lowerDistanceLimit
@property (nonatomic) BOOL shouldEnableLimits; // ivar: _shouldEnableLimits
@property (nonatomic) CGFloat upperDistanceLimit; // ivar: _upperDistanceLimit


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)jointWithBodyA:(id)arg0 bodyB:(id)arg1 anchor:(struct CGPoint )arg2 axis:(struct CGVector )arg3 ;


@end


#endif