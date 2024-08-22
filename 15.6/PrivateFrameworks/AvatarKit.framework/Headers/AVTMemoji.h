// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTMEMOJI_H
#define AVTMEMOJI_H

@class SCNNode, SCNMaterial, NSDictionary;


#import "AVTAvatar.h"
#import "AVTAssetResourceCache.h"
#import "AVTCompositor.h"
#import "AVTAvatarBodyPose.h"

@interface AVTMemoji : AVTAvatar {
    NSUInteger _usageIntent;
    AVTAssetResourceCache *_resourceCache;
    BOOL _needsUpdate;
    SCNNode *_headComponentContainer;
    SCNNode *_bodyComponentContainer;
    NSUInteger _componentDirtyMask;
    SCNNode *_headNode;
    SCNNode *_avatarNode;
    SCNNode *_eyelashes;
    SCNNode *_eyesAndMouth;
    SCNMaterial *_eyeMaterialLeft;
    SCNMaterial *_eyeMaterialRight;
    NSDictionary *_eyesAndMouthSpecializationSettings;
    AVTComponent" _components;
    AVTComponentInstance" _componentInstances;
    AVTPreset" _presets;
    AVTPreset" _resolvedPresets;
    AVTPreset" _currentPresetsForVariants;
    BOOL _hasPresetDependency;
    AVTColorPreset"] _colorPresets;
    *CGImage _combinedAOImage;
    BOOL _aoValid;
    AVTCompositor *_compositor;
    NSUInteger _compositorComponentDirtyMask;
    BOOL _hairPhysicsShouldIgnoreUpperNodes;
    SCNNode *_headSkeletonRootNode;
    SCNNode *_bodySkeletonRootNode;
    AVTAvatarBodyPose *_bodyPose;
    NSDictionary *_specializationSettings;
    id *_componentAssetNodeObservationForStickerBlock;
}




+(BOOL)supportsSecureCoding;
+(NSUInteger)rndIndex:(NSUInteger)arg0 ;
+(float)rnd;
+(float)rndRange:(float)arg0 ;
+(id)memoji;
+(id)memojiWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
+(id)memojiWithContentsOfURL:(id)arg0 usageIntent:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)neutralMemoji;
+(id)neutralMemojiDataRepresentation;
+(id)neutralMemojiDescriptor;
+(id)neutralMemojiPresetsIdentifiersPerCategory;
+(id)rndColor;
-(BOOL)hasPresetDepencencyForCategory:(NSInteger)arg0 ;
-(BOOL)showsBody;
-(BOOL)usesSkinningForEyeOrientation;
-(CGFloat)skinTextureSize;
-(NSUInteger)applyPresetDependenciesForPreset:(id)arg0 presetsBeingReplacedCategories:(NSUInteger)arg1 recursionDepth:(unsigned char)arg2 ;
-(NSUInteger)unapplyPresetDependenciesForPreset:(id)arg0 presetsBeingReplacedCategories:(NSUInteger)arg1 recursionDepth:(unsigned char)arg2 ;
-(NSUInteger)usageIntent;
-(float)arScale;
-(id)_componentInstanceAssetNodeForDependencyOfType:(NSInteger)arg0 isAssetSpecific:(BOOL)arg1 ;
-(id)allBuiltinAssetNodes;
-(id)arOffset;
-(id)assetResourceCache;
-(id)avatarNode;
-(id)bodyPose;
-(id)builtinAssetNodeForComponentType:(NSInteger)arg0 ;
-(id)colorPresetForCategory:(NSInteger)arg0 ;
-(id)colorPresetForCategory:(NSInteger)arg0 colorIndex:(NSUInteger)arg1 ;
-(id)componentForType:(NSInteger)arg0 ;
-(id)componentInstanceForType:(NSInteger)arg0 ;
-(id)componentWithType:(NSInteger)arg0 ;
-(id)components;
-(id)copyWithUsageIntent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)eyebrowsColor;
-(id)facialhairColor;
-(id)hairColor;
-(id)headNode;
-(id)init;
-(id)initWithDescriptor:(id)arg0 usageIntent:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)lipsColor;
-(id)newDescriptor;
-(id)presetForCategory:(NSInteger)arg0 ;
-(id)resolvedPresetForCategory:(NSInteger)arg0 ;
-(id)secondaryColorPresetForCategory:(NSInteger)arg0 ;
-(id)skinColor;
-(id)specializationSettings;
-(id)stickerPhysicsStateIdentifier;
-(struct CGImage *)createSkinAO;
-(void)_applyAllColorPresetsForCategory:(NSInteger)arg0 ;
-(void)_applyColorPresetForCategory:(NSInteger)arg0 colorIndex:(NSUInteger)arg1 ;
-(void)_invalidateAOImage;
-(void)_removeComponent:(id)arg0 ;
-(void)_setAssetSpecificVariantDependenciesEnabled:(BOOL)arg0 forPreset:(id)arg1 dirtyComponents:(NSUInteger)arg2 ;
-(void)_setMorphWeight:(float)arg0 forDependencyVariant:(id)arg1 ofType:(NSInteger)arg2 isAssetSpecific:(BOOL)arg3 ;
-(void)_setVariantDependenciesEnabled:(BOOL)arg0 forPreset:(id)arg1 dirtyComponents:(NSUInteger)arg2 ;
-(void)_update;
-(void)_updateAO;
-(void)addComponent:(id)arg0 ;
-(void)addComponentAssetNode:(id)arg0 toNode:(id)arg1 ;
-(void)applyVariantDependenciesForPreset:(id)arg0 dirtyComponents:(NSUInteger)arg1 ;
-(void)componentDidChangeForType:(NSInteger)arg0 ;
-(void)componentMaterialDidUpdate:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)morphTo:(id)arg0 ;
-(void)randomize;
-(void)rebuildSpecializationSettings;
-(void)removeAllComponents;
-(void)removeComponentAssetNodeFromParentNode:(id)arg0 ;
-(void)removeComponentWithType:(NSInteger)arg0 ;
-(void)resetToDefault;
-(void)setBodyPose:(id)arg0 ;
-(void)setColorPreset:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)setColorPreset:(id)arg0 forCategory:(NSInteger)arg1 colorIndex:(NSUInteger)arg2 ;
-(void)setComponentAssetNodeObservationForStickerBlock:(id)arg0 ;
-(void)setInstance:(id)arg0 forComponentType:(NSInteger)arg1 ;
-(void)setPreset:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)setSecondaryColorPreset:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)setShowsBody:(BOOL)arg0 ;
-(void)unapplyVariantDependenciesForPreset:(id)arg0 dirtyComponents:(NSUInteger)arg1 ;
-(void)update;
-(void)updateBodyPose;
-(void)updateEyeLashes;
-(void)updateHighlightsForComponentType:(NSInteger)arg0 ;
-(void)updateMorphVariantsInNodeHierarchy:(id)arg0 componentType:(NSInteger)arg1 variant:(id)arg2 weight:(float)arg3 ;
-(void)updateSkinMaterial:(id)arg0 ;
-(void)updateStickerMorphVariantsInNodeHierarchy:(id)arg0 ;


@end


#endif