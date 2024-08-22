// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPHYSICSWORLD_H
#define PKPHYSICSWORLD_H

@class NSMutableArray;
@protocol NSSecureCoding, PKPhysicsContactDelegate;

#import <Foundation/Foundation.h>


@interface PKPhysicsWorld : NSObject <NSSecureCoding>

 {
    *void _world;
    b2Vec2 _gravity;
    BOOL _doSleep;
    CGFloat _accumulatedDt;
    PKContactListener _contactListener;
    float _speed;
    NSMutableArray *_bodies;
    NSMutableArray *_joints;
    NSMutableArray *_postStepBlocks;
    PKDebugDrawPacket drawPacket;
}


@property (retain, nonatomic) NSMutableArray *_bodies;
@property (nonatomic) BOOL _doSleep;
@property (nonatomic) b2Vec2 _gravity;
@property (readonly, nonatomic) *void _world;
@property (readonly, nonatomic) *void aether;
@property (nonatomic) NSObject<PKPhysicsContactDelegate> *contactDelegate;
@property (nonatomic) CGVector gravity;
@property (nonatomic) CGFloat speed;
@property (nonatomic) CGFloat velocityThreshold;


+(BOOL)supportsSecureCoding;
+(id)world;
-(*void)debugDrawPacket;
-(BOOL)hasBodies;
-(BOOL)hasFields;
-(BOOL)isEqualToWorld:(id)arg0 ;
-(BOOL)stepWithTime:(CGFloat)arg0 velocityIterations:(NSUInteger)arg1 positionIterations:(NSUInteger)arg2 ;
-(id)bodies;
-(id)bodyAlongRayStart:(struct CGPoint )arg0 end:(struct CGPoint )arg1 ;
-(id)bodyAtPoint:(struct CGPoint )arg0 ;
-(id)bodyInRect:(struct CGRect )arg0 ;
-(id)collisionDelegate;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)joints;
-(id)sampleFields:(struct CGRect )arg0 categories:(unsigned int)arg1 dataSize:(struct CGSize )arg2 ;
-(id)sampleFieldsAt;
-(struct CGVector )evalForce:(unsigned int)arg0 point:(struct CGPoint )arg1 ;
-(struct CGVector )sampleFields:(struct CGPoint )arg0 ;
-(void)__init__;
-(void)_runBlockOutsideOfTimeStep:(id)arg0 ;
-(void)addBody:(id)arg0 ;
-(void)addField:(id)arg0 ;
-(void)addJoint:(id)arg0 ;
-(void)dealloc;
-(void)debugDraw:(float)arg0 matrix:(unsigned long)arg1 showsPhysics:(unsigned short)arg2 showsOutlineInterior:(int)arg3 showsFields:(struct ? )arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateBodiesAlongRayStart:(struct CGPoint )arg0 end:(struct CGPoint )arg1 usingBlock:(id)arg2 ;
-(void)enumerateBodiesAtPoint:(struct CGPoint )arg0 usingBlock:(id)arg1 ;
-(void)enumerateBodiesInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)removeAllBodies;
-(void)removeAllFields;
-(void)removeAllJoints;
-(void)removeBody:(id)arg0 ;
-(void)removeField:(id)arg0 ;
-(void)removeJoint:(id)arg0 ;
-(void)setCollisionDelegate:(id)arg0 ;


@end


#endif