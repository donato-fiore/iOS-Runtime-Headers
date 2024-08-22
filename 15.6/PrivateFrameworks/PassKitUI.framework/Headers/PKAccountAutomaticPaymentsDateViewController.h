// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTAUTOMATICPAYMENTSDATEVIEWCONTROLLER_H
#define PKACCOUNTAUTOMATICPAYMENTSDATEVIEWCONTROLLER_H

@class NSDate, PKAccount, NSIndexPath, NSNumberFormatter, NSDateFormatter, NSTimeZone, NSCalendar, NSString;
@protocol PKAddBankAccountInformationViewControllerDelegate, PKMonthDayCollectionViewControllerDelegate;


#import "PKSectionTableViewController.h"
#import "PKAccountAutomaticPaymentsController.h"
#import "PKTableHeaderView.h"
#import "PKMonthDayCollectionViewController.h"
#import "PKAccountAutomaticPaymentsDateFooterView.h"

@interface PKAccountAutomaticPaymentsDateViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate, PKMonthDayCollectionViewControllerDelegate>

 {
    NSDate *_date;
    NSInteger _scheduledDay;
    PKAccountAutomaticPaymentsController *_controller;
    PKAccount *_account;
    NSUInteger _featureIdentifier;
    PKTableHeaderView *_tableHeaderView;
    NSIndexPath *_selectedIndexPath;
    PKMonthDayCollectionViewController *_monthDayCollectionViewController;
    NSNumberFormatter *_ordinalDayNumberFormatter;
    NSDateFormatter *_cardinalDayDateFormatter;
    BOOL _useOrdinalDay;
    PKAccountAutomaticPaymentsDateFooterView *_collectionFooterView;
    NSTimeZone *_productTimeZone;
    NSCalendar *_productCalendar;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldShowCollectionView;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_frequency;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_addBankAccountInformationViewController;
-(id)_footerText;
-(id)initWithController:(id)arg0 ;
-(id)tableHeaderView;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_handleNext:(id)arg0 ;
-(void)_handlePresentPayment;
-(void)_performPresentPayment;
-(void)_updateNextButtonEnabledIfNecessary;
-(void)addBankAccountInformationViewController:(id)arg0 didAddFundingSource:(id)arg1 ;
-(void)addBankAccountInformationViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)addBankAccountInformationViewControllerDidFinish:(id)arg0 ;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg0 ;
-(void)monthDaySelectionViewController:(id)arg0 didSelectDate:(id)arg1 day:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif