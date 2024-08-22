// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNMATERIAL_H
#define SCNMATERIAL_H

@class NSMutableDictionary, NSString, NSArray, NSNumber, NSDictionary;
@protocol SCNAnimatable, SCNShadable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNMaterialProperty.h"
#import "SCNOrderedDictionary.h"
#import "SCNShadableHelper.h"
#import "SCNProgram.h"

@interface SCNMaterial : NSObject <SCNAnimatable, SCNShadable, NSCopying, NSSecureCoding>

 {
    *__C3DMaterial _material;
    SCNMaterialProperty *_ambient;
    SCNMaterialProperty *_diffuse;
    SCNMaterialProperty *_specular;
    SCNMaterialProperty *_emission;
    SCNMaterialProperty *_reflective;
    SCNMaterialProperty *_transparent;
    SCNMaterialProperty *_multiply;
    SCNMaterialProperty *_normal;
    SCNMaterialProperty *_ambientOcclusion;
    SCNMaterialProperty *_selfIllumination;
    SCNMaterialProperty *_metalness;
    SCNMaterialProperty *_roughness;
    SCNMaterialProperty *_displacement;
    SCNMaterialProperty *_clearCoat;
    SCNMaterialProperty *_clearCoatRoughness;
    SCNMaterialProperty *_clearCoatNormal;
    os_unfair_lock_s _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    NSMutableDictionary *_valuesForUndefinedKeys;
    os_unfair_lock_s _valuesForUndefinedKeysLock;
    float _shininess;
    float _transparency;
    float _indexOfRefraction;
    float _fresnelExponent;
    float _selfIlluminationOcclusion;
    NSInteger _transparencyMode;
    NSString *_lightingModelName;
    NSInteger _cullMode;
    SCNShadableHelper *_shadableHelper;
    BOOL _isPresentationInstance;
    BOOL _litPerPixel;
    BOOL _doubleSided;
    BOOL _locksAmbientWithDiffuse;
    BOOL _avoidsOverLighting;
    BOOL _writesToDepthBuffer;
    BOOL _readsFromDepthBuffer;
    NSUInteger _fillMode;
    NSInteger _blendMode;
    NSInteger _colorBufferWriteMask;
}


@property (readonly, nonatomic) SCNMaterialProperty *ambient;
@property (readonly, nonatomic) SCNMaterialProperty *ambientOcclusion;
@property (readonly) NSArray *animationKeys;
@property (nonatomic) NSInteger blendMode;
@property (readonly, nonatomic) SCNMaterialProperty *clearCoat;
@property (readonly, nonatomic) SCNMaterialProperty *clearCoatNormal;
@property (readonly, nonatomic) SCNMaterialProperty *clearCoatRoughness;
@property (nonatomic) NSInteger colorBufferWriteMask;
@property (nonatomic) NSInteger cullMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SCNMaterialProperty *diffuse;
@property (readonly, nonatomic) SCNMaterialProperty *displacement;
@property (nonatomic, getter=isDoubleSided) BOOL doubleSided;
@property (readonly, nonatomic) SCNMaterialProperty *emission;
@property (nonatomic) NSUInteger fillMode;
@property (nonatomic) CGFloat fresnelExponent;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *lightingModelName;
@property (nonatomic, getter=isLitPerPixel) BOOL litPerPixel;
@property (nonatomic) BOOL locksAmbientWithDiffuse;
@property (readonly, nonatomic) SCNMaterialProperty *metalness;
@property (retain, nonatomic) NSNumber *minimumLanguageVersion;
@property (readonly, nonatomic) SCNMaterialProperty *multiply;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) SCNMaterialProperty *normal;
@property (retain, nonatomic) SCNProgram *program;
@property (nonatomic) BOOL readsFromDepthBuffer;
@property (readonly, nonatomic) SCNMaterialProperty *reflective;
@property (readonly, nonatomic) SCNMaterialProperty *roughness;
@property (readonly, nonatomic) SCNMaterialProperty *selfIllumination;
@property (copy, nonatomic) NSDictionary *shaderModifiers;
@property (nonatomic) CGFloat shininess;
@property (readonly, nonatomic) SCNMaterialProperty *specular;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat transparency;
@property (nonatomic) NSInteger transparencyMode;
@property (readonly, nonatomic) SCNMaterialProperty *transparent;
@property (nonatomic) BOOL writesToDepthBuffer;


+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)material;
+(id)materialNamed:(id)arg0 ;
+(id)materialWithColor:(id)arg0 ;
+(id)materialWithContents:(id)arg0 ;
+(id)materialWithMDLMaterial:(id)arg0 ;
+(id)materialWithMaterialRef:(struct __C3DMaterial *)arg0 ;
-(*void)__CFObject;
-(BOOL)__removeAnimation:(id)arg0 forKey:(id)arg1 ;
-(BOOL)avoidsOverLighting;
-(BOOL)doubleSided;
-(BOOL)isAnimationForKeyPaused:(id)arg0 ;
-(BOOL)isPausedOrPausedByInheritance;
-(BOOL)litPerPixel;
-(CGFloat)indexOfRefraction;
-(Class)_materialPropertyClass;
-(id)__shadableHelper;
// -(id)_integrateModelKitComputedMaps:(id)arg0 withGeometry:(id)arg1 node:(id)arg2 texturePathProvider:(id)arg3 vertexAttributeNamed:(unk)arg4 materialPropertyNamed:(id)arg5 filePath:(id)arg6  ;
-(id)_property:(*id)arg0 ;
-(id)_scnAnimationForKey:(id)arg0 ;
-(id)_scnBindings;
-(id)animationForKey:(id)arg0 ;
-(id)animationPlayerForKey:(id)arg0 ;
-(id)builtinProperties;
-(id)color;
-(id)content;
-(id)contents;
-(id)copy;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg0 property:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customMaterialAttributeNames;
-(id)customMaterialAttributes;
-(id)customMaterialProperties;
-(id)customMaterialPropertyNames;
-(id)debugQuickLookData;
-(id)debugQuickLookObject;
-(id)identifier;
-(id)init;
-(id)initPresentationMaterialWithMaterialRef:(struct __C3DMaterial *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMaterialRef:(struct __C3DMaterial *)arg0 ;
-(id)presentationInstance;
-(id)presentationMaterial;
-(id)properties;
-(id)scene;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct __C3DAnimationManager *)animationManager;
-(struct __C3DEffectCommonProfile *)commonProfile;
-(struct __C3DMaterial *)materialRef;
-(struct __C3DMaterial *)materialRefCreateIfNeeded;
-(struct __C3DScene *)sceneRef;
-(void)_copyAnimationsFrom:(id)arg0 ;
-(void)_copyAttributes:(id)arg0 ;
-(void)_customDecodingOfSCNMaterial:(id)arg0 ;
-(void)_customEncodingOfSCNMaterial:(id)arg0 ;
-(void)_pauseAnimation:(BOOL)arg0 forKey:(id)arg1 pausedByNode:(BOOL)arg2 ;
-(void)_setAttributes:(id)arg0 ;
-(void)_setupMaterialProperty:(*id)arg0 ;
-(void)_setupShadableHelperIfNeeded;
-(void)_shadableSetValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)_syncEntityObjCModel;
-(void)_syncObjCAnimations;
-(void)_syncObjCModel;
-(void)addAnimation:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg0 forKey:(id)arg1 ;
-(void)bindAnimatablePath:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)copyShaderModifiersAndLanguageVersionFrom:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleBindingOfSymbol:(id)arg0 usingBlock:(id)arg1 ;
-(void)handleUnbindingOfSymbol:(id)arg0 usingBlock:(id)arg1 ;
-(void)pauseAnimationForKey:(id)arg0 ;
-(void)removeAllAnimations;
-(void)removeAllAnimationsWithBlendOutDuration:(CGFloat)arg0 ;
-(void)removeAllBindings;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeAnimationForKey:(id)arg0 blendOutDuration:(CGFloat)arg1 ;
-(void)removeAnimationForKey:(id)arg0 fadeOutDuration:(CGFloat)arg1 ;
-(void)resumeAnimationForKey:(id)arg0 ;
-(void)setAvoidsOverLighting:(BOOL)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setContent:(id)arg0 ;
-(void)setContents:(id)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setIndexOfRefraction:(CGFloat)arg0 ;
-(void)setSpeed:(CGFloat)arg0 forAnimationKey:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)unbindAnimatablePath:(id)arg0 ;


@end


#endif