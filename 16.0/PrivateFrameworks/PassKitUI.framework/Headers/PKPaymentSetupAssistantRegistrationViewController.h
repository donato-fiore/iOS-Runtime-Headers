// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPASSISTANTREGISTRATIONVIEWCONTROLLER_H
#define PKPAYMENTSETUPASSISTANTREGISTRATIONVIEWCONTROLLER_H

@class PKPaymentSetupAssistantCoreController, NSArray;


#import "PKPaymentSetupHeroViewController.h"
#import "PKPaymentSetupAssistantDelegateProxy.h"

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupHeroViewController {
    PKPaymentSetupAssistantDelegateProxy *_delegateProxy;
    PKPaymentSetupAssistantCoreController *_setupAssistantCoreController;
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