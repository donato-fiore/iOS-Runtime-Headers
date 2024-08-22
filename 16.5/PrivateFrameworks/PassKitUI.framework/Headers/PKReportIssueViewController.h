// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREPORTISSUEVIEWCONTROLLER_H
#define PKREPORTISSUEVIEWCONTROLLER_H

@class PKPaymentTransaction, PKTransactionSourceCollection, PKPaymentPass, PKAccount, PKAccountUserCollection, NSSet, PKPaymentService, PKFamilyMemberCollection, UIBarButtonItem, UIActivityIndicatorView, NSString, UITableViewHeaderFooterView, UIImageView, PKPaymentWebService;
@protocol PKPaymentServiceDelegate, UITextViewDelegate;


#import "PKSectionTableViewController.h"
#import "PKPaymentTransactionCellController.h"
#import "PKBusinessChatController.h"

@interface PKReportIssueViewController : PKSectionTableViewController <PKPaymentServiceDelegate, UITextViewDelegate>

 {
    PKPaymentTransaction *_transaction;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKPaymentPass *_paymentPass;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    NSSet *_physicalCards;
    PKPaymentService *_paymentService;
    PKPaymentTransactionCellController *_transactionCellController;
    PKBusinessChatController *_businessChatController;
    PKFamilyMemberCollection *_familyCollection;
    NSUInteger _context;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_submitButton;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _hasIssueSelected;
    NSInteger _selectedIssue;
    BOOL _hasMapsIssueSelected;
    NSInteger _selectedMapsIssue;
    BOOL _hasDisputeTypeSelected;
    NSInteger _selectedDisputeType;
    BOOL _reportingIssue;
    NSString *_statementName;
    BOOL _cancelingPayment;
    BOOL _canPerformUnrecognizedTransaction;
    BOOL _canPerformDispute;
    BOOL _canPerformCancelAccountServicePayment;
    BOOL _canPerformOther;
    BOOL _canPerformIncorrectMerchant;
    UITableViewHeaderFooterView *_footerView;
    UIImageView *_logoView;
    PKPaymentWebService *_paymentWebService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canReportIssueForTransaction:(id)arg0 paymentPass:(id)arg1 ;
+(BOOL)canSelectIssueTypeForTransaction:(id)arg0 ;
-(BOOL)_issueTypeEnabled:(NSInteger)arg0 ;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_issueTypeForRowIndex:(NSInteger)arg0 ;
-(NSInteger)_rowIndexForIssueType:(NSInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_numberOfIssueTypesEnabled;
-(id)_commentsCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_disputeTypeCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_formattedStatementNameFromRawName:(id)arg0 ;
-(id)_issueTypeCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_mapsIssueCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_statementName;
-(id)_statementNameCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_transactionCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initWithTransaction:(id)arg0 transactionSourceCollection:(id)arg1 paymentPass:(id)arg2 familyCollection:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5 physicalCards:(id)arg6 detailViewStyle:(NSInteger)arg7 context:(NSUInteger)arg8 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_cancelButtonTapped:(id)arg0 ;
-(void)_cancelPayment;
-(void)_handleDisputeTypeSelectedInTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_handleIssueTypeSelectedInTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_handleMapsIssueTypeSelectedInTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 dismissAfter:(BOOL)arg2 ;
-(void)_reportIssueInBusinessChat;
-(void)_reportIssueToMaps;
-(void)_reprocessTransactionMerchantWithIssueReportIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_resetMapsMerchantAndBrandWithIssueReportIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_submitButtonTapped:(id)arg0 ;
-(void)_updateFooterPlacement;
-(void)_updateNavigationButtons;
-(void)didUpdateFamilyMembers:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif