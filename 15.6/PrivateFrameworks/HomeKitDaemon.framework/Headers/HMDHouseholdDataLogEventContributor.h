// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOUSEHOLDDATALOGEVENTCONTRIBUTOR_H
#define HMDHOUSEHOLDDATALOGEVENTCONTRIBUTOR_H

@class NSString;
@protocol HMDHouseholdDataLogEventContributing;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCountersManager.h"
#import "HMDMetricsDateProvider.h"

@interface HMDHouseholdDataLogEventContributor : HMDLogEventAnalyzer <HMDHouseholdDataLogEventContributing>



@property (readonly, nonatomic) HMDEventCountersManager *countersManager; // ivar: _countersManager
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider; // ivar: _dateProvider
@property (readonly, nonatomic) NSString *householdGroupName; // ivar: _householdGroupName


+(id)logCategory;
-(id)householdGroupForHomeWithUUID:(id)arg0 associatedWithDate:(id)arg1 ;
-(id)householdGroupForLogEvent:(id)arg0 ;
-(id)initWithHouseholdGroupName:(id)arg0 countersManager:(id)arg1 dateProvider:(id)arg2 ;
-(void)coalesceHouseholdDataLogEvent:(id)arg0 fromSourceEvent:(id)arg1 ;
-(void)contributeHouseholdMetricLogEvent:(id)arg0 toSerializedMetric:(id)arg1 ;
-(void)contributeHouseholdMetricsLogEvent:(id)arg0 toCoreAnalyticsEvent:(id)arg1 ;
-(void)deleteCountersAfterDate:(id)arg0 ;
-(void)deleteCountersBeforeDate:(id)arg0 ;
-(void)deserializeHouseholdMetricsLogEvent:(id)arg0 fromSerializedMetric:(id)arg1 ;
-(void)finishCoalescingHouseholdDataLogEvent:(id)arg0 ;
-(void)populateHouseholdMetricLogEvent:(id)arg0 forHomeWithUUID:(id)arg1 associatedToDate:(id)arg2 ;
-(void)startCoalescingHouseholdDataLogEvent:(id)arg0 ;


@end


#endif