// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROASSETSUGGESTIONSCOLLECTIONVIEWCONTROLLER_H
#define MIROASSETSUGGESTIONSCOLLECTIONVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSArray, UIBarButtonItem, UICollectionView, NSString;
@protocol UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MiroAssetSuggestionsCollectionViewControllerDelegate;



@interface MiroAssetSuggestionsCollectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>



@property (readonly, nonatomic) NSMutableArray *allAssets; // ivar: _allAssets
@property (retain, nonatomic) NSArray *assets; // ivar: _assets
@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MiroAssetSuggestionsCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *memoryLocalizedTitle; // ivar: _memoryLocalizedTitle
@property (retain, nonatomic) UIBarButtonItem *showAllButton; // ivar: _showAllButton
@property (nonatomic) BOOL showDebugInterfaces; // ivar: _showDebugInterfaces
@property (readonly) Class superclass;


+(NSUInteger)_indexOAssetWithCreationDate:(id)arg0 inChronologicallySortedAssets:(id)arg1 insertionIndex:(*NSUInteger)arg2 ;
-(BOOL)collectionView:(id)arg0 shouldDeselectItemAtIndexPath:(id)arg1 ;
-(NSInteger)_indexOfAssetID:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_assetAtIndex:(NSUInteger)arg0 ;
-(id)_selectedAssets;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(void)_setupPopoverPresentationIfNecessary:(id)arg0 fromView:(id)arg1 ;
-(void)_updateDebugLabelsOnCell:(id)arg0 withAsset:(id)arg1 ;
-(void)_workaround_24890628_setupSplitScreenWidthConstraint:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)done:(id)arg0 ;
-(void)selectCellsWithAssetIDs:(id)arg0 ;
-(void)showAll:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif