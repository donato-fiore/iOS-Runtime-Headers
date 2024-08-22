// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKPHYSICSCONTACT_H
#define SKPHYSICSCONTACT_H


#import <Foundation/Foundation.h>

#import "SKPhysicsBody.h"

@interface SKPhysicsContact : NSObject

@property (readonly, nonatomic) SKPhysicsBody *bodyA; // ivar: _bodyA
@property (readonly, nonatomic) SKPhysicsBody *bodyB; // ivar: _bodyB
@property (readonly, nonatomic) CGFloat collisionImpulse; // ivar: _collisionImpulse
@property (readonly, nonatomic) CGVector contactNormal; // ivar: _contactNormal
@property (readonly, nonatomic) CGPoint contactPoint; // ivar: _contactPoint


+(id)allocWithZone:(struct _NSZone *)arg0 ;


@end


#endif