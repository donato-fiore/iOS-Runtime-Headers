// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBALANCEDETAILSVIEWCONTROLLER_H
#define PKBALANCEDETAILSVIEWCONTROLLER_H

@class PKPaymentBalance, PKPaymentPass, PKPaymentPassAction, PKPaymentWebService, NSString, NSArray;
@protocol PKPerformActionViewControllerDelegate, PKPaymentDataProviderDelegate, PKPaymentDataProvider, PKBalanceDetailsViewControllerDelegate;


#import "PKSectionTableViewController.h"

@interface PKBalanceDetailsViewController : PKSectionTableViewController <PKPerformActionViewControllerDelegate, PKPaymentDataProviderDelegate>

 {
    PKPaymentBalance *_balance;
    PKPaymentPass *_pass;
    PKPaymentPassAction *_action;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    PKPaymentWebService *_webService;
    NSInteger _style;
    NSString *_currentBalance;
    NSString *_currencyCode;
    NSArray *_reminderAmounts;
    NSUInteger _selectedReminderAmountIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKBalanceDetailsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldDisplayAction;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)_numberOfBalanceDetailsRowsEnabled;
-(NSInteger)_numberOfBalanceDetailsRowsEnabledForRowType:(NSUInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_balanceDetailsRowTypeForRowIndex:(NSInteger)arg0 ;
-(id)initWithBalance:(id)arg0 forPass:(id)arg1 balanceReminder:(id)arg2 associatedAction:(id)arg3 paymentDataProvider:(id)arg4 webService:(id)arg5 style:(NSInteger)arg6 ;
-(id)initWithBalance:(id)arg0 forPass:(id)arg1 balanceReminder:(id)arg2 balanceName:(id)arg3 currencyCode:(id)arg4 associatedAction:(id)arg5 paymentDataProvider:(id)arg6 webService:(id)arg7 style:(NSInteger)arg8 ;
-(id)initWithTransitPassProperties:(id)arg0 forPass:(id)arg1 balanceReminder:(id)arg2 associatedAction:(id)arg3 paymentDataProvider:(id)arg4 webService:(id)arg5 style:(NSInteger)arg6 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_handleActionSelected;
-(void)_handleReminderAmountChanged:(id)arg0 ;
-(void)_initializeReminderAmounts:(id)arg0 ;
-(void)dealloc;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateBalanceReminder:(id)arg1 forBalanceWithIdentifier:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)performActionViewControllerDidCancel:(id)arg0 ;
-(void)performActionViewControllerDidPerformAction:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif