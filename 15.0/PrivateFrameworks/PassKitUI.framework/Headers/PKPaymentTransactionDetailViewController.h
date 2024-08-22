// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTTRANSACTIONDETAILVIEWCONTROLLER_H
#define PKPAYMENTTRANSACTIONDETAILVIEWCONTROLLER_H

@class PKPeerPaymentWebService, PKPeerPaymentController, PKPaymentPass, PKPaymentTransaction, NSArray, PKTransactionReceipt, NSString, PKCoarseLocationMonitor, PKFamilyMemberCollection, PKAccount, PKAccountUserCollection, PKPaymentWebService, PKRetrieveMerchantTokensResponse, PKContactResolver, UIImage, PKPeerPaymentStatusResponse, NSTimeZone, NSDateFormatter, PKTransactionSourceCollection;
@protocol PKContactResolverDelegate, PKPaymentDataProviderDelegate, CNContactViewControllerDelegate, PKTransactionDetailQuestionCellDelegate, PKPaymentTransactionReportFraudConfirmationViewControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDashboardTransactionFetcherDelegate, PKPaymentDataProvider;


#import "PKSectionTableViewController.h"
#import "PKPaymentTransactionCellController.h"
#import "PKAccountServiceAccountResolutionController.h"
#import "PKDashboardTransactionFetcher.h"
#import "PKPaymentTransactionIconGenerator.h"
#import "PKPaymentTransactionDetailHeaderView.h"

@interface PKPaymentTransactionDetailViewController : PKSectionTableViewController <PKContactResolverDelegate, PKPaymentDataProviderDelegate, CNContactViewControllerDelegate, PKTransactionDetailQuestionCellDelegate, PKPaymentTransactionReportFraudConfirmationViewControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDashboardTransactionFetcherDelegate>

 {
    NSInteger _detailViewStyle;
    BOOL _showRawName;
    BOOL _showTransactionTimeZone;
    BOOL _showProductTimeZone;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentController *_lazyPeerPaymentController;
    PKPaymentPass *_paymentPass;
    PKPaymentTransaction *_associatedRefund;
    PKPaymentTransaction *_associatedAdjustment;
    NSArray *_associatedInstallmentPlans;
    PKTransactionReceipt *_associatedReceipt;
    BOOL _suppressReceiptImages;
    NSString *_transactionExplanation;
    PKPaymentTransactionCellController *_transactionCellController;
    PKAccountServiceAccountResolutionController *_accountResolutionController;
    BOOL _allowTransactionLinks;
    PKCoarseLocationMonitor *_coarseLocationMonitor;
    PKFamilyMemberCollection *_familyCollection;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKPaymentWebService *_webService;
    PKRetrieveMerchantTokensResponse *_merchantTokenResponse;
    NSString *_submittingAnswer;
    PKDashboardTransactionFetcher *_transactionFetcher;
    PKPaymentTransactionIconGenerator *_iconGenerator;
}


@property (retain, nonatomic) PKContactResolver *contactResolver; // ivar: _contactResolver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaymentTransactionDetailHeaderView *headerView; // ivar: _headerView
@property (nonatomic) BOOL inBridge; // ivar: _inBridge
@property (nonatomic) BOOL issuerAppDeepLinkingEnabled; // ivar: _issuerAppDeepLinkingEnabled
@property (retain, nonatomic) NSArray *lineItems; // ivar: _lineItems
@property (retain, nonatomic) UIImage *mapTilePlaceholderImage; // ivar: _mapTilePlaceholderImage
@property (readonly, nonatomic) NSObject<PKPaymentDataProvider> *paymentServiceDataProvider; // ivar: _paymentServiceDataProvider
@property (retain, nonatomic) PKPeerPaymentStatusResponse *peerPaymentStatusResponse; // ivar: _peerPaymentStatusResponse
@property (retain, nonatomic) NSTimeZone *productTimeZone; // ivar: _productTimeZone
@property (retain, nonatomic) NSDateFormatter *productTimeZoneFormatter; // ivar: _productTimeZoneFormatter
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction
@property (retain, nonatomic) NSDateFormatter *transactionDateFormatter; // ivar: _transactionDateFormatter
@property (retain, nonatomic) NSDateFormatter *transactionLocalTimeDateFormatter; // ivar: _transactionLocalTimeDateFormatter
@property (readonly, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // ivar: _transactionSourceCollection


-(BOOL)_actionRowIsEnabled:(NSUInteger)arg0 ;
-(BOOL)_amountDetailsRowIsEnabled:(NSUInteger)arg0 ;
-(BOOL)_shouldHighlightAction:(NSUInteger)arg0 ;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContactProperty:(id)arg1 ;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_numberOfActionRowsEnabled;
-(NSInteger)_rowIndexForActionRow:(NSUInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_actionRowForRowIndex:(NSInteger)arg0 ;
-(NSUInteger)_amountDetailsRowForIndex:(NSUInteger)arg0 ;
-(NSUInteger)_lineItemItemForRowIndex:(NSUInteger)arg0 ;
-(NSUInteger)_numberOfAmountDetailsRows;
-(id)_amountDetailsCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_associatedInstallmentCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_awardCellForTableView:(id)arg0 ;
-(id)_coarseLocationHyperlinkFooterView;
-(id)_debugDetailCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_explanationTextForPaymentTransaction:(id)arg0 ;
-(id)_fraudRiskCellForTableView:(id)arg0 ;
-(id)_merchantAddressCellForTableView:(id)arg0 ;
-(id)_merchantTokenManagementCellForTableView:(id)arg0 ;
-(id)_peerPaymentController;
-(id)_questionCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_releasedDataCellForTableView:(id)arg0 ;
-(id)_statusCellForTableView:(id)arg0 ;
-(id)_tableView:(id)arg0 actionButtonCellForSection:(NSUInteger)arg1 ;
-(id)_tableView:(id)arg0 cellForActionAtIndex:(NSInteger)arg1 ;
-(id)_tableView:(id)arg0 cellForAmountDetailLineItemAtIndex:(NSInteger)arg1 atIndexPath:(id)arg2 ;
-(id)_tableView:(id)arg0 cellForAwardAtIndex:(NSInteger)arg1 ;
-(id)_transactionIdentifierCellForTableView:(id)arg0 ;
-(id)contextMenuConfigurationForCopyingText:(id)arg0 ;
-(id)contextMenuConfigurationForTransactionIdentifier;
-(id)formattedBalanceAdjustmentAmountWithTransitDescriptors;
-(id)initWithTransaction:(id)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 contactResolver:(id)arg5 peerPaymentWebService:(id)arg6 paymentServiceDataProvider:(id)arg7 detailViewStyle:(NSInteger)arg8 allowTransactionLinks:(BOOL)arg9 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_applyAmountDetailSeparatorInsetForTableView:(id)arg0 cell:(id)arg1 ;
-(void)_didSelectMerchantTokenManagement;
-(void)_fetchMerchantToken;
-(void)_handleCoarseLocationChangedNotification:(id)arg0 ;
-(void)_handlePeerPaymentDisplayableError:(id)arg0 withPeerPaymentController:(id)arg1 ;
-(void)_handleTransactionHeaderTapRecognizer:(id)arg0 ;
-(void)_openBusinessChatControllerForContext:(id)arg0 ;
-(void)_openMessagesToPresentAction:(NSUInteger)arg0 ;
-(void)_openOfferDetailsInIssuerApp:(id)arg0 ;
-(void)_openTransactionInIssuerApp;
-(void)_performPeerPaymentAction:(id)arg0 withCompletion:(id)arg1 ;
-(void)_presentCardNumberUpdatedAlert;
-(void)_presentContactViewController;
-(void)_presentPhysicalCardSuspendedAlert;
-(void)_presentReportIssue;
-(void)_recomputeLineItems;
-(void)_reloadTableHeaderView;
-(void)_showInstallmentDetailsForAssociatedInstallment:(id)arg0 ;
-(void)_tableView:(id)arg0 didSelectActionAtIndexPath:(id)arg1 ;
-(void)_tableView:(id)arg0 didSelectMechantAddressAtIndexPath:(id)arg1 ;
-(void)_tableView:(id)arg0 didSelectPeerPaymentAction:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_tableView:(id)arg0 willDisplayAmountDetailsCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_updatePeerPaymentTransactionStatusWithCompletion:(id)arg0 ;
-(void)_updateTableHeaderHeight;
-(void)_updateWithTransactionReceipt:(id)arg0 ;
-(void)accountServiceAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)contactsDidChangeForContactResolver:(id)arg0 ;
-(void)dealloc;
-(void)didReportFraudInViewController:(id)arg0 ;
-(void)didUpdateFamilyMembers:(id)arg0 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)submitAnswer:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didRemoveTransactionWithIdentifier:(id)arg1 ;
-(void)transactionWithIdentifier:(id)arg0 didDownloadTransactionReceipt:(id)arg1 ;
-(void)transactionsChanged:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif