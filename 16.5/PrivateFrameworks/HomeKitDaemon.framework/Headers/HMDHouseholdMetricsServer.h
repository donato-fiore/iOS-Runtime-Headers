// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOUSEHOLDMETRICSSERVER_H
#define HMDHOUSEHOLDMETRICSSERVER_H

@class NSDictionary;
@protocol HMDHouseholdMetricsDataSource, HMDHouseholdMetricsLogEventProviding, HMMLogEventSubmitting, HMDHouseholdMetricsMessaging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHouseholdMetricsRequestContributor.h"

@interface HMDHouseholdMetricsServer : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, weak, nonatomic) NSObject<HMDHouseholdMetricsDataSource> *dataSource; // ivar: _dataSource
@property (readonly, weak, nonatomic) NSObject<HMDHouseholdMetricsLogEventProviding> *householdMetricsProvider; // ivar: _householdMetricsProvider
@property (readonly, nonatomic) NSDictionary *logEventFactories; // ivar: _logEventFactories
@property (readonly, weak, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly, weak, nonatomic) NSObject<HMDHouseholdMetricsMessaging> *remoteMessageDispatcher; // ivar: _remoteMessageDispatcher
@property (readonly, nonatomic) HMDHouseholdMetricsRequestContributor *requestContributor; // ivar: _requestContributor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)evaluateHouseholdActivityLogEventForSubmission:(id)arg0 ;
-(BOOL)evaluateMetricResponsesForSubmission:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 logEventSubmitter:(id)arg1 householdMetricsProvider:(id)arg2 remoteMessageDispatcher:(id)arg3 logEventFactories:(id)arg4 workQueue:(id)arg5 ;
-(void)runHouseholdMetricsDataCollectionAssociatedToDate:(id)arg0 forceSubmit:(BOOL)arg1 ;
-(void)sendHouseholdMetricsCollectionRequestToDevices:(id)arg0 forHomeWithUUID:(id)arg1 associatedToDate:(id)arg2 completion:(id)arg3 ;


@end


#endif