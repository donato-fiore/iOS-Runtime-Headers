// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORYMETRICSDISPATCHER_H
#define HMDAPPLEMEDIAACCESSORYMETRICSDISPATCHER_H

@class HMFObject, NSString;
@protocol HMDLogEventDailyTaskRunner, HMDAppleMediaAccessoryMetricsDispatcherDataSource, HMMLogEventSubmitting;


#import "HMDLogEventDailyScheduler.h"

@interface HMDAppleMediaAccessoryMetricsDispatcher : HMFObject <HMDLogEventDailyTaskRunner>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) HMDLogEventDailyScheduler *dailyScheduler; // ivar: _dailyScheduler
@property (readonly, weak) NSObject<HMDAppleMediaAccessoryMetricsDispatcherDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (copy) NSString *previousRoomName; // ivar: _previousRoomName
@property (readonly) Class superclass;


-(id)initWithDataSource:(id)arg0 logEventSubmitter:(id)arg1 dailyScheduler:(id)arg2 ;
-(void)registerForDailySetRoomLogEvents;
-(void)runDailyTask;
-(void)submitDailySetRoomEvent;
-(void)submitDailyStatusEvent;
-(void)submitRoomChangeEvent:(id)arg0 previousRoom:(id)arg1 ;


@end


#endif