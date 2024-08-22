// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMETRICSACCESSORYDETAILSMANAGER_H
#define HMDMETRICSACCESSORYDETAILSMANAGER_H

@class HMFObject;
@protocol HMDHouseholdMetricsLogEventFactory, HMDHouseholdMetricsDataSource;



@interface HMDMetricsAccessoryDetailsManager : HMFObject <HMDHouseholdMetricsLogEventFactory>



@property (readonly, weak, nonatomic) NSObject<HMDHouseholdMetricsDataSource> *dataSource; // ivar: _dataSource


-(id)accessoryCategoryLogEventsForHomeWithUUID:(id)arg0 ;
-(id)householdMetricsLogEventFactory;
-(id)initWithDataSource:(id)arg0 ;
-(id)logEventsPopulatedForHomeWithUUID:(id)arg0 associatedWithDate:(id)arg1 ;
-(void)deleteCountersAfterDate:(id)arg0 ;
-(void)deleteCountersBeforeDate:(id)arg0 ;


@end


#endif