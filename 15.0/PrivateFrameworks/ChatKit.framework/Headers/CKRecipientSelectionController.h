// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKRECIPIENTSELECTIONCONTROLLER_H
#define CKRECIPIENTSELECTIONCONTROLLER_H

@class CNContactStore, CNContactPickerViewController, CoreTelephonyClient, STConversationContext, NSString, CNComposeRecipient, NSMutableDictionary, UIView, UILabel, UIScrollView;
@protocol CNComposeRecipientTextViewDelegate, CKComposeRecipientViewDelegate, CKRecipientSearchListControllerDelegate, CNAutocompleteGroupDetailViewControllerDelegate, CNContactPickerDelegate, CKDetailsContactsManagerDelegate, CoreTelephonyClientDelegate, CKRecipientSelectionControllerDelegate;


#import "CKViewController.h"
#import "CKManualUpdater.h"
#import "CKAlertController.h"
#import "CKDetailsContactsManager.h"
#import "CKPendingConversation.h"
#import "CKRecipientSearchListController.h"
#import "CKComposeRecipientView.h"

@interface CKRecipientSelectionController : CKViewController <CNComposeRecipientTextViewDelegate, CKComposeRecipientViewDelegate, CKRecipientSearchListControllerDelegate, CNAutocompleteGroupDetailViewControllerDelegate, CNContactPickerDelegate, CKDetailsContactsManagerDelegate, CoreTelephonyClientDelegate>

 {
    CGFloat _keyboardHeightWithAccessoryView;
    CNContactStore *_contactStore;
}


@property (retain, nonatomic) CKManualUpdater *addressBookNotificationUpdater; // ivar: _addressBookNotificationUpdater
@property (nonatomic) BOOL allowedByScreenTime; // ivar: _allowedByScreenTime
@property (retain, nonatomic) CKAlertController *alternateAddressesAlertController; // ivar: _alternateAddressesAlertController
@property (readonly, nonatomic) CGFloat collapsedHeight;
@property (retain, nonatomic) CNContactPickerViewController *contactPickerViewController; // ivar: _contactPickerViewController
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CKDetailsContactsManager *contactsManager; // ivar: _contactsManager
@property (retain, nonatomic) CKPendingConversation *conversation; // ivar: _conversation
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (retain, nonatomic) STConversationContext *currentConversationContext; // ivar: _currentConversationContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKRecipientSelectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didShowOneTimeErrorAlert; // ivar: _didShowOneTimeErrorAlert
@property (nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (nonatomic) BOOL forceDisplayPillView; // ivar: _forceDisplayPillView
@property (nonatomic) BOOL forceMMS; // ivar: _forceMMS
@property (copy, nonatomic) id *gameCenterPickerBlock; // ivar: _gameCenterPickerBlock
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL homogenizePreferredServiceForiMessage; // ivar: _homogenizePreferredServiceForiMessage
@property (nonatomic) BOOL isDisambiguating; // ivar: _isDisambiguating
@property (nonatomic) NSUInteger numberOfRowsInToField; // ivar: _numberOfRowsInToField
@property (nonatomic, getter=isPeoplePickerHidden) BOOL peoplePickerHidden; // ivar: _peoplePickerHidden
@property (nonatomic) BOOL preventAtomization; // ivar: _preventAtomization
@property (retain, nonatomic) CNComposeRecipient *recentContactForPresentedCNCard; // ivar: _recentContactForPresentedCNCard
@property (retain, nonatomic) NSMutableDictionary *recipientAvailabilities; // ivar: _recipientAvailabilities
@property (retain, nonatomic) NSMutableDictionary *recipientAvailibityTimers; // ivar: _recipientAvailibityTimers
@property (retain, nonatomic) CKRecipientSearchListController *searchListController; // ivar: _searchListController
@property (nonatomic, getter=isSearchResultsHidden) BOOL searchResultsHidden;
@property (retain, nonatomic) UIView *separator; // ivar: _separator
@property (readonly, nonatomic) BOOL shouldSuppressSearchResultsTable; // ivar: _shouldSuppressSearchResultsTable
@property (readonly) Class superclass;
@property (retain, nonatomic) CKComposeRecipientView *toField; // ivar: _toField
@property (readonly, nonatomic) UIView *toFieldContainerView; // ivar: _toFieldContainerView
@property (readonly, nonatomic) BOOL toFieldIsFirstResponder;
@property (retain, nonatomic) UILabel *toFieldPlaceholderLabel; // ivar: _toFieldPlaceholderLabel
@property (retain, nonatomic) UIScrollView *toFieldScrollingView; // ivar: _toFieldScrollingView


-(BOOL)_configureSearchListControllerAsAPopover;
-(BOOL)_isToFieldPushedUp;
-(BOOL)_shouldEnableScrolling;
-(BOOL)_systemUnderLock;
-(BOOL)autocompleteResultsController:(id)arg0 willOverrideImageDataForRecipient:(id)arg1 completion:(id)arg2 ;
-(BOOL)chooseSelectedSearchResultForComposeRecipientView:(id)arg0 context:(NSUInteger)arg1 ;
-(BOOL)collapseSelectedSearchResultForComposeRecipientView:(id)arg0 ;
-(BOOL)composeRecipientViewShowingSearchResults:(id)arg0 ;
-(BOOL)expandSelectedSearchResultForComposeRecipientView:(id)arg0 ;
-(BOOL)finishedComposingRecipients;
-(BOOL)hasEmailRecipientsInAddresses:(id)arg0 ;
-(BOOL)hasFailediMessageRecipients;
-(BOOL)hasIDSResultsForAllRecipients:(id)arg0 ;
-(BOOL)hasPendingiMessageRecipients;
-(BOOL)hasTimedOutRecipients;
-(BOOL)hasUnreachableEmergencyRecipient;
-(BOOL)isBeingPresentedInMacDetailsView;
-(BOOL)isGameCenterRecipient:(id)arg0 ;
-(BOOL)isMAIDGroupsEnabled;
-(BOOL)lastSentMessageWasNotDeliveredForConversation:(id)arg0 ;
-(BOOL)presentSearchResultsForComposeRecipientView:(id)arg0 ;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg0 ;
-(CGFloat)_macToFieldHeight;
-(CGFloat)_toolbarHeightForNumberOfRows:(NSUInteger)arg0 ;
-(CGFloat)additionalCatalystTopInset;
-(CGFloat)composeRecipientViewOriginY;
-(CGFloat)fieldHeightOffset;
-(CGFloat)preferredMacToolbarHeight;
-(NSInteger)searchListController:(id)arg0 idStatusForIDSID:(id)arg1 ;
-(NSUInteger)_atomPresentationOptionsForRecipient:(id)arg0 ;
-(NSUInteger)presentationOptionsForRecipient:(id)arg0 ;
-(char)_availibilityForRecipient:(id)arg0 onService:(id)arg1 ;
-(char)serviceColorForRecipientAddresses:(id)arg0 ;
-(char)serviceTypeForRecipient:(id)arg0 ;
-(id)_alternateAddressesForRecipient:(id)arg0 ;
-(id)_alternateiMessagableAddressesForRecipient:(id)arg0 ;
-(id)_canonicalRecipientAddresses;
-(id)_recipientCausingTooManyRecipientsError;
-(id)autocompleteResultsController:(id)arg0 preferredRecipientForRecipients:(id)arg1 ;
-(id)chatForIMHandle:(id)arg0 ;
-(id)composeRecipientView:(id)arg0 composeRecipientForAddress:(id)arg1 ;
-(id)composeRecipientView:(id)arg0 composeRecipientForContact:(id)arg1 ;
-(id)composeRecipientView:(id)arg0 contextMenuConfigurationForAtom:(id)arg1 ;
-(id)conversationForRecipients:(id)arg0 ;
-(id)expandedRecipientsForGroupRecipient:(id)arg0 ;
-(id)handleForRecipientNormalizedAddress:(id)arg0 ;
-(id)handlesForScreenTimePolicyCheck;
-(id)init;
-(id)initWithConversation:(id)arg0 ;
-(id)preferredColorTypeForExistingConversation:(id)arg0 ;
-(id)preferredRecipientForExistingConversationOfRecipients:(id)arg0 ;
-(id)preferredRecipientForNewContact:(id)arg0 ;
-(id)preferredRecipientForPendingUnifiedContact:(id)arg0 ;
-(id)preferredRecipientForRecipients:(id)arg0 forServiceType:(char)arg1 ;
-(id)recipientIsDuetSuggestion:(id)arg0 ;
-(id)recipients;
-(struct CGPoint )scrollSearchListControllerToTopContentOffset;
-(struct UIEdgeInsets )_navigationBarInsets;
-(struct UIEdgeInsets )layoutMarginsForComposeRecipientView:(id)arg0 ;
-(void)_adjustToFieldPositionIfNecessary;
-(void)_dismissPeoplePicker;
-(void)_handleAddressBookChangedNotification:(id)arg0 ;
-(void)_handleAddressBookPartialChangedNotification:(id)arg0 ;
-(void)_handleConversationPreferredServiceDidChangeNotification:(id)arg0 ;
-(void)_handleIDSResultsWhenSearchTableIsHidden:(id)arg0 ;
-(void)_handleRecipientAvailabilityTimeout:(id)arg0 ;
-(void)_handleRecipientViewChanged:(id)arg0 ;
-(void)_hideSearchField;
-(void)_keyboardWillShowOrHide:(id)arg0 ;
-(void)_refreshActionSheet;
-(void)_removeAvailabilityTimeoutTimerForRecipient:(id)arg0 ;
-(void)_removeRecent;
-(void)_resetSearchResultsInsets;
-(void)_showActionSheetForRecipient:(id)arg0 animated:(BOOL)arg1 ;
-(void)_showContactCardForRecipient:(id)arg0 sourceView:(id)arg1 ;
-(void)_showDetailsForGroup:(id)arg0 ;
-(void)_showDetailsForRecipient:(id)arg0 canDelete:(BOOL)arg1 ;
-(void)_showOneTimeErrorAlertForAddedRecipient:(id)arg0 service:(id)arg1 withError:(char)arg2 ;
-(void)_showSearchField;
-(void)_startAvailabilityTimeoutTimerForRecipient:(id)arg0 ;
-(void)_updateAddressBookProperties;
-(void)_updateRecipientViewLayouts;
-(void)_updateSearchListControllerPopOverSizing;
-(void)_updateSearchResultsTable;
-(void)_updateShowingSearch;
-(void)_updateToField;
-(void)_updateToFieldRecipientsData;
-(void)_updateYOriginSearchListController;
-(void)addRecipient:(id)arg0 ;
-(void)addRecipients:(id)arg0 ;
-(void)autocompleteGroupDetailViewController:(id)arg0 didAskToRemoveGroup:(id)arg1 ;
-(void)autocompleteGroupDetailViewController:(id)arg0 didTapComposeRecipient:(id)arg1 ;
-(void)autocompleteGroupDetailViewControllerDidCancel:(id)arg0 ;
-(void)autocompleteResultsController:(id)arg0 didCollapseSelectedRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg0 didExpandSelectedRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg0 didRequestInfoAboutRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg0 didSelectRecipient:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)autocompleteResultsController:(id)arg0 tintColorForRecipient:(id)arg1 completion:(id)arg2 ;
-(void)bringComposeRecipientViewToFront;
-(void)colorTypeForRecipient:(id)arg0 completion:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)composeRecipientView:(id)arg0 didFinishEnteringAddress:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didRemoveRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didSelectRecipients:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 disambiguateRecipientForAtom:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 showPersonCardForAtom:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 textDidChange:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg0 ;
-(void)composeRecipientViewReturnPressed:(id)arg0 ;
-(void)composeRecipientViewTabPressed:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contactsManagerViewModelsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)dismissSearchResultsForComposeRecipientView:(id)arg0 ;
-(void)handlePendingRecipient:(id)arg0 ;
-(void)invalidateOutstandingIDStatusRequests;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)parentControllerDidResume:(BOOL)arg0 animating:(BOOL)arg1 ;
-(void)presentAlternateAddressesAlertForRecipient:(id)arg0 ;
-(void)recipientAvailibilitiesDidUpdate;
-(void)recipientSelectionControllerDidChange;
-(void)recipientViewDidBecomeFirstResponder:(id)arg0 ;
-(void)recipientViewDidResignFirstResponder:(id)arg0 ;
-(void)refreshComposeSendingServiceForAddresses:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)removeRecipient:(id)arg0 ;
-(void)reset;
-(void)resetSearchResults;
-(void)scrollSearchListControllerToTop:(BOOL)arg0 ;
-(void)searchListController:(id)arg0 destinationsUpdated:(id)arg1 ;
-(void)searchListControllerDidFinishSearch:(id)arg0 ;
-(void)searchListControllerDidScroll:(id)arg0 ;
-(void)selectNextSearchResultForComposeRecipientView:(id)arg0 ;
-(void)selectPreviousSearchResultForComposeRecipientView:(id)arg0 ;
-(void)sendUpdateRecipientForAtom:(id)arg0 ;
-(void)setGameCenterPickedHandles:(id)arg0 playerNames:(id)arg1 ;
-(void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateScreenTimePolicy;
-(void)viewDidAppearDeferredSetup;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif