// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTBANKACCOUNTSVIEWCONTROLLER_H
#define PKACCOUNTBANKACCOUNTSVIEWCONTROLLER_H

@class PKAccount, PKPaymentWebService, NSMutableArray, PKAccountPaymentFundingSource, NSString;
@protocol PKAddBankAccountInformationViewControllerDelegate;


#import "PKSectionTableViewController.h"

@interface PKAccountBankAccountsViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate>

 {
    PKAccount *_account;
    PKAccount *_associatedAccount;
    PKPaymentWebService *_paymentWebService;
    NSUInteger _accountFeatureIdentifier;
    NSMutableArray *_availableFundingSources;
    NSMutableArray *_unavailableFundingSources;
    NSInteger _context;
    NSMutableArray *_deletingFundingSources;
    PKAccountPaymentFundingSource *_lastAddedFundingSource;
    BOOL _loadingFundingSources;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasBankAccounts;
-(BOOL)_isBankAccountIndexPath:(id)arg0 ;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_addBankAccountInformationViewController;
-(id)_bankAccountCellForRowAtIndexPath:(id)arg0 ;
-(id)initWithAccount:(id)arg0 paymentWebService:(id)arg1 context:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(void)_configureBankAccountCell:(id)arg0 withFundingSource:(id)arg1 ;
-(void)_didSelectDeleteBankAccountAtIndexPath:(id)arg0 ;
-(void)_editButtonPressed:(id)arg0 ;
-(void)_presentAddBankAccount;
-(void)_presentContactSupport;
-(void)_toggleEditingMode;
-(void)_updateContentUnavailableConfigurationUsingState:(id)arg0 ;
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