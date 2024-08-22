// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSURLCACHE_H
#define NSURLCACHE_H


#import <Foundation/Foundation.h>

#import "NSURLCacheInternal.h"

@interface NSURLCache : NSObject {
    NSURLCacheInternal *_internal;
}


@property (readonly) NSUInteger currentDiskUsage;
@property (readonly) NSUInteger currentMemoryUsage;
@property NSUInteger diskCapacity;
@property NSUInteger memoryCapacity;


+(id)sharedURLCache;
+(void)setSharedURLCache:(id)arg0 ;
-(*void)_CFURLCache;
-(BOOL)_isVaryHeaderSupportEnabled;
-(CGFloat)_maxCacheableEntrySizeRatio;
-(NSInteger)_nscfBridgeURLCacheCurrentDiskUsage;
-(NSInteger)_nscfBridgeURLCacheCurrentMemoryUsage;
-(NSInteger)_nscfBridgeURLCacheDiskCapacity;
-(NSInteger)_nscfBridgeURLCacheMemoryCapacity;
-(id)_cacheDirectory;
-(id)_diskCacheDefaultPath;
-(id)_initVaryHeaderEnabledWithPath:(id)arg0 ;
-(id)_initWithExistingCFURLCache:(*void)arg0 ;
-(id)_initWithIdentifier:(id)arg0 memoryCapacity:(NSInteger)arg1 diskCapacity:(NSInteger)arg2 private:(BOOL)arg3 ;
-(id)_initWithMemoryCapacity:(NSUInteger)arg0 diskCapacity:(NSUInteger)arg1 relativePath:(id)arg2 ;
-(id)_varyStateForURL:(id)arg0 ;
-(id)cachedResponseForRequest:(id)arg0 ;
-(id)init;
-(id)initWithMemoryCapacity:(NSUInteger)arg0 diskCapacity:(NSUInteger)arg1 directoryURL:(id)arg2 ;
-(id)initWithMemoryCapacity:(NSUInteger)arg0 diskCapacity:(NSUInteger)arg1 diskPath:(id)arg2 ;
-(struct _CFCachedURLResponse *)_nscfBridgeURLCacheCopyResponseForRequest:(struct _CFURLRequest *)arg0 ;
-(void)_nscfBridgeURLCacheRemoveAllCachedResponses;
-(void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)arg0 ;
-(void)_nscfBridgeURLCacheSetDiskCapacity:(NSInteger)arg0 ;
-(void)_nscfBridgeURLCacheSetMemoryCapacity:(NSInteger)arg0 ;
-(void)_nscfBridgeURLCacheStoreCachedResponse:(struct _CFCachedURLResponse *)arg0 forRequest:(struct _CFURLRequest *)arg1 ;
-(void)_updateVaryState:(id)arg0 forURL:(id)arg1 ;
-(void)dealloc;
-(void)flushWithCompletion:(id)arg0 ;
-(void)getCachedResponseForDataTask:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllCachedResponses;
-(void)removeCachedResponseForDataTask:(id)arg0 ;
-(void)removeCachedResponseForRequest:(id)arg0 ;
-(void)removeCachedResponsesSinceDate:(id)arg0 ;
-(void)set_maxCacheableEntrySizeRatio:(CGFloat)arg0 ;
-(void)storeCachedResponse:(id)arg0 forDataTask:(id)arg1 ;
-(void)storeCachedResponse:(id)arg0 forRequest:(id)arg1 ;


@end


#endif