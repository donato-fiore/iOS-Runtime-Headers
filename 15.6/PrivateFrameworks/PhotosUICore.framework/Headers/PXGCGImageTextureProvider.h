// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGCGIMAGETEXTUREPROVIDER_H
#define PXGCGIMAGETEXTUREPROVIDER_H

@class NSCache, NSMapTable;
@protocol OS_dispatch_queue;


#import "PXGTextureProvider.h"

@interface PXGCGImageTextureProvider : PXGTextureProvider {
    NSCache *_imageCache;
    NSCache *_additionalInfoCache;
    NSMapTable *_aliveImagesCache;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;


-(id)init;
-(void)_clearStrongCaches;
-(void)_updateCacheLimit;
-(void)cacheAdditionalInfo:(id)arg0 withKey:(id)arg1 ;
-(void)invalidateCache;
-(void)lowMemoryModeDidChange;
-(void)releaseCachedResources;
// -(void)requestCGImageAndAdditionalInfoWithCacheKey:(id)arg0 imageProvider:(id)arg1 resultHandler:(unk)arg2  ;
// -(void)requestCGImageWithCacheKey:(id)arg0 imageProvider:(id)arg1 resultHandler:(unk)arg2  ;


@end


#endif