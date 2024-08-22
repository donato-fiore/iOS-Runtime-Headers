// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUWALLPAPERPHOTOCOLLECTIONVIEWCONTROLLER_H
#define HUWALLPAPERPHOTOCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, PHFetchResult, NSString, NAFuture, PHCachingImageManager;
@protocol PHPhotoLibraryChangeObserver, HUWallpaperPhotoCollectionViewControllerDelegate;


#import "HUWallpaperPhotoCollectionFlowLayout.h"

@interface HUWallpaperPhotoCollectionViewController : UICollectionViewController <PHPhotoLibraryChangeObserver>



@property (readonly, nonatomic) NSInteger assetCollectionSubtype; // ivar: _assetCollectionSubtype
@property (retain, nonatomic) PHFetchResult *assetsFetchResult; // ivar: _assetsFetchResult
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HUWallpaperPhotoCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) HUWallpaperPhotoCollectionFlowLayout *flowLayout; // ivar: _flowLayout
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NAFuture *imageDownloadFuture; // ivar: _imageDownloadFuture
@property (retain, nonatomic) PHCachingImageManager *imageManager; // ivar: _imageManager
@property (nonatomic) BOOL initialScrollToBottom; // ivar: _initialScrollToBottom
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)imageFutureForAsset:(id)arg0 cloudAllowed:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg0 fetchResult:(id)arg1 assetCollectionSubtype:(NSInteger)arg2 delegate:(id)arg3 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif