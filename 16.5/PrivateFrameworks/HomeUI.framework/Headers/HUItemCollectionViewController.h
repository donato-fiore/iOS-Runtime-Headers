// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUITEMCOLLECTIONVIEWCONTROLLER_H
#define HUITEMCOLLECTIONVIEWCONTROLLER_H

@class NSHashTable, NSString, NSMutableArray, HFItem, NSMutableSet, HFItemManager, NSMapTable;
@protocol HFExecutionEnvironmentObserver, UICollectionViewDataSourcePrefetching, HFItemManagerDelegate, HUItemManagerContainer, HUItemPresentationContainer, HUPreloadableViewController, HFDiffableDataItemManagerDelegate, HUItemTextEditingController, UITextFieldDelegate, NACancelable;


#import "HUCollectionViewController.h"

@interface HUItemCollectionViewController : HUCollectionViewController <HFExecutionEnvironmentObserver, UICollectionViewDataSourcePrefetching, HFItemManagerDelegate, HUItemManagerContainer, HUItemPresentationContainer, HUPreloadableViewController, HFDiffableDataItemManagerDelegate, HUItemTextEditingController, UITextFieldDelegate>



@property (retain, nonatomic) NSHashTable *childViewControllersAtViewWillAppearTime; // ivar: _childViewControllersAtViewWillAppearTime
@property (retain, nonatomic) NSHashTable *childViewControllersAtViewWillDisappearTime; // ivar: _childViewControllersAtViewWillDisappearTime
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<NACancelable> *deferredVisibilityUpdate; // ivar: _deferredVisibilityUpdate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *foregroundUpdateFutures; // ivar: _foregroundUpdateFutures
@property (nonatomic) BOOL hasFinishedInitialLoad; // ivar: _hasFinishedInitialLoad
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFItem *hu_presentedItem;
@property (retain, nonatomic) NSObject<NACancelable> *iconPreloadCancelable; // ivar: _iconPreloadCancelable
@property (nonatomic) BOOL iconPreloadIsPrioritized; // ivar: _iconPreloadIsPrioritized
@property (readonly, nonatomic) NSMutableSet *internalItemModuleControllers; // ivar: _internalItemModuleControllers
@property (retain, nonatomic) HFItemManager *itemManager; // ivar: _itemManager
@property (readonly, nonatomic) NSMutableSet *registeredCellClasses; // ivar: _registeredCellClasses
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressCollectionViewUpdatesForReorderCommit; // ivar: _suppressCollectionViewUpdatesForReorderCommit
@property (readonly, nonatomic) NSMapTable *textFieldToCellMap; // ivar: _textFieldToCellMap
@property (nonatomic, getter=isViewVisible) BOOL viewVisible; // ivar: _viewVisible
@property (readonly, nonatomic) NSMutableArray *viewVisibleFutures; // ivar: _viewVisibleFutures
@property (nonatomic) BOOL visibilityUpdatesEnabled; // ivar: _visibilityUpdatesEnabled
@property (nonatomic) BOOL wantsPreferredContentSize; // ivar: _wantsPreferredContentSize


+(NSUInteger)updateMode;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)isLayoutDependentOnItemState;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(BOOL)shouldPerformUpdateWithAnimationForDiffableDataItemManager:(id)arg0 ;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)_displayedPackageIconDescriptorsForItems:(id)arg0 ;
-(id)_itemForTextField:(id)arg0 ;
-(id)_layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(id)_sortedItemMapFrom:(id)arg0 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)childViewControllersToPreload;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)compositionalLayoutConfigurationForTraitCollection:(id)arg0 ;
-(id)currentTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)defaultTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)hu_preloadContent;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)itemManager:(id)arg0 futureToUpdateItems:(id)arg1 itemUpdateOptions:(id)arg2 ;
-(id)itemModuleControllers;
-(id)layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(id)listContentConfigurationForSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)moduleController:(id)arg0 dismissViewControllerForRequest:(id)arg1 ;
-(id)moduleController:(id)arg0 presentViewControllerForRequest:(id)arg1 ;
-(id)moduleController:(id)arg0 textFieldForVisibleItem:(id)arg1 ;
-(id)moduleControllerForItem:(id)arg0 ;
-(id)placeholderTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)presentingViewControllerForModuleController:(id)arg0 ;
-(id)textFieldForVisibleItem:(id)arg0 ;
-(struct CGSize )preferredContentSizeForCollectionViewContentSize:(struct CGSize )arg0 ;
-(void)_cancelIconPreload;
-(void)_commonInitWithItemManager:(id)arg0 ;
-(void)_configureLayout;
-(void)_performStandardUpdateForCell:(id)arg0 forItem:(id)arg1 ;
-(void)_preloadIconsIfNeededWithItems:(id)arg0 ;
-(void)_prioritizeIconPreloadIfNeeded;
-(void)_routeUpdateForCell:(id)arg0 forItem:(id)arg1 ;
-(void)_transformViewControllerForRequest:(id)arg0 ;
-(void)_updateTitle;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)didReorderItemWithSortedItemsBySectionID:(id)arg0 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)diffableDataItemManager:(id)arg0 prefetchResourcesForItems:(id)arg1 ;
-(void)diffableDataItemManager:(id)arg0 willUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 isInitialLoad:(BOOL)arg4 ;
-(void)executionEnvironmentRunningStateDidChange:(id)arg0 ;
-(void)itemManager:(id)arg0 didChangeHome:(id)arg1 ;
-(void)itemManager:(id)arg0 didChangeSourceItem:(id)arg1 ;
-(void)itemManager:(id)arg0 didInsertItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg0 didInsertSections:(id)arg1 ;
-(void)itemManager:(id)arg0 didMoveItem:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg0 didMoveSection:(NSInteger)arg1 toSection:(NSInteger)arg2 ;
-(void)itemManager:(id)arg0 didRemoveItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg0 didRemoveSections:(id)arg1 ;
-(void)itemManager:(id)arg0 didUpdateItemModules:(id)arg1 ;
-(void)itemManager:(id)arg0 didUpdateResultsForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)itemManager:(id)arg0 performUpdateRequest:(id)arg1 ;
-(void)itemManagerDidFinishUpdate:(id)arg0 ;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)performBatchCollectionViewUpdatesForUpdateRequest:(id)arg0 reloadOnly:(BOOL)arg1 ;
-(void)recursivelyDisableItemUpdates:(BOOL)arg0 withReason:(id)arg1 ;
-(void)reloadCellForItems:(id)arg0 ;
-(void)setUpDiffableDataItemManagerIfNeeded;
-(void)textDidChange:(id)arg0 forTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 item:(id)arg1 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 item:(id)arg1 ;
-(void)updateCellForItems:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif