// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPASSISTANTREGISTRATIONVIEWCONTROLLER_H
#define PKPAYMENTSETUPASSISTANTREGISTRATIONVIEWCONTROLLER_H

@class NSArray;


#import "PKPaymentSetupHeroViewController.h"
#import "PKPaymentSetupAssistantDelegateProxy.h"
#import "PKPaymentSetupAssistantController.h"

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupHeroViewController {
    PKPaymentSetupAssistantDelegateProxy *_delegateProxy;
    PKPaymentSetupAssistantController *_setupAssistantController;
}


@property (readonly, nonatomic) NSArray *requiredPaymentSetupFileURLs;


+(BOOL)bridgeSetupAssistantNeedsToRunReturningRequirements:(*NSUInteger)arg0 ;
+(BOOL)bridgeSetupAssistantNeedsToRunWithContext:(id)arg0 returningRequirements:(*NSUInteger)arg1 ;
+(BOOL)setupAssistantNeedsToRunReturningRequirements:(*NSUInteger)arg0 ;
+(id)defaultWebServiceForContext:(NSInteger)arg0 ;
-(id)initWithPaymentWebService:(id)arg0 context:(NSInteger)arg1 delegate:(id)arg2 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif