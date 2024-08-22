// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKFRIENDLISTVIEWCONTROLLER_H
#define GKFRIENDLISTVIEWCONTROLLER_H

@class UITableViewController, UIActivityIndicatorView, NSMutableArray, NSArray, NSString, UISearchController;
@protocol UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDelegate, UITableViewDataSource, GKFriendListViewControllerDelegate;



@interface GKFriendListViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDelegate, UITableViewDataSource>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) NSMutableArray *allPlayers; // ivar: _allPlayers
@property (retain, nonatomic) NSArray *allPlayersForDisplay; // ivar: _allPlayersForDisplay
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GKFriendListViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *friendPlayers; // ivar: _friendPlayers
@property (retain, nonatomic) NSArray *friendsForDisplay; // ivar: _friendsForDisplay
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsShowMoreFooter; // ivar: _needsShowMoreFooter
@property (retain, nonatomic) NSMutableArray *recentPlayers; // ivar: _recentPlayers
@property (retain, nonatomic) NSArray *recentsForDisplay; // ivar: _recentsForDisplay
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableViewHasFooter:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)getPlayerAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)addFriends:(id)arg0 ;
-(void)deletePlayerAtIndexPath:(id)arg0 ;
-(void)didDismissSearchController:(id)arg0 ;
-(void)loadData;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)loadMoreFriends;
-(void)reportPlayerAtIndexPath:(id)arg0 ;
-(void)setupNavBar;
-(void)setupSearchController;
-(void)showLoadingIndicator;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif