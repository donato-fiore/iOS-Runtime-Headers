// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSDETAILSCHEDULEDPAYMENTSSECTIONCONTROLLER_H
#define PKPASSDETAILSCHEDULEDPAYMENTSSECTIONCONTROLLER_H

@class PKAccount, PKPaymentPass, PKAccountService, NSDateFormatter, NSString, NSArray;
@protocol PKAccountServiceObserver, PKPassDetailScheduledPaymentsSectionControllerDelegate;


#import "PKPaymentPassDetailSectionController.h"

@interface PKPassDetailScheduledPaymentsSectionController : PKPaymentPassDetailSectionController <PKAccountServiceObserver>

 {
    NSUInteger _style;
    PKAccount *_account;
    PKPaymentPass *_pass;
    PKAccountService *_accountService;
    NSDateFormatter *_dueDateFormatter;
    NSDateFormatter *_dueTimeFormatter;
    BOOL _loadingPayments;
    BOOL _loadingAutomaticPayments;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassDetailScheduledPaymentsSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *recurringPayments; // ivar: _recurringPayments
@property (readonly, nonatomic) NSArray *scheduledPayments; // ivar: _scheduledPayments
@property (readonly) Class superclass;


+(BOOL)validForPaymentPass:(id)arg0 ;
-(BOOL)_shouldDisplaySection:(id)arg0 ;
-(BOOL)shouldHighlightRowAtIndexPath:(id)arg0 sectionIdentifier:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSectionIdentifier:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(NSUInteger)_accountServiceScheduledPaymentsRowTypeForRowIndex:(NSInteger)arg0 sectionIdentifier:(id)arg1 ;
-(id)_accountServiceScheduledPaymentsCellForRowIndex:(NSInteger)arg0 sectionIdentifier:(id)arg1 tableView:(id)arg2 ;
-(id)_dueDateFormatter;
-(id)_dueTimeFormatter;
-(id)_scheduledPaymentCellForPayment:(id)arg0 tableView:(id)arg1 ;
-(id)_titleForScheduledPaymentsSection;
-(id)initWithStyle:(NSUInteger)arg0 account:(id)arg1 pass:(id)arg2 accountService:(id)arg3 delegate:(id)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)titleForFooterInSectionIdentifier:(id)arg0 ;
-(id)titleForHeaderInSectionIdentifier:(id)arg0 ;
-(void)_fetchScheduledPaymentsWithAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)fetchScheduledPaymentsAndReloadSections:(id)arg0 ;
-(void)preflight:(id)arg0 ;
-(void)presentSchedulePayments:(id)arg0 ;
-(void)reloadScheduledPayments;
-(void)scheduledPaymentsChangedForAccountIdentifier:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)updateWithAccount:(id)arg0 ;


@end


#endif