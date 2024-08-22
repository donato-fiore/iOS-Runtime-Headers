// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHCACHINGIMAGEMANAGER_H
#define PHCACHINGIMAGEMANAGER_H

@class NSMutableSet, NSString;
@protocol PHImageCacheDelegate, OS_dispatch_queue, OS_dispatch_source;


#import "PHImageManager.h"
#import "PHImageCache.h"

@interface PHCachingImageManager : PHImageManager <PHImageCacheDelegate>

 {
    NSMutableSet *_cachingRequestIDs;
    os_unfair_lock_s _cachingLock;
    PHImageCache *_imageCache;
    BOOL _imageCacheCommitScheduled;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_memoryEventSource;
}


@property (nonatomic) BOOL allowsCachingHighQualityImages; // ivar: _allowsCachingHighQualityImages
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_chooseImageTableFormatForPreheatingFromFormats:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 returnBestTableRegardlessOfFit:(BOOL)arg3 ;
-(BOOL)_cacheImageResult:(id)arg0 forRequest:(id)arg1 ;
-(BOOL)_canPopulateCacheForResult:(id)arg0 ;
-(id)_cacheFailReasonFromInfo:(id)arg0 ;
-(id)_imageTableForPreheatingDegradedOpportunisticRequestsWithPhotoLibrary:(id)arg0 ;
-(id)_tableFormatsForLibrary:(id)arg0 ;
-(id)init;
-(void)_commitCacheChanges;
-(void)_handleCachingImageRequestResult:(id)arg0 request:(id)arg1 context:(id)arg2 ;
-(void)_handleMemoryWarning;
-(void)_preheatImageTable:(id)arg0 forAssets:(id)arg1 ;
-(void)_scheduleOrCommitCacheChangesIfNeeded;
-(void)additionalWorkForImageRequestCompletedWithResult:(id)arg0 request:(id)arg1 context:(id)arg2 ;
-(void)imageCache:(id)arg0 didEvictCacheEntry:(id)arg1 ;
-(void)mediaRequestContext:(id)arg0 isQueryingCacheForRequest:(id)arg1 didWait:(*BOOL)arg2 didFindImage:(*BOOL)arg3 resultHandler:(id)arg4 ;
-(void)startCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;
-(void)stopCachingImagesForAllAssets;
-(void)stopCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;


@end


#endif