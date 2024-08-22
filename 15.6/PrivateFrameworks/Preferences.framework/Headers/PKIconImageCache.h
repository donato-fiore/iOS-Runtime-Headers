// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKICONIMAGECACHE_H
#define PKICONIMAGECACHE_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKIconImageCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheAccessQueue; // ivar: _cacheAccessQueue
@property (retain, nonatomic) NSDictionary *iconCache; // ivar: _iconCache


+(id)settingsIconCache;
+(id)settingsIconCacheWithScale:(CGFloat)arg0 ;
-(id)allImageIconKeys;
-(id)imageForKey:(id)arg0 ;
-(id)initWithPath:(id)arg0 scale:(CGFloat)arg1 ;


@end


#endif