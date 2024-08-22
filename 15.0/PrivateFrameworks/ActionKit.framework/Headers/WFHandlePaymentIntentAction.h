// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFHANDLEPAYMENTINTENTACTION_H
#define WFHANDLEPAYMENTINTENTACTION_H

@class WFHandleSystemIntentAction, WFImage;



@interface WFHandlePaymentIntentAction : WFHandleSystemIntentAction {
    WFImage *_icon;
}




-(BOOL)opensInApp;
-(BOOL)selectedPaymentServiceIsApplePay;
-(id)amountAboveMaximumErrorWithAmount:(id)arg0 sending:(BOOL)arg1 ;
-(id)amountBelowMinimumErrorWithAmount:(id)arg0 sending:(BOOL)arg1 ;
-(id)credentialsUnverifiedError;
-(id)currencyUnsupportedErrorWithAmount:(id)arg0 ;
-(id)customAppNameForBundleIdentifier:(id)arg0 ;
-(id)customImageForBundleIdentifier:(id)arg0 ;
-(id)errorFromConfirmResponse:(id)arg0 intent:(id)arg1 ;
-(id)errorFromHandleResponse:(id)arg0 intent:(id)arg1 ;
-(id)errorFromPaymentsResponse:(id)arg0 intent:(id)arg1 ;
-(id)errorFromResolutionResult:(id)arg0 forSlot:(id)arg1 onIntent:(id)arg2 ;
-(id)icon;
-(id)iconImage;
-(id)insufficientFundsError;
-(id)localizedKeyParameterDisplayName;
-(id)minimumSupportedClientVersion;
-(id)noBankAccountError;
-(id)noRecipientAccountError:(BOOL)arg0 ;
-(id)showsWhenRunIfApplicable;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;


@end


#endif