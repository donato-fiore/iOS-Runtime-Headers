// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PULIVEPHOTOEFFECTSTOOLCONTROLLER_H
#define PULIVEPHOTOEFFECTSTOOLCONTROLLER_H

@class PXAssetVariationRenderProvider, NSArray, NSDictionary, UICollectionView, UICollectionViewFlowLayout, NSString;
@protocol UICollectionViewDelegate, UICollectionViewDataSource;


#import "PUPhotoEditToolController.h"
#import "PULivePhotoToolControllerSpec.h"

@interface PULivePhotoEffectsToolController : PUPhotoEditToolController <UICollectionViewDelegate, UICollectionViewDataSource>

 {
    PXAssetVariationRenderProvider *_renderProvider;
    NSArray *_collectionViewConstraints;
    id *_editModelObserver;
}


@property (retain, nonatomic, setter=_setAnalysisResult:) NSDictionary *_analysisResult; // ivar: __analysisResult
@property (retain, nonatomic, setter=_setCollectionView:) UICollectionView *_collectionView; // ivar: __collectionView
@property (retain, nonatomic, setter=_setCollectionViewLayout:) UICollectionViewFlowLayout *_collectionViewLayout; // ivar: __collectionViewLayout
@property (copy, nonatomic, setter=_setOptions:) NSArray *_options; // ivar: __options
@property (copy, nonatomic) NSString *analysisResultCacheKey; // ivar: _analysisResultCacheKey
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PULivePhotoToolControllerSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


-(BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg0 ;
-(BOOL)installTogglePreviewGestureRecognizer:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)localizedName;
-(id)toolControllerSpec;
-(struct CGRect )contentRectInCoordinateSpace:(id)arg0 ;
-(struct UIEdgeInsets )preferredPreviewViewInsets;
-(void)_updateCollectionView;
-(void)_updateCollectionViewInsets;
-(void)_updateOptions;
-(void)_updateVisibleCells;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)compositionControllerDidChangeForAdjustments:(id)arg0 ;
-(void)setLayoutOrientation:(NSInteger)arg0 ;
-(void)setLayoutOrientation:(NSInteger)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)setupWithAsset:(id)arg0 compositionController:(id)arg1 editSource:(id)arg2 overcaptureEditSource:(id)arg3 valuesCalculator:(id)arg4 ;
-(void)updateViewConstraints;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif