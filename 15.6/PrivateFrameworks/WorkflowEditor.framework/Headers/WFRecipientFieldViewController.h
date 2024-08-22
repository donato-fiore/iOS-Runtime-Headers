// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFRECIPIENTFIELDVIEWCONTROLLER_H
#define WFRECIPIENTFIELDVIEWCONTROLLER_H

@class UIViewController, CNAutocompleteResultsTableViewController, NSLayoutConstraint, CNComposeRecipientTextView, UILabel, UIButton, CNContactStore, NSString, NSArray, CNAutocompleteFetchContext, NSNumber, CNAutocompleteSearchManager, NSMutableArray, NSSet, UIView;
@protocol CNComposeRecipientTextViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNAutocompleteSearchConsumer, WFRecipientFieldViewControllerDelegate;


#import "WFContactPickerCoordinator.h"

@interface WFRecipientFieldViewController : UIViewController <CNComposeRecipientTextViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNAutocompleteSearchConsumer>



@property (nonatomic) BOOL allowsCustomHandles; // ivar: _allowsCustomHandles
@property (readonly, nonatomic) CNAutocompleteResultsTableViewController *autocompleteResultsController; // ivar: _autocompleteResultsController
@property (retain, nonatomic) NSLayoutConstraint *composeHeaderHeightConstraint; // ivar: _composeHeaderHeightConstraint
@property (retain, nonatomic) CNComposeRecipientTextView *composeTextView; // ivar: _composeTextView
@property (retain, nonatomic) UILabel *contactAuthorizationMessageLabel; // ivar: _contactAuthorizationMessageLabel
@property (nonatomic) NSInteger contactAuthorizationStatus; // ivar: _contactAuthorizationStatus
@property (retain, nonatomic) UIButton *contactAuthorizationStatusButton; // ivar: _contactAuthorizationStatusButton
@property (retain, nonatomic) WFContactPickerCoordinator *contactPickerCoordinator; // ivar: _contactPickerCoordinator
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (copy, nonatomic) NSString *currentSearchTerm; // ivar: _currentSearchTerm
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFRecipientFieldViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *entries;
@property (readonly, nonatomic) CNAutocompleteFetchContext *fetchContext; // ivar: _fetchContext
@property (copy, nonatomic) NSString *fieldLabel; // ivar: _fieldLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *lastSearchID; // ivar: _lastSearchID
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) CNAutocompleteSearchManager *searchManager; // ivar: _searchManager
@property (retain, nonatomic) NSMutableArray *searchResults; // ivar: _searchResults
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *supportedPersonProperties; // ivar: _supportedPersonProperties
@property (retain, nonatomic) UIView *tableBackgroundView; // ivar: _tableBackgroundView


-(BOOL)hasActiveSearch;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg0 ;
-(NSUInteger)preferredSearchResultTypes;
-(id)composeRecipientView:(id)arg0 composeRecipientForAddress:(id)arg1 ;
-(id)init;
-(void)_addSearchResults:(id)arg0 forTask:(id)arg1 ;
-(void)_cancelActiveSearchClearingText:(BOOL)arg0 ;
-(void)_finishedSearching;
-(void)_presentContactViewControllerForRecipient:(id)arg0 ;
-(void)_startSearch:(id)arg0 ;
-(void)_updateFetchContextChosenAddresses;
-(void)autocompleteResultsController:(id)arg0 didRequestInfoAboutRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg0 didSelectRecipient:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)cancel:(id)arg0 ;
-(void)commitRemainingText;
-(void)composeHeaderView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)composeRecipientView:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didFinishEnteringAddress:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didRemoveRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 textDidChange:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg0 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg0 ;
-(void)configureBackgroundView;
-(void)consumeAutocompleteSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)consumeCorecipientSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)dealloc;
-(void)done:(id)arg0 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)finishedTaskWithID:(id)arg0 ;
-(void)loadView;
-(void)requestContactAuthorization;
-(void)requestContactsAccessIfNeeded;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif