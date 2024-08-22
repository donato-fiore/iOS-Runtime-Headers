// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPERSHUFFLERESOURCEMANAGER_H
#define PUWALLPAPERSHUFFLERESOURCEMANAGER_H

@class NSURL, NSDictionary, NSOperationQueue, PHPhotoLibrary, NSMutableDictionary, PIParallaxStyle;

#import <Foundation/Foundation.h>

#import "PUWallpaperShuffleLayerStackLoadingOperation.h"

@interface PUWallpaperShuffleResourceManager : NSObject

@property (readonly, nonatomic) NSURL *assetDirectory; // ivar: _assetDirectory
@property (retain, nonatomic) PUWallpaperShuffleLayerStackLoadingOperation *currentLayerStackOperation; // ivar: _currentLayerStackOperation
@property (readonly, nonatomic) NSDictionary *initialPosterMediaByAssetUUIDs; // ivar: _initialPosterMediaByAssetUUIDs
@property (retain, nonatomic) PUWallpaperShuffleLayerStackLoadingOperation *nextLayerStackOperation; // ivar: _nextLayerStackOperation
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSOperationQueue *requestOperationQueue; // ivar: _requestOperationQueue
@property (readonly, nonatomic) NSMutableDictionary *segmentationLoadingOperationsByAssetUUIDs; // ivar: _segmentationLoadingOperationsByAssetUUIDs
@property (readonly, nonatomic) NSInteger shuffleType; // ivar: _shuffleType
@property (retain, nonatomic) PIParallaxStyle *style; // ivar: _style


-(id)_loadResourceForPosterMedia:(id)arg0 isPreloading:(BOOL)arg1 completion:(id)arg2 ;
-(id)initWithPosterMedia:(id)arg0 style:(id)arg1 assetDirectory:(id)arg2 photoLibrary:(id)arg3 shuffleType:(NSInteger)arg4 ;
-(id)segmentationItemLoadingOperationForPosterMedia:(id)arg0 ;
-(void)_handleSetStyle:(id)arg0 ;
-(void)cancelPreloading;
// -(void)exportResourcesForFinalPosterMedia:(id)arg0 options:(NSUInteger)arg1 assetDirectory:(id)arg2 progressHandler:(id)arg3 completion:(unk)arg4  ;
-(void)preloadResourceForPosterMedia:(id)arg0 ;
-(void)requestResourceForPosterMedia:(id)arg0 completion:(id)arg1 ;
-(void)startPreloadingResourcesForPosterMedia:(id)arg0 ;
-(void)stopPreloadingResources;
-(void)stopPreloadingResourcesWithTimeout:(CGFloat)arg0 ;


@end


#endif