// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WGWIDGETLISTEDITVIEWCONTROLLER_H
#define WGWIDGETLISTEDITVIEWCONTROLLER_H

@class UIViewController, UINavigationController, UITableViewController, NSMutableArray, NSArray, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, WGWidgetListEditViewControllerDataSource, WGWidgetListEditViewControllerDelegate;



@interface WGWidgetListEditViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

 {
    UINavigationController *_navigationController;
    UITableViewController *_tableViewController;
    NSMutableArray *_enabledTodayItemIDs;
    NSMutableArray *_favoriteItemIDs;
    NSMutableArray *_disabledItemIDs;
    NSArray *_groupIDs;
    CGFloat _contentMinY;
    NSArray *_originalFavoriteItemIDs;
}


@property (weak, nonatomic) NSObject<WGWidgetListEditViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WGWidgetListEditViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_isDismissingDueToInterfaceAction, setter=_setDismissingDueToInterfaceAction:) BOOL dismissingDueToInterfaceAction; // ivar: _dismissingDueToInterfaceAction
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showsFavorites; // ivar: _showsFavorites
@property (nonatomic) BOOL showsPinSection; // ivar: _showsPinSection
@property (retain, nonatomic, getter=_statusBarColorAssertion, setter=_setStatusBarColorAssertion:) id *statusBarColorAssertion; // ivar: _statusBarColorAssertion
@property (readonly) Class superclass;
@property (nonatomic, getter=areWidgetsPinned) BOOL widgetsPinned; // ivar: _widgetsPinned
@property (nonatomic, getter=wereWidgetsPinnedOriginally) BOOL widgetsPinnedOriginally; // ivar: _widgetsPinnedOriginally


-(BOOL)_isNewItem:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)_compareItemWithIdentifier:(id)arg0 andItemWithIdentifierConsideringIsNew:(id)arg1 ;
-(NSInteger)_indexOfFirstEnabledWidgetInSection:(NSUInteger)arg0 ;
-(NSInteger)_indexOfLastEnabledWidgetInSection:(NSUInteger)arg0 ;
-(NSInteger)_layoutMode;
-(NSInteger)disabledWidgetsSection;
-(NSInteger)favoritesSection;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)pinSection;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)todaySection;
-(NSUInteger)_indexForInsertingItemWithIdentifier:(id)arg0 intoArray:(id)arg1 ;
-(NSUInteger)_sectionIndexForGroupKey:(id)arg0 ;
-(id)_enabledItemIdentifiersForGroupID:(id)arg0 ;
-(id)_groupKeyForSectionAtIndex:(NSUInteger)arg0 ;
-(id)_indexPathForItemWithIdentifier:(id)arg0 ;
-(id)_itemIdentifierForIndexPath:(id)arg0 ;
-(id)_itemIdentifiersInSection:(NSUInteger)arg0 ;
-(id)_widgetListEditViewTableHeaderView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_acknowledgeItemsAndResetNewWidgetsCount;
-(void)_acknowledgeItemsSavingItemState:(BOOL)arg0 ;
-(void)_cancelWidgetListEditView;
-(void)_disableItemAtIndexPath:(id)arg0 inTableView:(id)arg1 ;
-(void)_dismissDueToInterfaceActionAndAcknowledgeItemsSavingItemState:(BOOL)arg0 ;
-(void)_dismissWidgetListEditView;
-(void)_enableItemAtIndexPath:(id)arg0 inTableView:(id)arg1 ;
-(void)_loadItems;
-(void)_saveItemArrangement;
-(void)_saveItemState;
-(void)pinSwitchChanaged:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif