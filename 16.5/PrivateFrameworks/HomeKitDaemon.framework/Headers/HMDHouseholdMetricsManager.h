// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOUSEHOLDMETRICSMANAGER_H
#define HMDHOUSEHOLDMETRICSMANAGER_H

@class HMFObject, NSString, NSUUID;
@protocol HMDLogEventHomeutilTaskRunner, HMFMessageReceiver, HMDLogEventDailyTaskRunner, OS_dispatch_queue;


#import "HMDHouseholdMetricsClient.h"
#import "HMDMetricsDateProvider.h"
#import "HMDHouseholdMetricsMessagingProvider.h"
#import "HMDHouseholdMetricsServer.h"

@interface HMDHouseholdMetricsManager : HMFObject <HMDLogEventHomeutilTaskRunner, HMFMessageReceiver, HMDLogEventDailyTaskRunner>



@property (readonly, nonatomic) HMDHouseholdMetricsClient *client; // ivar: _client
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly, nonatomic) HMDHouseholdMetricsMessagingProvider *messagingProvider; // ivar: _messagingProvider
@property (readonly, nonatomic) HMDHouseholdMetricsServer *server; // ivar: _server
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithCountersManager:(id)arg0 dataSource:(id)arg1 accessoryDetailsManager:(id)arg2 dailyScheduler:(id)arg3 logEventSubmitter:(id)arg4 dateProvider:(id)arg5 activityContributors:(id)arg6 ;
-(id)initWithCountersManager:(id)arg0 dataSource:(id)arg1 dailyScheduler:(id)arg2 logEventSubmitter:(id)arg3 dateProvider:(id)arg4 requestCountProvider:(id)arg5 logEventFactories:(id)arg6 ;
-(void)runDailyTask;
-(void)runHomeutilTask;


@end


#endif