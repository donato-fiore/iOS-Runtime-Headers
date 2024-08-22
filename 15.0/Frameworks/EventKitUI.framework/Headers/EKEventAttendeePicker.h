// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTATTENDEEPICKER_H
#define EKEVENTATTENDEEPICKER_H

@class UIViewController, NSArray, CNComposeRecipientTextView, UIScrollView, UITableView, UIKeyboard, NSNumber, NSOperationQueue, NSMutableDictionary, EKEvent, NSDate, CNAutocompleteSearchManager, NSMutableArray, CNAutocompleteResultsTableViewController, CNAutocompleteFetchContext, CNComposeRecipient, NSString;
@protocol CNComposeRecipientTextViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNContactPickerDelegate, CNContactViewControllerPrivateDelegate, CNAutocompleteSearchConsumer, EKEventAttendeePickerDelegate;



@interface EKEventAttendeePicker : UIViewController <CNComposeRecipientTextViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNContactPickerDelegate, CNContactViewControllerPrivateDelegate, CNAutocompleteSearchConsumer>

 {
    NSArray *_recipients;
    CNComposeRecipientTextView *_composeRecipientView;
    UIScrollView *_recipientScrollView;
    UITableView *_searchResultsView;
    BOOL _showingSearchField;
    UIKeyboard *_keyboard;
    NSNumber *_lastSearchId;
    BOOL _ABAccessDenied;
    BOOL _shouldReenableAutomaticKeyboard;
    CGRect _initialFrame;
    NSOperationQueue *_availabilityQueue;
    NSMutableDictionary *_recipientAddressesToRecipients;
    EKEvent *_event;
    NSMutableDictionary *_atomPresentationOptionsByRecipient;
    BOOL _suppressAvailabilityRequests;
    NSDate *_overriddenEventStartDate;
    NSDate *_overriddenEventEndDate;
    CNAutocompleteSearchManager *_searchManager;
    NSMutableArray *_searchResults;
    CNAutocompleteResultsTableViewController *_autocompleteTableViewController;
    CNAutocompleteFetchContext *_fetchContext;
    CNComposeRecipient *_displayedRecipient;
}


@property (weak, nonatomic) NSObject<EKEventAttendeePickerDelegate> *addressValidationDelegate; // ivar: _addressValidationDelegate
@property (readonly, nonatomic) NSArray *addresses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasChanges; // ivar: _hasChanges
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSString *remainingText;
@property (copy, nonatomic) NSString *searchAccountID; // ivar: _searchAccountID
@property (readonly, nonatomic) BOOL showAvailability;
@property (readonly) Class superclass;


+(BOOL)_participantHasResponded:(id)arg0 ;
+(id)_addressForRecipient:(id)arg0 ;
-(BOOL)_zeroKeyworkSearchEnabled;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg0 ;
-(CGFloat)_maxScrollerHeight;
-(Class)_CNContactPickerViewController;
-(Class)_CNContactViewController;
-(NSUInteger)presentationOptionsForRecipient:(id)arg0 ;
-(id)_lookUpRecipientForAddress:(id)arg0 ;
-(id)_searchManager;
-(id)_searchResultsView;
-(id)composeRecipientView:(id)arg0 composeRecipientForAddress:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 event:(id)arg1 calendar:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4 ;
-(id)peoplePickerPrompt;
-(void)_adjustLayoutOfSubviews;
-(void)_copyRecipientsFromComposeView;
-(void)_hideSearchResultsViewAndCancelOutstandingSearches:(BOOL)arg0 ;
-(void)_refreshSearchResults;
-(void)_requestAvailabilityForRecipients:(id)arg0 ;
-(void)_setAtomPresentationOption:(NSUInteger)arg0 forRecipient:(id)arg1 ;
-(void)_showSearchResultsView;
-(void)_updateFetchContextChosenAddresses;
-(void)autocompleteResultsController:(id)arg0 didRequestInfoAboutRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg0 didSelectRecipient:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)commitRemainingText;
-(void)composeRecipientView:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)composeRecipientView:(id)arg0 didFinishEnteringAddress:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didRemoveRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 textDidChange:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg0 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg0 ;
-(void)consumeAutocompleteSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)consumeCorecipientSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contactViewControllerDidExecuteClearRecentsDataAction:(id)arg0 ;
-(void)dealloc;
-(void)finishedSearchingForAutocompleteResults;
-(void)finishedTaskWithID:(id)arg0 ;
-(void)loadView;
-(void)scrollComposeViewToEnd;
-(void)searchWithText:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif