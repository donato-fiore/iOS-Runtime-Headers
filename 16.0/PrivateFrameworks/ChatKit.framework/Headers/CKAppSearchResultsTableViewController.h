// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAPPSEARCHRESULTSTABLEVIEWCONTROLLER_H
#define CKAPPSEARCHRESULTSTABLEVIEWCONTROLLER_H

@class UITableViewController, NSArray, NSString;
@protocol UISearchResultsUpdating, CKBrowserAppManagerViewControllerDelegate;



@interface CKAppSearchResultsTableViewController : UITableViewController <UISearchResultsUpdating>



@property (retain, nonatomic) NSArray *allPlugins; // ivar: _allPlugins
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKBrowserAppManagerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *searchResults; // ivar: _searchResults
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)searchEnded;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif