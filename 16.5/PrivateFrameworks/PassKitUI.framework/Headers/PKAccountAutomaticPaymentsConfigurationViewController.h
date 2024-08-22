// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTAUTOMATICPAYMENTSCONFIGURATIONVIEWCONTROLLER_H
#define PKACCOUNTAUTOMATICPAYMENTSCONFIGURATIONVIEWCONTROLLER_H

@class PKAccount, NSTimeZone, NSNumberFormatter, NSDateFormatter, NSArray, NSDictionary, NSNumber, NSDate, NSCalendar, UIPickerView, NSString;
@protocol PKAddBankAccountInformationViewControllerDelegate, PKMonthDayCollectionViewControllerDelegate, UIPickerViewDelegate, UIPickerViewDataSource;


#import "PKSectionTableViewController.h"
#import "PKAccountAutomaticPaymentsController.h"
#import "PKTableHeaderView.h"
#import "PKMonthDayCollectionViewController.h"
#import "PKFixedAmountWrapperView.h"
#import "PKAccountAutomaticPaymentsDateFooterView.h"

@interface PKAccountAutomaticPaymentsConfigurationViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate, PKMonthDayCollectionViewControllerDelegate, UIPickerViewDelegate, UIPickerViewDataSource>

 {
    PKAccountAutomaticPaymentsController *_controller;
    PKAccount *_account;
    NSTimeZone *_productTimeZone;
    NSUInteger _featureIdentifier;
    PKTableHeaderView *_tableHeaderView;
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_ordinalDayNumberFormatter;
    NSDateFormatter *_modelDateFormatter;
    NSDateFormatter *_pickerDateFormatter;
    NSDateFormatter *_cellDateFormatter;
    NSDateFormatter *_dayNameFormatter;
    NSDateFormatter *_cardinalDayDateFormatter;
    BOOL _useOrdinalDay;
    NSArray *_amounts;
    NSArray *_frequencies;
    NSDictionary *_frequenciesMap;
    NSArray *_dates;
    NSNumber *_selectedAmount;
    NSNumber *_selectedFrequency;
    NSDate *_selectedDate;
    NSInteger _scheduledDay;
    NSInteger _selectedRowType;
    NSCalendar *_productCalendar;
    PKMonthDayCollectionViewController *_monthDayCollectionViewController;
    BOOL _shouldShowCollectionView;
    UIPickerView *_amountPicker;
    UIPickerView *_frequencyPicker;
    UIPickerView *_datePicker;
    PKFixedAmountWrapperView *_wrapperView;
    PKAccountAutomaticPaymentsDateFooterView *_footerView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_frequency;
-(NSInteger)_paymentRowTypeForIndexPath:(id)arg0 ;
-(NSInteger)_preset;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_addBankAccountInformationViewController;
-(id)_amount;
-(id)_amounts;
-(id)_dates;
-(id)_datesForFrequency:(NSInteger)arg0 ;
-(id)_detailTextForPaymentRowType:(NSInteger)arg0 ;
-(id)_displayStringForSelectedDate;
-(id)_footerText;
-(id)_frequencies;
-(id)_frequencyTitleForFrequency:(NSInteger)arg0 ;
-(id)_textForAmount:(id)arg0 ;
-(id)_textForPaymentRowType:(NSInteger)arg0 ;
-(id)initWithController:(id)arg0 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)tableHeaderView;
-(id)tableView;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_configureCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)_performNextButtonTapped;
-(void)_updateDates;
-(void)_updateNextButtonEnabledIfNecessary;
-(void)addBankAccountInformationViewController:(id)arg0 didAddFundingSource:(id)arg1 ;
-(void)addBankAccountInformationViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)addBankAccountInformationViewControllerDidFinish:(id)arg0 ;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg0 ;
-(void)dealloc;
-(void)handleNextButtonTapped:(id)arg0 ;
-(void)monthDaySelectionViewController:(id)arg0 didSelectDate:(id)arg1 day:(NSInteger)arg2 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)setSelectedAmount:(id)arg0 ;
-(void)setSelectedDate:(id)arg0 ;
-(void)setSelectedFrequency:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif