// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNLIGHT_H
#define SCNLIGHT_H

@class NSMutableDictionary, NSString, NSURL, NSData, NSArray;
@protocol SCNAnimatable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNOrderedDictionary.h"
#import "SCNMaterialProperty.h"
#import "SCNTechnique.h"

@interface SCNLight : NSObject <SCNAnimatable, NSCopying, NSSecureCoding>

 {
    *__C3DLight _light;
    BOOL _isPresentationInstance;
    BOOL _castsShadow;
    BOOL _usesDeferredShadows;
    BOOL _usesModulatedMode;
    BOOL _baked;
    BOOL _shouldBakeDirectLighting;
    BOOL _shouldBakeIndirectLighting;
    BOOL _automaticallyAdjustsShadowProjection;
    BOOL _forcesBackFaceCasters;
    BOOL _sampleDistributedShadowMaps;
    os_unfair_lock_s _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    NSString *_type;
    id *_color;
    id *_shadowColor;
    float _shadowRadius;
    CGFloat _intensity;
    CGFloat _temperature;
    CGFloat _orthographicScale;
    CGSize _shadowMapSize;
    NSUInteger _categoryBitMask;
    unsigned char _shadowSampleCount;
    unsigned char _shadowCascadeCount;
    CGFloat _maximumShadowDistance;
    CGFloat _shadowCascadeSplittingFactor;
    CGFloat _cascadeDebugFactor;
    CGFloat _zNear;
    CGFloat _zFar;
    CGFloat _shadowBias;
    NSInteger _probeType;
    NSInteger _probeUpdateType;
    BOOL _parallaxCorrectionEnabled;
    ? _probeExtents;
    ? _probeOffset;
    ? _parallaxExtentsFactor;
    ? _parallaxCenterOffset;
    float _attenuationStartDistance;
    float _attenuationEndDistance;
    float _attenuationFalloffExponent;
    float _spotInnerAngle;
    float _spotOuterAngle;
    float _spotFalloffExponent;
    SCNMaterialProperty *_gobo;
    NSURL *_IESProfileURL;
    SCNTechnique *_technique;
    NSData *_sphericalHarmonics;
    SCNMaterialProperty *_probeEnvironment;
    NSInteger _areaType;
    ? _areaExtents;
    NSArray *_areaPolygonVertices;
    BOOL _drawsArea;
    BOOL _doubleSided;
}


@property (retain, nonatomic) NSURL *IESProfileURL;
@property (readonly) NSArray *animationKeys;
@property ? areaExtents;
@property (copy, nonatomic) NSArray *areaPolygonVertices;
@property (nonatomic) NSInteger areaType;
@property (nonatomic) CGFloat attenuationEndDistance;
@property (nonatomic) CGFloat attenuationFalloffExponent;
@property (nonatomic) CGFloat attenuationStartDistance;
@property (nonatomic) BOOL automaticallyAdjustsShadowProjection;
@property (nonatomic) BOOL castsShadow;
@property (nonatomic) NSUInteger categoryBitMask;
@property (retain, nonatomic) id *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doubleSided;
@property (nonatomic) BOOL drawsArea;
@property (nonatomic) BOOL forcesBackFaceCasters;
@property (readonly, nonatomic) SCNMaterialProperty *gobo;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat intensity;
@property (nonatomic) CGFloat maximumShadowDistance;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) CGFloat orthographicScale;
@property ? parallaxCenterOffset;
@property (nonatomic) BOOL parallaxCorrectionEnabled;
@property ? parallaxExtentsFactor;
@property (readonly, nonatomic) SCNMaterialProperty *probeEnvironment;
@property ? probeExtents;
@property ? probeOffset;
@property (nonatomic) NSInteger probeType;
@property (nonatomic) NSInteger probeUpdateType;
@property (nonatomic) BOOL sampleDistributedShadowMaps;
@property (nonatomic) CGFloat shadowBias;
@property (nonatomic) NSUInteger shadowCascadeCount;
@property (nonatomic) CGFloat shadowCascadeSplittingFactor;
@property (retain, nonatomic) id *shadowColor;
@property (nonatomic) CGSize shadowMapSize;
@property (nonatomic) NSInteger shadowMode;
@property (nonatomic) CGFloat shadowRadius;
@property (nonatomic) NSUInteger shadowSampleCount;
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic) CGFloat spotInnerAngle;
@property (nonatomic) CGFloat spotOuterAngle;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat temperature;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) CGFloat zFar;
@property (nonatomic) CGFloat zNear;


+(id)lightWithLightRef:(struct __C3DLight *)arg0 ;
+(id)lightWithMDLLight:(id)arg0 ;
+(id)lightWithMDLLightProbe:(id)arg0 ;
-(BOOL)__removeAnimation:(id)arg0 forKey:(id)arg1 ;
-(BOOL)isAnimationForKeyPaused:(id)arg0 ;
-(id)_scnAnimationForKey:(id)arg0 ;
-(id)animationForKey:(id)arg0 ;
-(id)animationPlayerForKey:(id)arg0 ;
-(id)attributeForKey:(id)arg0 ;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg0 property:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initPresentationLightWithLightRef:(struct __C3DLight *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLightRef:(struct __C3DLight *)arg0 ;
-(void)_copyAnimationsFrom:(id)arg0 ;
-(void)_customDecodingOfSCNLight:(id)arg0 ;
-(void)_customEncodingOfSCNLight:(id)arg0 ;
-(void)_didDecodeSCNLight:(id)arg0 ;
-(void)_pauseAnimation:(BOOL)arg0 forKey:(id)arg1 pausedByNode:(BOOL)arg2 ;
-(void)addAnimation:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg0 forKey:(id)arg1 ;
-(void)bindAnimatablePath:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pauseAnimationForKey:(id)arg0 ;
-(void)removeAllAnimationsWithBlendOutDuration:(CGFloat)arg0 ;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeAnimationForKey:(id)arg0 blendOutDuration:(CGFloat)arg1 ;
-(void)removeAnimationForKey:(id)arg0 fadeOutDuration:(CGFloat)arg1 ;
-(void)resumeAnimationForKey:(id)arg0 ;
-(void)unbindAnimatablePath:(id)arg0 ;


@end


#endif