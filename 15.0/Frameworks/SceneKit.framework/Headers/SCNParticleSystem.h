// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNPARTICLESYSTEM_H
#define SCNPARTICLESYSTEM_H

@class NSMutableDictionary, NSString, UIColor, NSArray, NSDictionary;
@protocol NSCopying, NSSecureCoding, SCNAnimatable;

#import <Foundation/Foundation.h>

#import "SCNOrderedDictionary.h"
#import "SCNGeometry.h"
#import "SCNParticleSystem.h"

@interface SCNParticleSystem : NSObject <NSCopying, NSSecureCoding, SCNAnimatable>

 {
    *__C3DParticleSystem _particleSystem;
    BOOL _isPresentationInstance;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    CGFloat _emissionDuration;
    CGFloat _emissionDurationVariation;
    CGFloat _idleDuration;
    CGFloat _idleDurationVariation;
    CGFloat _birthRate;
    CGFloat _birthRateVariation;
    CGFloat _warmupDuration;
    SCNGeometry *_emitterShape;
    NSInteger _birthLocation;
    NSInteger _birthDirection;
    SCNVector3 _emittingDirection;
    SCNVector3 _orientationDirection;
    SCNVector3 _acceleration;
    CGFloat _spreadingAngle;
    BOOL _loops;
    BOOL _isLocal;
    BOOL _affectedByGravity;
    BOOL _affectedByPhysicsFields;
    BOOL _physicsCollisionsEnabled;
    BOOL _lightingEnabled;
    BOOL _softParticlesEnabled;
    BOOL _particleDiesOnCollision;
    BOOL _blackPassEnabled;
    BOOL _writesToDepthBuffer;
    CGFloat _particleAngle;
    CGFloat _particleAngleVariation;
    CGFloat _particleVelocity;
    CGFloat _particleVelocityVariation;
    CGFloat _particleAngularVelocity;
    CGFloat _particleAngularVelocityVariation;
    CGFloat _particleLifeSpan;
    CGFloat _particleLifeSpanVariation;
    CGFloat _particleBounce;
    CGFloat _particleBounceVariation;
    CGFloat _particleFriction;
    CGFloat _particleFrictionVariation;
    CGFloat _particleCharge;
    CGFloat _particleChargeVariation;
    id *_particleImage;
    UIColor *_particleColor;
    SCNVector4 _particleColorVariation;
    SCNParticleSystem *_systemSpawnedOnCollision;
    SCNParticleSystem *_systemSpawnedOnDying;
    SCNParticleSystem *_systemSpawnedOnLiving;
    CGFloat _particleSize;
    CGFloat _particleSizeVariation;
    CGFloat _particleIntensity;
    CGFloat _particleIntensityVariation;
    NSInteger _seed;
    NSInteger _blendMode;
    NSInteger _renderingMode;
    NSInteger _orientationMode;
    NSInteger _imageSequenceAnimationMode;
    NSArray *_particleGeometries;
    NSArray *_colliderNodes;
    NSDictionary *_propertyControllers;
    NSInteger _sortingMode;
    CGFloat _particleMass;
    CGFloat _particleMassVariation;
    CGFloat _dampingFactor;
    CGFloat _speedFactor;
    CGFloat _fixedTimeStep;
    CGFloat _stretchFactor;
    CGFloat _lightEmissionRadiusFactor;
    CGFloat _fresnelExponent;
    NSUInteger _imageSequenceColumnCount;
    NSUInteger _imageSequenceRowCount;
    CGFloat _imageSequenceInitialFrame;
    CGFloat _imageSequenceInitialFrameVariation;
    CGFloat _imageSequenceFrameRate;
    CGFloat _imageSequenceFrameRateVariation;
    NSString *_referenceName;
}


@property (nonatomic) SCNVector3 acceleration;
@property (nonatomic) BOOL affectedByGravity;
@property (nonatomic) BOOL affectedByPhysicsFields;
@property (readonly) NSArray *animationKeys;
@property (nonatomic) NSInteger birthDirection;
@property (nonatomic) NSInteger birthLocation;
@property (nonatomic) CGFloat birthRate;
@property (nonatomic) CGFloat birthRateVariation;
@property (nonatomic, getter=isBlackPassEnabled) BOOL blackPassEnabled;
@property (nonatomic) NSInteger blendMode;
@property (copy, nonatomic) NSArray *colliderNodes;
@property (nonatomic) CGFloat dampingFactor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat emissionDuration;
@property (nonatomic) CGFloat emissionDurationVariation;
@property (retain, nonatomic) SCNGeometry *emitterShape;
@property (nonatomic) SCNVector3 emittingDirection;
@property (nonatomic) CGFloat fresnelExponent;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat idleDuration;
@property (nonatomic) CGFloat idleDurationVariation;
@property (nonatomic) NSInteger imageSequenceAnimationMode;
@property (nonatomic) NSUInteger imageSequenceColumnCount;
@property (nonatomic) CGFloat imageSequenceFrameRate;
@property (nonatomic) CGFloat imageSequenceFrameRateVariation;
@property (nonatomic) CGFloat imageSequenceInitialFrame;
@property (nonatomic) CGFloat imageSequenceInitialFrameVariation;
@property (nonatomic) NSUInteger imageSequenceRowCount;
@property (nonatomic, getter=isLightingEnabled) BOOL lightingEnabled;
@property (nonatomic, getter=isLocal) BOOL local;
@property (nonatomic) BOOL loops;
@property (nonatomic) SCNVector3 orientationDirection;
@property (nonatomic) NSInteger orientationMode;
@property (nonatomic) CGFloat particleAngle;
@property (nonatomic) CGFloat particleAngleVariation;
@property (nonatomic) CGFloat particleAngularVelocity;
@property (nonatomic) CGFloat particleAngularVelocityVariation;
@property (nonatomic) CGFloat particleBounce;
@property (nonatomic) CGFloat particleBounceVariation;
@property (nonatomic) CGFloat particleCharge;
@property (nonatomic) CGFloat particleChargeVariation;
@property (retain, nonatomic) UIColor *particleColor;
@property (nonatomic) SCNVector4 particleColorVariation;
@property (nonatomic) BOOL particleDiesOnCollision;
@property (nonatomic) CGFloat particleFriction;
@property (nonatomic) CGFloat particleFrictionVariation;
@property (retain, nonatomic) id *particleImage;
@property (nonatomic) CGFloat particleIntensity;
@property (nonatomic) CGFloat particleIntensityVariation;
@property (nonatomic) CGFloat particleLifeSpan;
@property (nonatomic) CGFloat particleLifeSpanVariation;
@property (nonatomic) CGFloat particleMass;
@property (nonatomic) CGFloat particleMassVariation;
@property (nonatomic) CGFloat particleSize;
@property (nonatomic) CGFloat particleSizeVariation;
@property (nonatomic) CGFloat particleVelocity;
@property (nonatomic) CGFloat particleVelocityVariation;
@property (copy, nonatomic) NSDictionary *propertyControllers;
@property (nonatomic) NSInteger sortingMode;
@property (nonatomic) CGFloat speedFactor;
@property (nonatomic) CGFloat spreadingAngle;
@property (nonatomic) CGFloat stretchFactor;
@property (readonly) Class superclass;
@property (retain, nonatomic) SCNParticleSystem *systemSpawnedOnCollision;
@property (retain, nonatomic) SCNParticleSystem *systemSpawnedOnDying;
@property (retain, nonatomic) SCNParticleSystem *systemSpawnedOnLiving;
@property (nonatomic) CGFloat warmupDuration;
@property (nonatomic) BOOL writesToDepthBuffer;


