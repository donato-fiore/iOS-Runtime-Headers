// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCLOUDCALLINGURLCONTROLLER_H
#define TPSCLOUDCALLINGURLCONTROLLER_H

@class NSData, NSURL, TUSenderIdentityCapabilities, CTXPCServiceSubscriptionContext;
@protocol TPSCloudCallingURLControllerDelegate;

#import <Foundation/Foundation.h>

#import "TPSCarrierBundleController.h"
#import "TPSCloudCallingWebViewController.h"

@interface TPSCloudCallingURLController : NSObject

@property (readonly, nonatomic, getter=isCapabilityEnabled) BOOL capabilityEnabled; // ivar: _capabilityEnabled
@property (readonly, copy, nonatomic) NSData *capabilityProvisioningPostData; // ivar: _capabilityProvisioningPostData
@property (readonly, nonatomic) int capabilityProvisioningStatus; // ivar: _capabilityProvisioningStatus
@property (readonly, copy, nonatomic) NSURL *capabilityProvisioningURL; // ivar: _capabilityProvisioningURL
@property (readonly, nonatomic, getter=isCapabilityProvisioningURLInvalid) BOOL capabilityProvisioningURLInvalid; // ivar: _capabilityProvisioningURLInvalid
@property (retain, nonatomic) TPSCarrierBundleController *carrierBundleController; // ivar: _carrierBundleController
@property (weak, nonatomic) NSObject<TPSCloudCallingURLControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL shouldEnableCapability;
@property (readonly, nonatomic) TUSenderIdentityCapabilities *subscriptionCapabilities;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (weak, nonatomic) TPSCloudCallingWebViewController *webViewController; // ivar: _webViewController


-(id)_webViewControllerWithType:(NSInteger)arg0 ;
-(id)genericErrorAlertController;
-(id)init;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(id)provisionCapabilityController;
-(id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)arg0 ;
-(id)updateEmergencyAddressController;
-(void)enableCapability;
-(void)loadWebViewController;
-(void)reloadWebViewController;
-(void)webSheetCompletion;


@end


#endif