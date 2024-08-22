// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HISTORYTABLEVIEWCONTROLLER_H
#define HISTORYTABLEVIEWCONTROLLER_H

@class UIBarButtonItem, NSTimer, UISearchBar, NSArray, NSString;
@protocol BookmarksToolbarItemProvider, HistoryTableViewDataSourceDelegate, UIPopoverPresentationControllerDelegate, UISearchBarDelegate, UITableViewDragDelegate, BookmarksPanelStateRestoring, PreviewTableViewControllerDelegate, HistoryTableViewControllerDelegate, _SFNavigationIntentHandling, TabGroupProvider;


#import "PreviewTableViewController.h"
#import "HistoryTableViewDataSource.h"

@interface HistoryTableViewController : PreviewTableViewController <BookmarksToolbarItemProvider, HistoryTableViewDataSourceDelegate, UIPopoverPresentationControllerDelegate, UISearchBarDelegate, UITableViewDragDelegate, BookmarksPanelStateRestoring, PreviewTableViewControllerDelegate>

 {
    UIBarButtonItem *_clearHistoryButton;
    UIBarButtonItem *_doneBarButtonItem;
    NSTimer *_saveChangesToCloudHistoryTimer;
    HistoryTableViewDataSource *_historyDataSource;
    BOOL _needsInitialContentOffsetUpdateForTableHeaderView;
    BOOL _needsContentOffsetUpdate;
    UISearchBar *_searchBar;
    BOOL _historyWasLoaded;
    BOOL _allowClearingHistory;
}


@property (readonly, nonatomic) NSArray *bookmarksPanelToolbarItems;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HistoryTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<_SFNavigationIntentHandling> *navigationIntentHandler; // ivar: _navigationIntentHandler
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<TabGroupProvider> *tabGroupProvider; // ivar: _tabGroupProvider


-(BOOL)_shouldUseTranslucentAppearance;
-(BOOL)restoreStateWithDictionary:(id)arg0 ;
-(BOOL)safari_wantsDoneButtonInModalBookmarksPanel;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canFocusRowAtIndexPath:(id)arg1 ;
-(NSInteger)_tableView:(id)arg0 dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_clearHistoryBarButtonItem;
-(id)_clearHistoryText;
-(id)_doneBarButtonItem;
-(id)_separatorEffect;
-(id)_urlForRowAtIndexPath:(id)arg0 ;
-(id)_vibrantHeaderBackgroundView;
-(id)currentStateDictionary;
-(id)init;
-(id)previewTableViewController:(id)arg0 URLForRowAtIndexPath:(id)arg1 ;
-(id)previewTableViewController:(id)arg0 menuForRowAtIndexPath:(id)arg1 ;
-(id)safari_tableViewScrollPositionSaveIdentifier;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)tableView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_deleteRowAtIndexPath:(id)arg0 ;
-(void)_endEditing;
-(void)_saveChangesToCloudHistory;
-(void)_saveChangesToCloudHistorySoon;
-(void)_setUpClearHistoryMenu;
-(void)_updateClearHistoryMenuTitle;
-(void)_updateContentOffsetIfNeeded;
-(void)dealloc;
-(void)historyTableViewDataSource:(id)arg0 didChangeRowAtIndexPath:(id)arg1 forChangeType:(NSInteger)arg2 ;
-(void)historyTableViewDataSource:(id)arg0 didChangeSectionAtIndex:(NSInteger)arg1 forChangeType:(NSInteger)arg2 ;
-(void)historyTableViewDataSourceDidChangeContent:(id)arg0 ;
-(void)historyTableViewDataSourceDidLoadContent:(id)arg0 ;
-(void)historyTableViewDataSourceWillChangeContent:(id)arg0 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateClearHistoryButtonEnable;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif