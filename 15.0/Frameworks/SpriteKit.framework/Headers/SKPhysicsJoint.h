// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPHYSICSJOINT_H
#define SKPHYSICSJOINT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SKPhysicsBody.h"

@interface SKPhysicsJoint : NSObject <NSSecureCoding>



@property (nonatomic) BOOL _implicit; // ivar: __implicit
@property (retain, nonatomic) SKPhysicsBody *bodyA; // ivar: bodyA
@property (retain, nonatomic) SKPhysicsBody *bodyB; // ivar: bodyB
@property (readonly, nonatomic) CGVector reactionForce; // ivar: reactionForce
@property (readonly, nonatomic) CGFloat reactionTorque; // ivar: reactionTorque


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif