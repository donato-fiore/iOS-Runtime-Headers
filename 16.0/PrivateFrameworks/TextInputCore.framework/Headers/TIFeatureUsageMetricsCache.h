// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIFEATUREUSAGEMETRICSCACHE_H
#define TIFEATUREUSAGEMETRICSCACHE_H

@class NSString, NSDate, NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>

#import "TIMetricDescriptorRegistry.h"

@interface TIFeatureUsageMetricsCache : NSObject {
    NSString *_inputMode;
    TIMetricDescriptorRegistry *_metricDescriptorRegistry;
    NSDate *_testingTimestamp;
    NSDate *_queryEndDate;
    NSMutableDictionary *_cachedMetrics;
    NSDictionary *_defaultMetrics;
    BOOL _sufficientData;
}




-(id)defaultMetricsFromContext:(id)arg0 ;
-(id)featureUsageMetricFromName:(id)arg0 forContext:(id)arg1 ;
-(id)initWithInputMode:(id)arg0 metricDescriptorRegistry:(id)arg1 ;
-(id)metricsFromUserModel:(id)arg0 withContext:(id)arg1 ;
-(id)startOfDay;
-(void)loadMetricsFromUserModelDataStore:(id)arg0 withContext:(id)arg1 ;
-(void)setTestingTimestamp:(id)arg0 ;


@end


#endif