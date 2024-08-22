// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPDREMOTEDEVICESECRETVALIDATOR_H
#define CDPDREMOTEDEVICESECRETVALIDATOR_H



#import "CDPDDeviceSecretValidator.h"

@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator {
    id *_requestToJoinCompletion;
    BOOL _isWaitingForRemoteApproval;
}




-(id)_decoratedDelegate;
-(void)approveFromAnotherDeviceWithCompletion:(id)arg0 ;
-(void)cancelApproveFromAnotherDevice;
-(void)resetAccountCDPState;
-(void)setValidSecretHandler:(id)arg0 ;
-(void)supportedEscapeOfferMaskCompletion:(id)arg0 ;
-(void)validateCustodianRecoveryInfo:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif