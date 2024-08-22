// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSUBCREDENTIALPROVISIONINGACCEPTINVITATIONOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGACCEPTINVITATIONOPERATION_H



#import "PKSubcredentialProvisioningSharingSessionOperation.h"

@interface PKSubcredentialProvisioningAcceptInvitationOperation : PKSubcredentialProvisioningSharingSessionOperation



-(void)_handleShareAcceptResultCredential:(id)arg0 pass:(id)arg1 error:(id)arg2 ;
-(void)acceptCrossPlatformInvitation;
-(void)acceptIDSInvitation;
-(void)performOperation;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;


@end


#endif