+(BOOL)supportsSecureCoding;
+(id)particleSystem;
+(id)particleSystemNamed:(id)arg0 inDirectory:(id)arg1 ;
+(id)particleSystemWithParticleSystemRef:(struct __C3DParticleSystem *)arg0 ;
-(*void)__CFObject;
-(BOOL)__removeAnimation:(id)arg0 forKey:(id)arg1 ;
-(BOOL)_isAReference;
-(BOOL)areSoftParticlesEnabled;
-(BOOL)blackPassEnabled;
-(BOOL)isAnimationForKeyPaused:(id)arg0 ;
-(BOOL)isPausedOrPausedByInheritance;
-(BOOL)lightingEnabled;
-(BOOL)physicsCollisionsEnabled;
-(BOOL)softParticlesEnabled;
-(CGFloat)fixedTimeStep;
-(CGFloat)lightEmissionRadiusFactor;
-(NSInteger)renderingMode;
-(NSInteger)seed;
-(id)_scnAnimationForKey:(id)arg0 ;
-(id)_scnBindings;
-(id)animationForKey:(id)arg0 ;
-(id)animationPlayerForKey:(id)arg0 ;
-(id)copy;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifier;
-(id)init;
-(id)initPresentationSystemWithSystemRef:(struct __C3DParticleSystem *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParticleSystemRef:(struct __C3DParticleSystem *)arg0 ;
-(id)name;
-(id)particleGeometries;
-(id)presentationInstance;
-(id)referenceName;
-(id)scene;
-(short)typeOfProperty:(id)arg0 ;
-(struct __C3DAnimationManager *)animationManager;
-(struct __C3DParticleSystem *)particleSystemRef;
-(struct __C3DScene *)sceneRef;
-(void)_copyAnimationsFrom:(id)arg0 ;
-(void)_customDecodingOfSCNParticleSystem:(id)arg0 ;
-(void)_customEncodingOfSCNParticleSystem:(id)arg0 ;
-(void)_pauseAnimation:(BOOL)arg0 forKey:(id)arg1 pausedByNode:(BOOL)arg2 ;
-(void)_syncEntityObjCModel;
-(void)_syncObjCAnimations;
-(void)_syncObjCModel;
-(void)_updateParticleC3DImage:(id)arg0 ;
-(void)addAnimation:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg0 forKey:(id)arg1 ;
-(void)addModifierForProperties:(id)arg0 atStage:(NSInteger)arg1 withBlock:(id)arg2 ;
-(void)bindAnimatablePath:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleEvent:(NSInteger)arg0 forProperties:(id)arg1 withBlock:(id)arg2 ;
-(void)pauseAnimationForKey:(id)arg0 ;
-(void)removeAllAnimations;
-(void)removeAllAnimationsWithBlendOutDuration:(CGFloat)arg0 ;
-(void)removeAllBindings;
-(void)removeAllModifiers;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeAnimationForKey:(id)arg0 blendOutDuration:(CGFloat)arg1 ;
-(void)removeAnimationForKey:(id)arg0 fadeOutDuration:(CGFloat)arg1 ;
-(void)removeModifiersOfStage:(NSInteger)arg0 ;
-(void)reset;
-(void)resumeAnimationForKey:(id)arg0 ;
-(void)setFixedTimeStep:(CGFloat)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setIsLocal:(BOOL)arg0 ;
-(void)setLightEmissionRadiusFactor:(CGFloat)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setParticleGeometries:(id)arg0 ;
-(void)setPhysicsCollisionsEnabled:(BOOL)arg0 ;
-(void)setReferenceName:(id)arg0 ;
-(void)setRenderingMode:(NSInteger)arg0 ;
-(void)setSeed:(NSInteger)arg0 ;
-(void)setSoftParticlesEnabled:(BOOL)arg0 ;
-(void)setSpeed:(CGFloat)arg0 forAnimationKey:(id)arg1 ;
-(void)unbindAnimatablePath:(id)arg0 ;


@end


#endif