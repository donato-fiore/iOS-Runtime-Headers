// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOUSEHOLDMETRICSSERVER_H
#define HMDHOUSEHOLDMETRICSSERVER_H

@class NSArray;
@protocol HMDHouseholdMetricsDataSource, HMDHouseholdDataLogEventProviding, HMMLogEventSubmitting, HMDHouseholdMetricsMessaging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDMetricsDateProvider.h"

@interface HMDHouseholdMetricsServer : NSObject

@property (readonly, nonatomic) NSArray *contributors; // ivar: _contributors
@property (readonly, weak, nonatomic) NSObject<HMDHouseholdMetricsDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider; // ivar: _dateProvider
@property (readonly, weak, nonatomic) NSObject<HMDHouseholdDataLogEventProviding> *householdDataProvider; // ivar: _householdDataProvider
@property (readonly, weak, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly, weak, nonatomic) NSObject<HMDHouseholdMetricsMessaging> *remoteMessageDispatcher; // ivar: _remoteMessageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)evaluateHouseholdDataLogEventForSubmission:(id)arg0 ;
-(BOOL)evaluateMetricResponsesForSubmission:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 logEventSubmitter:(id)arg1 dateProvider:(id)arg2 householdDataProvider:(id)arg3 remoteMessageDispatcher:(id)arg4 contributors:(id)arg5 workQueue:(id)arg6 ;
-(void)runHouseholdMetricsDataCollection;
-(void)sendHouseholdMetricsCollectionRequestToDevices:(id)arg0 forHomeWithUUID:(id)arg1 associatedToDate:(id)arg2 completion:(id)arg3 ;


@end


#endif