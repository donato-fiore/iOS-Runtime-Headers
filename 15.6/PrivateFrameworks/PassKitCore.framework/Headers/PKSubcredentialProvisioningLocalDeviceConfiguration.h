// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSUBCREDENTIALPROVISIONINGLOCALDEVICECONFIGURATION_H
#define PKSUBCREDENTIALPROVISIONINGLOCALDEVICECONFIGURATION_H



#import "PKSubcredentialProvisioningConfiguration.h"
#import "PKCredentialRegistrationMetadata.h"
#import "PKPaymentWebService.h"

@interface PKSubcredentialProvisioningLocalDeviceConfiguration : PKSubcredentialProvisioningConfiguration

@property (readonly, nonatomic) PKCredentialRegistrationMetadata *registrationMetadata; // ivar: _registrationMetadata
@property (readonly, nonatomic) PKPaymentWebService *webService; // ivar: _webService


-(id)initWithWebService:(id)arg0 registrationMetadata:(id)arg1 configurationType:(NSInteger)arg2 ;


@end


#endif