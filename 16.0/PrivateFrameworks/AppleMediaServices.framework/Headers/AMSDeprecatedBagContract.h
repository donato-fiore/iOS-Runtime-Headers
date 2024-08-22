// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSDEPRECATEDBAGCONTRACT_H
#define AMSDEPRECATEDBAGCONTRACT_H

@class NSString;
@protocol AMSDeviceOfferBagContract, AMSMetricsBagContract, AMSMescalBagContract, AMSLookupBagContract, AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "AMSBagValue.h"

@interface AMSDeprecatedBagContract : NSObject <AMSDeviceOfferBagContract, AMSMetricsBagContract, AMSMescalBagContract, AMSLookupBagContract>



@property (readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
@property (readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
@property (readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
@property (readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
@property (readonly, nonatomic) AMSBagValue *appleMusicDeviceOfferDeepLink;
@property (readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property (readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@property (readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AMSBagValue *guidRegexes;
@property (readonly, nonatomic) AMSBagValue *guidSchemes;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSBagValue *iCloudDeviceOfferDeepLink;
@property (readonly, nonatomic) AMSBagValue *mescalCertificateURL;
@property (readonly, nonatomic) NSObject<AMSMescalBagContract> *mescalContract;
@property (readonly, nonatomic) AMSBagValue *mescalPrimingURL;
@property (readonly, nonatomic) AMSBagValue *mescalSetupURL;
@property (readonly, nonatomic) AMSBagValue *mescalSignSapRequests;
@property (readonly, nonatomic) AMSBagValue *mescalSignSapResponses;
@property (readonly, nonatomic) AMSBagValue *mescalSignedActions;
@property (readonly, nonatomic) NSObject<AMSMetricsBagContract> *metricsContract;
@property (readonly, nonatomic) AMSBagValue *metricsDictionary;
@property (readonly, nonatomic) AMSBagValue *metricsURL;
@property (readonly, nonatomic) AMSBagValue *metricsUrl;
@property (readonly, nonatomic) AMSBagValue *personalizedLookupURL;
@property (readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property (readonly) Class superclass;
@property (readonly, nonatomic) AMSBagValue *trustedDomains;
@property (readonly, nonatomic) AMSBagValue *unpersonalizedLookupURL;


-(id)initWithBag:(id)arg0 ;


@end


#endif