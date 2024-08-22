// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPABSTRACTNETWORKARTWORKDATASOURCE_H
#define MPABSTRACTNETWORKARTWORKDATASOURCE_H

@class NSURLSessionConfiguration, NSMapTable, NSString, NSCache, NSURLSession, NSMutableDictionary, NSURL, NSURLCache;
@protocol NSURLSessionDataDelegate, AVAssetResourceLoaderDelegate, MPArtworkDataSource, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface MPAbstractNetworkArtworkDataSource : NSObject <NSURLSessionDataDelegate, AVAssetResourceLoaderDelegate, MPArtworkDataSource>



@property (readonly, nonatomic) NSURLSessionConfiguration *URLSessionConfiguration; // ivar: _URLSessionConfiguration
@property (weak, nonatomic) NSObject<NSURLSessionDataDelegate> *URLSessionDataDelegateProxy; // ivar: _URLSessionDataDelegateProxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) NSMapTable *catalogImageTaskMap; // ivar: _catalogImageTaskMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSCache *fallbackImageArtworkRepresentationCache; // ivar: _fallbackImageArtworkRepresentationCache
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageAccessQueue; // ivar: _imageAccessQueue
@property (retain, nonatomic) NSURLSession *imageURLSession; // ivar: _imageURLSession
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryPressureNotificationSource; // ivar: _memoryPressureNotificationSource
@property (retain, nonatomic) NSMutableDictionary *pendingRequestURLToCompletionHandlers; // ivar: _pendingRequestURLToCompletionHandlers
@property (retain, nonatomic) NSMapTable *resourceLoaderStoragePolicyMap; // ivar: _resourceLoaderStoragePolicyMap
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesFallbackCache; // ivar: _usesFallbackCache
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoAccessQueue; // ivar: _videoAccessQueue
@property (retain, nonatomic) NSURL *videoArtworkCacheURL; // ivar: _videoArtworkCacheURL
@property (retain, nonatomic) NSMutableDictionary *videoTaskToCacheStoragePolicy; // ivar: _videoTaskToCacheStoragePolicy
@property (retain, nonatomic) NSMutableDictionary *videoTaskToData; // ivar: _videoTaskToData
@property (retain, nonatomic) NSMutableDictionary *videoTaskToResourceLoadingRequest; // ivar: _videoTaskToResourceLoadingRequest
@property (weak, nonatomic) NSURLCache *videoURLCache; // ivar: _videoURLCache
@property (retain, nonatomic) NSURLSession *videoURLSession; // ivar: _videoURLSession


+(void)_applyImageURLCachePolicy:(NSUInteger)arg0 cacheDiskPath:(id)arg1 toConfiguration:(id)arg2 ;
+(void)_applyVideoCacheURL:(id)arg0 toConfiguration:(id)arg1 ;
-(BOOL)_isRepresentationSize:(struct CGSize )arg0 validForCatalog:(id)arg1 ;
-(BOOL)_subclassImplementsSelector:(SEL)arg0 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(BOOL)areRepresentationsOfKind:(NSInteger)arg0 availableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg0 bestRepresentationForArtworkCatalog:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldLookForLargerImageRepresentationsWhenBestRepresentationIsUnavailable;
-(BOOL)wantsBackgroundImageDecompression;
-(id)_artworkRepresentationWithImageFromData:(id)arg0 forURLResponse:(id)arg1 catalog:(id)arg2 size:(struct CGSize )arg3 immediateImageDecompressionAllowed:(BOOL)arg4 ;
-(id)_bestVideoArtworkRepresentationForCatalog:(id)arg0 ;
-(id)_cacheKeyForCatalog:(id)arg0 kind:(NSInteger)arg1 size:(struct CGSize )arg2 ;
-(id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)arg0 immediateImageDecompressionAllowed:(BOOL)arg1 ;
-(id)_existingRepresentativeObjectForArtworkCatalog:(id)arg0 kind:(NSInteger)arg1 handler:(id)arg2 ;
-(id)_requestForCatalog:(id)arg0 kind:(NSInteger)arg1 size:(struct CGSize )arg2 ;
-(id)cacheKeyForCatalog:(id)arg0 kind:(NSInteger)arg1 size:(struct CGSize )arg2 ;
-(id)cacheKeyForCatalog:(id)arg0 size:(struct CGSize )arg1 ;
-(id)existingArtworkEffectResultForEffectType:(NSInteger)arg0 catalog:(id)arg1 options:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg0 ;
-(id)existingRepresentationOfKind:(NSInteger)arg0 forArtworkCatalog:(id)arg1 ;
-(id)init;
-(id)requestForCatalog:(id)arg0 kind:(NSInteger)arg1 size:(struct CGSize )arg2 ;
-(id)requestForCatalog:(id)arg0 size:(struct CGSize )arg1 ;
-(id)sortedSupportedSizesForCatalog:(id)arg0 ;
-(id)supportedSizesForCatalog:(id)arg0 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg0 ;
-(struct CGSize )_bestAvailableSizeForCatalog:(id)arg0 kind:(NSInteger)arg1 ;
-(struct CGSize )bestAvailableSizeForCatalog:(id)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_didReceiveMemoryWarningNotification:(id)arg0 ;
-(void)_didReceiveWillEnterForegroundNotification:(id)arg0 ;
-(void)_disableVideoCache;
-(void)_performAsyncBarrierBlockOnQueue:(id)arg0 block:(id)arg1 ;
-(void)_performSyncBlockOnQueue:(id)arg0 block:(id)arg1 ;
-(void)_reEnableVideoCache;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg0 ;
-(void)dealloc;
// -(void)loadArtworkEffectResultForEffectType:(NSInteger)arg0 catalog:(id)arg1 options:(id)arg2 systemEffectHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadRepresentationOfKind:(NSInteger)arg0 forArtworkCatalog:(id)arg1 completionHandler:(id)arg2 ;
-(void)resourceLoader:(id)arg0 didCancelLoadingRequest:(id)arg1 ;
-(void)startListeningForMemoryPressureNotifications;
-(void)stopListeningForMemoryPressureNotifications;
-(void)updateURLSessionWithCachePolicy:(NSUInteger)arg0 cachePath:(id)arg1 ;


@end


#endif