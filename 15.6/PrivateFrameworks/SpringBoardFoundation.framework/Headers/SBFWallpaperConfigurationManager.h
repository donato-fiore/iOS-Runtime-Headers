// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFWALLPAPERCONFIGURATIONMANAGER_H
#define SBFWALLPAPERCONFIGURATIONMANAGER_H

@class NSMutableDictionary, NSArray, NSString;
@protocol BSDescriptionProviding, SBFWallpaperConfigurationManagerDelegate, SBFProceduralWallpaperProvider;

#import <Foundation/Foundation.h>

#import "SBFWallpaperConfiguration.h"
#import "SBFMagnifyMode.h"

@interface SBFWallpaperConfigurationManager : NSObject <BSDescriptionProviding>

 {
    NSMutableDictionary *_wallpaperImageCache;
    int _externalNotificationToken;
    NSUInteger _batchChangeCount;
    NSInteger _batchNotifyVariants;
}


@property (nonatomic) BOOL cachedVariantsShareWallpaperConfiguration; // ivar: _cachedVariantsShareWallpaperConfiguration
@property (nonatomic, getter=isCachedVariantsShareWallpaperConfigurationValid) BOOL cachedVariantsShareWallpaperConfigurationValid; // ivar: _cachedVariantsShareWallpaperConfigurationValid
@property (readonly, copy, nonatomic) NSArray *dataStores; // ivar: _dataStores
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFWallpaperConfigurationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableWallpaperDimming; // ivar: _enableWallpaperDimming
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) SBFWallpaperConfiguration *homeScreenWallpaperConfiguration;
@property (readonly, copy, nonatomic) SBFWallpaperConfiguration *lockScreenWallpaperConfiguration;
@property (retain, nonatomic) SBFMagnifyMode *magnifyMode; // ivar: _magnifyMode
@property (readonly, nonatomic) NSUInteger numberOfCachedStaticImages;
@property (readonly, nonatomic) NSInteger parallaxDeviceType;
@property (weak, nonatomic) NSObject<SBFProceduralWallpaperProvider> *proceduralWallpaperProvider; // ivar: _proceduralWallpaperProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL variantsShareWallpaperConfiguration;
@property (nonatomic) NSInteger wallpaperMode; // ivar: _wallpaperMode
@property (readonly, nonatomic) CGFloat wallpaperScale; // ivar: _wallpaperScale
@property (readonly, nonatomic) CGSize wallpaperSize; // ivar: _wallpaperSize
@property (readonly, nonatomic) CGSize wallpaperSizeIncludingParallaxOverhang;
@property (readonly, nonatomic) NSInteger wallpaperSizeType; // ivar: _wallpaperSizeType


