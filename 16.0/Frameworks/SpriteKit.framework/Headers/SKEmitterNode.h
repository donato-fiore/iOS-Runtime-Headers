// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKEMITTERNODE_H
#define SKEMITTERNODE_H

@class NSDictionary, UIColor;


#import "SKNode.h"
#import "SKTexture.h"
#import "SKKeyframeSequence.h"
#import "SKAction.h"
#import "SKShader.h"

@interface SKEmitterNode : SKNode {
    SKTexture *_particleTexture;
    *void _skcEmitterNode;
    SKNode *_target;
    SKKeyframeSequence *_colorSequence;
    SKKeyframeSequence *_colorBlendSequence;
    SKKeyframeSequence *_alphaSequence;
    SKKeyframeSequence *_scaleSequence;
    SKKeyframeSequence *_rotationSequence;
    SKKeyframeSequence *_fieldInfluenceSequence;
    SKKeyframeSequence *_particleSpeedSequence;
}


@property (copy, nonatomic) NSDictionary *attributeValues;
@property (nonatomic) CGFloat emissionAngle;
@property (nonatomic) CGFloat emissionAngleRange;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) NSUInteger numParticlesToEmit;
@property (copy, nonatomic) SKAction *particleAction;
@property (nonatomic) CGFloat particleAlpha;
@property (nonatomic) CGFloat particleAlphaRange;
@property (retain, nonatomic) SKKeyframeSequence *particleAlphaSequence;
@property (nonatomic) CGFloat particleAlphaSpeed;
@property (nonatomic) CGFloat particleBirthRate;
@property (nonatomic) NSInteger particleBlendMode;
@property (retain, nonatomic) UIColor *particleColor;
@property (nonatomic) CGFloat particleColorAlphaRange;
@property (nonatomic) CGFloat particleColorAlphaSpeed;
@property (nonatomic) CGFloat particleColorBlendFactor;
@property (nonatomic) CGFloat particleColorBlendFactorRange;
@property (retain, nonatomic) SKKeyframeSequence *particleColorBlendFactorSequence;
@property (nonatomic) CGFloat particleColorBlendFactorSpeed;
@property (nonatomic) CGFloat particleColorBlueRange;
@property (nonatomic) CGFloat particleColorBlueSpeed;
@property (nonatomic) CGFloat particleColorGreenRange;
@property (nonatomic) CGFloat particleColorGreenSpeed;
@property (nonatomic) CGFloat particleColorRedRange;
@property (nonatomic) CGFloat particleColorRedSpeed;
@property (retain, nonatomic) SKKeyframeSequence *particleColorSequence;
@property (nonatomic) CGFloat particleLifetime;
@property (nonatomic) CGFloat particleLifetimeRange;
@property (nonatomic) CGPoint particlePosition;
@property (nonatomic) CGVector particlePositionRange;
@property (nonatomic) NSUInteger particleRenderOrder; // ivar: _particleRenderOrder
@property (nonatomic) CGFloat particleRotation;
@property (nonatomic) CGFloat particleRotationRange;
@property (nonatomic) CGFloat particleRotationSpeed;
@property (nonatomic) CGFloat particleScale;
@property (nonatomic) CGFloat particleScaleRange;
@property (retain, nonatomic) SKKeyframeSequence *particleScaleSequence;
@property (nonatomic) CGFloat particleScaleSpeed;
@property (nonatomic) CGSize particleSize;
@property (nonatomic) CGFloat particleSpeed;
@property (nonatomic) CGFloat particleSpeedRange;
@property (retain, nonatomic) SKTexture *particleTexture;
@property (nonatomic) CGFloat particleZPosition;
@property (nonatomic) CGFloat particleZPositionRange;
@property (nonatomic) CGFloat particleZPositionSpeed;
@property (retain, nonatomic) SKShader *shader;
@property (weak, nonatomic) SKNode *targetNode;
@property (nonatomic) CGFloat xAcceleration;
@property (nonatomic) CGFloat yAcceleration;


+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 outError:(*id)arg3 ;
-(*void)_makeBackingNode;
-(BOOL)densityBased;
-(BOOL)isEqualToNode:(id)arg0 ;
-(BOOL)usesPointSprites;
-(BOOL)wantsNewParticles;
-(CGFloat)emissionDistance;
-(CGFloat)emissionDistanceRange;
-(CGFloat)particleDensity;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fieldInfluenceSequence;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMinimumParticleCapacity:(NSUInteger)arg0 ;
-(id)initWithMinimumParticleCapacity:(NSUInteger)arg0 minimumPositionBufferCapacity:(NSUInteger)arg1 ;
-(id)physicsWorld;
-(id)subEmitterNode;
-(id)valueForAttributeNamed:(id)arg0 ;
-(unsigned int)activeParticleCount;
-(void)_didMakeBackingNode;
-(void)advanceSimulationTime:(CGFloat)arg0 ;
-(void)commonInit;
-(void)copyParticlePropertiesToNode:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetSimulation;
-(void)setDensityBased:(BOOL)arg0 ;
-(void)setEmissionDistance:(CGFloat)arg0 ;
-(void)setEmissionDistanceRange:(CGFloat)arg0 ;
-(void)setFieldInfluenceSequence:(id)arg0 ;
-(void)setParticleDensity:(CGFloat)arg0 ;
-(void)setPhysicsWorld:(id)arg0 ;
-(void)setUsesPointSprites:(BOOL)arg0 ;
-(void)setValue:(id)arg0 forAttributeNamed:(id)arg1 ;
-(void)setWantsNewParticles:(BOOL)arg0 ;
-(void)setZPosition:(CGFloat)arg0 ;


@end


#endif