// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCREDITACCOUNTBANKACCOUNTSVIEWCONTROLLER_H
#define PKCREDITACCOUNTBANKACCOUNTSVIEWCONTROLLER_H

@class PKAccount, PKPaymentWebService, NSMutableArray, NSString;
@protocol PKAddBankAccountInformationViewControllerDelegate;


#import "PKSectionTableViewController.h"

@interface PKCreditAccountBankAccountsViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate>

 {
    PKAccount *_account;
    PKPaymentWebService *_paymentWebService;
    NSUInteger _accountFeatureIdentifier;
    NSMutableArray *_fundingSources;
    NSInteger _context;
    NSMutableArray *_deletingFundingSources;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isBankAccountIndexPath:(id)arg0 ;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_addBankAccountInformationViewController;
-(id)_broadwayBankAccountCellForRowAtIndex:(NSInteger)arg0 ;
-(id)initWithAccount:(id)arg0 paymentWebService:(id)arg1 context:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 editActionsForRowAtIndexPath:(id)arg1 ;
-(void)_configureBankAccountCell:(id)arg0 withFundingSource:(id)arg1 ;
-(void)_didSelectDeleteBroadwayBankAccountAtIndexPath:(id)arg0 ;
-(void)_editButtonPressed:(id)arg0 ;
-(void)_presentAddBankAccount;
-(void)_toggleEditingMode;
-(void)_updateEditButtonIfNecessary;
-(void)addBankAccountInformationViewController:(id)arg0 didAddFundingSource:(id)arg1 ;
-(void)addBankAccountInformationViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)addBankAccountInformationViewControllerDidFinish:(id)arg0 ;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif