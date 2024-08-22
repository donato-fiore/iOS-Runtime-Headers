// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCLOUDCALLINGTHUMPERCONTROLLER_H
#define TPSCLOUDCALLINGTHUMPERCONTROLLER_H

@class NSDictionary, NSString, TUSenderIdentityCapabilities, CTXPCServiceSubscriptionContext;
@protocol TPSCloudCallingThumperControllerDelegate;

#import <Foundation/Foundation.h>

#import "TPSCarrierBundleController.h"

@interface TPSCloudCallingThumperController : NSObject

@property (retain, nonatomic) TPSCarrierBundleController *carrierBundleController; // ivar: _carrierBundleController
@property (weak, nonatomic) NSObject<TPSCloudCallingThumperControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSDictionary *encryptedIdentityInfo; // ivar: _encryptedIdentityInfo
@property (readonly, copy, nonatomic) NSString *localizedCarrierName;
@property (retain, nonatomic) TUSenderIdentityCapabilities *subscriptionCapabilities; // ivar: _subscriptionCapabilities
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly, nonatomic) BOOL supportsThumperCalling;
@property (nonatomic, getter=isThumperCallingEnabled) BOOL thumperCallingEnabled;


-(id)init;
-(id)initWithSubscriptionContext:(id)arg0 ;


@end


#endif