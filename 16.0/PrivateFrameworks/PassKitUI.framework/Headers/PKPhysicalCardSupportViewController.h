// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPHYSICALCARDSUPPORTVIEWCONTROLLER_H
#define PKPHYSICALCARDSUPPORTVIEWCONTROLLER_H

@class UITableViewController, PKAccountService, PKAccount, PKAccountUser, PKPaymentPass, PKPhysicalCard, UIBarButtonItem;


#import "PKTableHeaderView.h"
#import "PKBusinessChatController.h"

@interface PKPhysicalCardSupportViewController : UITableViewController {
    PKAccountService *_accountService;
    PKAccount *_account;
    PKAccountUser *_accountUser;
    PKPaymentPass *_paymentPass;
    PKPhysicalCard *_physicalCard;
    PKTableHeaderView *_tableHeaderView;
    UIBarButtonItem *_nextButton;
    PKBusinessChatController *_businessChatController;
    BOOL _hasSelectedReason;
    NSInteger _selectedReason;
}




-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithAccountService:(id)arg0 account:(id)arg1 accountUser:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_nextButtonTapped:(id)arg0 ;
-(void)_presentBusinessChatWithContext:(id)arg0 ;
-(void)_presentManualActivation;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif