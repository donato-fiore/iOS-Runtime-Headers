// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPHOTOKITVARIATIONCACHE_H
#define PLPHOTOKITVARIATIONCACHE_H

@class NSCache, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLPhotoKitVariationCache : NSObject {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSCache *_memoryCache;
}


@property (readonly) NSURL *cacheURL; // ivar: _cacheURL


-(BOOL)_performChangesForAssetIdentifier:(id)arg0 sourceType:(NSInteger)arg1 changesBlock:(id)arg2 ;
-(BOOL)_removeCachesForURL:(id)arg0 ;
-(BOOL)_writeInfo:(id)arg0 atURL:(id)arg1 ;
-(BOOL)deleteCacheForAssetIdentifier:(id)arg0 ;
-(BOOL)deleteCacheForAssetIdentifier:(id)arg0 sourceType:(NSInteger)arg1 ;
-(NSUInteger)evictIfNeeded;
-(NSUInteger)purgeAll;
-(id)_fileURLWithIdentifier:(id)arg0 sourceType:(NSInteger)arg1 pathExtension:(id)arg2 ;
-(id)_readInfoForURL:(id)arg0 ;
-(id)analysisResultForAssetIdentifier:(id)arg0 ;
-(id)analysisResultForAssetIdentifier:(id)arg0 sourceType:(NSInteger)arg1 ;
-(id)gatingResultForVariationType:(NSInteger)arg0 assetIdentifier:(id)arg1 ;
-(id)gatingResultForVariationType:(NSInteger)arg0 assetIdentifier:(id)arg1 sourceType:(NSInteger)arg2 ;
-(id)initWithCacheURL:(id)arg0 ;
-(id)initWithPathManager:(id)arg0 ;
-(id)portraitEffectSettingsForAssetIdentifier:(id)arg0 ;
-(id)portraitEffectSettingsForAssetIdentifier:(id)arg0 sourceType:(NSInteger)arg1 ;
-(void)_saveToMemoryCache:(id)arg0 forFileURL:(id)arg1 fileSize:(NSUInteger)arg2 ;
-(void)saveAnalysisResult:(id)arg0 assetIdentifier:(id)arg1 ;
-(void)saveAnalysisResult:(id)arg0 assetIdentifier:(id)arg1 sourceType:(NSInteger)arg2 ;
-(void)saveGatingResult:(id)arg0 forVariationType:(NSInteger)arg1 assetIdentifier:(id)arg2 ;
-(void)saveGatingResult:(id)arg0 forVariationType:(NSInteger)arg1 assetIdentifier:(id)arg2 sourceType:(NSInteger)arg3 ;
-(void)savePortraitEffectSettings:(id)arg0 assetIdentifier:(id)arg1 ;
-(void)savePortraitEffectSettings:(id)arg0 sourceType:(NSInteger)arg1 assetIdentifier:(id)arg2 ;


@end


#endif