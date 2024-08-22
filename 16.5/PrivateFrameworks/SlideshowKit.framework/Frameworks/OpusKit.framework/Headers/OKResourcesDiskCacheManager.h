// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKRESOURCESDISKCACHEMANAGER_H
#define OKRESOURCESDISKCACHEMANAGER_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface OKResourcesDiskCacheManager : NSObject {
    NSURL *_baseURL;
    NSObject<OS_dispatch_queue> *_globalQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}




+(id)_sharedResourcesDirectoryURL;
+(id)sharedManager;
+(id)temporaryManagerWithIdentifier:(id)arg0 ;
-(BOOL)_readCachedMediaItem:(id)arg0 error:(*id)arg1 byMetadataAccessor:(id)arg2 ;
-(BOOL)_readCachedMediaItem:(id)arg0 resolution:(NSUInteger)arg1 error:(*id)arg2 byThumbnailAccessor:(id)arg3 ;
-(BOOL)_writeCachedMediaItem:(id)arg0 error:(*id)arg1 byMetadataAccessor:(id)arg2 ;
-(BOOL)_writeCachedMediaItem:(id)arg0 error:(*id)arg1 byResourcesAccessor:(id)arg2 ;
-(BOOL)_writeCachedMediaItem:(id)arg0 error:(*id)arg1 byThumbnailsAccessor:(id)arg2 ;
-(BOOL)_writeCachedMediaItem:(id)arg0 resolution:(NSUInteger)arg1 error:(*id)arg2 byThumbnailAccessor:(id)arg3 ;
-(BOOL)_writeResources:(*id)arg0 byResourcesAccessor:(id)arg1 ;
-(BOOL)hasMetadataForMediaItem:(id)arg0 metadata:(*id)arg1 error:(*id)arg2 ;
-(BOOL)hasThumbnailForMediaItem:(id)arg0 resolution:(NSUInteger)arg1 thumbnail:(*id)arg2 error:(*id)arg3 ;
-(BOOL)removeAllCaches:(*id)arg0 ;
-(BOOL)removeMediaItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeMediaItemsAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeMetadataForMediaItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeThumbnailForMediaItem:(id)arg0 resolution:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)removeThumbnailsForMediaItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)setMetadata:(id)arg0 forMediaItem:(id)arg1 error:(*id)arg2 ;
-(BOOL)setThumbnail:(id)arg0 forMediaItem:(id)arg1 resolution:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)_cacheResourceMetadataURLForMediaItem:(id)arg0 ;
-(id)_cacheResourceThumbnailURLForMediaItem:(id)arg0 resolution:(NSUInteger)arg1 ;
-(id)_cacheResourceThumbnailsURLForMediaItem:(id)arg0 ;
-(id)_cachedResourceDirectoryURLForMediaItem:(id)arg0 ;
-(id)cachedMediaItemURLs:(*id)arg0 ;
-(id)init;
-(id)initWithBaseURL:(id)arg0 ;
-(id)metadataForMediaItem:(id)arg0 error:(*id)arg1 ;
-(id)resourcesDirectoryURL;
-(id)thumbnailForMediaItem:(id)arg0 resolution:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)_performAsynchronousResourceAccessUsingBlock:(id)arg0 ;
-(void)dealloc;
-(void)performAsynchronousResourceAccessUsingBlock:(id)arg0 ;


@end


#endif