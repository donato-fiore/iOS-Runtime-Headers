// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPHYSICSCONTACT_H
#define PKPHYSICSCONTACT_H


#import <Foundation/Foundation.h>

#import "PKPhysicsBody.h"

@interface PKPhysicsContact : NSObject {
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
    CGPoint _contactPoint;
    CGVector _contactNormal;
    CGFloat _impulse;
    BOOL _didBegin;
    BOOL _didEnd;
}


@property (readonly, nonatomic) PKPhysicsBody *bodyA;
@property (readonly, nonatomic) PKPhysicsBody *bodyB;
@property (readonly, nonatomic) CGFloat collisionImpulse;
@property (readonly, nonatomic) CGVector contactNormal;
@property (readonly, nonatomic) CGPoint contactPoint;
@property BOOL didBegin;
@property BOOL didEnd;


-(id)init;


@end


#endif