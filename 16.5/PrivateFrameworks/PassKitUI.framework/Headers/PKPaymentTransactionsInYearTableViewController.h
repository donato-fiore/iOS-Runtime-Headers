// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTTRANSACTIONSINYEARTABLEVIEWCONTROLLER_H
#define PKPAYMENTTRANSACTIONSINYEARTABLEVIEWCONTROLLER_H

@class UITableViewController, NSDate, NSCalendar, NSArray, PKTransactionSourceCollection, NSSet, PKContactResolver, PKPeerPaymentWebService, NSDateFormatter, PKDashboardTransactionFetcher, PKFamilyMemberCollection, PKAccount, NSString;
@protocol CNAvatarViewDelegate, PKDashboardTransactionFetcherDelegate, PKPaymentDataProvider;


#import "PKPaymentTransactionCellController.h"
#import "PKPaymentTransactionDetailsFactory.h"

@interface PKPaymentTransactionsInYearTableViewController : UITableViewController <CNAvatarViewDelegate, PKDashboardTransactionFetcherDelegate>

 {
    NSDate *_dateFromYear;
    NSCalendar *_calendar;
    NSArray *_transactionsByMonth;
    NSArray *_instantWithdrawalFeesTransactionGroups;
    PKTransactionSourceCollection *_transactionSourceCollection;
    NSSet *_transactionSourceIdentifiers;
    id<PKPaymentDataProvider> *_paymentServiceDataProvider;
    PKPaymentTransactionCellController *_transactionCellController;
    PKContactResolver *_contactResolver;
    PKPeerPaymentWebService *_peerPaymentWebService;
    NSDateFormatter *_transactionMonthFormatter;
    NSDateFormatter *_withdrawalFeeMonthYearFormatter;
    NSInteger _detailViewStyle;
    PKDashboardTransactionFetcher *_transactionFetcher;
    PKPaymentTransactionDetailsFactory *_transactionDetailsFactory;
    PKFamilyMemberCollection *_familyCollection;
    BOOL _contentRevealed;
    PKAccount *_account;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)titleForYear:(id)arg0 ;
-(NSInteger)_sectionTypeForSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_transactionDetailViewControllerForTransaction:(id)arg0 ;
-(id)_transactionMonthFormatter;
-(id)_withdrawalFeeMonthYearFormatter;
-(id)initWithDateFromYear:(id)arg0 calendar:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 detailViewStyle:(NSInteger)arg4 paymentServiceDataProvider:(id)arg5 contactResolver:(id)arg6 peerPaymentWebService:(id)arg7 account:(id)arg8 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_fetchDataWithCompletion:(id)arg0 ;
-(void)_updateContentUnavailableConfigurationUsingState:(id)arg0 ;
-(void)_updateWithTransactions:(id)arg0 completion:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)transactionsChanged:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif