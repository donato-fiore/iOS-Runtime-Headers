// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTVERIFICATIONMETHODSVIEWCONTROLLER_H
#define PKPAYMENTVERIFICATIONMETHODSVIEWCONTROLLER_H

@class PKPaymentProvisioningController, NSString;


#import "PKPaymentSetupFieldsViewController.h"
#import "PKPaymentSetupVerificationMethodTableController.h"
#import "PKPaymentVerificationController.h"

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupFieldsViewController {
    PKPaymentSetupVerificationMethodTableController *_methodTableController;
    NSInteger _verificationStatus;
}


@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (copy, nonatomic) NSString *stepIdentifier; // ivar: _stepIdentifier
@property (readonly, nonatomic) PKPaymentVerificationController *verificationController; // ivar: _verificationController


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_newVerificationRequest;
-(id)_requestErrorAlertController:(id)arg0 ;
-(id)_setupAssistantVerificationAlert;
-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)initWithVerificationController:(id)arg0 ;
-(id)initWithVerificationController:(id)arg0 fieldsModel:(id)arg1 ;
-(id)initWithVerificationController:(id)arg0 verificationChannels:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)visibleFieldIdentifiers;
-(void)_configure;
-(void)_handleVerificationFinished;
-(void)_loadVerificationOptions;
-(void)_terminateSetupFlow;
-(void)handleNextButtonTapped:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif