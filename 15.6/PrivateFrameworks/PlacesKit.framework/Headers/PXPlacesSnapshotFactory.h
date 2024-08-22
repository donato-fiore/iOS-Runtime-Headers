// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESSNAPSHOTFACTORY_H
#define PXPLACESSNAPSHOTFACTORY_H

@class NSString, UIImage, NSMutableArray, NSTimer, PHFetchResult, PHAssetCollection, PHAsset;
@protocol PHPhotoLibraryChangeObserver, OS_dispatch_queue, PXPlacesSnapshotFactoryDelegate;

#import <Foundation/Foundation.h>


@interface PXPlacesSnapshotFactory : NSObject <PHPhotoLibraryChangeObserver>

 {
    NSString *_cachedFilePathLight;
    NSString *_cachedFilePathDark;
    UIImage *_cachedSnapshotImageLight;
    UIImage *_cachedSnapshotImageDark;
    NSString *_cachedSnapshotImageIdentifier;
    UIImage *_placeholderImage;
    NSInteger _cachedCount;
    NSMutableArray *_requestedCompletionBlocks;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_concurentQueue;
}


@property (retain, nonatomic) NSTimer *assetCountChangedTimer; // ivar: _assetCountChangedTimer
@property (retain, nonatomic) PHFetchResult *assetCountFetchResult; // ivar: _assetCountFetchResult
@property (nonatomic) BOOL countCacheInvalidated; // ivar: _countCacheInvalidated
@property (nonatomic) NSInteger currentUserInterfaceStyle; // ivar: _currentUserInterfaceStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXPlacesSnapshotFactoryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRegisteredForPhotoLibraryChanges; // ivar: _isRegisteredForPhotoLibraryChanges
@property (retain, nonatomic) NSMutableArray *localSearches; // ivar: _localSearches
@property (retain, nonatomic) PHFetchResult *placesAssetsFetchResult; // ivar: _placesAssetsFetchResult
@property (retain, nonatomic) PHAssetCollection *placesCollection; // ivar: _placesCollection
@property (retain, nonatomic) PHAsset *snapshottedAsset; // ivar: _snapshottedAsset
@property (readonly) Class superclass;


-(BOOL)_imageExistsWithLocalIdentifier:(id)arg0 ;
-(NSInteger)assetCountWithForcedRefresh:(BOOL)arg0 ;
-(id)_latestAssetWithLocation;
-(id)_placeHolderImageForExtendedTraitCollection:(id)arg0 ;
-(id)init;
-(void)_addLocalSearch:(id)arg0 ;
-(void)_fetchImageOfAsset:(id)arg0 withSnapshotOptions:(id)arg1 andCompletion:(id)arg2 ;
-(void)_handleAsyncPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)arg0 andCompletion:(id)arg1 ;
-(void)_removeLocalSearch:(id)arg0 ;
-(void)_requestPlacesSnapshotWithSnapshotOptions:(id)arg0 visibleRegion:(struct ? )arg1 andCompletion:(id)arg2 ;
-(void)_saveImage:(id)arg0 ofAsset:(id)arg1 atPath:(id)arg2 ;
-(void)dealloc;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)removePreviousCachedImages;
-(void)requestAssetCountWithForcedRefresh:(BOOL)arg0 completion:(id)arg1 ;
-(void)requestMapSnapshotForQuery:(id)arg0 snapshotOptions:(id)arg1 completion:(id)arg2 ;
-(void)requestPlacesImageOfAsset:(id)arg0 withSnapshotOptions:(id)arg1 andCompletion:(id)arg2 ;
-(void)requestPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)arg0 andCompletion:(id)arg1 ;
-(void)requestPlacesSnapshotWithSnapshotOptions:(id)arg0 popoverImageOptions:(NSUInteger)arg1 assets:(id)arg2 andCompletion:(id)arg3 ;
-(void)tickAssetCountChangedTimer:(id)arg0 ;


@end


#endif