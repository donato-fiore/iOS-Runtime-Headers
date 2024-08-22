// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PISEGMENTATIONLOADER_H
#define PISEGMENTATIONLOADER_H

@class NSError, NURenderContext, NSString, NSArray;
@protocol PISegmentationLoading, OS_dispatch_queue, PFParallaxAsset, PFParallaxLayoutConfiguration;

#import <Foundation/Foundation.h>

#import "PIParallaxSegmentationItem.h"

@interface PISegmentationLoader : NSObject <PISegmentationLoading>

 {
    NSUInteger _signpost;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isLoading;
    BOOL _isCancelled;
    int _loadRequestID;
    int _petsRequestID;
    NSError *_loadingError;
    NURenderContext *_renderContext;
    PIParallaxSegmentationItem *_item;
}


@property (readonly, nonatomic) NSObject<PFParallaxAsset> *asset; // ivar: _asset
@property (nonatomic) NSUInteger classification; // ivar: _classification
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableDownload; // ivar: _disableDownload
@property (nonatomic) BOOL disableRendering; // ivar: _disableRendering
@property (nonatomic) BOOL disableSegmentation; // ivar: _disableSegmentation
@property (copy, nonatomic) id *downloadProgressHandler; // ivar: _downloadProgressHandler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PFParallaxLayoutConfiguration> *layoutConfiguration; // ivar: _layoutConfiguration
@property (copy, nonatomic) id *loadingHandler; // ivar: _loadingHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loadingHandlerQueue; // ivar: _loadingHandlerQueue
@property (copy, nonatomic) NSArray *petsFaceRegions; // ivar: _petsFaceRegions
@property (copy, nonatomic) NSArray *petsRegions; // ivar: _petsRegions
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) BOOL proxyOnly; // ivar: _proxyOnly
@property (nonatomic) NSInteger sourceMode; // ivar: _sourceMode
@property (readonly) Class superclass;


+(BOOL)saveSegmentationItem:(id)arg0 layerStack:(id)arg1 toWallpaperURL:(id)arg2 error:(*id)arg3 ;
+(BOOL)saveSegmentationItem:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(id)_loadSegmentationItemFromURL:(id)arg0 error:(*id)arg1 ;
+(id)_loadSegmentationItemFromWallpaperURL:(id)arg0 error:(*id)arg1 ;
+(id)generateLayerStackForItem:(id)arg0 style:(id)arg1 layout:(id)arg2 options:(NSUInteger)arg3 completion:(id)arg4 ;
+(id)loadLayerStackFromWallpaperURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)loadSegmentationItemFromURL:(id)arg0 error:(*id)arg1 ;
+(id)loadSegmentationItemFromWallpaperURL:(id)arg0 error:(*id)arg1 ;
+(id)proxyScalePolicy;
+(id)reloadSegmentationItemFromWallpaperURL:(id)arg0 asset:(id)arg1 completion:(id)arg2 ;
+(id)renderPriorityForResourcePriority:(NSInteger)arg0 ;
+(id)saveSegmentationItem:(id)arg0 layerStackOptions:(NSUInteger)arg1 configuration:(id)arg2 style:(id)arg3 layout:(id)arg4 toWallpaperURL:(id)arg5 completion:(id)arg6 ;
+(id)segmentationCompositionForAssetResource:(id)arg0 ;
+(id)segmentationCompositionForImageURL:(id)arg0 fileUTI:(id)arg1 orientation:(NSInteger)arg2 proxyImage:(struct CGImage *)arg3 ;
+(id)segmentationCompositionForProxyImage:(struct CGImage *)arg0 orientation:(NSInteger)arg1 ;
+(id)segmentationSourceForImageURL:(id)arg0 fileUTI:(id)arg1 orientation:(NSInteger)arg2 proxyImage:(struct CGImage *)arg3 ;
+(void)_ensureResources;
+(void)_freeResources;
+(void)_saveSegmentationItem:(id)arg0 layerStack:(id)arg1 toWallpaperURL:(id)arg2 completion:(id)arg3 ;
+(void)ensureResources;
+(void)freeResources;
+(void)initialize;
+(void)renderPreviewLayerStackFromWallpaperURL:(id)arg0 styleCategory:(id)arg1 completion:(id)arg2 ;
+(void)warmUpClassificationDetectors;
+(void)warmUpResources;
-(BOOL)_isValidSegmentationMatteHistogramForDepth:(id)arg0 ;
-(id)_tryLoadSegmentationItemFromCache:(id)arg0 ;
-(id)initWithParallaxAsset:(id)arg0 ;
-(id)initWithSegmentationItem:(id)arg0 parallaxAsset:(id)arg1 ;
-(void)_abort:(id)arg0 ;
-(void)_analyzeColors:(id)arg0 completion:(id)arg1 ;
-(void)_cacheSegmentationDataForItem:(id)arg0 ;
-(void)_classify:(id)arg0 completion:(id)arg1 ;
-(void)_didLoad:(id)arg0 completion:(id)arg1 ;
-(void)_handlePartialItem:(id)arg0 loadingState:(NSUInteger)arg1 ;
-(void)_load:(id)arg0 ;
-(void)_loadAssetResource:(NSInteger)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_loadAssetResourceForProxy:(BOOL)arg0 completion:(id)arg1 ;
-(void)_loadBackground:(id)arg0 completion:(id)arg1 ;
-(void)_loadFullSizeResource:(id)arg0 completion:(id)arg1 ;
-(void)_loadItem:(id)arg0 completion:(id)arg1 ;
-(void)_loadLocalLightData:(id)arg0 completion:(id)arg1 ;
-(void)_loadProxyResource:(id)arg0 completion:(id)arg1 ;
-(void)_loadRegions:(id)arg0 completion:(id)arg1 ;
-(void)_loadSegmentationData:(id)arg0 completion:(id)arg1 ;
-(void)_performLayout:(id)arg0 completion:(id)arg1 ;
-(void)_performSegmentation:(id)arg0 type:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_segment:(id)arg0 completion:(id)arg1 ;
-(void)cancel;
-(void)loadSegmentationItemWithCompletion:(id)arg0 ;


@end


#endif