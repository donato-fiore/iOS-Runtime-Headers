// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPARTWORKDATASOURCEURLCACHE_H
#define _MPARTWORKDATASOURCEURLCACHE_H

@class NSURLCache, NSMapTable;
@protocol OS_dispatch_queue;



@interface _MPArtworkDataSourceURLCache : NSURLCache {
    NSMapTable *_requestSizeMap;
    NSObject<OS_dispatch_queue> *_accessQueue;
}




-(id)initWithMemoryCapacity:(NSUInteger)arg0 diskCapacity:(NSUInteger)arg1 diskPath:(id)arg2 ;
-(void)setRepresentationSize:(struct CGSize )arg0 forRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg0 forRequest:(id)arg1 ;


@end


#endif