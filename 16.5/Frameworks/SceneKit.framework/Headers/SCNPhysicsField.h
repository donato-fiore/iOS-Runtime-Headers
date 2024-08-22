// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNPHYSICSFIELD_H
#define SCNPHYSICSFIELD_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNPhysicsWorld.h"
#import "SCNNode.h"

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding>

 {
    SCNVector3 _halfExtent;
    CGFloat _strength;
    CGFloat _falloffExponent;
    CGFloat _minimumDistance;
    BOOL _active;
    NSInteger _scope;
    BOOL _usesEllipsoidalExtent;
    BOOL _exclusive;
    SCNVector3 _offset;
    SCNVector3 _direction;
    NSUInteger _categoryBitMask;
    SCNPhysicsWorld *_world;
    SCNNode *_node;
    *c3dPhysicsField _field;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) NSUInteger categoryBitMask;
@property (nonatomic) SCNVector3 direction;
@property (nonatomic, getter=isExclusive) BOOL exclusive;
@property (nonatomic) CGFloat falloffExponent;
@property (nonatomic) SCNVector3 halfExtent;
@property (nonatomic) CGFloat minimumDistance;
@property (nonatomic) SCNVector3 offset;
@property (nonatomic) NSInteger scope;
@property (nonatomic) CGFloat strength;
@property (nonatomic) BOOL usesEllipsoidalExtent;


+(BOOL)supportsSecureCoding;
+(CGFloat)_displayScaleFactor;
+(id)customFieldWithEvaluationBlock:(id)arg0 ;
+(id)dragField;
+(id)electricField;
+(id)field;
+(id)linearGravityField;
+(id)magneticField;
+(id)noiseFieldWithSmoothness:(CGFloat)arg0 animationSpeed:(CGFloat)arg1 ;
+(id)radialGravityField;
+(id)springField;
+(id)turbulenceFieldWithSmoothness:(CGFloat)arg0 animationSpeed:(CGFloat)arg1 ;
+(id)vortexField;
+(void)_setDisplayScaleFactor:(CGFloat)arg0 ;
-(BOOL)exclusive;
-(BOOL)supportsDirection;
-(BOOL)supportsOffset;
-(id)_owner;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct SCNVector3 )evalAtLocation:(struct SCNVector3 )arg0 ;
-(struct c3dPhysicsField *)_createField;
-(struct c3dPhysicsField *)_handle;
-(void)_commonInit;
-(void)_removeOwner;
-(void)_setOwner:(id)arg0 ;
-(void)_setWorld:(id)arg0 ;
-(void)_setupCommonProperties;
-(void)_willRemoveFromPhysicsWorld;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif