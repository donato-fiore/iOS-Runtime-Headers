// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGDISPLAYASSETTEXTUREPROVIDER_H
#define PXGDISPLAYASSETTEXTUREPROVIDER_H

@class NSMutableDictionary, NSMutableIndexSet, CIContext, NSArray, NSString;
@protocol PXGImageRequestPerformer, OS_dispatch_queue, PXGDisplayAssetPixelBufferSourcesProvider;


#import "PXGTextureProvider.h"
#import "PXGThumbnailRequestQueue.h"
#import "PXGImageRequestQueue.h"
#import "PXGAssetImageCache.h"
#import "PXMediaProvider.h"

@interface PXGDisplayAssetTextureProvider : PXGTextureProvider <PXGImageRequestPerformer>

 {
    NSObject<OS_dispatch_queue> *_drawingQueue;
    NSObject<OS_dispatch_queue> *_videoSessionsRequestQueue;
    PXGThumbnailRequestQueue *_requestQueue_thumbnailRequestQueue;
    NSMutableDictionary *_workQueue_textureStreamingSessionsMap;
    NSMutableIndexSet *_workQueue_textureRequestIDsWithDeliveredVideoFrames;
    NSMutableIndexSet *_workQueue_textureRequestIDsThatCannotBeSatisfiedWithThumbnails;
    PXGThumbnailRequestQueue *_workQueue_thumbnailRequestQueue;
    PXGImageRequestQueue *_workQueue_imageRequestQueue;
    NSMutableDictionary *_workQueue_deferredImageRequestBlocksByTextureID;
    CIContext *_workQueue_crossfadeRenderContext;
    NSObject<OS_dispatch_queue> *_cancelationQueue;
    NSMutableDictionary *_cancelationQueue_mediaRequestIDByTextureID;
    NSMutableDictionary *_cancelationQueue_deferredMediaRequestIDByTextureID;
    os_unfair_lock_s _lookupLock;
    NSMutableIndexSet *_lookupLock_requestIDsWithDeliveredThumbnails;
    PXGAssetImageCache *_imageCache;
    BOOL _isLowSpec;
    NSArray *_requestOptions;
    *CGImage _lightPlaceholderImage;
    *CGImage _darkPlaceholderImage;
    CGSize _largestImageDataSpecSize;
    CGFloat _masterThumbnailShortSide;
    CGFloat _deferMediumRequestShortSideLimit;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat displayLinkLastTargetTimestamp; // ivar: _displayLinkLastTargetTimestamp
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) NSObject<PXGDisplayAssetPixelBufferSourcesProvider> *pixelBufferSourcesProvider; // ivar: _pixelBufferSourcesProvider
@property (readonly, nonatomic) *CGImage placeholderImage;
@property (readonly) Class superclass;
@property (nonatomic) BOOL videoRequestsAllowed; // ivar: _videoRequestsAllowed
@property (readonly, nonatomic) BOOL wantsMipmaps;


+(id)defaultMediaVersionHandlerWithDataSourceBeforeChanges:(SEL)arg0 dataSourceAfterChanges:(id)arg1 ;
-(BOOL)_hasDeliveredThumbnailForTextureRequestID:(int)arg0 ;
-(BOOL)_imageSizeSatisfiedByThumbnail:(struct CGSize )arg0 ;
-(BOOL)_noteThumbnailAsDeliveredForRequestID:(int)arg0 ;
-(id)_requestOptionsForUseCase:(NSUInteger)arg0 forDrawing:(BOOL)arg1 intent:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithMediaProvider:(id)arg0 pixelBufferSourcesProvider:(id)arg1 ;
-(struct _NSRange )requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 geometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 inLayout:(id)arg4 ;
-(struct __CVBuffer *)_workQueue_renderCrossfadeIfNeededWithPixelBuffer:(struct __CVBuffer *)arg0 forVideoSession:(id)arg1 textureRequestID:(id)arg2 ;
-(void)_cancelationQueue_cancelImageRequests:(id)arg0 ;
-(void)_handlePixelBufferChangedForTextureStreamingSession:(id)arg0 ;
-(void)_handleProvidePlaceholderForTextureRequestID:(int)arg0 ;
-(void)_processThumbnailRequestsOnRequestQueue:(BOOL)arg0 ;
-(void)_requestQueue_handleThumbnailData:(id)arg0 spec:(struct PXMediaProviderThumbnailDataSpec )arg1 forTextureRequestID:(int)arg2 ;
-(void)_requestQueue_requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 observer:(id)arg1 textureRequestIDs:(struct _NSRange )arg2 displayAssetFetchResult:(id)arg3 presentationStyles:(NSUInteger)arg4 targetSize:(struct CGSize )arg5 screenScale:(CGFloat)arg6 adjustment:(id)arg7 intent:(NSUInteger)arg8 cannotBeSatisfiedWithThumbnail:(BOOL)arg9 ;
-(void)_setupRequestOptions;
-(void)_updateMediumRequestShortSideLimit;
-(void)_workQueue_cancelTextureRequests:(id)arg0 ;
-(void)_workQueue_cleanupTextureStreamingSession:(id)arg0 textureRequestIDs:(id)arg1 ;
-(void)_workQueue_didDeliverVideoContentForRequstID:(int)arg0 ;
-(void)_workQueue_handleCGImageResult:(struct CGImage *)arg0 orientation:(unsigned int)arg1 info:(id)arg2 targetSize:(struct CGSize )arg3 adjustment:(id)arg4 shouldCache:(BOOL)arg5 textureRequestID:(int)arg6 ;
-(void)_workQueue_handleResult:(struct CGImage *)arg0 orientation:(NSInteger)arg1 info:(id)arg2 targetSize:(struct CGSize )arg3 screenScale:(CGFloat)arg4 mediaRequest:(id)arg5 textureRequestID:(int)arg6 ;
// -(void)_workQueue_performDeferredImageRequest:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 textureRequestID:(unk)arg5  ;
-(void)_workQueue_performRequestForDisplayAsset:(id)arg0 textureRequestID:(int)arg1 sharedState:(id)arg2 ;
-(void)_workQueue_processDeferredImageRequests;
-(void)_workQueue_processImageRequestsWithAllowedIDs:(id)arg0 ;
-(void)_workQueue_provideCGImage:(struct CGImage *)arg0 options:(struct ? )arg1 isDegraded:(BOOL)arg2 forRequestID:(int)arg3 ;
-(void)_workQueue_provideVideoFrameForTextureStreamingSession:(id)arg0 ;
-(void)_workQueue_requestVideoTexturesForSpriteAtIndex:(unsigned int)arg0 spriteReference:(id)arg1 displayAsset:(id)arg2 presentationController:(id)arg3 adjustment:(id)arg4 presentationType:(int)arg5 textureRequestID:(int)arg6 ;
-(void)_workQueue_startRequestingVideoTexturesForDisplayAsset:(id)arg0 presentationController:(id)arg1 pixelBufferSource:(id)arg2 adjustment:(id)arg3 textureRequestID:(int)arg4 ;
-(void)_workQueue_updateTextureStreamingVisibility:(BOOL)arg0 ;
-(void)cancelTextureRequests:(id)arg0 ;
-(void)dealloc;
-(void)didFinishRequestingTextures;
-(void)interactionStateDidChange:(struct ? )arg0 ;
-(void)lowMemoryModeDidChange;
-(void)performRequestForSpriteIndex:(unsigned int)arg0 textureRequestID:(int)arg1 sharedState:(id)arg2 ;
-(void)registerImageDataSpecs:(id)arg0 ;
-(void)releaseCachedResources;
-(void)setPreferBGRA:(BOOL)arg0 ;


@end


#endif