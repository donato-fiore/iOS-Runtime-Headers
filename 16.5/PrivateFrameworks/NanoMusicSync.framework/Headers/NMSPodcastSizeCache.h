// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSPODCASTSIZECACHE_H
#define NMSPODCASTSIZECACHE_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NMSPodcastSizeCache : NSObject {
    NSDictionary *_episodeSizeInfoDict;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, nonatomic) NSDictionary *episodeSizeInfoDict;
@property (readonly, nonatomic) NSDictionary *relationshipDict; // ivar: _relationshipDict


+(id)_podcastSizeCacheFilePath;
-(id)_cachedPodcastEpisodeSizeDictionary;
-(id)_initWithCache:(BOOL)arg0 ;
-(id)init;
-(id)itemsForFeedURL:(id)arg0 ;
-(void)_registerForCacheChanged;
-(void)_setupFromCache;
-(void)dealloc;


@end


#endif