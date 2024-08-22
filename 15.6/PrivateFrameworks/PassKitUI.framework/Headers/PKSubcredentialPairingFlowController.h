// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSUBCREDENTIALPAIRINGFLOWCONTROLLER_H
#define PKSUBCREDENTIALPAIRINGFLOWCONTROLLER_H

@class NSString;
@protocol PKSubcredentialPairingFlowControllerProtocol, PKSubcredentialProvisioningFlowControllerDelegate, PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKSubcredentialPairingFlowController : NSObject <PKSubcredentialPairingFlowControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSubcredentialProvisioningFlowControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;


+(id)contextFromPaymentCredential:(id)arg0 provisioningController:(id)arg1 ;
+(id)credentialToShareForContext:(id)arg0 ;
+(id)sharingRequestForContext:(id)arg0 withCredential:(id)arg1 ;
// -(id)alertForOperation:(id)arg0 withError:(id)arg1 retryHandler:(id)arg2 cancelationHandler:(unk)arg3  ;
-(id)initWithDelegate:(id)arg0 ;
-(id)localDeviceProvisioningViewModelForOperation:(id)arg0 ;
-(id)localizedIssuerNameForProvisioningOperation:(id)arg0 ;
-(id)nextQueuedProvisioningViewControllerFromProvisioningOperation:(id)arg0 ;
-(id)remoteDeviceProvisioningViewModelForOperation:(id)arg0 ;
-(id)startingViewControllerForContext:(id)arg0 ;
-(void)canProvisionOnRemoteDeviceWithContext:(id)arg0 sharingRequest:(id)arg1 completion:(id)arg2 ;
-(void)nextViewControllerFromHeroViewController:(id)arg0 completion:(id)arg1 ;
-(void)nextViewControllerFromProvisioningOperation:(id)arg0 withCompletion:(id)arg1 ;
-(void)prewarmPairingWithContext:(id)arg0 completion:(id)arg1 ;
-(void)provisioningFinishedWithOperation:(id)arg0 ;
-(void)provisioningWasCanceledWithOperation:(id)arg0 ;


@end


#endif