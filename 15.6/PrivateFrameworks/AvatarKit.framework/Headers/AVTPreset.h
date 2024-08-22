// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTPRESET_H
#define AVTPRESET_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface AVTPreset : NSObject {
    NSInteger _category;
    NSString *_identifier;
    NSArray *_assets;
    NSString *_morphVariant;
    NSString *_imageVariant;
    NSString *_materialVariant;
    NSString *_bodyPoseVariant;
    float _morphVariantIntensity;
    float _bodyPoseVariantIntensity;
    float _textureAssetPresence;
    BOOL _mirrored;
    NSArray *_dependencies;
    NSDictionary *_assetSpecificMorphVariantDependencies;
    NSDictionary *_assetSpecificImageVariantDependencies;
    NSDictionary *_assetSpecificMaterialVariantDependencies;
    NSDictionary *_presetSpecificPresetDependencies;
}


@property (readonly, nonatomic) NSInteger category;
@property (readonly, nonatomic) NSString *displayableName;
@property (readonly, nonatomic) NSUInteger editableColorCount; // ivar: _editableColorCount
@property (readonly, nonatomic) BOOL hasComponent;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedPairedName;
@property (readonly) NSDictionary *specializationSettings; // ivar: _specializationSettings
@property (readonly, nonatomic) NSDictionary *tags; // ivar: _tags


+(NSUInteger)editableColorCountForCategory:(NSInteger)arg0 ;
+(id)availablePresetsForCategory:(NSInteger)arg0 ;
+(id)colorPresetsForCategory:(NSInteger)arg0 ;
+(id)colorPresetsForCategory:(NSInteger)arg0 colorIndex:(NSUInteger)arg1 ;
+(id)findPresetWithIdentifier:(id)arg0 inPresets:(id)arg1 ;
+(id)presetWithCategory:(NSInteger)arg0 identifier:(id)arg1 ;
+(id)secondaryColorPresetsForCategory:(NSInteger)arg0 ;
+(void)loadPresets;
-(id)assets;
-(id)cache;
-(id)description;
-(void)applyPresetByChangingComponentsOfMemoji:(id)arg0 ;
-(void)enumerateAssetSpecificVariantDependenciesOfKind:(NSUInteger)arg0 block:(id)arg1 ;
-(void)enumeratePresetDependencies:(id)arg0 ;
-(void)enumeratePresetSpecificPresetDependencies:(id)arg0 ;
-(void)enumerateVariantDependenciesOfKind:(NSUInteger)arg0 block:(id)arg1 ;
-(void)enumerateVisibilityDependencies:(id)arg0 ;
-(void)rebuildSpecializationSettings;


@end


#endif