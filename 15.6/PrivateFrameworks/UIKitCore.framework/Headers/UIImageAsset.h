// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIIMAGEASSET_H
#define UIIMAGEASSET_H

@class NSBundle, CUINamedLayerStack, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UIAssetManager.h"
#import "UITraitCollection.h"

@interface UIImageAsset : NSObject <NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    NSBundle *_containingBundle;
    ? _assetFlags;
}


@property (weak) _UIAssetManager *_assetManager; // ivar: _assetManager
@property (readonly, nonatomic) UITraitCollection *_defaultTraitCollection; // ivar: _defaultTraitCollection
@property (retain, nonatomic, setter=_setLayerStack:) CUINamedLayerStack *_layerStack; // ivar: _layerStack
@property (copy, nonatomic, setter=_setRebuildStackImage:) id *_rebuildStackImage; // ivar: _rebuildStackImage
@property (weak, nonatomic, setter=_setUnpinObserver:) id *_unpinObserver; // ivar: _unpinObserver
@property (copy, nonatomic) NSString *assetName; // ivar: _assetName
@property (copy, nonatomic) id *creationBlock; // ivar: _creationBlock


+(BOOL)supportsSecureCoding;
+(id)_dynamicAssetNamed:(id)arg0 generator:(id)arg1 ;
-(BOOL)_containsImagesInPath:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_cachedRenditionWithSize:(struct CGSize )arg0 tintColor:(id)arg1 traitCollection:(id)arg2 bold:(BOOL)arg3 letterpress:(BOOL)arg4 drawMode:(unsigned int)arg5 ;
-(id)_initWithAssetName:(id)arg0 forFilesInBundle:(id)arg1 ;
-(id)_initWithAssetName:(id)arg0 forManager:(id)arg1 ;
-(id)_nameForStoringRuntimeRegisteredImagesInMutableCatalog;
-(id)_renditionCache:(BOOL)arg0 ;
-(id)_symbolConfiguration;
-(id)_unsafe_mutableCatalog;
-(id)_withLock_imageWithConfiguration:(id)arg0 ;
-(id)_withLock_lookUpRegisteredObjectForTraitCollection:(id)arg0 withAccessorWithAppearanceName:(id)arg1 ;
-(id)_withLock_mutableCatalog;
-(id)_withLock_registeredAppearanceNames;
-(id)_withLock_updateAssetFromBlockGenerationWithConfiguration:(id)arg0 resolvedCatalogImage:(id)arg1 ;
-(id)imageWithConfiguration:(id)arg0 ;
-(id)imageWithTraitCollection:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_cacheRendition:(id)arg0 forSize:(struct CGSize )arg1 tintColor:(id)arg2 traitCollection:(id)arg3 bold:(BOOL)arg4 letterpress:(BOOL)arg5 drawMode:(unsigned int)arg6 ;
-(void)_clearResolvedImageResources;
-(void)_disconnectFromAssetManager;
-(void)_registerImage:(id)arg0 withConfiguration:(id)arg1 ;
-(void)_unregisterImageWithDescription:(id)arg0 ;
-(void)_unsafe_registerImage:(id)arg0 withConfiguration:(id)arg1 ;
-(void)_withLock_registerImage:(id)arg0 withConfiguration:(id)arg1 ;
-(void)_withLock_unregisterImageWithDescription:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)registerImage:(id)arg0 withConfiguration:(id)arg1 ;
-(void)registerImage:(id)arg0 withTraitCollection:(id)arg1 ;
-(void)unregisterImageWithConfiguration:(id)arg0 ;
-(void)unregisterImageWithTraitCollection:(id)arg0 ;


@end


#endif