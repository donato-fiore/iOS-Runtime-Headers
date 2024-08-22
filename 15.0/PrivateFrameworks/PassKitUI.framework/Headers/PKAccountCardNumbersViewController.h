// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTCARDNUMBERSVIEWCONTROLLER_H
#define PKACCOUNTCARDNUMBERSVIEWCONTROLLER_H

@class PKVirtualCard, PKVirtualCardCredentials, PKAccountService, PKAccount, PKPaymentPass, PKPhysicalCard;


#import "PKSectionTableViewController.h"
#import "PKSettingTableCell.h"

@interface PKAccountCardNumbersViewController : PKSectionTableViewController {
    NSUInteger _accountFeatureIdentifier;
    PKVirtualCard *_virtualCard;
    PKVirtualCardCredentials *_cardCredentials;
    PKAccountService *_accountService;
    PKAccount *_account;
    PKPaymentPass *_pass;
    NSInteger _context;
    BOOL _loadingReplacementCard;
    PKPhysicalCard *_physicalCard;
    PKSettingTableCell *_dynamicSecurityCodeCell;
    BOOL _redactSensitiveDetails;
}




-(BOOL)_virtualCardCredentialDetailsRowIsEnabled:(NSUInteger)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_numberOfVirtualCardCredentialDetailsRowsEnabled;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_virtualCardCredentialDetailsRowForRowIndex:(NSInteger)arg0 ;
-(id)_buttonCellForRowIndex:(NSInteger)arg0 text:(id)arg1 cellStyle:(NSInteger)arg2 forTableView:(id)arg3 ;
-(id)_cardCredentialsCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_credentialsCellWithPrimaryText:(id)arg0 detailText:(id)arg1 detailImage:(id)arg2 forTableView:(id)arg3 ;
-(id)_credentialsCellWithPrimaryText:(id)arg0 detailText:(id)arg1 forTableView:(id)arg2 ;
-(id)_dpanCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_dynamicSecurityCodeCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_otherCardNumbersHeaderWithTableView:(id)arg0 ;
-(id)_physicalCardCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_replaceCardAlertFromIndexPath:(id)arg0 ;
-(id)_reuseIdentifierForSection:(NSUInteger)arg0 ;
-(id)_virtualCardStateFooter;
-(id)initWithPass:(id)arg0 accountService:(id)arg1 account:(id)arg2 cardCredentials:(id)arg3 virtualCard:(id)arg4 physicalCard:(id)arg5 context:(NSInteger)arg6 ;
-(id)initWithPass:(id)arg0 accountService:(id)arg1 account:(id)arg2 physicalCard:(id)arg3 context:(NSInteger)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_copyCardDetails;
-(void)_toggleDynamicSecurityCodeSetting;
-(void)_willHideUIMenuController:(id)arg0 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif