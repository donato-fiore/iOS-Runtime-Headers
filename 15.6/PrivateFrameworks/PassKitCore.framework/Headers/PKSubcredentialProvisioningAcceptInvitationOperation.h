// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSUBCREDENTIALPROVISIONINGACCEPTINVITATIONOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGACCEPTINVITATIONOPERATION_H



#import "PKSubcredentialProvisioningSharingSessionOperation.h"

@interface PKSubcredentialProvisioningAcceptInvitationOperation : PKSubcredentialProvisioningSharingSessionOperation



-(void)acceptInvitation;
-(void)performOperation;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;


@end


#endif