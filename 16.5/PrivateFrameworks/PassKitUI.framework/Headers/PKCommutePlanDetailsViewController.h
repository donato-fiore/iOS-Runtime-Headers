// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCOMMUTEPLANDETAILSVIEWCONTROLLER_H
#define PKCOMMUTEPLANDETAILSVIEWCONTROLLER_H

@class NSArray, PKPaymentPass, PKPaymentWebService, PKPaymentPassAction, NSDateComponentsFormatter, PKTransitBalanceModel, PKTransitCommutePlan, NSString;
@protocol PKPerformActionViewControllerDelegate, PKPaymentDataProviderDelegate, PKPaymentDataProvider;


#import "PKSectionTableViewController.h"

@interface PKCommutePlanDetailsViewController : PKSectionTableViewController <PKPerformActionViewControllerDelegate, PKPaymentDataProviderDelegate>

 {
    NSInteger _style;
    NSArray *_fields;
    PKPaymentPass *_pass;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    PKPaymentWebService *_webService;
    NSArray *_reminderIntervals;
    NSUInteger _selectedReminderIntervalsIndex;
    BOOL _shouldLoadReminderInterval;
    PKPaymentPassAction *_action;
    NSDateComponentsFormatter *_timeIntervalFormatter;
    BOOL _canShowReminders;
    PKTransitBalanceModel *_balanceModel;
    PKTransitCommutePlan *_commutePlan;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)_numberOfCommutePlanDetailsRowsEnabled;
-(NSInteger)_numberOfCommutePlanDetailsRowsEnabledForRowType:(NSUInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_commutePlanDetailsRowTypeForRowIndex:(NSInteger)arg0 ;
-(id)_commutePlanBalanceIdentifiers;
-(id)initWithCommutePlan:(id)arg0 associatedAction:(id)arg1 forPass:(id)arg2 paymentDataProvider:(id)arg3 webService:(id)arg4 style:(NSInteger)arg5 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_handleActionSelected;
-(void)_handleReminderIntervalChanged:(NSInteger)arg0 ;
-(void)_reloadBalance;
-(void)_reloadChangedIndexPathsWithOldIndex:(NSUInteger)arg0 newIndex:(NSUInteger)arg1 inSection:(NSUInteger)arg2 ;
-(void)_updateSelectedBalanceReminderWithBalanceReminder:(id)arg0 ;
-(void)_updateSelectedReminderIntervalsIndexWithReminder:(id)arg0 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceivePlanUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)performActionViewControllerDidCancel:(id)arg0 ;
-(void)performActionViewControllerDidPerformAction:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif