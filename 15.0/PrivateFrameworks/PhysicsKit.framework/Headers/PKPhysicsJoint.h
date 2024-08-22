// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPHYSICSJOINT_H
#define PKPHYSICSJOINT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPhysicsBody.h"

@interface PKPhysicsJoint : NSObject <NSSecureCoding>

 {
    BOOL _inUse;
    BOOL _implicit;
    *b2Joint _baseJoint;
}


@property (nonatomic) *b2Joint _joint;
@property (readonly, nonatomic) *b2JointDef _jointDef;
@property (retain, nonatomic) PKPhysicsBody *bodyA; // ivar: _bodyA
@property (retain, nonatomic) PKPhysicsBody *bodyB; // ivar: _bodyB
@property (readonly, nonatomic) CGVector reactionForce;
@property (readonly, nonatomic) CGFloat reactionTorque;


+(BOOL)supportsSecureCoding;
-(BOOL)_implicit;
-(BOOL)_inUse;
-(BOOL)isEqualToJoint:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)create;
-(void)encodeWithCoder:(id)arg0 ;
-(void)set_implicit:(BOOL)arg0 ;
-(void)set_inUse:(BOOL)arg0 ;


@end


#endif