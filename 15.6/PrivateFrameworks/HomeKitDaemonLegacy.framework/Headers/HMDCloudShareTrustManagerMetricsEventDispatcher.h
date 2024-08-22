// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCLOUDSHARETRUSTMANAGERMETRICSEVENTDISPATCHER_H
#define HMDCLOUDSHARETRUSTMANAGERMETRICSEVENTDISPATCHER_H

@class HMFObject, NSString, NSUUID, NSArray;
@protocol HMFLogging, HMDLogEventDailyProvider, HMDCloudShareTrustManagerMetricsEventDispatcherDataSource, HMMLogEventSubmitting;


#import "HMDLogEventDailyScheduler.h"

@interface HMDCloudShareTrustManagerMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider>



@property (readonly, weak) NSObject<HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMDLogEventDailyScheduler *logEventDailyScheduler; // ivar: _logEventDailyScheduler
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property BOOL registered; // ivar: _registered
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithIdentifier:(id)arg0 logEventSubmitter:(id)arg1 logEventDailyScheduler:(id)arg2 dataSource:(id)arg3 ;
-(id)logIdentifier;
-(void)registerForDailyTrustManagerEvents;
-(void)submitCloudShareTrustStatusDailyEvent;
-(void)submitFailureEventWithEventErrorCode:(NSInteger)arg0 ;
-(void)submitFailureEventWithEventErrorCode:(NSInteger)arg0 error:(id)arg1 ;
-(void)submitTrustActivityEvent:(NSInteger)arg0 ;
-(void)submitTrustZoneCreatedEvent;
-(void)submitTrustZoneRemovedEvent;
-(void)triggerLogEventProviderDailySubmissionBlocks;


@end


#endif