// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPHYSICSBODY_H
#define SKPHYSICSBODY_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SKNode.h"

@interface SKPhysicsBody : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL affectedByGravity; // ivar: _affectedByGravity
@property (nonatomic) BOOL allowsRotation; // ivar: _allowsRotation
@property (nonatomic) CGFloat angularDamping; // ivar: _angularDamping
@property (nonatomic) CGFloat angularVelocity; // ivar: _angularVelocity
@property (readonly, nonatomic) CGFloat area; // ivar: _area
@property (nonatomic) unsigned int categoryBitMask; // ivar: _categoryBitMask
@property (nonatomic) CGFloat charge; // ivar: _charge
@property (nonatomic) unsigned int collisionBitMask; // ivar: _collisionBitMask
@property (nonatomic) unsigned int contactTestBitMask; // ivar: _contactTestBitMask
@property (nonatomic) CGFloat density; // ivar: _density
@property (nonatomic, getter=isDynamic) BOOL dynamic; // ivar: _dynamic
@property (nonatomic) unsigned int fieldBitMask; // ivar: _fieldBitMask
@property (nonatomic) CGFloat friction; // ivar: _friction
@property (readonly, nonatomic) NSArray *joints; // ivar: _joints
@property (nonatomic) CGFloat linearDamping; // ivar: _linearDamping
@property (nonatomic) CGFloat mass; // ivar: _mass
@property (readonly, weak, nonatomic) SKNode *node; // ivar: _node
@property (nonatomic) BOOL pinned; // ivar: _pinned
@property (nonatomic, getter=isResting) BOOL resting; // ivar: _resting
@property (nonatomic) CGFloat restitution; // ivar: _restitution
@property (nonatomic) BOOL usesPreciseCollisionDetection; // ivar: _usesPreciseCollisionDetection
@property (nonatomic) CGVector velocity; // ivar: _velocity


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)bodyWithBodies:(id)arg0 ;
+(id)bodyWithCircleOfRadius:(CGFloat)arg0 ;
+(id)bodyWithCircleOfRadius:(CGFloat)arg0 center:(struct CGPoint )arg1 ;
+(id)bodyWithEdgeChainFromPath:(struct CGPath *)arg0 ;
+(id)bodyWithEdgeFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
+(id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg0 ;
+(id)bodyWithEdgeLoopFromRect:(struct CGRect )arg0 ;
+(id)bodyWithPolygonFromPath:(struct CGPath *)arg0 ;
+(id)bodyWithRectangleOfSize:(struct CGSize )arg0 ;
+(id)bodyWithRectangleOfSize:(struct CGSize )arg0 center:(struct CGPoint )arg1 ;
+(id)bodyWithTexture:(id)arg0 alphaThreshold:(float)arg1 size:(struct CGSize )arg2 ;
+(id)bodyWithTexture:(id)arg0 alphaThreshold:(float)arg1 size:(struct CGSize )arg2 accuracy:(float)arg3 ;
+(id)bodyWithTexture:(id)arg0 size:(struct CGSize )arg1 ;
+(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)allContactedBodies;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)applyAngularImpulse:(CGFloat)arg0 ;
-(void)applyForce:(struct CGVector )arg0 ;
-(void)applyForce:(struct CGVector )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)applyImpulse:(struct CGVector )arg0 ;
-(void)applyImpulse:(struct CGVector )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)applyTorque:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif