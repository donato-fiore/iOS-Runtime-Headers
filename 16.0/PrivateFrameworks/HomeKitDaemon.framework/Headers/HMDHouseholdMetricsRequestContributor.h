// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOUSEHOLDMETRICSREQUESTCONTRIBUTOR_H
#define HMDHOUSEHOLDMETRICSREQUESTCONTRIBUTOR_H

@protocol HMDHouseholdMetricsRequestCountProvider;


#import "HMDHouseholdActivityLogEventContributor.h"

@interface HMDHouseholdMetricsRequestContributor : HMDHouseholdActivityLogEventContributor <HMDHouseholdMetricsRequestCountProvider>





-(id)initWithCountersManager:(id)arg0 dateProvider:(id)arg1 ;
-(void)coalesceLogEvent:(id)arg0 fromSourceEvent:(id)arg1 ;
-(void)contributeLogEvent:(id)arg0 toCoreAnalyticsEvent:(id)arg1 ;
-(void)contributeLogEvent:(id)arg0 toSerializedMetric:(id)arg1 ;
-(void)deserializeLogEvent:(id)arg0 fromSerializedMetric:(id)arg1 ;
-(void)incrementRequestCountForHomeUUID:(id)arg0 date:(id)arg1 ;
-(void)populateLogEvent:(id)arg0 forHomeWithUUID:(id)arg1 associatedToDate:(id)arg2 ;


@end


#endif