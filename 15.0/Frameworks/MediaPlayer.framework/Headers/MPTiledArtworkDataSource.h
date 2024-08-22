// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPTILEDARTWORKDATASOURCE_H
#define MPTILEDARTWORKDATASOURCE_H

@class NSCountedSet, NSCache, NSOperationQueue, NSString;
@protocol MPArtworkDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPTiledArtworkDataSource : NSObject <MPArtworkDataSource>

 {
    NSCountedSet *_loadingTiledArtworkRequests;
    NSObject<OS_dispatch_queue> *_loadingTiledArtworkRequestsAccessQueue;
    NSObject<OS_dispatch_queue> *_renderingTiledArtworkRequestsQueue;
    NSCache *_tiledArtworkRepresentationFallbackCache;
    NSOperationQueue *_tilingArtworkCatalogOperationQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_errorWithDescription:(id)arg0 ;
+(id)_loadingRequestForArtworkCatalog:(id)arg0 ;
+(id)_representationCacheKeyForArtworkCatalog:(id)arg0 forAnyRevision:(BOOL)arg1 ;
+(id)sharedDataSource;
+(struct CGSize )_tileSizeForFittingSize:(struct CGSize )arg0 rows:(NSUInteger)arg1 columns:(NSUInteger)arg2 spacing:(CGFloat)arg3 ;
-(BOOL)_hasLoadingRequestForArtworkCatalog:(id)arg0 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(BOOL)isRepresentation:(id)arg0 bestRepresentationForArtworkCatalog:(id)arg1 ;
-(id)existingArtworkEffectResultForEffectType:(NSInteger)arg0 catalog:(id)arg1 options:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg0 ;
-(id)init;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg0 ;
-(void)_addLoadingRequestForArtworkCatalog:(id)arg0 ;
-(void)_performAsyncBlock:(id)arg0 ;
-(void)_performSyncBlock:(id)arg0 ;
-(void)_removeLoadingRequestForArtworkCatalog:(id)arg0 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg0 ;
// -(void)loadArtworkEffectResultForEffectType:(NSInteger)arg0 catalog:(id)arg1 options:(id)arg2 systemEffectHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif