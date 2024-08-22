// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOUSEHOLDACTIVITYLOGEVENTCONTRIBUTOR_H
#define HMDHOUSEHOLDACTIVITYLOGEVENTCONTRIBUTOR_H

@class NSString;
@protocol HMDHouseholdActivityLogEventContributing;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCountersManager.h"
#import "HMDMetricsDateProvider.h"

@interface HMDHouseholdActivityLogEventContributor : HMDLogEventAnalyzer <HMDHouseholdActivityLogEventContributing>



@property (readonly, nonatomic) HMDEventCountersManager *countersManager; // ivar: _countersManager
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider; // ivar: _dateProvider
@property (readonly, nonatomic) NSString *householdGroupName; // ivar: _householdGroupName


+(id)logCategory;
-(id)householdGroupForHomeWithUUID:(id)arg0 associatedWithDate:(id)arg1 ;
-(id)householdGroupForLogEvent:(id)arg0 ;
-(id)initWithHouseholdGroupName:(id)arg0 countersManager:(id)arg1 dateProvider:(id)arg2 ;
-(void)coalesceLogEvent:(id)arg0 fromSourceEvent:(id)arg1 ;
-(void)contributeLogEvent:(id)arg0 toCoreAnalyticsEvent:(id)arg1 ;
-(void)contributeLogEvent:(id)arg0 toSerializedMetric:(id)arg1 ;
-(void)deleteCountersAfterDate:(id)arg0 ;
-(void)deleteCountersBeforeDate:(id)arg0 ;
-(void)deserializeLogEvent:(id)arg0 fromSerializedMetric:(id)arg1 ;
-(void)finishCoalescingLogEvent:(id)arg0 ;
-(void)populateLogEvent:(id)arg0 forHomeWithUUID:(id)arg1 associatedToDate:(id)arg2 ;
-(void)startCoalescingLogEvent:(id)arg0 ;


@end


#endif