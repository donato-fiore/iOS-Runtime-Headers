// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPORTRAITWALLPAPERCANDIDATEDEBUGVIEWCONTROLLER_H
#define PUPORTRAITWALLPAPERCANDIDATEDEBUGVIEWCONTROLLER_H

@class UICollectionViewController, PHFetchResult, PHAsset, NSString, PXAssetsDataSourceManager;
@protocol PXOneUpPresentationDelegate, PUWallpaperClassDataSourceDelegate;


#import "PUParallaxLayerStackDebugViewController.h"
#import "PUProgressIndicatorView.h"
#import "PUWallpaperDebugViewSpec.h"

@interface PUPortraitWallpaperCandidateDebugViewController : UICollectionViewController <PXOneUpPresentationDelegate, PUWallpaperClassDataSourceDelegate>

 {
    PHFetchResult *_assets;
    PHAsset *_currentAsset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fallbackCase; // ivar: _fallbackCase
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager; // ivar: _oneUpDataSourceManager
@property (retain, nonatomic) PUParallaxLayerStackDebugViewController *parallaxViewController; // ivar: _parallaxViewController
@property (retain, nonatomic) PUProgressIndicatorView *progressIndicator; // ivar: _progressIndicator
@property (retain, nonatomic) PUWallpaperDebugViewSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


-(BOOL)shouldAutorotate;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithSpec:(id)arg0 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)displayAsset:(id)arg0 ;
-(void)oneUpPresentation:(id)arg0 scrollAssetReferenceToVisible:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif