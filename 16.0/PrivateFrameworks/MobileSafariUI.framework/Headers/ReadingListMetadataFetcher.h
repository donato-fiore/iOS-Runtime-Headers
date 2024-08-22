// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef READINGLISTMETADATAFETCHER_H
#define READINGLISTMETADATAFETCHER_H

@class WebBookmarkCollection, NSMutableArray;
@protocol OS_dispatch_queue, ReadingListMetadataProvider;

#import <Foundation/Foundation.h>


@interface ReadingListMetadataFetcher : NSObject {
    WebBookmarkCollection *_collection;
    NSObject<OS_dispatch_queue> *_metadataSynchronizationQueue;
    NSMutableArray *_bookmarksPendingMetadata;
    BOOL _isFetchingMetadata;
    NSMutableArray *_bookmarksPendingThumbnail;
    id<ReadingListMetadataProvider> *_defaultThumbnailProvider;
    BOOL _isFetchingThumbnail;
}




+(BOOL)shouldFetchMetadataForBookmark:(id)arg0 ;
+(BOOL)shouldFetchThumbnailForBookmark:(id)arg0 ;
+(id)sharedMetadataFetcher;
-(BOOL)_lockAndSaveBookmark:(id)arg0 postNotification:(BOOL)arg1 ;
-(BOOL)_queue:(id)arg0 containsBookmark:(id)arg1 ;
-(id)_initWithBookmarkCollection:(id)arg0 ;
-(void)_didFailMetadataFetchForBookmarkWithID:(int)arg0 ;
-(void)_didFinishFetchingMetadataForItem:(id)arg0 ;
-(void)_didFinishFetchingThumbnailForItem:(id)arg0 ;
-(void)_fetchMetadataForPendingItem:(id)arg0 ;
-(void)_fetchMetadataWithDefaultProviderForPendingItem:(id)arg0 ;
-(void)_fetchNextItemMetadata;
-(void)_fetchNextItemThumbnail;
-(void)_fetchThumbnailForPendingItem:(id)arg0 ;
-(void)_fetchThumbnailWithDefaultProviderForPendingItem:(id)arg0 ;
-(void)_setThumbnailImage:(id)arg0 fromURL:(id)arg1 forBookmarkWithID:(int)arg2 ;
-(void)_setTitle:(id)arg0 previewText:(id)arg1 thumbnailURLString:(id)arg2 thumbnailImage:(id)arg3 forItem:(id)arg4 ;
-(void)fetchMetadataForReadingListBookmark:(id)arg0 withProvider:(id)arg1 ;
-(void)fetchThumbnailForReadingListBookmark:(id)arg0 withProvider:(id)arg1 ;


@end


#endif