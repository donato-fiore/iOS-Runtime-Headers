// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRLIKENESSCACHE_H
#define PRLIKENESSCACHE_H

@class NSCache, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PRLikenessCache : NSObject {
    NSCache *_inMemoryCache;
    NSObject<OS_dispatch_queue> *_cacheLookupQueue;
}


@property (retain, nonatomic) NSURL *cacheDirectory; // ivar: _cacheDirectory
@property (nonatomic) BOOL renderIfNeeded; // ivar: _renderIfNeeded
@property (nonatomic) BOOL useFilesystem; // ivar: _useFilesystem
@property (nonatomic) BOOL useMemory; // ivar: _useMemory


+(BOOL)_ensureExistenceOfDirectory:(id)arg0 ;
+(BOOL)_purgeOldCacheFilesInDirectory:(id)arg0 ;
+(BOOL)_removeImageAtURL:(id)arg0 ;
+(BOOL)_writeImage:(id)arg0 toURL:(id)arg1 ;
+(id)_applicationCacheDirectory;
+(id)_imageAtURL:(id)arg0 ;
+(id)_propertyValueForURL:(id)arg0 forKey:(id)arg1 ;
+(id)_staticRepresentationCacheURL;
+(id)sharedInstance;
-(id)_cacheKeyForLikeness:(id)arg0 context:(id)arg1 ;
-(id)_cacheURLForLikeness:(id)arg0 context:(id)arg1 ;
-(id)init;
// -(void)_fetchFromFilesystem:(id)arg0 context:(id)arg1 renderBlock:(id)arg2 completion:(unk)arg3  ;
// -(void)_fetchFromMemory:(id)arg0 context:(id)arg1 renderBlock:(id)arg2 completion:(unk)arg3  ;
// -(void)_fetchWithReadBlock:(id)arg0 writeBlock:(unk)arg1 renderBlock:(id)arg2 completion:(unk)arg3  ;
-(void)_renderImageForLikeness:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)imageForLikeness:(id)arg0 context:(id)arg1 completion:(id)arg2 ;


@end


#endif