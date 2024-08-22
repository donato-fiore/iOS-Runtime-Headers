// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKWATCHSUBCREDENTIALPROVISIONINGSERVICE_H
#define NPKWATCHSUBCREDENTIALPROVISIONINGSERVICE_H



#import "NPKSubcredentialProvisioningService.h"

@interface NPKWatchSubcredentialProvisioningService : NPKSubcredentialProvisioningService



-(id)init;
-(void)canAcceptInvitationOnRemoteDeviceResponse:(id)arg0 ;
-(void)fetchAccountAttestationAnonymizationSaltOnRemoteDeviceWithCompletion:(id)arg0 ;
-(void)fetchAccountAttestationAnonymizationSaltResponse:(id)arg0 ;
-(void)registerProtobufActionsForService:(id)arg0 ;
-(void)sendAcceptSubcredentialProvisioningRequestForInvitation:(id)arg0 metadata:(id)arg1 ;
-(void)sendAcceptSubcredentialProvisioningRequestForMailboxAddress:(id)arg0 activationCode:(id)arg1 ;
-(void)sendCanAcceptInvitationOnRemoteDeviceRequestForInvitation:(id)arg0 completion:(id)arg1 ;


@end


#endif