+(void)initialize;
-(BOOL)hasWallpaperImageForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(BOOL)isInChangeBatch;
-(BOOL)isProceduralWallpaperInfoValid:(id)arg0 ;
-(BOOL)isVideoSupportedByDefaultForVariant:(NSInteger)arg0 ;
-(BOOL)isVideoSupportedForVariant:(NSInteger)arg0 ;
-(BOOL)safeMigrateWallpaperImageIfNecessaryForVariant:(NSInteger)arg0 representingVariants:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(BOOL)setProceduralWallpaperIdentifier:(id)arg0 options:(id)arg1 forVariants:(NSInteger)arg2 ;
-(BOOL)setVideoURL:(id)arg0 forVariant:(NSInteger)arg1 shoudCrop:(BOOL)arg2 relativeCropRect:(struct CGRect )arg3 wallpaperMode:(NSInteger)arg4 ;
-(BOOL)setWallpaperColor:(id)arg0 forVariants:(NSInteger)arg1 ;
-(BOOL)setWallpaperColorName:(id)arg0 forVariants:(NSInteger)arg1 ;
-(BOOL)setWallpaperConfigurationFromDefaultWallpaperConfiguration:(id)arg0 forVariants:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 name:(id)arg3 ;
-(BOOL)setWallpaperGradient:(id)arg0 forVariants:(NSInteger)arg1 ;
-(BOOL)setWallpaperImage:(id)arg0 adjustedImage:(id)arg1 thumbnailData:(id)arg2 imageHashData:(id)arg3 wallpaperOptions:(id)arg4 forVariants:(NSInteger)arg5 wallpaperMode:(NSInteger)arg6 ;
-(BOOL)setWallpaperImage:(id)arg0 originalImage:(id)arg1 forVariants:(NSInteger)arg2 options:(NSUInteger)arg3 ;
-(BOOL)setWallpaperImage:(id)arg0 originalImage:(id)arg1 thumbnailData:(id)arg2 imageHashData:(id)arg3 wallpaperOptions:(id)arg4 forVariants:(NSInteger)arg5 options:(NSUInteger)arg6 wallpaperMode:(NSInteger)arg7 isMigrating:(BOOL)arg8 ;
-(BOOL)setWallpaperImage:(id)arg0 wallpaperOptions:(id)arg1 forVariants:(NSInteger)arg2 ;
-(BOOL)setWallpaperImageHashData:(id)arg0 forVariants:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(BOOL)setWallpaperOptions:(id)arg0 forVariants:(NSInteger)arg1 ;
-(BOOL)setWallpaperOptions:(id)arg0 forVariants:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(BOOL)setWallpaperThumbnailData:(id)arg0 forVariant:(NSInteger)arg1 ;
-(BOOL)setWallpaperThumbnailData:(id)arg0 forVariant:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(BOOL)setWallpaperThumbnailFromFullsizeImage:(id)arg0 forVariant:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(BOOL)variantsShareWallpaperConfigurationForTypes:(NSUInteger)arg0 ;
-(CGFloat)parallaxFactorForCropRect:(struct CGRect )arg0 portrait:(BOOL)arg1 forImageSize:(struct CGSize )arg2 zoomScale:(CGFloat)arg3 ;
-(CGFloat)thumbnailWidth;
-(Class)proceduralWallpaperClassForIdentifier:(id)arg0 ;
-(NSInteger)effectiveSharedVariantForVariants:(NSInteger)arg0 ;
-(NSInteger)wallpaperTypeForSharedWallpaperConfigurationForTypes:(NSUInteger)arg0 ;
-(id)cleanedProceduralWallpaperInfo:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)fallbackWallpaperConfigurationForVarient:(NSInteger)arg0 ;
-(id)getWallpaperLegibilitySettingsForVariant:(NSInteger)arg0 ;
-(id)homeScreenWallpaperConfigurationIncludingValuesForTypes:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithWallpaperDataStores:(id)arg0 ;
-(id)initWithWallpaperDataStores:(id)arg0 wallpaperSize:(struct CGSize )arg1 scale:(CGFloat)arg2 sizeType:(NSInteger)arg3 ;
-(id)lockScreenWallpaperConfigurationIncludingValuesForTypes:(NSUInteger)arg0 ;
-(id)migratedWallpaperOptionsForWallpaperOptions:(id)arg0 originalImageSize:(struct CGSize )arg1 ;
-(id)normalizeImage:(id)arg0 ;
-(id)proceduralWallpaperInfoForVariant:(NSInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)thumbnailDataForImage:(id)arg0 ;
-(id)videoURLForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)wallpaperColorForVariant:(NSInteger)arg0 fromDataStore:(id)arg1 colorName:(*id)arg2 ;
-(id)wallpaperConfigurationForVariant:(NSInteger)arg0 ;
-(id)wallpaperConfigurationForVariant:(NSInteger)arg0 includingValuesForTypes:(NSUInteger)arg1 ;
-(id)wallpaperConfigurationForVariant:(NSInteger)arg0 includingValuesForTypes:(NSUInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(id)wallpaperImageForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)wallpaperImageHashDataForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)wallpaperOptionsForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)wallpaperOriginalImageForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)wallpaperThumbnailImageDataForFulfillingLookupForConfiguration:(id)arg0 ;
-(id)wallpaperThumbnailImageDataForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)wallpaperThumbnailImageDataForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 inDataStore:(id)arg2 ;
-(id)wallpaperThumbnailImageForFulfillingLookupForConfiguration:(id)arg0 ;
-(id)wallpaperThumbnailImageForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(struct CGAffineTransform )_naturalPreferredTransform:(struct CGAffineTransform )arg0 forNaturalSize:(struct CGSize )arg1 ;
-(struct CGRect )cropRectForOldCropRect:(struct CGRect )arg0 portrait:(BOOL)arg1 zoomScale:(CGFloat)arg2 oldParallaxFactor:(CGFloat)arg3 forImageSize:(struct CGSize )arg4 newZoomScale:(*CGFloat)arg5 ;
-(struct CGRect )cropRectForViewPort:(struct CGRect )arg0 portrait:(BOOL)arg1 zoomScale:(CGFloat)arg2 parallaxFactor:(CGFloat)arg3 forImageSize:(struct CGSize )arg4 contentScaleFactor:(CGFloat)arg5 ;
-(void)beginChangeBatch;
-(void)clearCacheForVariants:(NSInteger)arg0 ;
-(void)clearCacheForVariants:(NSInteger)arg0 memoryOnly:(BOOL)arg1 ;
-(void)clearDelayedChangeNotifications;
-(void)dealloc;
-(void)delayNotifyingChangeForVariants:(NSInteger)arg0 ;
-(void)endChangeBatch;
-(void)getBestCropRect:(struct CGRect *)arg0 zoomScale:(*CGFloat)arg1 forImageSize:(struct CGSize )arg2 portrait:(BOOL)arg3 parallaxFactor:(CGFloat)arg4 ;
-(void)migrateWallpaperOptionsForImageIfNecessaryForVariant:(NSInteger)arg0 representingVariants:(NSInteger)arg1 ;
-(void)notifyDelegateOfChangesToVariants:(NSInteger)arg0 ;
-(void)performMigrationWithFailureHandler:(id)arg0 ;
-(void)regenerateStaticWallpaperThumbnailImages;
-(void)regenerateThumbnailIfNecessaryForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(void)regenerateThumbnailsIfNecessary;
-(void)removeAllDataExceptForType:(NSInteger)arg0 variants:(NSInteger)arg1 variantsShareWallpaperConfiguration:(BOOL)arg2 ;
-(void)removeAllDataExceptForTypes:(NSUInteger)arg0 variants:(NSInteger)arg1 variantsShareWallpaperConfiguration:(BOOL)arg2 ;
-(void)removeDataForTypes:(NSUInteger)arg0 variants:(NSInteger)arg1 variantsShareWallpaperConfiguration:(BOOL)arg2 ;
-(void)removeProceduralWallpaperForVariants:(NSInteger)arg0 ;
-(void)removeVideoForVariants:(NSInteger)arg0 ;
-(void)removeWallpaperColorForVariants:(NSInteger)arg0 ;
-(void)removeWallpaperGradientForVariants:(NSInteger)arg0 ;
-(void)removeWallpaperImageDataTypes:(NSUInteger)arg0 forVariants:(NSInteger)arg1 ;
-(void)removeWallpaperImageHashDataForVariants:(NSInteger)arg0 ;
-(void)removeWallpaperImagesForVariants:(NSInteger)arg0 ;
-(void)removeWallpaperImagesForVariants:(NSInteger)arg0 variantsShareWallpaperConfiguration:(BOOL)arg1 ;
-(void)removeWallpaperOptionsForVariants:(NSInteger)arg0 ;
-(void)restoreDefaultWallpaperForAllVariantsAndNotify:(BOOL)arg0 ;
-(void)safeMigrateWallpaperImageIfNecessary;
-(void)saveCroppedVideo:(id)arg0 toURL:(id)arg1 cropRect:(struct CGRect )arg2 completionHandler:(id)arg3 ;
-(void)setWallpaperBundle:(id)arg0 appearance:(id)arg1 ;
-(void)wallpaperDidChangeForVariants:(NSInteger)arg0 shouldNotify:(BOOL)arg1 ;
-(void)wallpaperWillChangeForVariants:(NSInteger)arg0 ;


@end


#endif