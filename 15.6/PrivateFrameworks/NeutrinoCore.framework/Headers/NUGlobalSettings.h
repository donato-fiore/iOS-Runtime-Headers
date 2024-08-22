// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUGLOBALSETTINGS_H
#define NUGLOBALSETTINGS_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NUGlobalSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}




+(BOOL)allAssetsCanUseHDRPipeline;
+(BOOL)alwaysRequireHardwareVideoEncoder;
+(BOOL)bufferStorageFactoryUsePool;
+(BOOL)deviceDisableMetal;
+(BOOL)devicePrintRenderer;
+(BOOL)disableIOSurfacePortaitExport;
+(BOOL)disableMeteorGainMapGeneration;
+(BOOL)disablePacked10BitPixelFormats;
+(BOOL)displayDisableColorMatching;
+(BOOL)displayDisableDeepColor;
+(BOOL)displayForceDeepColor;
+(BOOL)enableHDRSupport;
+(BOOL)enforceMinimumBitRateForCinematicVideos;
+(BOOL)enforceMinimumBitRateForExportedVideos;
+(BOOL)forceSoftwareVideoEncoder;
+(BOOL)imageLayerDebug;
+(BOOL)imageRenderJobUseSurfaceRenderer;
+(BOOL)imageRenderJobUseTextureRenderer;
+(BOOL)imageSourceDisableCacheImmediately;
+(BOOL)imageSourceDisableRAW;
+(BOOL)isViewDebugEnabled;
+(BOOL)logPeakRenderCIUsuage;
+(BOOL)platformHasWideColor;
+(BOOL)renderJobDebug;
+(BOOL)renderJobDebugCapture5PercentOfJobs;
+(BOOL)renderJobDebugCaptureCanceledJobs;
+(BOOL)renderJobDebugCaptureNodeCache;
+(BOOL)renderJobDebugCaptureNodeGraphs;
+(BOOL)renderJobDebugCaptureOnlyPerfStats;
+(BOOL)renderJobDebugCapturePerfStatHistory;
+(BOOL)renderTransparencyOpaque;
+(BOOL)renderTransparencyOverBlack;
+(BOOL)renderVideoLive;
+(BOOL)rendererClampToAlpha;
+(BOOL)rendererUseHalfFloat;
+(BOOL)rendererUseP3Linear;
+(BOOL)runNeutrinoSynchronously;
+(BOOL)surfaceStorageFactoryUsePool;
+(CGFloat)HLGOpticalScale;
+(CGFloat)cacheNodeImageCompression;
+(CGFloat)renderJSPipelineTimeout;
+(CGFloat)storagePoolMigrationDelay;
+(NSInteger)cacheNodeCacheSizeLimit;
+(NSInteger)cacheNodeFilePermissions;
+(NSInteger)deviceDefaultSampleMode;
+(NSInteger)imageTileBorder;
+(NSInteger)imageTileSize;
+(NSInteger)storagePoolNonPurgeableLimit;
+(NSInteger)storagePoolPurgeableLimit;
+(NSUInteger)videoCompositorDebugMode;
+(id)cacheNodeDirectoryURL;
+(id)debugRenderBlue;
+(id)debugRenderPurple;
+(id)debugRenderYellow;
+(id)globalSettings;
+(id)pipelineSourceURL;
+(id)tempDir;
+(void)reset;
+(void)setAllAssetsCanUseHDRPipeline:(BOOL)arg0 ;
+(void)setAlwaysRequireHardwareVideoEncoder:(BOOL)arg0 ;
+(void)setBufferStorageFactoryUsePool:(BOOL)arg0 ;
+(void)setCacheNodeCacheSizeLimit:(NSInteger)arg0 ;
+(void)setCacheNodeDirectoryURL:(id)arg0 ;
+(void)setCacheNodeFilePermissions:(NSInteger)arg0 ;
+(void)setCacheNodeImageCompression:(CGFloat)arg0 ;
+(void)setDebugRenderBlue:(id)arg0 ;
+(void)setDebugRenderPurple:(id)arg0 ;
+(void)setDebugRenderYellow:(id)arg0 ;
+(void)setDeviceDefaultSampleMode:(NSInteger)arg0 ;
+(void)setDevicePrintRenderer:(BOOL)arg0 ;
+(void)setDisableIOSurfacePortaitExport:(BOOL)arg0 ;
+(void)setDisableMeteorGainMapGeneration:(BOOL)arg0 ;
+(void)setDisablePacked10BitPixelFormats:(BOOL)arg0 ;
+(void)setDisplayDisableColorMatching:(BOOL)arg0 ;
+(void)setDisplayDisableDeepColor:(BOOL)arg0 ;
+(void)setDisplayForceDeepColor:(BOOL)arg0 ;
+(void)setEnableHDRSupport:(BOOL)arg0 ;
+(void)setEnforceMinimumBitRateForCinematicVideos:(BOOL)arg0 ;
+(void)setEnforceMinimumBitRateForExportedVideos:(BOOL)arg0 ;
+(void)setForceSoftwareVideoEncoder:(BOOL)arg0 ;
+(void)setImageLayerDebug:(BOOL)arg0 ;
+(void)setImageRenderJobUseSurfaceRenderer:(BOOL)arg0 ;
+(void)setImageRenderJobUseTextureRenderer:(BOOL)arg0 ;
+(void)setImageSourceDisableCacheImmediately:(BOOL)arg0 ;
+(void)setImageSourceDisableRAW:(BOOL)arg0 ;
+(void)setImageTileBorder:(NSInteger)arg0 ;
+(void)setImageTileSize:(NSInteger)arg0 ;
+(void)setLogPeakRenderCIUsuage:(BOOL)arg0 ;
+(void)setPipelineSourceURL:(id)arg0 ;
+(void)setPlatformHasWideColor:(BOOL)arg0 ;
+(void)setRenderJSPipelineTimeout:(CGFloat)arg0 ;
+(void)setRenderJobDebug:(BOOL)arg0 ;
+(void)setRenderJobDebugCapture5PercentOfJobs:(BOOL)arg0 ;
+(void)setRenderJobDebugCaptureCanceledJobs:(BOOL)arg0 ;
+(void)setRenderJobDebugCaptureNodeCache:(BOOL)arg0 ;
+(void)setRenderJobDebugCaptureNodeGraphs:(BOOL)arg0 ;
+(void)setRenderJobDebugCaptureOnlyPerfStats:(BOOL)arg0 ;
+(void)setRenderJobDebugCapturePerfStatHistory:(BOOL)arg0 ;
+(void)setRenderTransparencyOpaque:(BOOL)arg0 ;
+(void)setRenderTransparencyOverBlack:(BOOL)arg0 ;
+(void)setRenderVideoLive:(BOOL)arg0 ;
+(void)setRendererClampToAlpha:(BOOL)arg0 ;
+(void)setRendererUseHalfFloat:(BOOL)arg0 ;
+(void)setRendererUseP3Linear:(BOOL)arg0 ;
+(void)setRunNeutrinoSynchronously:(BOOL)arg0 ;
+(void)setStoragePoolMigrationDelay:(CGFloat)arg0 ;
+(void)setStoragePoolNonPurgeableLimit:(NSInteger)arg0 ;
+(void)setStoragePoolPurgeableLimit:(NSInteger)arg0 ;
+(void)setSurfaceStorageFactoryUsePool:(BOOL)arg0 ;
+(void)setTempDir:(id)arg0 ;
+(void)setUpCacheNodeDirectoryWithComponent:(id)arg0 ;
+(void)setVideoCompositorDebugMode:(NSUInteger)arg0 ;
+(void)setViewDebugEnabled:(BOOL)arg0 ;
-(BOOL)boolSettingForKey:(id)arg0 defaultValue:(id)arg1 ;
-(CGFloat)doubleSettingForKey:(id)arg0 defaultValue:(id)arg1 ;
-(NSInteger)integerSettingForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)_settingForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)init;
-(id)settingForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)stringSettingForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)urlSettingForKey:(id)arg0 defaultValue:(id)arg1 ;
-(void)reset;
-(void)setSetting:(id)arg0 forKey:(id)arg1 ;


@end


#endif