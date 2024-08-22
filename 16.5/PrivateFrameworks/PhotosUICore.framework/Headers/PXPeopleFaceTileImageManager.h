// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLEFACETILEIMAGEMANAGER_H
#define PXPEOPLEFACETILEIMAGEMANAGER_H

@class NSMapTable, NSString;
@protocol NSCacheDelegate, PXPhotoLibraryUIChangeObserver, OS_dispatch_queue, NSObject;

#import <Foundation/Foundation.h>

#import "PXLRUMemoryCache.h"

@interface PXPeopleFaceTileImageManager : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSObject<OS_dispatch_queue> *_requestLookupIsolationQueue;
    NSObject<OS_dispatch_queue> *_cropCacheQueue;
    NSMapTable *_faceTileRequestByRequestID;
    NSMapTable *_highPriorityCachedIdentifiers;
    NSObject<OS_dispatch_queue> *_highPriorityCachedIdentifiersQueue;
}


@property (retain, nonatomic) NSObject<NSObject> *backgroundEntraceObserver; // ivar: _backgroundEntraceObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXLRUMemoryCache *memoryCache; // ivar: _memoryCache
@property (retain, nonatomic) NSObject<NSObject> *memoryWarningObserver; // ivar: _memoryWarningObserver
@property (readonly) Class superclass;


+(id)imageTransformQueue;
+(id)sharedManager;
-(BOOL)_deliverCachedResultIfPossibleForRequest:(id)arg0 allowDegradedDelivery:(BOOL)arg1 completionBlock:(id)arg2 ;
-(BOOL)_doesChange:(id)arg0 containVisibleChangesToPHAssetWithOID:(id)arg1 ;
-(BOOL)isActiveRequestWithRequestID:(int)arg0 ;
-(id)_cachedResultForIdentifier:(id)arg0 params:(struct PXFaceTileImageParams )arg1 isLowResResult:(*BOOL)arg2 ;
-(id)_fetchAssetFromFace:(id)arg0 ;
-(id)_fetchKeyFaceFromPerson:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
// -(int)_requestFaceTileImageFromRequest:(id)arg0 withTargetSize:(struct CGSize )arg1 cropFactor:(NSUInteger)arg2 style:(NSUInteger)arg3 cacheResult:(BOOL)arg4 boundFaceRect:(BOOL)arg5 completionBlock:(id)arg6 fastDisplayBlock:(unk)arg7  ;
// -(int)requestFaceTileImageFromFace:(id)arg0 withTargetSize:(struct CGSize )arg1 cropFactor:(NSUInteger)arg2 style:(NSUInteger)arg3 cacheResult:(BOOL)arg4 boundFaceRect:(BOOL)arg5 completionBlock:(id)arg6 fastDisplayBlock:(unk)arg7  ;
-(int)requestFaceTileImageFromFace:(id)arg0 withTargetSize:(struct CGSize )arg1 cropFactor:(NSUInteger)arg2 style:(NSUInteger)arg3 cacheResult:(BOOL)arg4 completionBlock:(id)arg5 ;
// -(int)requestFaceTileImageFromFace:(id)arg0 withTargetSize:(struct CGSize )arg1 cropFactor:(NSUInteger)arg2 style:(NSUInteger)arg3 cacheResult:(BOOL)arg4 completionBlock:(id)arg5 fastDisplayBlock:(unk)arg6  ;
-(int)requestFaceTileImageFromFace:(id)arg0 withTargetSize:(struct CGSize )arg1 cropFactor:(NSUInteger)arg2 style:(NSUInteger)arg3 completionBlock:(id)arg4 ;
-(int)requestFaceTileImageFromPerson:(id)arg0 withTargetSize:(struct CGSize )arg1 cropFactor:(NSUInteger)arg2 style:(NSUInteger)arg3 cacheResult:(BOOL)arg4 boundFaceRect:(BOOL)arg5 completionBlock:(id)arg6 ;
-(int)requestFaceTileImageFromPerson:(id)arg0 withTargetSize:(struct CGSize )arg1 cropFactor:(NSUInteger)arg2 style:(NSUInteger)arg3 cacheResult:(BOOL)arg4 completionBlock:(id)arg5 ;
-(int)requestFaceTileImageFromPerson:(id)arg0 withTargetSize:(struct CGSize )arg1 cropFactor:(NSUInteger)arg2 style:(NSUInteger)arg3 completionBlock:(id)arg4 ;
// -(int)requestFaceTileImageFromRequest:(id)arg0 withTargetSize:(struct CGSize )arg1 cropFactor:(NSUInteger)arg2 style:(NSUInteger)arg3 completionBlock:(id)arg4 fastDisplayBlock:(unk)arg5  ;
-(struct CGRect )_boundedCropRectForRect:(struct CGRect )arg0 inRect:(struct CGRect )arg1 withTargetAspectRatio:(CGFloat)arg2 ;
-(struct CGRect )_normalizedAspectCropRectForFaceRect:(struct CGRect )arg0 aspectRatio:(CGFloat)arg1 inImageRect:(struct CGRect )arg2 ;
-(void)_addRequestResult:(id)arg0 forIdentifier:(id)arg1 ;
-(void)_cropImage:(id)arg0 synchronous:(BOOL)arg1 cacheResult:(BOOL)arg2 isDegraded:(BOOL)arg3 forRequest:(id)arg4 cropInfo:(struct ? )arg5 didCallFastBlock:(BOOL)arg6 completionBlock:(id)arg7 ;
-(void)_handleMemoryClearRequest;
// -(void)_requestFaceTileImageRequest:(id)arg0 faceImageRequest:(id)arg1 cacheResult:(BOOL)arg2 completionBlock:(id)arg3 fastDisplayBlock:(unk)arg4  ;
-(void)_startListeningForChanges;
-(void)_stopListeningForChanges;
-(void)addHighPriorityCachedItemIdentifier:(id)arg0 forOwner:(id)arg1 ;
-(void)cancelRequest:(int)arg0 ;
-(void)clearMemoryCache;
-(void)dealloc;
-(void)invalidateCacheForPerson:(id)arg0 ;
-(void)removeHighPriorityCachedItemIdentifier:(id)arg0 forOwner:(id)arg1 ;


@end


#endif