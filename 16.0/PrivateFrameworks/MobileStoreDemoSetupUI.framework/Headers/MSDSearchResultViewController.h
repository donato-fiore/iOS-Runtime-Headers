// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSDSEARCHRESULTVIEWCONTROLLER_H
#define MSDSEARCHRESULTVIEWCONTROLLER_H

@class UIViewController, NSTimer, NSString, UISearchBar, NSArray, UITableView;
@protocol UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MSDStoreInfoListViewControllerDelegate, MSDSearchResultViewControllerDelegate;



@interface MSDSearchResultViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MSDStoreInfoListViewControllerDelegate>



@property (retain, nonatomic) NSTimer *debounceTimer; // ivar: _debounceTimer
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<MSDSearchResultViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (retain, nonatomic) NSArray *storeInfoList; // ivar: _storeInfoList
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)isShowingSearchResult;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)didConfirmStoreAssignment:(id)arg0 ;
-(void)dismissAllTopViews;
-(void)listViewDidClose:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)showInProgress;
-(void)showStoreInfo:(id)arg0 ;
-(void)showStoreList:(id)arg0 inDisplayMode:(NSUInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(id)arg0 forStore:(id)arg1 ;
-(void)viewWillClose:(id)arg0 forStore:(id)arg1 ;


@end


#endif