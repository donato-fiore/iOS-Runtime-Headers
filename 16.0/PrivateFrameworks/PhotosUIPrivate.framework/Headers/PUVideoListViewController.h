// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUVIDEOLISTVIEWCONTROLLER_H
#define PUVIDEOLISTVIEWCONTROLLER_H

@class NSMutableArray, UIBarButtonItem, UITableViewCell, PXPhotosDataSource, PXPhotosDataSourceConfiguration, UIViewController, PHImageRequestOptions, NSIndexPath, UITableView, PXPhotoKitAssetsDataSourceManager, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, UITableViewDataSource, UITableViewDelegate, PXPhotosDataSourceChangeObserver, PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PUDeletePhotosActionControllerDelegate, PUVideoListAssetExpungeActionPerformerDelegate, UIScrollViewDelegate;


#import "PUStorageManagementBaseController.h"
#import "PUVideoListContentUnavailableView.h"
#import "PUOneUpPresentationHelper.h"

@interface PUVideoListViewController : PUStorageManagementBaseController <UITableViewDataSource, UITableViewDelegate, UITableViewDataSource, UITableViewDelegate, PXPhotosDataSourceChangeObserver, PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PUDeletePhotosActionControllerDelegate, PUVideoListAssetExpungeActionPerformerDelegate, UIScrollViewDelegate>

 {
    NSMutableArray *_selectedIndexPathForDelete;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_deleteBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    UITableViewCell *_videoCell;
    BOOL _needsUpdateCellConfiguration;
}


@property (nonatomic, setter=_setAssetsFetchResultIsValid:) BOOL _assetsFetchResultIsValid; // ivar: __assetsFetchResultIsValid
@property (retain, nonatomic, setter=_setContentUnavailableView:) PUVideoListContentUnavailableView *_contentUnavailableView; // ivar: __contentUnavailableView
@property (retain, nonatomic, setter=_setDataSource:) PXPhotosDataSource *_dataSource; // ivar: __dataSource
@property (retain, nonatomic, setter=_setDataSourceManagerConfiguration:) PXPhotosDataSourceConfiguration *_dataSourceManagerConfiguration; // ivar: __dataSourceManagerConfiguration
@property (weak, nonatomic, setter=_setExpungeActionSheet:) UIViewController *_expungeActionSheet; // ivar: __expungeActionSheet
@property (readonly, nonatomic) PHImageRequestOptions *_imageRequestOptions; // ivar: __imageRequestOptions
@property (retain, nonatomic, setter=_setLastNavigatedAssetIndexPath:) NSIndexPath *_lastNavigatedAssetIndexPath; // ivar: __lastNavigatedAssetIndexPath
@property (retain, nonatomic, setter=_setMainTableView:) UITableView *_mainTableView; // ivar: __mainTableView
@property (retain, nonatomic, setter=_setOneUpPresentationHelper:) PUOneUpPresentationHelper *_oneUpPresentationHelper; // ivar: __oneUpPresentationHelper
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *_photoKitDataSourceManager; // ivar: __photoKitDataSourceManager
@property (nonatomic, getter=_isViewInSyncWithModel, setter=_setViewInSyncWithModel:) BOOL _viewInSyncWithModel; // ivar: __viewInSyncWithModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_needsUpdate;
-(BOOL)_shouldUpdateTableViewForDataSource:(id)arg0 ;
-(BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)oneUpPresentationHelper:(id)arg0 transitionTypeWithProposedTransitionType:(NSInteger)arg1 ;
-(NSInteger)oneUpPresentationHelperPreferredBarStyle:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSInteger)preferredAlertControllerStyleForDeletePhotosActionController:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_numberOfSelectedCellsForDelete;
-(NSUInteger)oneUpPresentationHelperAdditionalOptions:(id)arg0 ;
-(id)_cancelBarButtonItem;
-(id)_createBrowsingSessionForPresentationHelper;
-(id)_deleteBarButtonItem;
-(id)_editBarButtonItem;
-(id)_headerViewForTableView:(id)arg0 ;
-(id)_tableViewCellContentViewAtIndexPath:(id)arg0 ;
-(id)_videoCell;
-(id)_videoThumbnailViewForAssetAtIndexPath:(id)arg0 ;
-(id)assetCollectionsFetchResult;
-(id)assetsInAssetCollection:(id)arg0 ;
-(id)oneUpPresentationHelper:(id)arg0 regionOfInterestForAssetReference:(id)arg1 cropInsets:(struct UIEdgeInsets *)arg2 contentsRect:(struct CGRect *)arg3 ;
-(id)oneUpPresentationHelperViewController:(id)arg0 ;
-(id)photoCollectionAtIndex:(NSUInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addIndexPathToDeleteSelection:(id)arg0 ;
-(void)_clearAllIndexPathsForDeleteSelection;
-(void)_configureTableView:(id)arg0 ;
-(void)_deleteItemsAtSelectedIndexes:(id)arg0 ;
-(void)_ensureOneUpPresentationHelper;
-(void)_installContentUnavailableView;
-(void)_installVideoListView;
-(void)_invalidatePreparedCellsConfiguration;
-(void)_presentOneUpViewControllerForAssetAtInderxPath:(id)arg0 ;
-(void)_reloadContentView;
-(void)_removeIndexPathFromDeleteSelection:(id)arg0 ;
-(void)_setLeftBarButtonItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setRightBarButtonItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateAssetsFetchResultIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateMainView;
-(void)_updateNavigationBarAnimated:(BOOL)arg0 ;
-(void)_updatePreparedCellsConfiguration;
-(void)_updateSubviewsOrderingAndVisibilityWithVideoCounts:(NSUInteger)arg0 ;
-(void)actionPerformer:(id)arg0 excludeAssetsFromDataSource:(id)arg1 ;
-(void)actionPerformer:(id)arg0 stopExcludingAssetsFromDataSource:(id)arg1 ;
-(void)cancelEditingMode:(id)arg0 ;
-(void)dealloc;
-(void)deletePhotosActionController:(id)arg0 presentConfirmationViewController:(id)arg1 ;
-(void)deleteSelectedItems:(id)arg0 ;
-(void)oneUpPresentationHelper:(id)arg0 didDismissOneUpViewController:(id)arg1 ;
-(void)photosDataSource:(id)arg0 didChange:(id)arg1 ;
-(void)processDataSourceChange:(id)arg0 ;
-(void)selectVideoItems:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateInterfaceLayoutIfNecessary;
-(void)updateListCellForItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateVideoListCellContentView:(id)arg0 forItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif