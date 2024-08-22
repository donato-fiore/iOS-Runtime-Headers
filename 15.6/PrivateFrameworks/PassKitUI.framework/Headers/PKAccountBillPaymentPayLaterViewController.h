// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTBILLPAYMENTPAYLATERVIEWCONTROLLER_H
#define PKACCOUNTBILLPAYMENTPAYLATERVIEWCONTROLLER_H

@class UIViewController, CLInUseAssertion, PKAccount, PKAccountUserCollection, PKTransactionSource, PKAccountBillPaymentController, PKBillPaymentSuggestedAmountList, NSDate, NSDateFormatter, NSCalendar, NSDecimalNumber, UIPickerView, UILabel, PKCompoundInterestCalculator, NSString;
@protocol UIPickerViewDelegate, UIPickerViewDataSource, PKAccountBillPaymentControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKAccountBillPaymentPayInterestDescriptionViewDelegate, PKAccountBillPaymentObserver;


#import "PKContinuousButton.h"
#import "PKAccountBillPaymentPayInterestDescriptionView.h"
#import "PKAddBankAccountInformationViewController.h"

@interface PKAccountBillPaymentPayLaterViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource, PKAccountBillPaymentControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKAccountBillPaymentPayInterestDescriptionViewDelegate>

 {
    CLInUseAssertion *_CLInUse;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKTransactionSource *_transactionSource;
    PKAccountBillPaymentController *_billPaymentCoordinator;
    PKBillPaymentSuggestedAmountList *_suggestionList;
    NSDate *_minDate;
    NSDate *_maxDate;
    NSInteger _numDays;
    NSDateFormatter *_dateFormatterDayOfWeek;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_localDateFormatter;
    NSCalendar *_productCalendar;
    NSCalendar *_localCalendar;
    NSDecimalNumber *_selectedAmount;
    NSDecimalNumber *_remainingStatementBalance;
    NSDecimalNumber *_apr;
    BOOL _performingAction;
    NSInteger _currentPickerViewRow;
    UIPickerView *_datePicker;
    PKContinuousButton *_payOnButton;
    UILabel *_payLaterTitleLabel;
    UILabel *_whenToPayQuestionLabel;
    PKCompoundInterestCalculator *_interestCalculator;
    PKAccountBillPaymentPayInterestDescriptionView *_interestDescriptionView;
    PKAddBankAccountInformationViewController *_addBankAccountViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKAccountBillPaymentObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;


-(CGFloat)_payButtonTopPadding;
-(CGFloat)_sideMargin;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)_addBankAccountInformationViewController;
-(id)_dateForRow:(NSInteger)arg0 ;
-(id)_dateStringForRow:(NSInteger)arg0 formatter:(id)arg1 ;
-(id)_interestForSelectedDate:(id)arg0 ;
-(id)_stripTimeFromDate:(id)arg0 ;
-(id)initWithAccount:(id)arg0 accountUserCollection:(id)arg1 billPaymentController:(id)arg2 transactionSource:(id)arg3 suggestionList:(id)arg4 selectedAmount:(id)arg5 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_accountDidChange:(id)arg0 ;
-(void)_dismissViewControllerWithSuccess:(BOOL)arg0 ;
-(void)_payOnButtonTapped:(id)arg0 ;
-(void)_performBillPaymentWithAmount:(id)arg0 scheduledDate:(id)arg1 billPaymentSuggestedAmountDataEvent:(id)arg2 ;
-(void)_presentAddBankAccount;
-(void)_presentAlertControllerForError:(id)arg0 ;
-(void)_setEnabled:(BOOL)arg0 ;
-(void)_setNavigationBarEnabled:(BOOL)arg0 ;
-(void)_updateLabelText;
-(void)accountBillPaymentController:(id)arg0 hasChangedState:(NSUInteger)arg1 error:(id)arg2 updatedAccount:(id)arg3 ;
-(void)addBankAccountInformationViewController:(id)arg0 didAddFundingSource:(id)arg1 ;
-(void)addBankAccountInformationViewControllerDidFinish:(id)arg0 ;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg0 ;
-(void)billPaymentPayInterestDescriptionViewHasTappedLearnMore:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif