// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKINSTALLMENTPLANDETAILSVIEWCONTROLLER_H
#define PKINSTALLMENTPLANDETAILSVIEWCONTROLLER_H

@class PKAccount, PKAccountService, PKAccountUserCollection, PKFamilyMemberCollection, PKCreditInstallmentPlan, PKTransactionSourceCollection, NSArray;


#import "PKSectionTableViewController.h"
#import "PKPaymentTransactionDetailAmountLineItemGenerator.h"
#import "PKPaymentTransactionDetailHeaderView.h"

@interface PKInstallmentPlanDetailsViewController : PKSectionTableViewController {
    PKAccount *_account;
    PKAccountService *_accountService;
    PKAccountUserCollection *_accountUserCollection;
    PKFamilyMemberCollection *_familyMemberCollection;
    PKCreditInstallmentPlan *_installmentPlan;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKPaymentTransactionDetailAmountLineItemGenerator *_lineItemGenerator;
    NSArray *_lineItems;
    PKPaymentTransactionDetailHeaderView *_headerView;
}




-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_detailsCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_progressCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initWithAccount:(id)arg0 installmentPlan:(id)arg1 accountService:(id)arg2 accountUserCollection:(id)arg3 familyMemberCollection:(id)arg4 transactionSourceCollection:(id)arg5 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_updateHeaderHeight;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif