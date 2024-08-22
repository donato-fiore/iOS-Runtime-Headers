// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIDOWNLOADCOLLECTIONVIEWCONTROLLER_H
#define VUIDOWNLOADCOLLECTIONVIEWCONTROLLER_H

@class UIViewController, UIAlertController, NSMutableArray, UIBarButtonItem, NSString, UICollectionViewDiffableDataSource, NSDictionary;
@protocol UICollectionViewDelegate, VUIDownloadDataSourceDelegate, VUILegacyCollectionViewDelegate;


#import "VUILegacyCollectionView.h"
#import "VUIViewControllerContentPresenter.h"
#import "VUIDownloadDataSource.h"
#import "VUIDownloadCollectionViewCell.h"

@interface VUIDownloadCollectionViewController : UIViewController <UICollectionViewDelegate, VUIDownloadDataSourceDelegate, VUILegacyCollectionViewDelegate>



@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (retain, nonatomic) NSMutableArray *assetControllersToRemove; // ivar: _assetControllersToRemove
@property (retain, nonatomic) UIBarButtonItem *backBarButtonItem; // ivar: _backBarButtonItem
@property (nonatomic) CGFloat cellWidth; // ivar: _cellWidth
@property (retain, nonatomic) VUILegacyCollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // ivar: _contentPresenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (retain, nonatomic) VUIDownloadDataSource *downloadDataSource; // ivar: _downloadDataSource
@property (retain, nonatomic) NSMutableArray *downloadEntities; // ivar: _downloadEntities
@property (nonatomic) NSInteger gridStyle; // ivar: _gridStyle
@property (nonatomic) NSInteger gridType; // ivar: _gridType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *identifierToDownloadEntityDictionary; // ivar: _identifierToDownloadEntityDictionary
@property (nonatomic) BOOL isEditing; // ivar: _isEditing
@property (nonatomic) BOOL isSelectingAll; // ivar: _isSelectingAll
@property (nonatomic) CGFloat lastViewWidth; // ivar: _lastViewWidth
@property (retain, nonatomic) UIBarButtonItem *leftBarButtonItem; // ivar: _leftBarButtonItem
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // ivar: _rightBarButtonItem
@property (retain, nonatomic) UIBarButtonItem *selectAllBarButtonItem; // ivar: _selectAllBarButtonItem
@property (retain, nonatomic) VUIDownloadCollectionViewCell *sizingCell; // ivar: _sizingCell
@property (readonly) Class superclass;


-(CGFloat)_computeBottomMargin;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(id)_configureAlertController;
-(id)_createCollectionView;
-(id)_createDiffableDataSource;
-(id)_createDiffableDataSourceSnapshot;
-(id)_createIdentifierToDownloadEntityDictionary;
-(id)_deleteActionTitleString;
-(id)_identifiersForDownloadEntities;
-(id)initWithDataSource:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_batchSelectToggled;
-(void)_cancelPressed;
-(void)_clearSelections;
-(void)_configureNavigationBarForEditingMode;
-(void)_deleteDownloadEntities:(id)arg0 ;
-(void)_deleteMediaEntitiesInDownloadEntities:(id)arg0 ;
-(void)_editToggled;
-(void)_enterEditingMode;
-(void)_exitEditingMode;
-(void)_selectAllCells;
-(void)_updateAllVisibleCellsForEditingMode;
-(void)_updateLayoutForSize:(struct CGSize )arg0 ;
-(void)_updateNavigationBarPadding;
-(void)_updateSelectAllBarButtonItemIfNecessary;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)downloadCellDidRequestCancelDownload:(id)arg0 ;
-(void)downloadManager:(id)arg0 downloadedFetchDidFinishWithEntities:(id)arg1 ;
-(void)downloadManager:(id)arg0 downloadsDidChange:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif