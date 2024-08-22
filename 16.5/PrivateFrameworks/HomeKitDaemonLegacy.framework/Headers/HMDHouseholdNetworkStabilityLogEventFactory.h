// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOUSEHOLDNETWORKSTABILITYLOGEVENTFACTORY_H
#define HMDHOUSEHOLDNETWORKSTABILITYLOGEVENTFACTORY_H

@class HMFObject;
@protocol HMDHouseholdDistributedMetricsLogEventFactory;


#import "HMDNetworkObserver.h"

@interface HMDHouseholdNetworkStabilityLogEventFactory : HMFObject <HMDHouseholdDistributedMetricsLogEventFactory>



@property (readonly, nonatomic) HMDNetworkObserver *networkObserver; // ivar: _networkObserver


-(id)coalescedLogEventsFromLogEvents:(id)arg0 homeUUID:(id)arg1 ;
-(id)initWithNetworkObserver:(id)arg0 ;
-(id)logEventsFromDictionary:(id)arg0 ;
-(id)logEventsPopulatedForHomeWithUUID:(id)arg0 associatedWithDate:(id)arg1 ;
-(id)serializeLogEvents:(id)arg0 ;
-(void)deleteCountersAfterDate:(id)arg0 ;
-(void)deleteCountersBeforeDate:(id)arg0 ;


@end


#endif