// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTLAYOUTCACHE_H
#define TSCHCHARTLAYOUTCACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSCHChartLayoutCache : NSObject {
    NSMutableArray *_cacheItems;
}


@property (nonatomic) BOOL ignoreInvalidation; // ivar: _ignoreInvalidation


+(id)cacheWithCacheItem:(id)arg0 ;
-(id)init;
-(id)initWithCacheItem:(id)arg0 ;
// -(void)accessWithCacheItemBlock:(id)arg0 calculateBlock:(unk)arg1  ;
-(void)invalidate;
-(void)printDebug;


@end


#endif