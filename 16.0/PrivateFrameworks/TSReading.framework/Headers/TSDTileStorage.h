// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDTILESTORAGE_H
#define TSDTILESTORAGE_H

@class NSCache, TSUPointerKeyDictionary, NSMutableDictionary, NSString;
@protocol NSCacheDelegate, OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSDTileStorage : NSObject <NSCacheDelegate>

 {
    NSCache *mCache;
    TSUPointerKeyDictionary *mReverseCacheKeys;
    NSObject<OS_dispatch_semaphore> *mReverseCacheKeysLock;
    NSObject<OS_dispatch_queue> *mCacheKeysQueue;
    NSMutableDictionary *mCacheKeysByBucket;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)contentsInRect:(struct CGRect )arg0 contentsScale:(CGFloat)arg1 forTileAtLocation:(struct ? )arg2 inBucket:(id)arg3 ;
-(id)init;
-(id)p_cacheKeyForImageInRect:(struct CGRect )arg0 contentsScale:(CGFloat)arg1 tileLocation:(struct ? )arg2 ;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)dealloc;
-(void)removeAllContents;
-(void)removeImagesInBucket:(id)arg0 ;
-(void)storeContents:(id)arg0 inRect:(struct CGRect )arg1 contentsScale:(CGFloat)arg2 forTileAtLocation:(struct ? )arg3 inBucket:(id)arg4 ;


@end


#endif