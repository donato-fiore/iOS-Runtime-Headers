// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFFFINISHSETUPPAYMENTCONTROLLER_H
#define BFFFINISHSETUPPAYMENTCONTROLLER_H

@class PKPaymentSetupAssistantRegistrationViewController, NSString;
@protocol PKPaymentSetupViewControllerDelegate, BFFFinishSetupFlowControlling, BFFFinishSetupFlowHosting;

#import <Foundation/Foundation.h>


@interface BFFFinishSetupPaymentController : NSObject <PKPaymentSetupViewControllerDelegate, BFFFinishSetupFlowControlling>

 {
    NSObject<BFFFinishSetupFlowHosting> *_host;
    PKPaymentSetupAssistantRegistrationViewController *_registrationController;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)hasPrimaryiCloudAccount;
+(NSUInteger)registrationViewControllerOutstandingRequirements;
+(id)finishSetupPaymentControllerWithHost:(id)arg0 ;
-(BOOL)canCompleteExtendedInitializationQuickly;
-(BOOL)controllerNeedsToRun;
-(id)initWithHost:(id)arg0 ;
-(id)prerequisiteFlowIdentifier;
-(id)viewControllerWithCompletion:(id)arg0 ;
-(void)_completeWithResult:(NSUInteger)arg0 ;
-(void)_userDidTapCancelButton:(id)arg0 ;
-(void)performExtendedInitializationWithCompletion:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;


@end


#endif