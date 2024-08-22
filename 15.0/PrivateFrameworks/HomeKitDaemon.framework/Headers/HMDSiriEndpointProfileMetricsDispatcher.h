// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSIRIENDPOINTPROFILEMETRICSDISPATCHER_H
#define HMDSIRIENDPOINTPROFILEMETRICSDISPATCHER_H

@class HMFObject, NSUUID, NSString, NSArray;
@protocol HMFLogging, HMDLogEventDailyProvider, HMDSiriEndpointProfileMetricsDispatcherDataSource, HMMLogEventSubmitting;



@interface HMDSiriEndpointProfileMetricsDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider>



@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (weak) NSObject<HMDSiriEndpointProfileMetricsDispatcherDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;


+(id)logCategory;
-(id)fetchAccessorySettingFields;
-(id)initWithAccessoryUUID:(id)arg0 homeUUID:(id)arg1 logEventSubmitter:(id)arg2 ;
-(id)logIdentifier;
-(void)submitRoutineConfigurationEvent;
-(void)submitRoutineConfigurationEventWithAccessorySettingFields:(id)arg0 ;


@end


#endif