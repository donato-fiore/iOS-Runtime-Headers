// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSDETAILSCHEDULEPAYMENTSVIEWCONTROLLER_H
#define PKPASSDETAILSCHEDULEPAYMENTSVIEWCONTROLLER_H

@class PKAccount, PKAccountUserCollection, PKTransactionSourceCollection, NSString;
@protocol PKPassDetailScheduledPaymentsSectionControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate;


#import "PKDynamicTableViewController.h"
#import "PKPassDetailScheduledPaymentsSectionController.h"
#import "PKAccountServiceAccountResolutionController.h"

@interface PKPassDetailSchedulePaymentsViewController : PKDynamicTableViewController <PKPassDetailScheduledPaymentsSectionControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate>

 {
    PKPassDetailScheduledPaymentsSectionController *_schedulePaymentsSection;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKAccountServiceAccountResolutionController *_resolutionController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_accountResolutionController;
-(id)cellForRow:(NSUInteger)arg0 inSection:(id)arg1 ;
-(id)initWithAccount:(id)arg0 pass:(id)arg1 accountService:(id)arg2 accountUserCollection:(id)arg3 transactionSourceCollection:(id)arg4 ;
-(void)accountServiceAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didSelectInDemoMode;
-(void)didSelectMakePayment;
-(void)didSelectPayment:(id)arg0 ;
-(void)didSelectSchedulePayments;
-(void)recomputeMappedSectionsAndReloadSections:(id)arg0 ;


@end


#endif