// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTSERVICEBILLINGADDRESSVIEWCONTROLLER_H
#define PKACCOUNTSERVICEBILLINGADDRESSVIEWCONTROLLER_H

@class CNContact, PKAccountService, PKAccount;
@protocol PKAddressEditorViewControllerDelegate;


#import "PKSectionTableViewController.h"

@interface PKAccountServiceBillingAddressViewController : PKSectionTableViewController <PKAddressEditorViewControllerDelegate>

 {
    CNContact *_currentBillingAddress;
    PKAccountService *_accountService;
    PKAccount *_account;
    NSUInteger _accountFeatureIdentifier;
    NSInteger _detailViewStyle;
    id *_handler;
    BOOL _loadingNewBillingContact;
}




-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)modalPresentationStyle;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_currentBillingAddressCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_enterNewBillingAddressCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)initWithBillingAddress:(id)arg0 account:(id)arg1 accountService:(id)arg2 detailViewStyle:(NSInteger)arg3 handler:(id)arg4 ;
-(id)requiredBillingAddressKeys;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_didSelectChangeAddress;
-(void)addressEditorViewController:(id)arg0 selectedContact:(id)arg1 ;
-(void)addressEditorViewControllerDidCancel:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif