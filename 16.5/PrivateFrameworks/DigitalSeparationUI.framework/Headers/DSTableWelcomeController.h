// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSTABLEWELCOMECONTROLLER_H
#define DSTABLEWELCOMECONTROLLER_H

@class OBTableWelcomeController, OBBoldTrayButton, NSString, OBLinkTrayButton, UIBarButtonItem, UISearchController, UIActivityIndicatorView, UITapGestureRecognizer;
@protocol UISearchBarDelegate, UISearchResultsUpdating, UISearchControllerDelegate, UITableViewDelegate, UITableViewDataSource;



@interface DSTableWelcomeController : OBTableWelcomeController <UISearchBarDelegate, UISearchResultsUpdating, UISearchControllerDelegate, UITableViewDelegate, UITableViewDataSource>



@property (retain, nonatomic) OBBoldTrayButton *boldButton; // ivar: _boldButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFiltering; // ivar: _isFiltering
@property (nonatomic) BOOL isShowingNoResultsView; // ivar: _isShowingNoResultsView
@property (nonatomic) BOOL isShowingNoSharingView; // ivar: _isShowingNoSharingView
@property (nonatomic) BOOL isSpinnerActive; // ivar: _isSpinnerActive
@property (retain, nonatomic) OBLinkTrayButton *linkButton; // ivar: _linkButton
@property (retain, nonatomic) UIBarButtonItem *quickExitButton; // ivar: _quickExitButton
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (nonatomic) BOOL shouldShowSearchBar; // ivar: _shouldShowSearchBar
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture; // ivar: _tapGesture


-(BOOL)isKeyboardActive;
-(BOOL)isSearchBarEmpty;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 shouldShowSearchBar:(BOOL)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)addBorderedIcon:(id)arg0 ;
-(void)hideButtonsIfSearching;
-(void)hideKeyboard;
-(void)hideNoResultsView;
-(void)hideNoSharingView;
-(void)presentErrorAlertController:(id)arg0 ;
-(void)presentErrorAlertController:(id)arg0 okHandler:(id)arg1 ;
// -(void)presentErrorAlertWithTitle:(id)arg0 message:(id)arg1 continueHandler:(id)arg2 tryAgainHandler:(unk)arg3  ;
-(void)removeLinkButton;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setupSearchBar;
-(void)setupTableView;
-(void)showNoResultsViewWithSearchText:(id)arg0 ;
-(void)showNoSharingViewWithText:(id)arg0 image:(id)arg1 ;
-(void)startContentSpinner;
-(void)stopContentSpinner;
-(void)tableView:(id)arg0 didHighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willDismissSearchController:(id)arg0 ;
-(void)willPresentSearchController:(id)arg0 ;


@end


#endif