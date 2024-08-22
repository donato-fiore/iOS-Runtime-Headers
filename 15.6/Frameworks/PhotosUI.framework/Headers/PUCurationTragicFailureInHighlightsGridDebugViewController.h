// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCURATIONTRAGICFAILUREINHIGHLIGHTSGRIDDEBUGVIEWCONTROLLER_H
#define PUCURATIONTRAGICFAILUREINHIGHLIGHTSGRIDDEBUGVIEWCONTROLLER_H

@class NSArray, NSDictionary, UIBarButtonItem, NSString, PHPhotosHighlight;
@protocol UICollectionViewDataSource, UICollectionViewDelegate;


#import "PUPhotosAlbumViewController.h"
#import "PUCurationTragicFailureInHighlightsDebugViewController.h"

@interface PUCurationTragicFailureInHighlightsGridDebugViewController : PUPhotosAlbumViewController <UICollectionViewDataSource, UICollectionViewDelegate>

 {
    NSArray *_allAssets;
    NSArray *_filteredAssets;
    NSDictionary *_utilityTypesByAssetUUID;
    BOOL _showsAll;
    BOOL _showsTragicFailure;
    BOOL _showsNonMemorable;
    BOOL _showsPoorQuality;
    UIBarButtonItem *_showsTragicFailureButtonItem;
    UIBarButtonItem *_showsNonMemorableButtonItem;
    UIBarButtonItem *_showsPoorQualityButtonItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHPhotosHighlight *highlight; // ivar: _highlight
@property (retain, nonatomic) PUCurationTragicFailureInHighlightsDebugViewController *parentController; // ivar: _parentController
@property (readonly) Class superclass;


-(BOOL)_writeDiagnosticsToURL:(id)arg0 incorrectAssets:(id)arg1 ;
-(BOOL)shouldShowSectionHeaders;
-(NSUInteger)utilityTypesWithAsset:(id)arg0 sceneClassifications:(id)arg1 ;
-(id)_cloneAsset:(id)arg0 toDirectory:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithSpec:(id)arg0 ;
-(void)_fileRadarWithIncorrectAssets:(id)arg0 ;
-(void)_presentTapToRadar;
-(void)getTitle:(*id)arg0 prompt:(*id)arg1 shouldHideBackButton:(*BOOL)arg2 leftBarButtonItems:(*id)arg3 rightBarButtonItems:(*id)arg4 ;
-(void)setButton:(id)arg0 toOn:(BOOL)arg1 ;
-(void)toggleShowsAll:(id)arg0 ;
-(void)toggleShowsNonMemorable:(id)arg0 ;
-(void)toggleShowsPoorQuality:(id)arg0 ;
-(void)toggleShowsTragicFailure:(id)arg0 ;
-(void)update;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif