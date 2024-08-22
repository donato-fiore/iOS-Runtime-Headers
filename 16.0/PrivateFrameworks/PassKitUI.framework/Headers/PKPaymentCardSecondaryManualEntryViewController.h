// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTCARDSECONDARYMANUALENTRYVIEWCONTROLLER_H
#define PKPAYMENTCARDSECONDARYMANUALENTRYVIEWCONTROLLER_H



#import "PKPaymentSetupProvisioningFieldsViewController.h"

@interface PKPaymentCardSecondaryManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController

@property (nonatomic) BOOL suppressPrimarySetupFields; // ivar: _suppressPrimarySetupFields


-(id)defaultFields;
-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 setupFieldsModel:(id)arg3 ;
-(id)newPaymentEligibilityRequest;
-(id)readonlyFieldIdentifiers;
-(id)visibleFieldIdentifiers;
-(void)performNextActionForProvisioningState:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif