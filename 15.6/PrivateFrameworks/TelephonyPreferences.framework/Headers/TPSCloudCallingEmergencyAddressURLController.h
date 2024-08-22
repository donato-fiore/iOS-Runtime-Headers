// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCLOUDCALLINGEMERGENCYADDRESSURLCONTROLLER_H
#define TPSCLOUDCALLINGEMERGENCYADDRESSURLCONTROLLER_H

@class NSString;
@protocol TUCallCapabilitiesDelegatePrivate;


#import "TPSCloudCallingURLController.h"

@interface TPSCloudCallingEmergencyAddressURLController : TPSCloudCallingURLController <TUCallCapabilitiesDelegatePrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isCapabilityEnabled;
-(BOOL)isCapabilityProvisioningURLInvalid;
-(id)capabilityProvisioningPostData;
-(id)capabilityProvisioningURL;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(int)capabilityProvisioningStatus;
-(void)didChangeWiFiCallingProvisionalURLForSenderIdentityWithUUID:(id)arg0 ;
-(void)enableCapability;
-(void)webSheetCompletion;


@end


#endif