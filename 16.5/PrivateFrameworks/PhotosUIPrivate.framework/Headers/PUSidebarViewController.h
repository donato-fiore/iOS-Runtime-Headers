// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSIDEBARVIEWCONTROLLER_H
#define PUSIDEBARVIEWCONTROLLER_H

@class UIViewController, PXAssetCollectionActionManager, NSPredicate, UICollectionView, PXProgrammaticNavigationDestination, UICollectionViewDiffableDataSource, NSString, PHPhotoLibrary, PHAssetCollection, PXSidebarDataController, PXSidebarOutlineSectionController;
@protocol UICollectionViewDelegate, UIPopoverPresentationControllerDelegate, PUOutlineCellDelegate, PXSidebarOutlineSectionControllerDelegate, PUCollectionsCollectionViewDropDataProvider, PXAssetCollectionActionPerformerDelegate, PXAlbumStreamingOptionsViewControllerDelegate, PXChangeObserver, PXCollectionActionReceiver, PXSplitViewControllerChangeObserver, PXNavigationListItem, PXProgrammaticNavigationParticipant, PXSelectionContainerProvider;


#import "PUCollectionsCollectionViewDropDelegate.h"
#import "PUSidebarReorderController.h"
#import "PUSidebarDataSectionEnablementController.h"

@interface PUSidebarViewController : UIViewController <UICollectionViewDelegate, UIPopoverPresentationControllerDelegate, PUOutlineCellDelegate, PXSidebarOutlineSectionControllerDelegate, PUCollectionsCollectionViewDropDataProvider, PXAssetCollectionActionPerformerDelegate, PXAlbumStreamingOptionsViewControllerDelegate, PXChangeObserver, PXCollectionActionReceiver, PXSplitViewControllerChangeObserver>



@property (retain, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager; // ivar: _assetCollectionActionManager
@property (readonly, nonatomic) NSPredicate *assetsFilterPredicate; // ivar: _assetsFilterPredicate
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) PXProgrammaticNavigationDestination *currentNavigationDestination; // ivar: _currentNavigationDestination
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<PXNavigationListItem> *deferredNavigationItem; // ivar: _deferredNavigationItem
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PUCollectionsCollectionViewDropDelegate *dropDelegate; // ivar: _dropDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isUpdating; // ivar: _isUpdating
@property (readonly, nonatomic) NSObject<PXProgrammaticNavigationParticipant> *navigationRoot; // ivar: _navigationRoot
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) PHAssetCollection *pickerAllPhotosVirtualCollection; // ivar: _pickerAllPhotosVirtualCollection
@property (retain, nonatomic) PUSidebarReorderController *reorderController; // ivar: _reorderController
@property (nonatomic) BOOL selectingAlreadySelectedIndexPath; // ivar: _selectingAlreadySelectedIndexPath
@property (readonly, nonatomic) NSObject<PXSelectionContainerProvider> *selectionProvider;
@property (retain, nonatomic) PXSidebarDataController *sidebarDataController; // ivar: _sidebarDataController
@property (retain, nonatomic) PUSidebarDataSectionEnablementController *sidebarDataSectionEnablementController; // ivar: _sidebarDataSectionEnablementController
@property (retain, nonatomic) PXSidebarOutlineSectionController *sidebarOutlineSectionController; // ivar: _sidebarOutlineSectionController
@property (readonly) Class superclass;


-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)actionPerformer:(id)arg0 transitionToViewController:(id)arg1 transitionType:(NSInteger)arg2 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 selectionFollowsFocusForItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSpringLoadItemAtIndexPath:(id)arg1 withContext:(id)arg2 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg0 ;
-(id)_backNavigationRootItemForItem:(id)arg0 ;
-(id)_collectionViewIndexPathForItemIdentifier:(id)arg0 ;
-(id)_trailingSwipeActionConfigurationForIndexPath:(id)arg0 ;
-(id)actionPerformerDelegateForCollectionViewDropDelegate:(id)arg0 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 targetIndexPathForMoveFromItemAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)collectionViewDropDelegate:(id)arg0 collectionAtIndexPath:(id)arg1 ;
-(id)generateLayout;
-(id)hostViewControllerForActionPerformer:(id)arg0 ;
-(id)initWithNavigationRoot:(id)arg0 photoLibrary:(id)arg1 ;
-(id)initWithNavigationRoot:(id)arg0 photoLibrary:(id)arg1 options:(NSUInteger)arg2 additionalAssetsFilterPredicate:(id)arg3 pickerAllPhotosVirtualCollection:(id)arg4 ;
-(id)presentationEnvironmentForActionPerformer:(id)arg0 ;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(void)_deleteItemTapped:(id)arg0 sourceView:(id)arg1 completion:(id)arg2 ;
-(void)_handleDidSelectListItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)_highlightNavigationDestination:(id)arg0 ;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_navigateToDestinationForItem:(id)arg0 sameItem:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_performActionForType:(id)arg0 completionHandler:(id)arg1 ;
-(void)_triggerNavigationToDestination:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_updateHeaderCell:(id)arg0 forListItem:(id)arg1 ;
-(void)_updateOutlineCell:(id)arg0 forListItem:(id)arg1 ;
-(void)_updateSelectedRowScrollToVisible:(BOOL)arg0 ;
-(void)albumStreamingOptionsViewController:(id)arg0 didCompleteWithReason:(int)arg1 ;
-(void)assetCollectionActionPerformer:(id)arg0 playMovieForAssetCollection:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)configureDataSource;
-(void)configureViewHierarchy;
-(void)navigateToFallbackForDestination:(id)arg0 ;
-(void)newAlbum:(id)arg0 ;
-(void)newFolder:(id)arg0 ;
-(void)newSharedAlbum:(id)arg0 ;
-(void)newSmartAlbum:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)outlineCell:(id)arg0 updatedTitle:(id)arg1 forItem:(id)arg2 ;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)ppt_runTabSwitchingTestWithName:(id)arg0 options:(id)arg1 delegate:(id)arg2 completionHandler:(id)arg3 ;
-(void)selectItemForDestination:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setupDataSectionManagerWithLoadMode:(NSInteger)arg0 ;
-(void)sidebarOutlineSectionController:(id)arg0 willApplySnapshotWithChangedItemsAfterChange:(id)arg1 applyBlock:(id)arg2 ;
-(void)splitViewControllerWillExpand:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)validateCommand:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif