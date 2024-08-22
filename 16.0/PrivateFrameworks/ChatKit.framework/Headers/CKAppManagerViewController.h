// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAPPMANAGERVIEWCONTROLLER_H
#define CKAPPMANAGERVIEWCONTROLLER_H

@class UIViewController, UITableView, UIBarButtonItem, NSString, NSArray, UISearchController;
@protocol UITableViewDelegate, UITableViewDataSource, CKAppManagerAppTableViewCellDelegate, UISearchControllerDelegate, UISearchBarDelegate, CKAppManagerViewControllerDelegate;


#import "CKAppSearchResultsTableViewController.h"

@interface CKAppManagerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CKAppManagerAppTableViewCellDelegate, UISearchControllerDelegate, UISearchBarDelegate>

 {
    UITableView *_tableView;
    UIBarButtonItem *_dismissButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKAppManagerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *favoritePlugins; // ivar: _favoritePlugins
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *plugins; // ivar: _plugins
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (retain, nonatomic) CKAppSearchResultsTableViewController *searchResultsController; // ivar: _searchResultsController
@property (readonly) Class superclass;


-(BOOL)allowEnablingDisabledApps;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(BOOL)togglePluginAtIndex:(NSUInteger)arg0 enabled:(BOOL)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)balloonPluginManager;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)appCell:(id)arg0 wasToggledOn:(BOOL)arg1 ;
-(void)didDismissSearchController:(id)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)reloadPluginsImmediately;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)updateEditDoneButton;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif