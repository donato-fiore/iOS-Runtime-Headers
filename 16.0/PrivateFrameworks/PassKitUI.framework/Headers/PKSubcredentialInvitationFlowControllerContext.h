// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSUBCREDENTIALINVITATIONFLOWCONTROLLERCONTEXT_H
#define PKSUBCREDENTIALINVITATIONFLOWCONTROLLERCONTEXT_H

@class NSError, PKAppletSubcredentialSharingInvitation;
@protocol NSCopying;


#import "PKSubcredentialProvisioningFlowControllerContext.h"

@interface PKSubcredentialInvitationFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying>



@property (nonatomic) BOOL acceptLocalDeviceInvitation; // ivar: _acceptLocalDeviceInvitation
@property (retain, nonatomic) NSError *acceptLocalDeviceInvitationDisplayableError; // ivar: _acceptLocalDeviceInvitationDisplayableError
@property (nonatomic) BOOL acceptRemoteDeviceInvitation; // ivar: _acceptRemoteDeviceInvitation
@property (retain, nonatomic) NSError *acceptRemoteDeviceInvitationDisplayableError; // ivar: _acceptRemoteDeviceInvitationDisplayableError
@property (nonatomic) BOOL isShareActivation; // ivar: _isShareActivation
@property (retain, nonatomic) PKAppletSubcredentialSharingInvitation *localDeviceInvitation; // ivar: _localDeviceInvitation
@property (retain, nonatomic) PKAppletSubcredentialSharingInvitation *remoteDeviceInvitation; // ivar: _remoteDeviceInvitation


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithInvitation:(id)arg0 localDeviceWebService:(id)arg1 remoteDeviceWebService:(id)arg2 ;


@end


#endif