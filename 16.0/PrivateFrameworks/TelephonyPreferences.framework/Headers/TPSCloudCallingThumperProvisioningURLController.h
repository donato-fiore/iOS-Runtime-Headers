// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCLOUDCALLINGTHUMPERPROVISIONINGURLCONTROLLER_H
#define TPSCLOUDCALLINGTHUMPERPROVISIONINGURLCONTROLLER_H

@class NSString;
@protocol TUCallCapabilitiesDelegatePrivate;


#import "TPSCloudCallingURLController.h"

@interface TPSCloudCallingThumperProvisioningURLController : TPSCloudCallingURLController <TUCallCapabilitiesDelegatePrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldShowUpgradeToThumperButton;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isThumperProvisioningInProcess) BOOL thumperProvisioningInProcess;


-(BOOL)isCapabilityEnabled;
-(BOOL)isCapabilityProvisioningURLInvalid;
-(BOOL)shouldShowEmergencyAddress;
-(id)capabilityProvisioningPostData;
-(id)capabilityProvisioningURL;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(id)requestTimeoutController;
-(int)capabilityProvisioningStatus;
-(void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)arg0 ;
-(void)enableCapability;
-(void)webSheetCompletion;


@end


#endif