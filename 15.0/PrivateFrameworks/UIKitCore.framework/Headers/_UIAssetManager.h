// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIASSETMANAGER_H
#define _UIASSETMANAGER_H

@class _UICache, CUICatalog, NSString, NSMapTable, CUIMutableCatalog, NSBundle;

#import <Foundation/Foundation.h>

#import "_UIAssetManager.h"
#import "UITraitCollection.h"

@interface _UIAssetManager : NSObject {
    _UICache *_imageCache;
    CUICatalog *_catalog;
    NSString *_assetManagerName;
    NSInteger _preferredIdiom;
    NSUInteger _preferredIdiomSubtype;
    NSInteger _preferredGamut;
    NSInteger _preferredLayoutDirectionTrait;
    NSMapTable *_assetMap;
    CUIMutableCatalog *_runtimeCatalog;
    os_unfair_lock_s _runtimeCatalogCreationLock;
    os_unfair_lock_s _assetMapLock;
    ? _assetManagerFlags;
}


@property (readonly, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) NSString *carFileName;
@property (readonly, nonatomic, getter=_managingCoreGlyphs) BOOL managingCoreGlyphs;
@property (readonly, nonatomic, getter=_managingUIKitAssets) BOOL managingUIKitAssets;
@property (retain, nonatomic) _UIAssetManager *nextAssetManager; // ivar: _nextAssetManager
@property (nonatomic) CGFloat preferredScale; // ivar: _preferredScale
@property (retain, nonatomic) UITraitCollection *preferredTraitCollection; // ivar: _preferredTraitCollection
@property (readonly, nonatomic) CUIMutableCatalog *runtimeCatalog;


+(CGFloat)_watchScreenScale;
+(NSInteger)_userInterfaceIdiomForDeviceClass:(NSUInteger)arg0 ;
+(id)_assetManagerCache;
+(id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg0 fromFilesInBundle:(id)arg1 ;
+(id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg0 inAssetManager:(id)arg1 ;
+(id)assetManagerForBundle:(id)arg0 ;
+(id)newAssetNamed:(id)arg0 fromBundle:(id)arg1 ;
+(id)sharedRuntimeAssetMap;
+(id)sharedRuntimeCatalog;
+(void)_clearAllCachedImagesAndAssets;
+(void)_convertTraitCollection:(id)arg0 toCUIScale:(*CGFloat)arg1 CUIIdiom:(*NSInteger)arg2 UIKitIdiom:(*NSInteger)arg3 UIKitUserInterfaceStyle:(*NSInteger)arg4 subtype:(*NSUInteger)arg5 CUIDisplayGamut:(*NSInteger)arg6 UIKitLayoutDirection:(*NSInteger)arg7 CUILayoutDirection:(*NSUInteger)arg8 ;
+(void)_dropResourceReferencesForURL:(id)arg0 ;
+(void)_executeUnitTestWithAssetManagerCache:(id)arg0 ;
+(void)_saveAssetManager:(id)arg0 forBundle:(id)arg1 lock:(BOOL)arg2 ;
+(void)clearSharedRuntimeAssetMapForUnitTests;
-(BOOL)_hasMultipleAppearances;
-(BOOL)_imageBelongsToCoreGlyphs:(id)arg0 ;
-(BOOL)_imageBelongsToUIKit:(id)arg0 ;
-(BOOL)_imageIsSystemImage:(id)arg0 ;
-(BOOL)_isSystemAssetManager;
-(id)_allImageNames;
-(id)_appearanceNames;
-(id)_assetForName:(id)arg0 ;
-(id)_assetFromMapForName:(id)arg0 ;
-(id)_assetFromMapForName:(id)arg0 lock:(BOOL)arg1 ;
-(id)_catalog;
-(id)_defaultAppearanceNames;
-(id)_initWithName:(id)arg0 inBundle:(id)arg1 idiom:(NSInteger)arg2 lock:(BOOL)arg3 allowMissingCatalog:(BOOL)arg4 ;
-(id)_insertAssetIntoMap:(id)arg0 forName:(id)arg1 ;
-(id)_insertAssetIntoMap:(id)arg0 forName:(id)arg1 lock:(BOOL)arg2 ;
-(id)_lookUpObjectForTraitCollection:(id)arg0 withAccessorWithAppearanceName:(id)arg1 ;
-(id)_starkAssetManager;
-(id)_translateAppearanceNameToNative:(id)arg0 ;
-(id)colorNamed:(id)arg0 withTraitCollection:(id)arg1 ;
-(id)dataNamed:(id)arg0 ;
-(id)description;
-(id)imageNamed:(id)arg0 ;
-(id)imageNamed:(id)arg0 configuration:(id)arg1 ;
-(id)imageNamed:(id)arg0 configuration:(id)arg1 cachingOptions:(NSUInteger)arg2 attachCatalogImage:(BOOL)arg3 ;
-(id)imageNamed:(id)arg0 idiom:(NSInteger)arg1 ;
-(id)imageNamed:(id)arg0 idiom:(NSInteger)arg1 subtype:(NSUInteger)arg2 ;
-(id)imageNamed:(id)arg0 scale:(CGFloat)arg1 idiom:(NSInteger)arg2 subtype:(NSUInteger)arg3 ;
-(id)imageNamed:(id)arg0 withTrait:(id)arg1 ;
-(id)initManagerWithoutCatalogWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 inBundle:(id)arg1 idiom:(NSInteger)arg2 ;
-(id)initWithURL:(id)arg0 idiom:(NSInteger)arg1 error:(*id)arg2 ;
-(id)resolvedColorNamed:(id)arg0 withTraitCollection:(id)arg1 ;
-(void)_clearCachedResources;
-(void)_clearCachedResources:(id)arg0 ;
-(void)_disconnectImageAssets;
-(void)_performBlockWithAssetLock:(id)arg0 ;
-(void)dealloc;
-(void)disableCacheFlushing;


@end


#endif