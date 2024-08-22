// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGREGISTERINGCREDENTIALOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGREGISTERINGCREDENTIALOPERATION_H



#import "PKSubcredentialProvisioningOperation.h"
#import "PKAppletSubcredential.h"

@interface PKSubcredentialProvisioningRegisteringCredentialOperation : PKSubcredentialProvisioningOperation {
    PKAppletSubcredential *_subcredential;
}




-(BOOL)canBeRestarted;
-(BOOL)credentialShouldHaveAttestation;
-(id)initWithConfiguration:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(void)performOperation;


@end


#endif