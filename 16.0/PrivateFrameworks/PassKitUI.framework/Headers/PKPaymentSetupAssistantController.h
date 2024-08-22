// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPASSISTANTCONTROLLER_H
#define PKPAYMENTSETUPASSISTANTCONTROLLER_H

@class PKPaymentSetupAssistantCoreController;


#import "PKSetupAssistantContext.h"

@interface PKPaymentSetupAssistantController : PKPaymentSetupAssistantCoreController

@property (retain, nonatomic) PKSetupAssistantContext *setupAssistantContext; // ivar: _setupAssistantContext


-(BOOL)setupAssistantNeedsToRunReturningRequirements:(*NSUInteger)arg0 ;
-(id)initWithSetupAssistant:(NSUInteger)arg0 setupAssistantContext:(id)arg1 ;
-(id)initWithSetupAssistantContext:(id)arg0 ;
-(void)_bridgeStartingViewControllerForPaymentSetupContext:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_phoneStartingViewControllerForPaymentSetupContext:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_setupAssistantViewControllerWithCompletion:(id)arg0 ;
-(void)prepareForPresentationWithCompletion:(id)arg0 ;
-(void)setupAssistantViewControllerWithCompletion:(id)arg0 ;
-(void)setupFlowWithCompletion:(id)arg0 ;


@end


#endif