// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERCLASSDEBUGVIEWCONTROLLER_H
#define PUWALLPAPERCLASSDEBUGVIEWCONTROLLER_H

@class UICollectionViewController, PHSuggestion, NSString, NSDictionary, PXAssetsDataSourceManager;
@protocol PXOneUpPresentationDelegate, PUWallpaperClassDataSourceDelegate;


#import "PUWallpaperClassDataSource.h"
#import "PUParallaxLayerStackDebugViewController.h"
#import "PUProgressIndicatorView.h"
#import "PUWallpaperDebugViewSpec.h"

@interface PUWallpaperClassDebugViewController : UICollectionViewController <PXOneUpPresentationDelegate, PUWallpaperClassDataSourceDelegate>



@property (retain, nonatomic) PHSuggestion *currentSuggestion; // ivar: _currentSuggestion
@property (retain, nonatomic) PUWallpaperClassDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *keyAssetBySuggestionUUID; // ivar: _keyAssetBySuggestionUUID
@property (retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager; // ivar: _oneUpDataSourceManager
@property (retain, nonatomic) PUParallaxLayerStackDebugViewController *parallaxViewController; // ivar: _parallaxViewController
@property (retain, nonatomic) PUProgressIndicatorView *progressIndicator; // ivar: _progressIndicator
@property (retain, nonatomic) PUWallpaperDebugViewSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)contextMenuConfigurationForItemAtIndexPath:(id)arg0 ;
-(id)initWithSpec:(id)arg0 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dataSourceChanged:(id)arg0 ;
-(void)displayAsset:(id)arg0 ;
-(void)hideProgressIndicator;
-(void)oneUpPresentation:(id)arg0 scrollAssetReferenceToVisible:(id)arg1 ;
-(void)showProgressIndicator:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif