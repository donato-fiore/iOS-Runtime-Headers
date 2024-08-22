// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLSERVERTHREAD_H
#define QLSERVERTHREAD_H

@class NSOperationQueue, NSMutableDictionary, NSMutableSet, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_QLCacheThread.h"

@interface QLServerThread : NSObject {
    NSOperationQueue *_downloadsOperationQueue;
    NSOperationQueue *_uncachedThumbnailRetrievalQueue;
    NSOperationQueue *_downscaledThumbnailGenerationQueue;
    NSObject<OS_dispatch_queue> *_previewThumbnailGeneratorQueue;
}


@property (retain) _QLCacheThread *cacheThread; // ivar: _cacheThread
@property (retain) NSObject<OS_dispatch_queue> *completionBlocksQueue; // ivar: _completionBlocksQueue
@property (retain) NSMutableDictionary *currentFetchThumbnailsOperations; // ivar: _currentFetchThumbnailsOperations
@property (retain) NSMutableDictionary *domainsToCaches; // ivar: _domainsToCaches
@property (retain) NSMutableDictionary *externalThumbnailCacheAvailablePendingBlocks; // ivar: _externalThumbnailCacheAvailablePendingBlocks
@property (retain) NSMutableDictionary *externalThumbnailCacheInboxURLs; // ivar: _externalThumbnailCacheInboxURLs
@property (retain) NSObject<OS_dispatch_queue> *externalThumbnailCacheQueue; // ivar: _externalThumbnailCacheQueue
@property (retain) NSMutableDictionary *externalThumbnailCacheThumbnailURLs; // ivar: _externalThumbnailCacheThumbnailURLs
@property (retain) NSMutableDictionary *externalThumbnailCaches; // ivar: _externalThumbnailCaches
@property (retain) NSMutableDictionary *fsidsToCaches; // ivar: _fsidsToCaches
@property (retain) NSMutableSet *knownDomainsWithoutExternalThumbnailCaches; // ivar: _knownDomainsWithoutExternalThumbnailCaches
@property (copy) NSURL *overrideBasePersonaVolumesURLForTesting; // ivar: _overrideBasePersonaVolumesURLForTesting
@property (retain) NSMutableDictionary *pendingRequests; // ivar: _pendingRequests
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSMutableDictionary *queuedDownloadRequests; // ivar: _queuedDownloadRequests
@property (retain) NSMutableDictionary *volumesToCaches; // ivar: _volumesToCaches


+(id)sharedInstance;
+(void)updateThumbnailRequestThumbnailVersionWithThirdPartyGeneratorInformationIfNeeded:(id)arg0 ;
-(BOOL)_canUseAdditionToProvideThumbnail:(id)arg0 forThumbnailRequest:(id)arg1 taggedLogicalURL:(id)arg2 ;
-(BOOL)_saveResultForThumbnailRequest:(id)arg0 withBitmapData:(id)arg1 format:(id)arg2 error:(*id)arg3 ;
-(BOOL)downloadThumbnails:(id)arg0 forProvider:(id)arg1 ;
-(id)allKnownDataSeparatedVolumes;
-(id)cacheThreadForFileIdentifier:(id)arg0 atURL:(id)arg1 ;
-(id)cacheThreadForProviderDomainID:(id)arg0 ;
-(id)cacheThreadForRequest:(id)arg0 ;
-(id)cacheThreadForVolume:(id)arg0 ;
-(id)genStoreThumbnailForItemAtURL:(id)arg0 request:(id)arg1 ;
-(id)imageDataForImage:(struct CGImage *)arg0 ;
-(id)init;
-(id)initWithCacheSize:(NSInteger)arg0 location:(id)arg1 ;
-(id)makeCacheThreadForPersonaString:(id)arg0 containerURL:(*id)arg1 ;
-(id)processedPNGAppIconDataForData:(id)arg0 ofType:(id)arg1 size:(struct CGSize )arg2 scale:(CGFloat)arg3 ;
-(id)uncachedCacheThreadForFileAtURL:(id)arg0 ;
-(id)uncachedCacheThreadForItem:(id)arg0 ;
-(id)uncachedCacheThreadForProviderDomainID:(id)arg0 ;
-(struct CGImage *)_createUndecoratedAppIconForData:(id)arg0 ofSize:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(void)_addAllThumbnailsSizesToCacheForRequest:(id)arg0 withImageSource:(struct CGImageSource *)arg1 imageSize:(struct CGSize )arg2 alreadyCachedSize:(struct CGSize )arg3 completionHandler:(id)arg4 ;
-(void)_addThumbnailRequestBatchToQueue:(id)arg0 generationHandler:(id)arg1 completionHandler:(id)arg2 ;
// -(void)_callCompletionHandler:(id)arg0 ofThumbnailRequestBatch:(unk)arg1  ;
-(void)_completeHandledThumbnailRequest:(id)arg0 ;
-(void)_notifyGenerationHandlerOfThumbnailGenerationForRequest:(id)arg0 bitmapData:(id)arg1 format:(id)arg2 metadata:(id)arg3 contentRect:(struct CGRect )arg4 iconFlavor:(int)arg5 thumbnailRepresentation:(NSInteger)arg6 clientShouldTakeOwnership:(BOOL)arg7 error:(id)arg8 ;
-(void)_removeRequestFromPendingRequests:(id)arg0 ;
-(void)_saveLargeThumbnailForDocumentAtURL:(id)arg0 toGenstoreWithImage:(struct CGImage *)arg1 automaticallyGenerated:(BOOL)arg2 ;
-(void)_saveLargeThumbnailToGenstoreWithData:(id)arg0 url:(id)arg1 ;
-(void)_updateInformationForProviderAndCallPendingBlocksForProviderDomainID:(id)arg0 withConnection:(id)arg1 inboxURL:(id)arg2 thumbnailsURL:(id)arg3 ;
-(void)addImageData:(id)arg0 toCacheForRequest:(id)arg1 withBitmapFormat:(id)arg2 contentRect:(struct CGRect )arg3 flavor:(int)arg4 metadata:(id)arg5 ;
-(void)addImageData:(id)arg0 withBitmapFormat:(id)arg1 contentRect:(struct CGRect )arg2 hasIconModeApplied:(BOOL)arg3 flavor:(int)arg4 extensionBadge:(id)arg5 metadata:(id)arg6 toCacheAndCompleteRequest:(id)arg7 ;
-(void)cancelThumbnailRequests:(id)arg0 ;
-(void)completeThumbnailRequest:(id)arg0 bitmapData:(id)arg1 metadata:(id)arg2 contentRect:(struct CGRect )arg3 thumbnailRepresentation:(NSInteger)arg4 iconFlavor:(int)arg5 format:(id)arg6 clientShouldTakeOwnership:(BOOL)arg7 ;
-(void)completeThumbnailRequest:(id)arg0 thumbnailData:(id)arg1 updatedMetadata:(id)arg2 ;
-(void)didNotFindLowQualityEntryInCachedForThumbnailRequest:(id)arg0 error:(id)arg1 ;
-(void)downloadUncachedThumbnailForUbiquitousThumbnailRequest:(id)arg0 ;
-(void)drainDownloadsQueueIfNeeded;
-(void)failedToCompleteThumbnailRequest:(id)arg0 error:(id)arg1 ;
-(void)findThumbnailInAddition:(id)arg0 request:(id)arg1 url:(id)arg2 completionHandler:(id)arg3 ;
-(void)findUncachedThumbnailForFileThumbnailRequest:(id)arg0 ;
-(void)findUncachedThumbnailForFileThumbnailRequest:(id)arg0 taggedLogicalPromisedURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)findUncachedThumbnailForFileThumbnailRequest:(id)arg0 taggedLogicalURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)findUncachedThumbnailForThumbnailRequest:(id)arg0 downloadedFileAtTaggedLogicalURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)findUncachedThumbnailForThumbnailRequest:(id)arg0 downloadedItem:(id)arg1 atTaggedLogicalURL:(id)arg2 completionHandler:(id)arg3 ;
-(void)findUncachedThumbnailForUbiquitousThumbnailRequest:(id)arg0 ;
-(void)findUncachedThumbnailForUbiquitousThumbnailRequest:(id)arg0 atURL:(id)arg1 ;
-(void)findUncachedThumbnailForUndownloadedItemAtURL:(id)arg0 ubiquitousRequest:(id)arg1 ;
-(void)findUncachedThumbnailInExternalThumbnailCacheForRequest:(id)arg0 item:(id)arg1 URL:(id)arg2 completionHandler:(id)arg3 ;
-(void)findUncachedThumbnailInGenStoreAndExternalThumbnailCacheForRequest:(id)arg0 item:(id)arg1 URL:(id)arg2 completionHandler:(id)arg3 ;
-(void)forEachCacheThread:(id)arg0 ;
-(void)generateSuccessiveThumbnailRepresentationsForRequests:(id)arg0 generationHandler:(id)arg1 completionHandler:(id)arg2 ;
-(void)generateThumbnailForThumbnailRequest:(id)arg0 item:(id)arg1 atTaggedLogicalURL:(id)arg2 shouldUpdateGenstore:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)getExternalThumbnailCacheConnectionForItem:(id)arg0 atURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)perform:(id)arg0 ;
// -(void)perform:(id)arg0 afterDelay:(unk)arg1  ;
-(void)processLargeThumbnailData:(id)arg0 withContentType:(id)arg1 precacheThumbnails:(BOOL)arg2 forRequest:(id)arg3 url:(id)arg4 completionHandler:(id)arg5 ;
-(void)queueThumbnailRequest:(id)arg0 tryCache:(BOOL)arg1 tryAdditionsFirst:(BOOL)arg2 ;
-(void)receivedExternalCacheConnection:(id)arg0 error:(id)arg1 forProviderDomainID:(id)arg2 ;
-(void)removeCachedThumbnailsFromUninstalledFileProvidersWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)reset;
-(void)sendResultForThumbnailRequest:(id)arg0 bitmapData:(id)arg1 format:(id)arg2 metadata:(id)arg3 contentRect:(struct CGRect )arg4 iconFlavor:(int)arg5 thumbnailRepresentation:(NSInteger)arg6 clientShouldTakeOwnership:(BOOL)arg7 reenqueueRequest:(BOOL)arg8 error:(id)arg9 ;
-(void)setLastHitDateOfAllCachedThumbnailsToDate:(id)arg0 ;
-(void)storeImage:(struct CGImage *)arg0 inExternalThumbnailCacheForItem:(id)arg1 atURL:(id)arg2 ;
-(void)thumbnailRequestWasCancelled:(id)arg0 ;


@end


#endif