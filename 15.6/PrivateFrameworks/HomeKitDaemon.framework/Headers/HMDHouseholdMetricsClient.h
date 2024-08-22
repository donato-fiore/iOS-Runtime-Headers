// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOUSEHOLDMETRICSCLIENT_H
#define HMDHOUSEHOLDMETRICSCLIENT_H

@class NSArray;
@protocol HMDHouseholdDataLogEventProviding, HMDHouseholdMetricsMessaging;

#import <Foundation/Foundation.h>

#import "HMDEventCountersManager.h"
#import "HMDMetricsDateProvider.h"
#import "HMDHouseholdMetricsRequestContributor.h"

@interface HMDHouseholdMetricsClient : NSObject <HMDHouseholdDataLogEventProviding>



@property (readonly, nonatomic) NSArray *contributors; // ivar: _contributors
@property (readonly, nonatomic) HMDEventCountersManager *countersManager; // ivar: _countersManager
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider; // ivar: _dateProvider
@property (readonly, nonatomic) id *isDNUEnabledBlock; // ivar: _isDNUEnabledBlock
@property (readonly, weak, nonatomic) NSObject<HMDHouseholdMetricsMessaging> *remoteMessageDispatcher; // ivar: _remoteMessageDispatcher
@property (readonly, nonatomic) HMDHouseholdMetricsRequestContributor *requestContributor; // ivar: _requestContributor


+(id)logCategory;
-(id)handleRequestMessageWithPayload:(id)arg0 outError:(*id)arg1 ;
-(id)householdDataForHomeWithUUID:(id)arg0 associatedWithDate:(id)arg1 ;
-(id)initWithCountersManager:(id)arg0 dateProvider:(id)arg1 remoteMessageDispatcher:(id)arg2 contributors:(id)arg3 ;
-(id)initWithCountersManager:(id)arg0 dateProvider:(id)arg1 remoteMessageDispatcher:(id)arg2 contributors:(id)arg3 isDNUEnabledBlock:(id)arg4 ;
-(void)dealloc;
-(void)deleteExpiredCounters;


@end


#endif