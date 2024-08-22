// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAPPSEARCHVIEWCONTROLLER_H
#define WFAPPSEARCHVIEWCONTROLLER_H

@class UIViewController, NSArray, NSMutableDictionary, NSString, UIImage, NSMutableOrderedSet, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, WFAppSearchViewControllerDelegate;



@interface WFAppSearchViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>



@property (readonly, nonatomic) BOOL allowMultipleSelection; // ivar: _allowMultipleSelection
@property (readonly, nonatomic) NSInteger appSearchType; // ivar: _appSearchType
@property (copy, nonatomic) NSArray *apps; // ivar: _apps
@property (retain, nonatomic) NSMutableDictionary *cachedAppIconForBundleId; // ivar: _cachedAppIconForBundleId
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFAppSearchViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *omittedAppBundleIDs; // ivar: _omittedAppBundleIDs
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (retain, nonatomic) NSMutableOrderedSet *selectedApps; // ivar: _selectedApps
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView


-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)applicationIconImageForBundleIdentifier:(id)arg0 ;
-(id)filteredApps;
-(id)init;
-(id)initWithAppSearchType:(NSInteger)arg0 ;
-(id)initWithAppSearchType:(NSInteger)arg0 allowMultipleSelection:(BOOL)arg1 selectedApps:(id)arg2 ;
-(id)initWithAppSearchType:(NSInteger)arg0 omittedAppBundleIDs:(id)arg1 allowMultipleSelection:(BOOL)arg2 selectedApps:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)adjustInsetsForKeyboard;
-(void)cancel;
-(void)dealloc;
-(void)done;
-(void)loadApps;
-(void)loadView;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateDoneButtonEnabledState;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif