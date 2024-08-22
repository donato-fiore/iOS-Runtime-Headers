// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOKITTHUMBNAILCACHE_H
#define PXPHOTOKITTHUMBNAILCACHE_H

@class NSCache, NSMutableDictionary, NSString, PHPhotoLibrary;
@protocol NSCacheDelegate, PXPhotoLibraryUIChangeObserver;

#import <Foundation/Foundation.h>


@interface PXPhotoKitThumbnailCache : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver>

 {
    NSCache *_cache;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_cachedThumbnailIndexByObjectID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label; // ivar: _label
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSUInteger sizeLimit; // ivar: _sizeLimit
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSizeLimit:(NSUInteger)arg0 photoLibrary:(id)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(id)tableThumbnailDataForAsset:(id)arg0 dataSpecification:(struct PHAssetResourceTableDataSpecification *)arg1 ;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)cacheThumbnailData:(id)arg0 specification:(struct PHAssetResourceTableDataSpecification *)arg1 forAsset:(id)arg2 ;
-(void)dealloc;


@end


#endif