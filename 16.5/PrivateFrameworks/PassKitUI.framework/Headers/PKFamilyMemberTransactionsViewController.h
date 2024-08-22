// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKFAMILYMEMBERTRANSACTIONSVIEWCONTROLLER_H
#define PKFAMILYMEMBERTRANSACTIONSVIEWCONTROLLER_H

@class PKFamilyMember, PKFamilyMemberCollection, PKPeerPaymentAccount, PKPeerPaymentWebService, PKTransactionSourceCollection, PKDashboardTransactionFetcher, PKContactResolver, NSDateFormatter, NSString, PKAccount, NSArray;
@protocol CNAvatarViewDelegate, PKDashboardTransactionFetcherDelegate, PKPaymentDataProvider;


#import "PKSectionTableViewController.h"
#import "PKPaymentTransactionDetailsFactory.h"
#import "PKPaymentTransactionCellController.h"

@interface PKFamilyMemberTransactionsViewController : PKSectionTableViewController <CNAvatarViewDelegate, PKDashboardTransactionFetcherDelegate>

 {
    PKFamilyMember *_familyMember;
    PKFamilyMemberCollection *_familyCollection;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKDashboardTransactionFetcher *_transactionFetcher;
    PKPaymentTransactionDetailsFactory *_transactionDetailsFactory;
    NSInteger _detailViewStyle;
    PKContactResolver *_contactResolver;
    id<PKPaymentDataProvider> *_paymentServiceDataProvider;
    PKPaymentTransactionCellController *_transactionCellController;
    NSDateFormatter *_formatterYear;
    NSString *_viewerFamilyMemberTypeAnalyticsKey;
    NSUInteger _mode;
    PKAccount *_account;
    NSArray *_transactionGroups;
    NSArray *_transactions;
    BOOL _allContentIsLoaded;
    BOOL _didBeginReporter;
    BOOL _requestingStatement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_updateWithTransactionGroups:(id)arg0 ;
-(BOOL)_updateWithTransactions:(id)arg0 ;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_contactKeysToFetch;
-(id)_transactionDetailViewControllerForTransaction:(id)arg0 ;
-(id)_viewControllerForTransactionGroup:(id)arg0 ;
-(id)initWithFamilyMember:(id)arg0 familyCollection:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 peerPaymentAccount:(id)arg4 peerPaymentWebService:(id)arg5 detailViewStyle:(NSInteger)arg6 paymentServiceDataProvider:(id)arg7 mode:(NSUInteger)arg8 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)transactionViewControllerForTransaction:(id)arg0 ;
-(void)_didSelectRequestStatementAtIndexPath:(id)arg0 ;
-(void)_fetchDataWithCompletion:(id)arg0 ;
-(void)_reloadTransactionGroupsWithCompletion:(id)arg0 ;
-(void)_reloadTransactionsWithCompletion:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)transactionsChanged:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif