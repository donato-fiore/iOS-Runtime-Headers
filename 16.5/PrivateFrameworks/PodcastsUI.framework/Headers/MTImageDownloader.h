// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTIMAGEDOWNLOADER_H
#define MTIMAGEDOWNLOADER_H

@class NSMutableDictionary;
@protocol MTFeedIngesterImageDownloaderProtocol, OS_dispatch_queue;


#import "MTURLSessionManager.h"
#import "MTImageStore.h"

@interface MTImageDownloader : MTURLSessionManager <MTFeedIngesterImageDownloaderProtocol>



@property (retain, nonatomic) NSMutableDictionary *clientRequestsByUrl; // ivar: _clientRequestsByUrl
@property (nonatomic) BOOL hasPurgedTemporaryResourcesDirectory; // ivar: _hasPurgedTemporaryResourcesDirectory
@property (retain, nonatomic) MTImageStore *imageStore; // ivar: _imageStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageWorkQueue; // ivar: _imageWorkQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue


-(BOOL)_completeUsingExistingDownloadedImageForUuid:(id)arg0 imageUrl:(id)arg1 ;
-(BOOL)_shouldDiscardTransparency;
-(CGFloat)_urlSessionResourceTimeout;
-(NSInteger)_enqueueClientInfoWithUrl:(id)arg0 key:(id)arg1 podcastUuid:(id)arg2 completion:(id)arg3 ;
-(id)_clientRequestsForUrl:(id)arg0 ;
-(id)_keyForImageDownloaderTempFilename:(id)arg0 ;
-(id)_temporaryImagePathByCopyingDownloadedContent:(id)arg0 uuid:(id)arg1 error:(*id)arg2 ;
-(id)_temporaryImagePathForDownloadedImageWithUuid:(id)arg0 ;
-(id)_temporaryResourcesDirectory;
-(id)init;
-(void)_dequeueClientRequests:(id)arg0 ;
-(void)_downloadImageUrl:(id)arg0 cacheKey:(id)arg1 podcastUuid:(id)arg2 userInitiated:(BOOL)arg3 backgroundFetch:(BOOL)arg4 callback:(id)arg5 ;
-(void)_finishProcessingClientRequests:(id)arg0 originalUrl:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)_onImageWorkQueuePurgeUnneededItemsInTemporaryResourcesDirectoryIfNecessary;
// -(void)_processFinishedDownloadWithContentURL:(id)arg0 originalUrl:(id)arg1 actualRequestUrl:(id)arg2 finishedWithContentHandler:(id)arg3 processedKeys:(unk)arg4  ;
-(void)_saveArtworkImageUrl:(id)arg0 forPodcastUuids:(id)arg1 logHeader:(id)arg2 ;
-(void)cleanupTemporaryResourcesDirectoryIfNecessary;
-(void)configureSession:(id)arg0 ;
-(void)downloadImageForPodcastUuid:(id)arg0 urlOptions:(id)arg1 userInitiated:(BOOL)arg2 useBackgroundFetch:(BOOL)arg3 ;
-(void)downloadImageForPodcastUuid:(id)arg0 urlOptions:(id)arg1 userInitiated:(BOOL)arg2 useBackgroundFetch:(BOOL)arg3 callback:(id)arg4 ;
-(void)downloadImageForPodcastUuid:(id)arg0 userInitiated:(BOOL)arg1 backgroundFetch:(BOOL)arg2 callback:(id)arg3 ;
-(void)downloadImageUrl:(id)arg0 cacheKey:(id)arg1 userInitiated:(BOOL)arg2 backgroundFetch:(BOOL)arg3 ;
-(void)downloadImageUrl:(id)arg0 cacheKey:(id)arg1 userInitiated:(BOOL)arg2 backgroundFetch:(BOOL)arg3 callback:(id)arg4 ;
-(void)downloadImageUrl:(id)arg0 cacheKey:(id)arg1 userInitiated:(BOOL)arg2 callback:(id)arg3 ;
-(void)task:(id)arg0 didCompleteWithDownloadedContentUrl:(id)arg1 ;
-(void)task:(id)arg0 didFailWithError:(id)arg1 orStatusCode:(NSInteger)arg2 ;


@end


#endif