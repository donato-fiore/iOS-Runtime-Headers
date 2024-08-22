// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKADDRESSSEARCHERVIEWCONTROLLER_H
#define PKADDRESSSEARCHERVIEWCONTROLLER_H

@class UIViewController, NSArray, PKContactFormatValidator, NSString, _UINavigationControllerPalette, UISearchBar, PKAddressSearchModel, CNPostalAddress, UITableView;
@protocol UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, PKAddressSearchModelDelegate, PKAddressEditorViewControllerDelegate, PKAddressSearcherViewControllerDelegate;



@interface PKAddressSearcherViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, PKAddressSearchModelDelegate, PKAddressEditorViewControllerDelegate>



@property (retain, nonatomic) NSArray *completionSearchResults; // ivar: _completionSearchResults
@property (retain, nonatomic) PKContactFormatValidator *contactFormatValidator; // ivar: _contactFormatValidator
@property (retain, nonatomic) NSArray *contactsSearchResults; // ivar: _contactsSearchResults
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAddressSearcherViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UINavigationControllerPalette *palette; // ivar: _palette
@property (retain, nonatomic) NSArray *requiredKeys; // ivar: _requiredKeys
@property (retain, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (retain, nonatomic) PKAddressSearchModel *searchModel; // ivar: _searchModel
@property (retain, nonatomic) CNPostalAddress *selectedAddress; // ivar: _selectedAddress
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)tableView:(id)arg0 wantsHeaderForSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_showAddressEditorWithContact:(id)arg0 withContactErrors:(id)arg1 ;
-(void)addressEditorViewController:(id)arg0 selectedContact:(id)arg1 ;
-(void)addressEditorViewControllerDidCancel:(id)arg0 ;
-(void)contactsSearchUpdated:(id)arg0 ;
-(void)loadView;
-(void)mapSearchUpdated:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)selectedAddress:(id)arg0 withError:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif