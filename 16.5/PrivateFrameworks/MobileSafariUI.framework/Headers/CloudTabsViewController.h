// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLOUDTABSVIEWCONTROLLER_H
#define CLOUDTABSVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, UIBarButtonItem, UITableView, UISearchController, NSTimer;
@protocol UITableViewDataSource, UITableViewDelegate, UITableViewDragDelegate, PreviewTableViewControllerDelegate, UISearchResultsUpdating, CloudTabsViewControllerDelegate, LinkPreviewProvider, _SFNavigationIntentHandling, TabGroupProvider;


#import "CloudTabStore.h"
#import "PreviewTableViewController.h"

@interface CloudTabsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITableViewDragDelegate, PreviewTableViewControllerDelegate, UISearchResultsUpdating>

 {
    CloudTabStore *_cloudTabStore;
    NSArray *_devices;
    NSString *_primaryDeviceUUID;
    BOOL _onlyShowsPrimaryDevice;
    NSString *_userTypedFilter;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_editBarButtonItem;
    PreviewTableViewController *_tableViewController;
    UITableView *_tableView;
    UISearchController *_searchController;
    NSTimer *_delayReloadTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CloudTabsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<LinkPreviewProvider> *linkPreviewProvider; // ivar: _linkPreviewProvider
@property (weak, nonatomic) NSObject<_SFNavigationIntentHandling> *navigationIntentHandler; // ivar: _navigationIntentHandler
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<TabGroupProvider> *tabGroupProvider; // ivar: _tabGroupProvider


-(BOOL)tableView:(id)arg0 canFocusRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_tableView:(id)arg0 dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_deviceForIndexPath:(id)arg0 ;
-(id)_filteredTabsInSection:(NSInteger)arg0 ;
-(id)_tabForIndexPath:(id)arg0 ;
-(id)_urlForRowAtIndexPath:(id)arg0 ;
-(id)initWithCloudTabStore:(id)arg0 primaryDeviceUUID:(id)arg1 ;
-(id)previewTableViewController:(id)arg0 URLForRowAtIndexPath:(id)arg1 ;
-(id)previewTableViewController:(id)arg0 menuForRowAtIndexPath:(id)arg1 ;
-(id)safari_tableViewForScrollPositionSaving;
-(id)safari_tableViewScrollPositionSaveIdentifier;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)tableView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)tableView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_cloudTabsDidChange:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_delayReloadTimerFired;
-(void)_deleteRowAtIndexPath:(id)arg0 ;
-(void)_loadDevices;
-(void)_reloadDevicesAndTable;
-(void)_updateContentUnavailableConfiguration;
-(void)dealloc;
-(void)dismiss;
-(void)loadView;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif