// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIBRARYVIEWCONTROLLER_H
#define LIBRARYVIEWCONTROLLER_H

@class UIViewController, UICollectionViewDiffableDataSource, UICollectionView, WebBookmarkCollection, NSString, NSArray;
@protocol UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, LibraryContentObserver, LibraryViewControllerDelegate;


#import "LibraryConfiguration.h"
#import "LibraryItemController.h"

@interface LibraryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, LibraryContentObserver>

 {
    UICollectionViewDiffableDataSource *_dataSource;
    UICollectionView *_collectionView;
    ? _reloadFlags;
}


@property (readonly, nonatomic) WebBookmarkCollection *collection; // ivar: _collection
@property (retain, nonatomic) LibraryConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LibraryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LibraryItemController *presentedItemController; // ivar: _presentedItemController
@property (copy, nonatomic) NSArray *sectionControllers; // ivar: _sectionControllers
@property (retain, nonatomic) LibraryItemController *selectedItemController;
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 selectionFollowsFocusForItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSpringLoadItemAtIndexPath:(id)arg1 withContext:(id)arg2 ;
-(id)_diffableDataSourceForCollectionView:(id)arg0 ;
-(id)_swipeActionsConfigurationForIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemsAtIndexPaths:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_applySnapshotForSection:(id)arg0 animated:(BOOL)arg1 ;
-(void)_collectionViewDidSelectItem:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_enumerateItemControllersWithBlock:(id)arg0 ;
-(void)_reloadSectionControllersImmediatelyAnimated:(BOOL)arg0 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)collectionView:(id)arg0 performPrimaryActionForItemAtIndexPath:(id)arg1 ;
-(void)librarySectionContentDidChange:(id)arg0 ;
-(void)reloadExpansionStateForItem:(id)arg0 inSection:(id)arg1 ;
-(void)reloadSectionControllersIfNeeded;
-(void)scrollToTopAnimated:(BOOL)arg0 ;
-(void)setNeedsReloadSectionControllersAnimated:(BOOL)arg0 ;
-(void)updateSelection;
-(void)updateSelectionByIgnoringExistingSelection:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif