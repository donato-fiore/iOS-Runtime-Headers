// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPCOMPANIONASSETCACHE_H
#define SPCOMPANIONASSETCACHE_H


#import <Foundation/Foundation.h>

#import "SPAssetCacheClientCache.h"

@interface SPCompanionAssetCache : NSObject

@property (retain, nonatomic) SPAssetCacheClientCache *permanentCache; // ivar: _permanentCache
@property (retain, nonatomic) SPAssetCacheClientCache *transientCache; // ivar: _transientCache


+(id)sharedInstance;
-(BOOL)addImageToPermanentCache:(id)arg0 withName:(id)arg1 ;
-(BOOL)imageInPermanentCache:(id)arg0 ;
-(BOOL)imageInTransientCache:(id)arg0 ;
-(id)cachedImages;
-(id)dataForImageWithName:(id)arg0 ;
-(id)init;
-(id)keyFromImageData:(id)arg0 ;
-(void)addImageReferenceToTransientCache:(id)arg0 withName:(id)arg1 ;
-(void)addedAsset:(id)arg0 ;
-(void)clearedCache:(id)arg0 ;
-(void)deletedAsset:(id)arg0 ;
-(void)handleCacheMessage:(id)arg0 ;
-(void)removeAllImagesFromPermanentCache;
-(void)removeImageFromPermanentCacheWithName:(id)arg0 ;
-(void)syncCache:(id)arg0 ;


@end


#endif