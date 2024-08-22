// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCREDITACCOUNTPAYMENTDETAILSVIEWCONTROLLER_H
#define PKCREDITACCOUNTPAYMENTDETAILSVIEWCONTROLLER_H

@class PKAccount, NSDate, PKAccountPayment, PKPaymentWebService, NSDictionary, NSNumberFormatter, NSDateFormatter;
@protocol PKCreditAccountPaymentDetailsViewControllerDelegate;


#import "PKSectionTableViewController.h"
#import "PKFooterHyperlinkView.h"

@interface PKCreditAccountPaymentDetailsViewController : PKSectionTableViewController {
    PKAccount *_account;
    NSDate *_paymentDueDate;
    NSUInteger _featureIdentifier;
    PKAccountPayment *_payment;
    PKPaymentWebService *_paymentWebService;
    NSInteger _detailViewStyle;
    NSDictionary *_recurringDetailsRowMap;
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_localizedDayNumberFormatter;
    NSDateFormatter *_productDateFormatter;
    NSDateFormatter *_productDayFormatter;
    NSDateFormatter *_localTimeFormatter;
    NSDateFormatter *_localCancellationDateFormatter;
    NSDateFormatter *_productPaymentMonthFormatter;
    NSDateFormatter *_productPaymentDateFormatter;
    BOOL _cancellingPayment;
    BOOL _showStatusSection;
    BOOL _showUpcomingPaymentSection;
    BOOL _paymentAmountPending;
    BOOL _isFailedRecurringPayment;
    PKFooterHyperlinkView *_hyperlinkFooterView;
}


@property (weak, nonatomic) NSObject<PKCreditAccountPaymentDetailsViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_showRecurringDay;
-(BOOL)_showRecurringDetailsAmount;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)_numberOfRecurringPaymentDetailsRows;
-(NSInteger)_recurringPaymentDetailsRowTypeForRowAtIndex:(NSInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cancelPaymentCellForTableView:(id)arg0 ;
-(id)_cancellationDateForPayment;
-(id)_hyperlinkFooterView;
-(id)_modifyPaymentCellForTableView:(id)arg0 ;
-(id)_paymentAmountToDisplay;
-(id)_reuseIdentifierForSection:(NSUInteger)arg0 ;
-(id)_stringForPaymentFrequency;
-(id)_stringForPaymentPreset;
-(id)_tableView:(id)arg0 paymentDetailsCellForPaymentDetailsRowAtIndexPath:(id)arg1 ;
-(id)_tableView:(id)arg0 recurringPaymentDetailsCellForPaymentDetailsRowAtIndexPath:(id)arg1 ;
-(id)_tableView:(id)arg0 recurringPaymentStatusCellForRowAtIndexPath:(id)arg1 ;
-(id)_tableView:(id)arg0 recurringPaymentUpcomingPaymentCellForPaymentDetailsRowAtIndexPath:(id)arg1 ;
-(id)initWithAccount:(id)arg0 payment:(id)arg1 paymentWebService:(id)arg2 detailViewStyle:(NSInteger)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_applyDetailViewStylingToCell:(id)arg0 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_cancelPayment:(NSUInteger)arg0 ;
-(void)_cancelPaymentSelected:(NSUInteger)arg0 ;
-(void)_computeRecurringDetailsRowMap;
-(void)_configureDeletePaymentCell:(id)arg0 ;
-(void)_configureDismissCell:(id)arg0 ;
-(void)_configureLinkCell:(id)arg0 ;
-(void)_modifyPaymentSelected;
-(void)_reportEventForPassIfNecessary:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif