// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPASSISTANTPROVISIONINGCONTEXT_H
#define PKPAYMENTSETUPASSISTANTPROVISIONINGCONTEXT_H

@class PKPaymentSetupAssistantCoreProvisioningContext;
@protocol PKPaymentSetupAssistantProvisioningContextDelegate, PKPassSnapshotCoordinatorProtocol;



@interface PKPaymentSetupAssistantProvisioningContext : PKPaymentSetupAssistantCoreProvisioningContext

@property (retain, nonatomic) NSObject<PKPaymentSetupAssistantProvisioningContextDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<PKPassSnapshotCoordinatorProtocol> *snapshotCoordinator; // ivar: _snapshotCoordinator


-(id)_setupAssistantCredentialForPaymentCredential:(id)arg0 ;
-(id)initWithProvisioningController:(id)arg0 snapshotCoordinator:(id)arg1 setupAssistantCredentials:(id)arg2 maximumSelectable:(NSUInteger)arg3 ;
-(id)passSnapshotForCredential:(id)arg0 ;
-(id)setupAssistantCredentials;
-(void)paymentPassUpdatedOnCredential:(id)arg0 ;


@end


#endif