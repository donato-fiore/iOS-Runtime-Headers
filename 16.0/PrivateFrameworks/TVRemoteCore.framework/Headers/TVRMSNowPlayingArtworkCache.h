// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRMSNOWPLAYINGARTWORKCACHE_H
#define TVRMSNOWPLAYINGARTWORKCACHE_H

@class NSCache;

#import <Foundation/Foundation.h>

#import "_RMSNowPlayingArtworkCacheItem.h"

@interface TVRMSNowPlayingArtworkCache : NSObject {
    _RMSNowPlayingArtworkCacheItem *_lastItem;
    NSCache *_cache;
}




+(id)sharedArtworkCache;
-(id)artworkDataForIdentifier:(id)arg0 ;
-(id)artworkDataForNowPlayingInfo:(id)arg0 ;
-(id)init;
-(void)setArtworkData:(id)arg0 forIdentifier:(id)arg1 ;
-(void)setArtworkData:(id)arg0 forNowPlayingInfo:(id)arg1 ;


@end


#endif