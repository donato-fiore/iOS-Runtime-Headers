// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXANIMATEDIMAGEVIEWCACHE_H
#define SXANIMATEDIMAGEVIEWCACHE_H

@class NSMutableArray, NSMutableIndexSet, NSOperationQueue;
@protocol SXAnimatedImageViewCacheDelegate;

#import <Foundation/Foundation.h>

#import "SXAnimatedImage.h"

@interface SXAnimatedImageViewCache : NSObject

@property (weak, nonatomic) SXAnimatedImage *animatedImage; // ivar: _animatedImage
@property (readonly, nonatomic) NSMutableArray *cachedImages; // ivar: _cachedImages
@property (nonatomic) BOOL cachingEnabled; // ivar: _cachingEnabled
@property (weak, nonatomic) NSObject<SXAnimatedImageViewCacheDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSMutableIndexSet *indicesToCache; // ivar: _indicesToCache
@property NSUInteger lastRequestedIndex; // ivar: _lastRequestedIndex
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSUInteger maxCacheSize;
@property (nonatomic) NSUInteger numberOfCachedImages; // ivar: _numberOfCachedImages
@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property NSInteger singleImageByteSize; // ivar: _singleImageByteSize
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (nonatomic, getter=preloadingSuspended) BOOL suspendPreloading;


-(NSUInteger)nearestCachedFrameIndexForFrameIndex:(NSUInteger)arg0 ;
-(id)decodeImageFromSource:(struct CGImageSource *)arg0 index:(NSUInteger)arg1 ;
-(id)imageForFrameIndex:(NSUInteger)arg0 ;
-(id)initWithImageSize:(struct CGSize )arg0 ;
-(void)cacheNextImage;
-(void)checkCacheSize;
-(void)decreaseCacheSize;
-(void)prepareCache;
-(void)prepareImageForFrameIndex:(NSUInteger)arg0 ;
-(void)prune;
-(void)restoreCacheSize;


@end


#endif