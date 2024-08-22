// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSUBCREDENTIALPROVISIONINGREGISTERINGCREDENTIALOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGREGISTERINGCREDENTIALOPERATION_H



#import "PKSubcredentialProvisioningSessionOperation.h"
#import "PKAppletSubcredential.h"
#import "PKSubcredentialProvisioningConfiguration.h"

@interface PKSubcredentialProvisioningRegisteringCredentialOperation : PKSubcredentialProvisioningSessionOperation {
    PKAppletSubcredential *_subcredential;
    PKSubcredentialProvisioningConfiguration *_configuration;
}




-(BOOL)canBeRestarted;
-(BOOL)credentialShouldHaveAttestation;
-(id)initWithConfiguration:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(void)performOperation;
-(void)performOperationForFriendConfiguration;
-(void)performOperationWithSession:(id)arg0 ;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;


@end


#endif