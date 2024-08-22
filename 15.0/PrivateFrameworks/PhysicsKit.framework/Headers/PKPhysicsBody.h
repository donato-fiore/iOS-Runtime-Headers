// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPHYSICSBODY_H
#define PKPHYSICSBODY_H

@class NSMutableArray, NSArray;
@protocol NSCopying, NSSecureCoding, NSObject;

#import <Foundation/Foundation.h>

#import "PKPhysicsWorld.h"

@interface PKPhysicsBody : NSObject <NSCopying, NSSecureCoding>

 {
    id<NSObject> *_representedObject;
    b2BodyDef _bodyDef;
    *b2Body _body;
    *PKCField _field;
    int _dynamicType;
    vector<PKPhysicsShape *, std::allocator<PKPhysicsShape *>> _shapes;
    PKPhysicsWorld *_world;
    NSMutableArray *_joints;
    BOOL _inUse;
    int _shapeType;
    shared_ptr<PKPath> _pathPtr;
    ? _quadTree;
    CGPoint _p0;
    CGPoint _p1;
    CGSize _size;
    CGFloat _radius;
    CGFloat _edgeRadius;
    *CGImage _mask;
    shared_ptr<PKPath> _outline;
    BOOL _isPinned;
    BOOL _allowsRotation;
}


@property (nonatomic) *b2Body _body;
@property (nonatomic) b2BodyDef _bodyDef;
@property (readonly, nonatomic) *void _shapes;
@property (nonatomic) BOOL affectedByGravity;
@property (nonatomic) BOOL allowsRotation;
@property (nonatomic) CGFloat angularDamping;
@property (nonatomic) CGFloat angularVelocity;
@property (readonly, nonatomic) CGFloat area;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) CGFloat charge;
@property (nonatomic) unsigned int collisionBitMask;
@property (nonatomic) unsigned int contactTestBitMask;
@property (nonatomic) CGFloat density;
@property (nonatomic, getter=isDynamic) BOOL dynamic;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) CGFloat friction;
@property (readonly, nonatomic) NSArray *joints;
@property (nonatomic) CGFloat linearDamping;
@property (nonatomic) CGFloat mass;
@property (nonatomic) shared_ptr<PKPath> outline;
@property (nonatomic) BOOL pinned;
@property (nonatomic) CGPoint position;
@property (copy, nonatomic) id *postStepBlock; // ivar: _postStepBlock
@property (nonatomic) CGFloat radius;
@property (weak, nonatomic) NSObject<NSObject> *representedObject;
@property (nonatomic, getter=isResting) BOOL resting;
@property (nonatomic) CGFloat restitution;
@property (nonatomic) CGFloat rotation;
@property (nonatomic) BOOL usesPreciseCollisionDetection;
@property (nonatomic) CGVector velocity;
@property (readonly, nonatomic) *void volume;


+(BOOL)supportsSecureCoding;
+(id)bodyWithBodies:(id)arg0 ;
+(id)bodyWithCircleOfRadius:(CGFloat)arg0 ;
+(id)bodyWithCircleOfRadius:(CGFloat)arg0 center:(struct CGPoint )arg1 ;
+(id)bodyWithEdgeChainFromPath:(struct CGPath *)arg0 ;
+(id)bodyWithEdgeFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
+(id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg0 ;
+(id)bodyWithOutline:(struct shared_ptr<PKPath> )arg0 offset:(struct CGPoint )arg1 ;
+(id)bodyWithPolygonFromPath:(struct CGPath *)arg0 ;
+(id)bodyWithRectangleOfSize:(struct CGSize )arg0 ;
+(id)bodyWithRectangleOfSize:(struct CGSize )arg0 center:(struct CGPoint )arg1 ;
+(id)bodyWithRectangleOfSize:(struct CGSize )arg0 center:(struct CGPoint )arg1 edgeRadius:(CGFloat)arg2 ;
+(id)bodyWithRectangleOfSize:(struct CGSize )arg0 edgeRadius:(CGFloat)arg1 ;
+(id)initWithMarchingCubes:(*void)arg0 pixelFrame:(struct CGRect )arg1 ;
+(id)initWithQuadTree:(id)arg0 ;
-(BOOL)_allowSleep;
-(BOOL)_inUse;
-(BOOL)active;
-(BOOL)isEqualToBody:(id)arg0 ;
-(id)_descriptionClassName;
-(id)_descriptionFormat;
-(id)_world;
-(id)allContactedBodies;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBodies:(id)arg0 ;
-(id)initWithCircleOfRadius:(CGFloat)arg0 ;
-(id)initWithCircleOfRadius:(CGFloat)arg0 center:(struct CGPoint )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEdgeChainFromPath:(struct CGPath *)arg0 ;
-(id)initWithEdgeFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
-(id)initWithEdgeLoopFromPath:(struct CGPath *)arg0 ;
-(id)initWithPolygonFromPath:(struct CGPath *)arg0 ;
-(id)initWithRectangleOfSize:(struct CGSize )arg0 ;
-(id)initWithRectangleOfSize:(struct CGSize )arg0 center:(struct CGPoint )arg1 ;
-(id)initWithRectangleOfSize:(struct CGSize )arg0 center:(struct CGPoint )arg1 edgeRadius:(float)arg2 ;
-(struct shared_ptr<QuadTree> )_quadTree;
-(void)applyAngularImpulse:(CGFloat)arg0 ;
-(void)applyForce:(struct CGPoint )arg0 ;
-(void)applyForce:(struct CGPoint )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)applyImpulse:(struct CGVector )arg0 ;
-(void)applyImpulse:(struct CGVector )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)applyTorque:(CGFloat)arg0 ;
-(void)applyUnscaledForce:(struct CGVector )arg0 ;
-(void)applyUnscaledForce:(struct CGVector )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)applyUnscaledImpulse:(struct CGVector )arg0 ;
-(void)applyUnscaledImpulse:(struct CGVector )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)clearBox2DData;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reapplyScale:(CGFloat)arg0 yScale:(CGFloat)arg1 ;
-(void)setActive:(BOOL)arg0 ;
-(void)set_allowSleep:(BOOL)arg0 ;
-(void)set_inUse:(BOOL)arg0 ;
-(void)set_joints:(id)arg0 ;
-(void)set_world:(id)arg0 ;


@end


#endif