// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNPHYSICSBODY_H
#define SCNPHYSICSBODY_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNNode.h"
#import "SCNPhysicsShape.h"

@interface SCNPhysicsBody : NSObject <NSCopying, NSSecureCoding>

 {
    SCNNode *_node;
    CGFloat _mass;
    CGFloat _charge;
    CGFloat _friction;
    CGFloat _restitution;
    CGFloat _rollingFriction;
    SCNPhysicsShape *_physicsShape;
    NSInteger _type;
    CGFloat _damping;
    SCNVector4 _angularVelocity;
    CGFloat _angularDamping;
    SCNVector3 _velocityFactor;
    SCNVector3 _angularVelocityFactor;
    SCNVector3 _velocity;
    BOOL _ignoreGravity;
    CGFloat _linearRestingThreshold;
    CGFloat _angularRestingThreshold;
    BOOL _explicitMomentOfInertia;
    SCNVector3 _momentOfInertia;
    SCNVector3 _centerOfMassOffset;
    NSUInteger _categoryBitMask;
    NSUInteger _collisionBitMask;
    NSUInteger _contactTestBitMask;
    BOOL _allowsResting;
    BOOL _isDefaultShape;
    *void _body;
}


@property (nonatomic, getter=isAffectedByGravity) BOOL affectedByGravity;
@property (nonatomic) BOOL allowsResting;
@property (nonatomic) CGFloat angularDamping;
@property (nonatomic) CGFloat angularRestingThreshold;
@property (nonatomic) SCNVector4 angularVelocity;
@property (nonatomic) SCNVector3 angularVelocityFactor;
@property (nonatomic) NSUInteger categoryBitMask;
@property (nonatomic) SCNVector3 centerOfMassOffset;
@property (nonatomic) CGFloat charge;
@property (nonatomic) NSUInteger collisionBitMask;
@property (nonatomic) NSUInteger contactTestBitMask;
@property (nonatomic) CGFloat continuousCollisionDetectionThreshold; // ivar: _continuousCollisionDetectionThreshold
@property (nonatomic) CGFloat damping;
@property (nonatomic) CGFloat friction;
@property (readonly, nonatomic) BOOL isResting;
@property (nonatomic) CGFloat linearRestingThreshold;
@property (nonatomic) CGFloat mass;
@property (nonatomic) SCNVector3 momentOfInertia;
@property (retain, nonatomic) SCNPhysicsShape *physicsShape;
@property (nonatomic) CGFloat restitution;
@property (nonatomic) CGFloat rollingFriction;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL usesDefaultMomentOfInertia;
@property (nonatomic) SCNVector3 velocity;
@property (nonatomic) SCNVector3 velocityFactor;


+(BOOL)supportsSecureCoding;
+(id)bodyWithType:(NSInteger)arg0 shape:(id)arg1 ;
+(id)dynamicBody;
+(id)kinematicBody;
+(id)staticBody;
-(*void)_createBody;
-(*void)_handle;
-(BOOL)respondsToCollision;
-(CGFloat)angularSleepingThreshold;
-(CGFloat)continuousCollisionDetection;
-(CGFloat)linearSleepingThreshold;
-(id)_owner;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 shape:(id)arg1 ;
-(struct __C3DScene *)sceneRef;
-(struct btCollisionShape *)_shapeHandleWithShape:(id)arg0 owner:(id)arg1 ;
-(void)_activate;
-(void)_didDecodeSCNPhysicsBody:(id)arg0 ;
-(void)_ownerWillDie;
-(void)_removeOwner;
-(void)_setOwner:(id)arg0 ;
-(void)applyForce:(struct SCNVector3 )arg0 atPosition:(struct SCNVector3 )arg1 impulse:(BOOL)arg2 ;
-(void)applyForce:(struct SCNVector3 )arg0 impulse:(BOOL)arg1 ;
-(void)applyTorque:(struct SCNVector4 )arg0 impulse:(BOOL)arg1 ;
-(void)clearAllForces;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)moveToPosition:(struct SCNVector3 )arg0 ;
-(void)moveToTransform:(struct SCNMatrix4 )arg0 ;
-(void)resetToTransform:(struct SCNMatrix4 )arg0 ;
-(void)resetTransform;
-(void)rotateToAxisAngle:(struct SCNVector4 )arg0 ;
-(void)setAngularSleepingThreshold:(CGFloat)arg0 ;
-(void)setLinearSleepingThreshold:(CGFloat)arg0 ;
-(void)setResting:(BOOL)arg0 ;
-(void)updateGlobalScale:(CGFloat)arg0 ;


@end


#endif