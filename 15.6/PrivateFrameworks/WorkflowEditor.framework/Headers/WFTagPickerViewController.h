// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTAGPICKERVIEWCONTROLLER_H
#define WFTAGPICKERVIEWCONTROLLER_H

@class UITableViewController, NSString, UISearchController, NSMutableOrderedSet, NSArray;
@protocol UISearchResultsUpdating, WFTagPickerViewControllerDelegate;



@interface WFTagPickerViewController : UITableViewController <UISearchResultsUpdating>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFTagPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (readonly, nonatomic) NSMutableOrderedSet *selectedTags; // ivar: _selectedTags
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags; // ivar: _tags


-(BOOL)_canShowWhileLocked;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)currentResults;
-(id)initWithTitle:(id)arg0 tags:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)cancel;
-(void)dismiss;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif