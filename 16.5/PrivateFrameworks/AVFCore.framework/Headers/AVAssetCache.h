// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETCACHE_H
#define AVASSETCACHE_H


#import <Foundation/Foundation.h>


@interface AVAssetCache : NSObject

@property (readonly, nonatomic, getter=isPlayableOffline) BOOL playableOffline;


+(id)assetCacheForHTTPLiveStreamingWithURL:(id)arg0 ;
+(id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)arg0 ;
+(id)assetCacheForProgressiveDownloadWithURL:(id)arg0 ;
+(id)assetCacheWithURL:(id)arg0 ;
-(NSInteger)currentSize;
-(NSInteger)maxEntrySize;
-(NSInteger)maxSize;
-(NSInteger)sizeOfEntryForKey:(id)arg0 ;
-(id)URL;
-(id)_init;
-(id)allKeys;
-(id)initWithURL:(id)arg0 ;
-(id)lastModifiedDateOfEntryForKey:(id)arg0 ;
-(id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg0 ;
-(void)removeEntryForKey:(id)arg0 ;


@end


#endif