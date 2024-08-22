// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTBANKACCOUNTSVIEWCONTROLLER_H
#define PKPEERPAYMENTBANKACCOUNTSVIEWCONTROLLER_H

@class PKBankAccountInformation, PKPeerPaymentAccount, NSString;
@protocol PKAddBankAccountInformationViewControllerDelegate;


#import "PKSectionTableViewController.h"

@interface PKPeerPaymentBankAccountsViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate>

 {
    PKBankAccountInformation *_bankInformation;
    PKPeerPaymentAccount *_account;
    NSInteger _detailViewStyle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPeerPaymentAccount:(id)arg0 detailViewStyle:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_doneButtonPressed:(id)arg0 ;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillLayoutSubviews;


@end


#endif