// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETDOWNLOADCACHE_H
#define AVASSETDOWNLOADCACHE_H



#import "AVAssetCache.h"
#import "AVAssetDownloadCacheInternal.h"

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal *_internal;
}




-(BOOL)isPlayableOffline;
-(id)URL;
-(id)_asset;
-(id)initWithAsset:(id)arg0 ;
-(id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg0 ;
-(void)dealloc;


@end


#endif