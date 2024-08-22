// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETESEARCHCONTROLLER_H
#define CNAUTOCOMPLETESEARCHCONTROLLER_H

@class UIViewController, NSArray, UIView, NSString, UIScrollView, NSNumber;
@protocol CNAutocompleteSearchConsumer, CNAutocompleteUIFetchDelegate, CNComposeRecipientTextViewDelegate, CNAutocompleteSuggestionsViewControllerDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNAutocompleteSearchControllerDelegate, NSObject;


#import "CNComposeRecipientTextView.h"
#import "CNAutocompleteSearchControllerSafeDelegateWrapper.h"
#import "CNAutocompleteResultsTableViewController.h"
#import "CNAutocompleteSearchManager.h"
#import "CNAutocompleteSuggestionsViewController.h"

@interface CNAutocompleteSearchController : UIViewController <CNAutocompleteSearchConsumer, CNAutocompleteUIFetchDelegate, CNComposeRecipientTextViewDelegate, CNAutocompleteSuggestionsViewControllerDelegate, CNAutocompleteResultsTableViewControllerDelegate>



@property (retain, nonatomic) NSArray *autocompleteResults; // ivar: _autocompleteResults
@property (readonly, nonatomic) CNComposeRecipientTextView *composeField; // ivar: _composeField
@property (retain, nonatomic) UIView *composeFieldContainerView; // ivar: _composeFieldContainerView
@property (copy, nonatomic) NSString *composeFieldInfoText;
@property (retain, nonatomic) UIScrollView *composeFieldScrollView; // ivar: _composeFieldScrollView
@property (retain, nonatomic) NSNumber *currentTaskID; // ivar: _currentTaskID
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAutocompleteSearchControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CNAutocompleteSearchControllerSafeDelegateWrapper *delegateWrapper; // ivar: _delegateWrapper
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAddRecipientFromTypedQuery; // ivar: _didAddRecipientFromTypedQuery
@property (nonatomic) BOOL didPresentContactCard; // ivar: _didPresentContactCard
@property (nonatomic) BOOL didPresentContactPicker; // ivar: _didPresentContactPicker
@property (retain, nonatomic) NSArray *expandedOtherRecipientAddresses; // ivar: _expandedOtherRecipientAddresses
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (nonatomic) BOOL hasSmallScreen; // ivar: _hasSmallScreen
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreDidFinishAddress; // ivar: _ignoreDidFinishAddress
@property (nonatomic) BOOL isiPhone; // ivar: _isiPhone
@property (retain, nonatomic) NSObject<NSObject> *keyboardWillHideNotificationObserver; // ivar: _keyboardWillHideNotificationObserver
@property (retain, nonatomic) NSObject<NSObject> *keyboardWillShowNotificationObserver; // ivar: _keyboardWillShowNotificationObserver
@property (nonatomic) CGRect latestKeyboardFrame; // ivar: _latestKeyboardFrame
@property (retain, nonatomic) NSArray *otherRecipientAddresses; // ivar: _otherRecipientAddresses
@property (retain, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) CNAutocompleteResultsTableViewController *resultsController; // ivar: _resultsController
@property (retain, nonatomic) CNAutocompleteSearchManager *searchManager; // ivar: _searchManager
@property (nonatomic) BOOL shouldHideSuggestionsAfterFirstRecipient; // ivar: _shouldHideSuggestionsAfterFirstRecipient
@property (nonatomic) BOOL shouldRestoreFirstResponderToComposeField; // ivar: _shouldRestoreFirstResponderToComposeField
@property (nonatomic) BOOL suggestionsAllowed; // ivar: _suggestionsAllowed
@property (readonly, nonatomic) CNAutocompleteSuggestionsViewController *suggestionsController; // ivar: _suggestionsController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NSObject> *uiContentSizeCategoryDidChangeNotificationObserver; // ivar: _uiContentSizeCategoryDidChangeNotificationObserver


+(BOOL)shouldUseScreenRelativeFooterViewPositioning;
-(BOOL)autocompleteResultsController:(id)arg0 willOverrideImageDataForRecipient:(id)arg1 completion:(id)arg2 ;
-(BOOL)autocompleteResultsController:(id)arg0 willOverrideImageDataForRecipient:(id)arg1 imageUpdateBlock:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(BOOL)chooseSelectedSearchResultForComposeRecipientView:(id)arg0 ;
-(BOOL)collapseSelectedSearchResultForComposeRecipientView:(id)arg0 ;
-(BOOL)composeRecipientViewShowingSearchResults:(id)arg0 ;
-(BOOL)didPresentSomeViewController;
-(BOOL)expandSelectedSearchResultForComposeRecipientView:(id)arg0 ;
-(BOOL)getSupplementalGroupsForSearchQuery:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)hasSpaceToDisplaySuggestions;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg0 ;
-(BOOL)suggestionsController:(id)arg0 imageDataForRecipient:(id)arg1 imageUpdateBlock:(id)arg2 ;
-(NSUInteger)presentationOptionsForRecipient:(id)arg0 ;
-(id)autocompleteResultsController:(id)arg0 preferredRecipientForRecipient:(id)arg1 ;
-(id)composeRecipientView:(id)arg0 composeRecipientForAddress:(id)arg1 ;
-(id)composeRecipientView:(id)arg0 contextMenuConfigurationForAtom:(id)arg1 ;
-(id)initWithSearchManager:(id)arg0 textView:(id)arg1 resultsController:(id)arg2 ;
-(id)initWithSearchType:(NSUInteger)arg0 ;
-(id)selectedRecipientsForSuggestionsController:(id)arg0 ;
-(void)_addRecipient:(id)arg0 ;
-(void)addRecipient:(id)arg0 ;
-(void)adjustInsetsForKeyboardFrame:(struct CGRect )arg0 ;
-(void)autocompleteResultsController:(id)arg0 didAskToRemoveRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg0 didEndDisplayingRowForRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg0 didRequestInfoAboutRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg0 didSelectRecipient:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)autocompleteResultsController:(id)arg0 tintColorForRecipient:(id)arg1 completion:(id)arg2 ;
-(void)autocompleteResultsController:(id)arg0 willDisplayRowForRecipient:(id)arg1 ;
-(void)autocompleteResultsControllerWillBeginToScroll:(id)arg0 ;
-(void)clearPresentedViewControllerState;
-(void)composeHeaderView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)composeRecipientView:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didFinishEnteringAddress:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didRemoveRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 disambiguateRecipientForAtom:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 showPersonCardForAtom:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 showPersonCardForRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 textDidChange:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg0 ;
-(void)consumeAutocompleteSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)consumeCorecipientSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)consumeResults:(id)arg0 taskID:(id)arg1 ;
-(void)dealloc;
-(void)disambiguateRecipient:(id)arg0 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)finishedTaskWithID:(id)arg0 ;
-(void)hideResultsController;
-(void)hideSoftwareKeyboard;
-(void)hideSuggestionsController;
-(void)invalidatePreferredRecipients;
-(void)invalidateRecipientTintColors;
-(void)prepareForReuse;
-(void)prewarmSuggestedRecipientsWithCompletionBlock:(id)arg0 ;
-(void)providePeopleSuggesterFeedbackForRemovedRecipient:(id)arg0 ;
-(void)providePeopleSuggesterFeedbackForSuggestedRecipient:(id)arg0 ;
-(void)providePeopleSuggesterFeedbackForTypedRecipient:(id)arg0 ;
-(void)providePeopleSuggesterFeedbackForViewWillAppear;
-(void)providePeopleSuggesterFeedbackForViewWillDisappear;
-(void)scrollToBottomOfRecipientView;
-(void)selectNextSearchResultForComposeRecipientView:(id)arg0 ;
-(void)selectPreviousSearchResultForComposeRecipientView:(id)arg0 ;
-(void)setPreferredRecipient:(id)arg0 forRecipient:(id)arg1 ;
-(void)setPresentationOptions:(NSUInteger)arg0 forRecipient:(id)arg1 ;
-(void)setSuggestionsHeaderTitleOverride:(id)arg0 ;
-(void)setTintColor:(id)arg0 forRecipient:(id)arg1 ;
-(void)showSuggestionsController;
-(void)stopDisambiguatingForComposeRecipientView:(id)arg0 ;
-(void)suggestionsController:(id)arg0 didDeselectRecipient:(id)arg1 ;
-(void)suggestionsController:(id)arg0 didSelectRecipient:(id)arg1 ;
-(void)suggestionsControllerTitleLabelWasTapped:(id)arg0 ;
-(void)suggestionsControllerWillBeginScroll:(id)arg0 ;
-(void)unhideResultsController;
-(void)updateFooterPositionWithKeyboardFrame:(struct CGRect )arg0 ;
-(void)updateFooterPositionWithKeyboardIntersectionRect:(struct CGRect )arg0 ;
-(void)updateFooterVisibility;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif