// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNGEOMETRY_H
#define SCNGEOMETRY_H

@class NSMutableArray, NSArray, NSMutableDictionary, NSString, NSNumber, NSDictionary;
@protocol SCNAnimatable, SCNBoundingVolume, SCNShadable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNOrderedDictionary.h"
#import "SCNGeometrySource.h"
#import "SCNGeometryElement.h"
#import "SCNShadableHelper.h"
#import "SCNGeometryTessellator.h"
#import "SCNMaterial.h"
#import "SCNProgram.h"

@interface SCNGeometry : NSObject <SCNAnimatable, SCNBoundingVolume, SCNShadable, NSCopying, NSSecureCoding>

 {
    ? _geometry;
    BOOL _isPresentationInstance;
    NSMutableArray *_sources;
    NSMutableArray *_elements;
    NSArray *_sourceChannels;
    NSMutableArray *_materials;
    os_unfair_lock_s _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSArray *_levelsOfDetail;
    NSUInteger _subdivisionLevel;
    BOOL _subdivisionIsAdaptive;
    ? _subdivisionSettings;
    SCNGeometrySource *_edgeCreasesSource;
    SCNGeometryElement *_edgeCreasesElement;
    SCNShadableHelper *_shadableHelper;
    *SCNVector3 _fixedBoundingBoxExtrema;
    NSString *_name;
    NSMutableDictionary *_valuesForUndefinedKeys;
    SCNGeometryTessellator *_tessellator;
}


@property (readonly) NSArray *animationKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SCNGeometryElement *edgeCreasesElement;
@property (retain, nonatomic) SCNGeometrySource *edgeCreasesSource;
@property (retain, nonatomic) SCNMaterial *firstMaterial;
@property (readonly, nonatomic) NSInteger geometryElementCount;
@property (readonly, nonatomic) NSArray *geometryElements;
@property (readonly, nonatomic) NSArray *geometrySources;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *levelsOfDetail;
@property (copy, nonatomic) NSArray *materials;
@property (retain, nonatomic) NSNumber *minimumLanguageVersion;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SCNProgram *program;
@property (copy, nonatomic) NSDictionary *shaderModifiers;
@property (nonatomic) NSUInteger subdivisionLevel;
@property (readonly) Class superclass;
@property (retain, nonatomic) SCNGeometryTessellator *tessellator;
@property (nonatomic) BOOL wantsAdaptiveSubdivision;


+(?)geometryWithGeometryRef;
+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)boxWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 length:(CGFloat)arg2 cornerRadius:(CGFloat)arg3 options:(id)arg4 ;
+(id)capsuleWithRadius:(CGFloat)arg0 height:(CGFloat)arg1 options:(id)arg2 ;
+(id)coneWithHeight:(CGFloat)arg0 topRadius:(CGFloat)arg1 bottomRadius:(CGFloat)arg2 options:(id)arg3 ;
+(id)cylinderWithRadius:(CGFloat)arg0 height:(CGFloat)arg1 options:(id)arg2 ;
+(id)floorWithOptions:(id)arg0 ;
+(id)geometry;
+(id)geometryWithMDLMesh:(id)arg0 ;
+(id)geometryWithMDLMesh:(id)arg0 submesh:(id)arg1 ;
+(id)geometryWithSources:(id)arg0 elements:(id)arg1 ;
+(id)geometryWithSources:(id)arg0 elements:(id)arg1 sourceChannels:(id)arg2 ;
+(id)morpherWithMDLMesh:(id)arg0 ;
+(id)planeWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 options:(id)arg2 ;
+(id)pyramidWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 length:(CGFloat)arg2 options:(id)arg3 ;
+(id)sphereWithRadius:(CGFloat)arg0 options:(id)arg1 ;
+(id)torusWithRingRadius:(CGFloat)arg0 pipeRadius:(CGFloat)arg1 options:(id)arg2 ;
+(id)tubeWithInnerRadius:(CGFloat)arg0 outerRadius:(CGFloat)arg1 height:(CGFloat)arg2 options:(id)arg3 ;
-(*void)__CFObject;
-(?)__createCFObject;
-(?)_setGeometryRef;
-(?)geometryRef;
-(?)initPresentationGeometryWithGeometryRef;
-(?)initWithGeometryRef;
-(?)setGeometryRef;
-(BOOL)__removeAnimation:(id)arg0 forKey:(id)arg1 ;
-(BOOL)_hasFixedBoundingBoxExtrema;
-(BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1 ;
-(BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(*CGFloat)arg1 ;
-(BOOL)isAnimationForKeyPaused:(id)arg0 ;
-(BOOL)isPausedOrPausedByInheritance;
-(BOOL)isPresentationInstance;
-(BOOL)parseSpecialKey:(id)arg0 withPath:(id)arg1 intoDestination:(*id)arg2 remainingPath:(*id)arg3 ;
-(BOOL)simdGetBoundingSphereCenter:(**float)arg0 radius;
-(NSInteger)primitiveType;
-(NSUInteger)countOfMaterials;
-(id)__shadableHelper;
-(id)_geometryByAddingSourcesOfSkinner:(id)arg0 ;
-(id)_geometryByRemovingSkinnerSources;
-(id)_geometryByUnifyingNormalsWithCreaseThreshold:(CGFloat)arg0 ;
-(id)_geometryByWeldingVerticesWithThreshold:(CGFloat)arg0 normalThreshold:(CGFloat)arg1 ;
-(id)_materialWithName:(id)arg0 ;
-(id)_renderableCopy;
-(id)_scnAnimationForKey:(id)arg0 ;
-(id)_scnBindings;
-(id)animationForKey:(id)arg0 ;
-(id)animationPlayerForKey:(id)arg0 ;
-(id)copy;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customMaterialAttributeNames;
-(id)customMaterialAttributes;
-(id)customMaterialProperties;
-(id)customMaterialPropertyNames;
-(id)debugQuickLookData;
-(id)debugQuickLookObject;
-(id)geometryDescription;
-(id)geometryElementAtIndex:(NSInteger)arg0 ;
-(id)geometrySourceChannels;
-(id)geometrySourceForSemantic:(id)arg0 ;
-(id)geometrySourcesForSemantic:(id)arg0 ;
-(id)getBoundingBox;
-(id)getBoundingSphere;
-(id)identifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)interleavedCopy;
-(id)keyForNodeAttributes;
-(id)material;
-(id)materialWithName:(id)arg0 ;
-(id)mutableCopy;
-(id)mutableMaterials;
-(id)objectInMaterialsAtIndex:(NSUInteger)arg0 ;
-(id)presentationGeometry;
-(id)presentationInstance;
-(id)scene;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct ? )_subdivisionSettings;
-(struct __C3DAnimationManager *)animationManager;
-(struct __C3DMaterial *)materialRef;
-(struct __C3DMaterial *)materialRefCreateIfNeeded;
-(struct __C3DScene *)sceneRef;
-(void)_copyAnimationsFrom:(id)arg0 ;
-(void)_copyAttributesTo:(id)arg0 ;
-(void)_customDecodingOfSCNGeometry:(id)arg0 ;
-(void)_customEncodingOfSCNGeometry:(id)arg0 ;
-(void)_discardOriginalTopology;
-(void)_expand;
-(void)_pauseAnimation:(BOOL)arg0 forKey:(id)arg1 pausedByNode:(BOOL)arg2 ;
-(void)_releaseCachedSourcesAndElements;
-(void)_setAttributes:(id)arg0 ;
-(void)_setupGeometryElements;
-(void)_setupGeometrySources;
-(void)_setupObjCModelFrom:(id)arg0 ;
-(void)_setupShadableHelperIfNeeded;
-(void)_shadableSetValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)_syncEntityObjCModel;
-(void)_syncObjCAnimations;
-(void)_syncObjCModel;
-(void)_unifyNormals;
-(void)addAnimation:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg0 forKey:(id)arg1 ;
-(void)bindAnimatablePath:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)copyShaderModifiersAndLanguageVersionFrom:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleBindingOfSymbol:(id)arg0 usingBlock:(id)arg1 ;
-(void)handleUnbindingOfSymbol:(id)arg0 usingBlock:(id)arg1 ;
-(void)insertMaterial:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertObject:(id)arg0 inMaterialsAtIndex:(NSUInteger)arg1 ;
-(void)pauseAnimationForKey:(id)arg0 ;
-(void)removeAllAnimations;
-(void)removeAllAnimationsWithBlendOutDuration:(CGFloat)arg0 ;
-(void)removeAllBindings;
-(void)removeAllMaterials;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeAnimationForKey:(id)arg0 blendOutDuration:(CGFloat)arg1 ;
-(void)removeAnimationForKey:(id)arg0 fadeOutDuration:(CGFloat)arg1 ;
-(void)removeMaterial:(id)arg0 ;
-(void)removeMaterialAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectFromMaterialsAtIndex:(NSUInteger)arg0 ;
-(void)replaceMaterial:(id)arg0 with:(id)arg1 ;
-(void)replaceMaterialAtIndex:(NSUInteger)arg0 withMaterial:(id)arg1 ;
-(void)replaceObjectInMaterialsAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg0 ;
-(void)setBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setMaterial:(id)arg0 ;
-(void)setPrimitiveType:(NSInteger)arg0 ;
-(void)setSpeed:(CGFloat)arg0 forAnimationKey:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)setValueForKey:(id)arg0 optionKey:(id)arg1 options:(id)arg2 ;
-(void)set_subdivisionSettings:(struct ? )arg0 ;
-(void)unbindAnimatablePath:(id)arg0 ;


@end


#endif