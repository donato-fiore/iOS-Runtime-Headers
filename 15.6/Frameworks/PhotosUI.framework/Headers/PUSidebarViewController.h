// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSIDEBARVIEWCONTROLLER_H
#define PUSIDEBARVIEWCONTROLLER_H

@class UIViewController, UICollectionView, PXProgrammaticNavigationDestination, UICollectionViewDiffableDataSource, NSString, PHPhotoLibrary, PXSidebarDataController, PXSidebarOutlineSectionController;
@protocol UICollectionViewDelegate, PUCollectionsCollectionViewDropDataProvider, PUOutlineCellDelegate, PXAssetCollectionActionPerformerDelegate, PXSidebarOutlineSectionControllerDelegate, PXCollectionActionReceiver, PXProgrammaticNavigationUpdateTarget, PXSplitViewControllerChangeObserver, PXProgrammaticNavigationParticipant;


#import "PUCollectionsCollectionViewDropDelegate.h"
#import "PUSidebarReorderController.h"
#import "PUSidebarDataSectionEnablementController.h"

@interface PUSidebarViewController : UIViewController <UICollectionViewDelegate, PUCollectionsCollectionViewDropDataProvider, PUOutlineCellDelegate, PXAssetCollectionActionPerformerDelegate, PXSidebarOutlineSectionControllerDelegate, PXCollectionActionReceiver, PXProgrammaticNavigationUpdateTarget, PXSplitViewControllerChangeObserver>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) PXProgrammaticNavigationDestination *currentNavigationDestination; // ivar: _currentNavigationDestination
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PUCollectionsCollectionViewDropDelegate *dropDelegate; // ivar: _dropDelegate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXProgrammaticNavigationParticipant> *navigationRoot; // ivar: _navigationRoot
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) PUSidebarReorderController *reorderController; // ivar: _reorderController
@property (nonatomic) BOOL selectingAlreadySelectedIndexPath; // ivar: _selectingAlreadySelectedIndexPath
@property (retain, nonatomic) PXSidebarDataController *sidebarDataController; // ivar: _sidebarDataController
@property (retain, nonatomic) PUSidebarDataSectionEnablementController *sidebarDataSectionEnablementController; // ivar: _sidebarDataSectionEnablementController
@property (retain, nonatomic) PXSidebarOutlineSectionController *sidebarOutlineSectionController; // ivar: _sidebarOutlineSectionController
@property (readonly) Class superclass;
@property (nonatomic) NSInteger suspendSelectionUpdatesMode; // ivar: _suspendSelectionUpdatesMode


-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 selectionFollowsFocusForItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSpringLoadItemAtIndexPath:(id)arg1 withContext:(id)arg2 ;
-(id)_backNavigationRootItemForItem:(id)arg0 ;
-(id)_collectionViewIndexPathForItemIdentifier:(id)arg0 ;
-(id)_trailingSwipeActionConfigurationForIndexPath:(id)arg0 ;
-(id)actionPerformerDelegateForCollectionViewDropDelegate:(id)arg0 ;
-(id)collectionView:(id)arg0 targetIndexPathForMoveFromItemAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)collectionViewDropDelegate:(id)arg0 collectionAtIndexPath:(id)arg1 ;
-(id)generateLayout;
-(id)initWithNavigationRoot:(id)arg0 photoLibrary:(id)arg1 ;
-(void)_deleteItemTapped:(id)arg0 completion:(id)arg1 ;
-(void)_handleDidSelectListItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)_highlightNavigationDestination:(id)arg0 ;
-(void)_navigateToDestinationForItem:(id)arg0 sameItem:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_performActionForType:(id)arg0 completionHandler:(id)arg1 ;
-(void)_triggerNavigationToDestination:(id)arg0 animated:(BOOL)arg1 suspendSelections:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_updateHeaderCell:(id)arg0 forListItem:(id)arg1 ;
-(void)_updateOutlineCell:(id)arg0 forListItem:(id)arg1 ;
-(void)_updateSelectedRowScrollToVisible:(BOOL)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureDataSource;
-(void)configureViewHierarchy;
-(void)navigateToFallbackForDestination:(id)arg0 ;
-(void)newAlbum:(id)arg0 ;
-(void)newFolder:(id)arg0 ;
-(void)newSharedAlbum:(id)arg0 ;
-(void)newSmartAlbum:(id)arg0 ;
-(void)outlineCell:(id)arg0 updatedTitle:(id)arg1 forItem:(id)arg2 ;
-(void)ppt_runTabSwitchingTestWithName:(id)arg0 options:(id)arg1 delegate:(id)arg2 completionHandler:(id)arg3 ;
-(void)px_navigationDestinationWillChange:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setupDataSectionManager;
-(void)sidebarOutlineSectionController:(id)arg0 willApplySnapshotWithChangedItemsAfterChange:(id)arg1 applyBlock:(id)arg2 ;
-(void)splitViewControllerWillExpand:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif