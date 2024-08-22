// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKRECIPIENTPICKERVIEWCONTROLLER_H
#define PKRECIPIENTPICKERVIEWCONTROLLER_H

@class UIViewController, PKTransactionSourceCollection, NSString, NSNumber, NSArray, UIView, CNComposeRecipientTextView, CNAutocompleteResultsTableViewController, CNAutocompleteSearchManager, PKContactFormatValidator, PKContactResolver, UICollectionView, PKDashboardTransactionFetcher, PKPeerPaymentController;
@protocol CNComposeRecipientTextViewDelegate, CNContactPickerDelegate, CNAutocompleteSearchConsumer, CNAutocompleteUIFetchDelegate, CNAutocompleteResultsTableViewControllerDelegate, PKDashboardTransactionFetcherDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, CNAvatarViewDelegate;


#import "PKDashboardTitleHeaderView.h"
#import "PKThumbnailCollectionViewCell.h"

@interface PKRecipientPickerViewController : UIViewController <CNComposeRecipientTextViewDelegate, CNContactPickerDelegate, CNAutocompleteSearchConsumer, CNAutocompleteUIFetchDelegate, CNAutocompleteResultsTableViewControllerDelegate, PKDashboardTransactionFetcherDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, CNAvatarViewDelegate>

 {
    PKTransactionSourceCollection *_transactionSourceCollection;
    NSString *_title;
    NSNumber *_currentTaskID;
    NSArray *_autocompleteResults;
    CGRect _keyboardFrame;
    BOOL _keyboardVisible;
    BOOL _performingAction;
    UIView *_containerView;
    CNComposeRecipientTextView *_recipientTextView;
    CNAutocompleteResultsTableViewController *_resultsViewController;
    CNAutocompleteSearchManager *_searchManager;
    PKContactFormatValidator *_contactFormatValidator;
    NSString *_currentRecipientText;
    PKContactResolver *_contactResolver;
    UICollectionView *_suggestionsView;
    PKDashboardTransactionFetcher *_transactionFetcher;
    NSArray *_suggestedRecipients;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    PKThumbnailCollectionViewCell *_sampleThumbnailCell;
    PKPeerPaymentController *_peerPaymentController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isRecipientTextViewEmpty;
-(BOOL)getSupplementalGroupsForSearchQuery:(id)arg0 completionHandler:(id)arg1 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)_composeAddressKindFromCounterpartHandle:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithTransactionSourceCollection:(id)arg0 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_addRecipient:(id)arg0 ;
-(void)_addRecipientFromContactProperty:(id)arg0 ;
-(void)_cancelButtonTapped:(id)arg0 ;
-(void)_configureCell:(id)arg0 withContact:(id)arg1 ;
-(void)_configureHeaderView:(id)arg0 ;
-(void)_generateSuggestions;
-(void)_hideResultsViewController;
-(void)_hideSuggestionsViewController;
-(void)_keyboardWillChange:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_nextBarButtonPressed:(id)arg0 ;
-(void)_removeAllRecipients;
-(void)_showResultsViewController;
-(void)_showSuggestionsViewController;
-(void)_updateLayoutForKeyboardAction:(id)arg0 ;
-(void)_updateNextBarButtonItem;
-(void)autocompleteResultsController:(id)arg0 didRequestInfoAboutRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg0 didSelectRecipient:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)autocompleteResultsController:(id)arg0 tintColorForRecipient:(id)arg1 completion:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)composeHeaderView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)composeRecipientView:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didFinishEnteringAddress:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didRemoveRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didReplaceRecipients:(id)arg1 withRecipients:(id)arg2 ;
-(void)composeRecipientView:(id)arg0 textDidChange:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg0 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg0 ;
-(void)consumeAutocompleteSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)consumeCorecipientSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)consumeResults:(id)arg0 taskID:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)finishedTaskWithID:(id)arg0 ;
-(void)loadView;
-(void)setPerformingAction:(BOOL)arg0 ;
-(void)setUpNavigationBar;
-(void)transactionsChanged:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif