// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9JETENGINE14URLBAGCONTRACT_H
#define _TTC9JETENGINE14URLBAGCONTRACT_H

@protocol AMSURLBagContract, AMSMetricsBagContract, AMSMescalBagContract;

#import <Foundation/Foundation.h>


@interface _TtC9JetEngine14URLBagContract : NSObject <AMSURLBagContract, AMSMetricsBagContract>

 {
    ? backing;
}


@property (nonatomic, readonly) id *TFOSamplingPercentage;
@property (nonatomic, readonly) id *TFOSamplingSessionDuration;
@property (nonatomic, readonly) id *TLSSamplingPercentage;
@property (nonatomic, readonly) id *TLSSamplingSessionDuration;
@property (nonatomic, readonly) id *apsEnabledPatterns;
@property (nonatomic, readonly) id *apsSamplingPercent;
@property (nonatomic, readonly) id *guidRegexes;
@property (nonatomic, readonly) id *guidSchemes;
@property (nonatomic, readonly) NSObject<AMSMescalBagContract> *mescalContract; // ivar: mescalContract
@property (nonatomic, readonly) NSObject<AMSMetricsBagContract> *metricsContract;
@property (nonatomic, readonly) id *metricsDictionary;
@property (nonatomic, readonly) id *metricsURL;
@property (nonatomic, readonly) id *storefrontSuffix;
@property (nonatomic, readonly) id *trustedDomains;


-(id)init;


@end


#endif