// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSUBCREDENTIALINVITATIONFLOWCONTROLLERCONTEXT_H
#define PKSUBCREDENTIALINVITATIONFLOWCONTROLLERCONTEXT_H

@class PKAppletSubcredentialSharingInvitation;
@protocol NSCopying;


#import "PKSubcredentialProvisioningFlowControllerContext.h"

@interface PKSubcredentialInvitationFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying>



@property (nonatomic) BOOL acceptLocalDeviceInvitation; // ivar: _acceptLocalDeviceInvitation
@property (nonatomic) BOOL acceptRemoteDeviceInvitation; // ivar: _acceptRemoteDeviceInvitation
@property (retain, nonatomic) PKAppletSubcredentialSharingInvitation *localDeviceInvitation; // ivar: _localDeviceInvitation
@property (retain, nonatomic) PKAppletSubcredentialSharingInvitation *remoteDeviceInvitation; // ivar: _remoteDeviceInvitation


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithInvitation:(id)arg0 localDeviceWebService:(id)arg1 remoteDeviceWebService:(id)arg2 ;


@end


#endif