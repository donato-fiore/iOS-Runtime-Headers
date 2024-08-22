// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIIMAGECACHE_H
#define SEARCHUIIMAGECACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface SearchUIImageCache : NSObject

@property (retain) NSCache *imageCache; // ivar: _imageCache


+(id)cachedTlkImageForSFImage:(id)arg0 ;
+(id)sharedCache;
+(void)cacheTLKImage:(id)arg0 forSFImage:(id)arg1 ;
-(id)init;
-(void)appIconImageDidChange:(id)arg0 ;
-(void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)arg0 ;
-(void)clearImagesWithNotification:(id)arg0 ;
-(void)dateDidChange;


@end


#endif