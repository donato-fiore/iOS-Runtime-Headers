// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STALLOWANCEITEMSEARCHRESULTSCONTROLLER_H
#define STALLOWANCEITEMSEARCHRESULTSCONTROLLER_H

@class UITableViewController, NSArray, NSString, NSOrderedSet, NSMutableOrderedSet;
@protocol UISearchResultsUpdating;



@interface STAllowanceItemSearchResultsController : UITableViewController <UISearchResultsUpdating>



@property (copy) NSArray *allowanceItemSpecifiers; // ivar: _allowanceItemSpecifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSArray *filteredAllowanceItemSpecifiers; // ivar: _filteredAllowanceItemSpecifiers
@property BOOL hasNewSelection; // ivar: _hasNewSelection
@property (readonly) NSUInteger hash;
@property (copy) NSOrderedSet *initalBundleIdentifiers; // ivar: _initalBundleIdentifiers
@property (copy) NSOrderedSet *initialWebDomains; // ivar: _initialWebDomains
@property (retain) NSMutableOrderedSet *selectedBundleIdentifiers; // ivar: _selectedBundleIdentifiers
@property (retain) NSMutableOrderedSet *selectedWebDomains; // ivar: _selectedWebDomains
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif