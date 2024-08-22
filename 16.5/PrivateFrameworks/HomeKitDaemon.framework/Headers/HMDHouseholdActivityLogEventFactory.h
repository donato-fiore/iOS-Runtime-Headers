// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOUSEHOLDACTIVITYLOGEVENTFACTORY_H
#define HMDHOUSEHOLDACTIVITYLOGEVENTFACTORY_H

@class HMFObject, NSArray;
@protocol HMDHouseholdDistributedMetricsLogEventFactory;



@interface HMDHouseholdActivityLogEventFactory : HMFObject <HMDHouseholdDistributedMetricsLogEventFactory>



@property (readonly, nonatomic) NSArray *contributors; // ivar: _contributors


-(id)coalescedLogEventsFromLogEvents:(id)arg0 homeUUID:(id)arg1 ;
-(id)initWithContributors:(id)arg0 ;
-(id)logEventsFromDictionary:(id)arg0 ;
-(id)logEventsPopulatedForHomeWithUUID:(id)arg0 associatedWithDate:(id)arg1 ;
-(id)serializeLogEvents:(id)arg0 ;
-(void)deleteCountersAfterDate:(id)arg0 ;
-(void)deleteCountersBeforeDate:(id)arg0 ;


@end


#endif