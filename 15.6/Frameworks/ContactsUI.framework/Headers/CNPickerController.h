// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPICKERCONTROLLER_H
#define CNPICKERCONTROLLER_H

@class UITableViewController, NSArray, NSString, UITextField, UISearchController, NSIndexPath;
@protocol UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UISearchResultsUpdating, UISearchControllerDelegate, CNPickerControllerDelegate;



@interface CNPickerController : UITableViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UISearchResultsUpdating, UISearchControllerDelegate, CNPickerControllerDelegate>



@property (nonatomic) BOOL allowsCustomItems; // ivar: _allowsCustomItems
@property (nonatomic) BOOL allowsDiscoveredItems; // ivar: _allowsDiscoveredItems
@property (copy, nonatomic) NSArray *builtinItems; // ivar: _builtinItems
@property (nonatomic) NSInteger builtinItemsSection; // ivar: _builtinItemsSection
@property (retain, nonatomic) NSString *customEditingItem; // ivar: _customEditingItem
@property (copy, nonatomic) NSArray *customItems; // ivar: _customItems
@property (nonatomic) NSInteger customItemsSection; // ivar: _customItemsSection
@property (retain, nonatomic) UITextField *customTextField; // ivar: _customTextField
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNPickerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *discoveredItems; // ivar: _discoveredItems
@property (nonatomic) NSInteger discoveredItemsSection; // ivar: _discoveredItemsSection
@property (retain, nonatomic) NSArray *filterTokens; // ivar: _filterTokens
@property (copy, nonatomic) NSArray *filteredBuiltinItems; // ivar: _filteredBuiltinItems
@property (copy, nonatomic) NSArray *filteredCustomItems; // ivar: _filteredCustomItems
@property (copy, nonatomic) NSArray *filteredDiscoveredItems; // ivar: _filteredDiscoveredItems
@property (copy, nonatomic) NSArray *filteredPromotedItems; // ivar: _filteredPromotedItems
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *itemLocalizationBlock; // ivar: _itemLocalizationBlock
@property (copy, nonatomic) NSString *itemLocalizationKey; // ivar: _itemLocalizationKey
@property (copy, nonatomic) NSArray *promotedItems; // ivar: _promotedItems
@property (nonatomic) NSInteger promotedItemsSection; // ivar: _promotedItemsSection
@property (copy, nonatomic) NSArray *promotedSupplementalItems; // ivar: _promotedSupplementalItems
@property (copy, nonatomic) NSArray *remainderSupplementalItems; // ivar: _remainderSupplementalItems
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (nonatomic, getter=isSearchControllerActive) BOOL searchControllerActive; // ivar: _searchControllerActive
@property (nonatomic) BOOL searchIncludesSupplementalItems; // ivar: _searchIncludesSupplementalItems
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (retain, nonatomic) id *selectedItem; // ivar: _selectedItem
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supplementalItems; // ivar: _supplementalItems


-(BOOL)isAddCustomItemIndexPath:(id)arg0 ;
-(BOOL)isSearching;
-(BOOL)isSupplementalDisclosureItemIndexPath:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_indexForCustomItemAtIndexPath:(id)arg0 ;
-(id)_itemAtIndexPath:(id)arg0 isPlaceholder:(*BOOL)arg1 ;
-(id)_titleForPickerItem:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)titleForAddCustomItem;
-(id)titleForPickerItem:(id)arg0 ;
-(id)titleForSupplementalItems;
-(void)_updateRightButtonItem;
-(void)cancelPicker:(id)arg0 ;
-(void)customLabelUpdated:(id)arg0 ;
-(void)didDismissSearchController:(id)arg0 ;
-(void)doneInlineEditing:(id)arg0 ;
-(void)donePicker:(id)arg0 ;
-(void)pickedItem:(id)arg0 ;
-(void)picker:(id)arg0 didDeleteItem:(id)arg1 ;
-(void)picker:(id)arg0 didPickItem:(id)arg1 ;
-(void)pickerDidCancel:(id)arg0 ;
-(void)presentExtendedPicker;
-(void)removeCustomItem:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willPresentSearchController:(id)arg0 ;


@end


#endif