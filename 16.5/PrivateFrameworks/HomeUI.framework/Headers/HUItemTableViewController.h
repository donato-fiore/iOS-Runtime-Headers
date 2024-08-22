// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUITEMTABLEVIEWCONTROLLER_H
#define HUITEMTABLEVIEWCONTROLLER_H

@class UIVisualEffectView, NSString, NSMutableArray, HFItem, NSMutableSet, HFItemManager, NSMapTable;
@protocol HFExecutionEnvironmentObserver, UITextViewDelegate, HUTableViewDiffableDataSourceDelegate, HFItemManagerDelegate, HUItemManagerContainer, HUItemPresentationContainer, HUPreloadableViewController, HFDiffableDataItemManagerDelegate, HUExpandableTextViewCellDelegate, NACancelable;


#import "HUTableViewController.h"
#import "HUGridLayoutOptions.h"
#import "HUItemTableViewScrollDestination.h"

@interface HUItemTableViewController : HUTableViewController <HFExecutionEnvironmentObserver, UITextViewDelegate, HUTableViewDiffableDataSourceDelegate, HFItemManagerDelegate, HUItemManagerContainer, HUItemPresentationContainer, HUPreloadableViewController, HFDiffableDataItemManagerDelegate, HUExpandableTextViewCellDelegate>



@property (nonatomic) NSUInteger appearState; // ivar: _appearState
@property (nonatomic) BOOL automaticallyUpdatesViewControllerTitle; // ivar: _automaticallyUpdatesViewControllerTitle
@property (retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView; // ivar: _backgroundVisualEffectView
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<NACancelable> *deferredVisibilityUpdate; // ivar: _deferredVisibilityUpdate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *foregroundUpdateFutures; // ivar: _foregroundUpdateFutures
@property (retain, nonatomic) HUGridLayoutOptions *gridLayoutOptions; // ivar: _gridLayoutOptions
@property (nonatomic) BOOL hasFinishedInitialLoad; // ivar: _hasFinishedInitialLoad
@property (nonatomic) BOOL hasForcedLoadingVisibleCells; // ivar: _hasForcedLoadingVisibleCells
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFItem *hu_presentedItem;
@property (readonly, nonatomic) NSMutableSet *internalItemModuleControllers; // ivar: _internalItemModuleControllers
@property (retain, nonatomic) HFItemManager *itemManager; // ivar: _itemManager
@property (retain, nonatomic) HUItemTableViewScrollDestination *pendingScrollDestination; // ivar: _pendingScrollDestination
@property (readonly, nonatomic) NSMutableSet *registeredCellClasses; // ivar: _registeredCellClasses
@property (nonatomic) BOOL shouldUseAlternateCellColor; // ivar: _shouldUseAlternateCellColor
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMapTable *textFieldToCellMap; // ivar: _textFieldToCellMap
@property (nonatomic) BOOL viewHasAppeared; // ivar: _viewHasAppeared
@property (nonatomic) BOOL visibilityUpdatesEnabled; // ivar: _visibilityUpdatesEnabled
@property (nonatomic) BOOL wantsPreferredContentSize; // ivar: _wantsPreferredContentSize


+(BOOL)adoptsDefaultGridLayoutMargins;
+(NSUInteger)updateMode;
-(BOOL)_shouldHideFooterForSection:(NSInteger)arg0 ;
-(BOOL)_shouldHideHeaderForSection:(NSInteger)arg0 ;
-(BOOL)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;
-(BOOL)bypassInitialItemUpdateReload;
-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(BOOL)shouldPerformUpdateWithAnimationForDiffableDataItemManager:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(Class)mappableCellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)_rowAnimationForOperationType:(NSUInteger)arg0 item:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)_itemForTextField:(id)arg0 ;
-(id)_visibleCellForItem:(id)arg0 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)childViewControllersToPreload;
-(id)contentConfigurationForFooterViewAtSectionIndex:(NSUInteger)arg0 ;
-(id)contentConfigurationForHeaderViewAtSectionIndex:(NSUInteger)arg0 ;
-(id)currentTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)defaultTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)hu_preloadContent;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)itemManager:(id)arg0 futureToUpdateItems:(id)arg1 itemUpdateOptions:(id)arg2 ;
-(id)itemModuleControllers;
-(id)itemTableFooterMessage;
-(id)itemTableFooterView;
-(id)itemTableHeaderMessage;
-(id)itemTableHeaderView;
-(id)leadingSwipeActionsForItem:(id)arg0 ;
-(id)moduleController:(id)arg0 dismissViewControllerForRequest:(id)arg1 ;
-(id)moduleController:(id)arg0 presentViewControllerForRequest:(id)arg1 ;
-(id)moduleController:(id)arg0 textFieldForVisibleItem:(id)arg1 ;
-(id)moduleControllerForItem:(id)arg0 ;
-(id)placeholderTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)presentingViewControllerForModuleController:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)textFieldForVisibleItem:(id)arg0 ;
-(id)trailingSwipeActionsForItem:(id)arg0 ;
-(void)_dispatchUpdateForCell:(id)arg0 item:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)_performCommonUpdateForCell:(id)arg0 item:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)_scrollToDestination:(id)arg0 ;
-(void)_transformViewControllerForRequest:(id)arg0 ;
-(void)_updateHeadersAndFootersIfNeededAfterPerformingRequest:(id)arg0 ;
-(void)_updateLayoutMarginsForCells:(id)arg0 ;
-(void)_updateMaterials;
-(void)_updatePreferredContentSizeIfNecessary;
-(void)_updateTableHeaderAndFooter;
-(void)_updateTitle;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)diffableDataItemManager:(id)arg0 prefetchResourcesForItems:(id)arg1 ;
-(void)diffableDataItemManager:(id)arg0 willUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 isInitialLoad:(BOOL)arg4 ;
-(void)executionEnvironmentRunningStateDidChange:(id)arg0 ;
-(void)expandableTextViewCellStateDidChange:(id)arg0 ;
-(void)highlightItemAnimated:(id)arg0 ;
-(void)highlightItemAnimated:(id)arg0 duration:(CGFloat)arg1 ;
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
-(void)recursivelyDisableItemUpdates:(BOOL)arg0 withReason:(id)arg1 ;
-(void)reloadCellForItems:(id)arg0 withDiffableDataSourceReload:(BOOL)arg1 ;
-(void)scrollToItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)setUpDiffableDataItemManagerIfNeeded;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)textDidChange:(id)arg0 forTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 item:(id)arg1 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 item:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateCellForItems:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif