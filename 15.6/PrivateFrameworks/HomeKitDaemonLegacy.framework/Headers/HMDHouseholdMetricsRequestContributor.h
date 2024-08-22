// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOUSEHOLDMETRICSREQUESTCONTRIBUTOR_H
#define HMDHOUSEHOLDMETRICSREQUESTCONTRIBUTOR_H



#import "HMDHouseholdDataLogEventContributor.h"

@interface HMDHouseholdMetricsRequestContributor : HMDHouseholdDataLogEventContributor



+(id)contributorWithoutCounters;
-(id)initWithCountersManager:(id)arg0 dateProvider:(id)arg1 ;
-(void)coalesceHouseholdDataLogEvent:(id)arg0 fromSourceEvent:(id)arg1 ;
-(void)contributeHouseholdMetricLogEvent:(id)arg0 toSerializedMetric:(id)arg1 ;
-(void)contributeHouseholdMetricsLogEvent:(id)arg0 toCoreAnalyticsEvent:(id)arg1 ;
-(void)deserializeHouseholdMetricsLogEvent:(id)arg0 fromSerializedMetric:(id)arg1 ;
-(void)incrementRequestCountForHomeUUID:(id)arg0 date:(id)arg1 ;
-(void)populateHouseholdMetricLogEvent:(id)arg0 forHomeWithUUID:(id)arg1 associatedToDate:(id)arg2 ;


@end


#endif