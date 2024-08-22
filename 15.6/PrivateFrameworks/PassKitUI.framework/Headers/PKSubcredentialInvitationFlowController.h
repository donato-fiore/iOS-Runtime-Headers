// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSUBCREDENTIALINVITATIONFLOWCONTROLLER_H
#define PKSUBCREDENTIALINVITATIONFLOWCONTROLLER_H

@class NSString;
@protocol PKSubcredentialInvitationFlowControllerProtocol, PKSubcredentialProvisioningFlowControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKSubcredentialInvitationFlowController : NSObject <PKSubcredentialInvitationFlowControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSubcredentialProvisioningFlowControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isPassPersonalizedOrPersonalizing:(id)arg0 ;
+(id)localDevicePassMatchingPairedTerminalIdentifier:(id)arg0 ;
+(void)canAttemptLocalDeviceProvisioningWithContext:(id)arg0 completion:(id)arg1 ;
+(void)canAttemptRemoteDeviceProvisioningWithContext:(id)arg0 completion:(id)arg1 ;
// -(id)alertForOperation:(id)arg0 withError:(id)arg1 retryHandler:(id)arg2 cancelationHandler:(unk)arg3  ;
-(id)initWithDelegate:(id)arg0 ;
-(id)localDeviceProvisioningViewModelForOperation:(id)arg0 ;
-(id)localizedIssuerNameForProvisioningOperation:(id)arg0 ;
-(id)remoteDeviceProvisioningViewModelForOperation:(id)arg0 ;
-(void)nextViewControllerFromProvisioningOperation:(id)arg0 withCompletion:(id)arg1 ;
-(void)provisioningFinishedWithOperation:(id)arg0 ;
-(void)provisioningWasCanceledWithOperation:(id)arg0 ;


@end


#endif