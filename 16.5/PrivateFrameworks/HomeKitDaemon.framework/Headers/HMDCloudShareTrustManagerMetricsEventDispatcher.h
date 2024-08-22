// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCLOUDSHARETRUSTMANAGERMETRICSEVENTDISPATCHER_H
#define HMDCLOUDSHARETRUSTMANAGERMETRICSEVENTDISPATCHER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, HMDLogEventDailyTaskRunner, HMDCloudShareTrustManagerMetricsEventDispatcherDataSource, HMMLogEventSubmitting;


#import "HMDLogEventDailyScheduler.h"

@interface HMDCloudShareTrustManagerMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyTaskRunner>



@property (readonly) HMDLogEventDailyScheduler *dailyScheduler; // ivar: _dailyScheduler
@property (readonly, weak) NSObject<HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property BOOL registered; // ivar: _registered
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithIdentifier:(id)arg0 logEventSubmitter:(id)arg1 dailyScheduler:(id)arg2 dataSource:(id)arg3 ;
-(id)logIdentifier;
-(void)registerForDailyTrustManagerEvents;
-(void)runDailyTask;
-(void)submitCloudShareTrustStatusDailyEvent;
-(void)submitFailureEventWithEventErrorCode:(NSInteger)arg0 ;
-(void)submitFailureEventWithEventErrorCode:(NSInteger)arg0 error:(id)arg1 ;
-(void)submitTrustActivityEvent:(NSInteger)arg0 ;
-(void)submitTrustZoneCreatedEvent;
-(void)submitTrustZoneRemovedEvent;


@end


#endif