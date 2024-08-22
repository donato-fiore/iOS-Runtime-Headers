// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCTHUMBNAILCACHE_H
#define DOCTHUMBNAILCACHE_H

@class NSMapTable, NSCache;

#import <Foundation/Foundation.h>


@interface DOCThumbnailCache : NSObject

@property (readonly, nonatomic) NSMapTable *cachedThumbnailNodes; // ivar: _cachedThumbnailNodes
@property (readonly, nonatomic) NSCache *recentlyUsedNodes; // ivar: _recentlyUsedNodes


-(id)init;
-(void)clear;


@end


#endif