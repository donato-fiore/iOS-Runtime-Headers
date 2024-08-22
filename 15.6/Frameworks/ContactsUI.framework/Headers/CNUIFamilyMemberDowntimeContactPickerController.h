// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIFAMILYMEMBERDOWNTIMECONTACTPICKERCONTROLLER_H
#define CNUIFAMILYMEMBERDOWNTIMECONTACTPICKERCONTROLLER_H

@class UIViewController, NSArray, FAFamilyMember, CNContactFormatter, NSString, CNUICoreContactEditingSession, CNContact, NSIndexPath, UISearchBar, UISearchController, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, UISearchResultsUpdating, UISearchControllerDelegate, UISearchBarDelegate, UIAdaptivePresentationControllerDelegate, CNContactContentViewControllerDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate;


#import "CNContactViewController.h"
#import "CNUIFamilyMemberDowntimeContactDataSource.h"
#import "CNUIFamilyMemberContactsEditingStrategy.h"

@interface CNUIFamilyMemberDowntimeContactPickerController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchResultsUpdating, UISearchControllerDelegate, UISearchBarDelegate, UIAdaptivePresentationControllerDelegate, CNContactContentViewControllerDelegate>



@property (readonly, nonatomic) NSArray *allFamilyMembers; // ivar: _allFamilyMembers
@property (readonly, nonatomic) FAFamilyMember *childFamilyMember; // ivar: _childFamilyMember
@property (readonly, nonatomic) CNContactFormatter *contactCardWarningFormatter; // ivar: _contactCardWarningFormatter
@property (readonly, nonatomic) CNContactFormatter *contactCellLabelFormatter; // ivar: _contactCellLabelFormatter
@property (retain, nonatomic) CNContactViewController *contactViewController; // ivar: _contactViewController
@property (readonly, nonatomic) CNUIFamilyMemberDowntimeContactDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNUIFamilyMemberDowntimeContactPickerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNUICoreContactEditingSession *editingSessionFromContactViewController;
@property (readonly, nonatomic) CNUIFamilyMemberContactsEditingStrategy *editingStrategy; // ivar: _editingStrategy
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL initialSelectionPerformed; // ivar: _initialSelectionPerformed
@property (readonly, nonatomic) CNContact *preferredForNameMeContact; // ivar: _preferredForNameMeContact
@property (retain, nonatomic) NSIndexPath *presentedContactIndexPath; // ivar: _presentedContactIndexPath
@property (retain, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (nonatomic) BOOL shouldPreselectFamilyMemberContacts; // ivar: _shouldPreselectFamilyMemberContacts
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


+(id)descriptorForContactPropertiesSupportingPredicateEvaluation;
+(id)familyCircle;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithChildFamilyMember:(id)arg0 allFamilyMembers:(id)arg1 contactStore:(id)arg2 ;
-(id)initWithChildFamilyMember:(id)arg0 allFamilyMembers:(id)arg1 contactStore:(id)arg2 editingStrategy:(id)arg3 showingFamilyMemberContacts:(BOOL)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)warningMessageForContact:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)configureNavigationItem;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)dealloc;
-(void)done:(id)arg0 ;
-(void)keyboardWillChange:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)saveSanitizedSelectedContacts:(id)arg0 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)setupSearchBar;
-(void)setupSearchController;
-(void)setupTableView;
-(void)setupUI;
-(void)startObservingKeyboardChanges;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif