// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMANAGEDASSETCACHE_H
#define AVMANAGEDASSETCACHE_H



#import "AVAssetCache.h"
#import "AVManagedAssetCacheInternal.h"

@interface AVManagedAssetCache : AVAssetCache {
    AVManagedAssetCacheInternal *_priv;
}




+(id)assetCacheForHTTPLiveStreamingWithURL:(id)arg0 ;
+(id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)arg0 ;
+(id)assetCacheForProgressiveDownloadWithURL:(id)arg0 ;
+(id)assetCacheWithURL:(id)arg0 ;
-(BOOL)isHTTPLiveStreamingCacheEnabled;
-(BOOL)isPlayableOffline;
-(BOOL)isProgressiveDownloadCacheEnabled;
-(NSInteger)currentSize;
-(NSInteger)maxEntrySize;
-(NSInteger)maxSize;
-(NSInteger)sizeOfEntryForKey:(id)arg0 ;
-(id)URL;
-(id)allKeys;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 enableCRABSCache:(BOOL)arg1 enableHLSCache:(BOOL)arg2 ;
-(id)lastModifiedDateOfEntryForKey:(id)arg0 ;
-(id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg0 ;
-(void)dealloc;
-(void)removeEntryForKey:(id)arg0 ;
-(void)setMaxEntrySize:(NSInteger)arg0 ;
-(void)setMaxSize:(NSInteger)arg0 ;


@end


#endif