// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDEBUGCMMSUGGESTIONSCOLLECTIONVIEWCONTROLLER_H
#define PXDEBUGCMMSUGGESTIONSCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, UIView, PHCachingImageManager, NSString, PHImageRequestOptions;
@protocol PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMWorkflowCoordinatorDelegate, UICollectionViewDelegateFlowLayout, PXDebugCMMSuggestionsDelegate;


#import "PXCMMWorkflowCoordinator.h"
#import "PXDebugCMMSuggestionCollectionViewCell.h"
#import "_PXCMMSizingSuggestion.h"
#import "PXCMMSuggestionsDataSource.h"
#import "PXCMMSuggestionsDataSourceManager.h"

@interface PXDebugCMMSuggestionsCollectionViewController : UICollectionViewController <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMWorkflowCoordinatorDelegate, UICollectionViewDelegateFlowLayout>

 {
    CGSize _lastUpdateReferenceSize;
    PXCMMWorkflowCoordinator *_workflowCoordinator;
    UIView *_emptyPlaceholderView;
    PXDebugCMMSuggestionCollectionViewCell *_sizingCell;
    _PXCMMSizingSuggestion *_sizingSuggestion;
}


@property (readonly, nonatomic) PHCachingImageManager *cachingImageManager; // ivar: _cachingImageManager
@property (retain, nonatomic) PXCMMSuggestionsDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) PXCMMSuggestionsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHImageRequestOptions *imageRequestOptions; // ivar: _imageRequestOptions
@property (weak, nonatomic) NSObject<PXDebugCMMSuggestionsDelegate> *suggestionsDelegate; // ivar: _suggestionsDelegate
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)_suggestionCellWidth;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithDataSourceManager:(id)arg0 ;
-(id)initWithDataSourceManager:(id)arg0 scrollDirection:(NSInteger)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_configureGadgetView:(id)arg0 forSuggestion:(id)arg1 ;
-(void)_updateCollectionViewLayout;
-(void)_updateEmptyPlaceholderView;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)workflowCoordinator:(id)arg0 workflowViewController:(id)arg1 didFinishSession:(id)arg2 withActivityState:(NSUInteger)arg3 ;


@end


#endif