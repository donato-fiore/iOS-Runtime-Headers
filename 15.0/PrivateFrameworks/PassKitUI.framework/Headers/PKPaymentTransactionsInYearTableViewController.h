// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTTRANSACTIONSINYEARTABLEVIEWCONTROLLER_H
#define PKPAYMENTTRANSACTIONSINYEARTABLEVIEWCONTROLLER_H

@class UITableViewController, NSDate, NSCalendar, NSArray, PKTransactionSourceCollection, NSSet, PKContactResolver, PKPeerPaymentWebService, NSDateFormatter, PKFamilyMemberCollection, NSString;
@protocol CNAvatarViewDelegate, _UIContextMenuInteractionDelegate, PKDashboardTransactionFetcherDelegate, PKPaymentDataProvider;


#import "PKPaymentTransactionCellController.h"
#import "PKDashboardTransactionFetcher.h"
#import "PKPaymentTransactionDetailsFactory.h"

@interface PKPaymentTransactionsInYearTableViewController : UITableViewController <CNAvatarViewDelegate, _UIContextMenuInteractionDelegate, PKDashboardTransactionFetcherDelegate>

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
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)contextMenuInteractionShouldBegin:(id)arg0 ;
-(NSInteger)_sectionTypeForSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_transactionDetailViewControllerForTransaction:(id)arg0 ;
-(id)_transactionMonthFormatter;
-(id)_transactionsInYearTitleString;
-(id)_withdrawalFeeMonthYearFormatter;
-(id)contextMenuInteraction:(id)arg0 actionsForMenuAtLocation:(struct CGPoint )arg1 withSuggestedActions:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingAtLocation:(struct CGPoint )arg1 ;
-(id)initWithDateFromYear:(id)arg0 calendar:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 detailViewStyle:(NSInteger)arg4 paymentServiceDataProvider:(id)arg5 contactResolver:(id)arg6 peerPaymentWebService:(id)arg7 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_fetchDataWithCompletion:(id)arg0 ;
-(void)_updateWithTransactions:(id)arg0 completion:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)transactionsChanged:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif