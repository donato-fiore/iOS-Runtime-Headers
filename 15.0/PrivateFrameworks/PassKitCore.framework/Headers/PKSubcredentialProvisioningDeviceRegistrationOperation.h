// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGDEVICEREGISTRATIONOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGDEVICEREGISTRATIONOPERATION_H



#import "PKSubcredentialProvisioningOperation.h"
#import "PKPaymentProvisioningController.h"

@interface PKSubcredentialProvisioningDeviceRegistrationOperation : PKSubcredentialProvisioningOperation {
    PKPaymentProvisioningController *_provisioningController;
    BOOL _operationCancelled;
}




-(BOOL)canCancelOperation;
-(id)initWithConfiguration:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(void)cancelOperation;
-(void)performOperation;


@end


#endif