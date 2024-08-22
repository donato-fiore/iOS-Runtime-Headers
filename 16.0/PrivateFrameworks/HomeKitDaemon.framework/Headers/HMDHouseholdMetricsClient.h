// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOUSEHOLDMETRICSCLIENT_H
#define HMDHOUSEHOLDMETRICSCLIENT_H

@class HMFObject, NSDictionary;
@protocol HMDHouseholdMetricsLogEventProviding, HMDHouseholdMetricsMessaging, HMDHouseholdMetricsRequestCountProvider;


#import "HMDEventCountersManager.h"
#import "HMDMetricsDateProvider.h"

@interface HMDHouseholdMetricsClient : HMFObject <HMDHouseholdMetricsLogEventProviding>



@property (readonly, nonatomic) HMDEventCountersManager *countersManager; // ivar: _countersManager
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider; // ivar: _dateProvider
@property (readonly, nonatomic) id *isDNUEnabledBlock; // ivar: _isDNUEnabledBlock
@property (readonly, nonatomic) NSDictionary *logEventFactories; // ivar: _logEventFactories
@property (readonly, weak, nonatomic) NSObject<HMDHouseholdMetricsMessaging> *remoteMessageDispatcher; // ivar: _remoteMessageDispatcher
@property (readonly, weak, nonatomic) NSObject<HMDHouseholdMetricsRequestCountProvider> *requestCountProvider; // ivar: _requestCountProvider


+(id)logCategory;
-(id)handleRequestMessageWithPayload:(id)arg0 outError:(*id)arg1 ;
-(id)householdMetricsForHomeWithUUID:(id)arg0 associatedWithDate:(id)arg1 ;
-(id)initWithCountersManager:(id)arg0 dateProvider:(id)arg1 remoteMessageDispatcher:(id)arg2 requestCountProvider:(id)arg3 logEventFactories:(id)arg4 ;
-(id)initWithCountersManager:(id)arg0 dateProvider:(id)arg1 remoteMessageDispatcher:(id)arg2 requestCountProvider:(id)arg3 logEventFactories:(id)arg4 isDNUEnabledBlock:(id)arg5 ;
-(void)dealloc;
-(void)deleteExpiredCounters;


@end


#endif