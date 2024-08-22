// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEPLOYMENTMETRICHANDLER_H
#define DEPLOYMENTMETRICHANDLER_H


#import <Foundation/Foundation.h>

#import "AnalyticsStoreMOHandler.h"

@interface DeploymentMetricHandler : NSObject

@property (nonatomic) BOOL isInternalInstall; // ivar: _isInternalInstall
@property (retain, nonatomic) AnalyticsStoreMOHandler *storeMOHandler; // ivar: _storeMOHandler


-(BOOL)appendBssAnalyticsToMetric:(id)arg0 bssMo:(id)arg1 maxAgeInDays:(NSUInteger)arg2 ;
-(BOOL)appendNetworkAnalyticsToMetric:(id)arg0 ssid:(id)arg1 deploymentUuid:(id)arg2 maxAgeInDays:(NSUInteger)arg3 ;
-(BOOL)metricNeedsSubmission:(id)arg0 deploymentUuid:(id)arg1 interval:(NSUInteger)arg2 ;
-(id)initWithAnalyticsStore:(id)arg0 ;
-(id)leavesSummary:(id)arg0 bssid:(id)arg1 maxAgeInDays:(NSUInteger)arg2 ;
-(id)roamsSummary:(id)arg0 bssid:(id)arg1 maxAgeInDays:(NSUInteger)arg2 ;
-(void)appendJoinsSummaryToMetric:(id)arg0 ssid:(id)arg1 maxAgeInDays:(NSUInteger)arg2 ;
-(void)networkDeploymentMetricCheckAndSubmit:(id)arg0 deploymentUuid:(id)arg1 interval:(NSUInteger)arg2 ;
-(void)submitBssAnalyticsMetrics:(id)arg0 deploymentUuid:(id)arg1 stitchIndex:(NSInteger)arg2 ;


@end


#endif