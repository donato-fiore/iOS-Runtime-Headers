// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAPPLEMEDIAACCESSORYMETRICSDISPATCHER_H
#define HMDAPPLEMEDIAACCESSORYMETRICSDISPATCHER_H

@class HMFObject, NSString, NSArray;
@protocol HMDLogEventDailyProvider, HMFLocking, HMDAppleMediaAccessoryMetricsDispatcherDataSource, HMMLogEventSubmitting;


#import "HMDLogEventDailyScheduler.h"

@interface HMDAppleMediaAccessoryMetricsDispatcher : HMFObject <HMDLogEventDailyProvider>

 {
    id<HMFLocking> *_lock;
}


@property (readonly, weak) NSObject<HMDAppleMediaAccessoryMetricsDispatcherDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMDLogEventDailyScheduler *logEventDailyScheduler; // ivar: _logEventDailyScheduler
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (copy) NSString *previousRoomName; // ivar: _previousRoomName
@property (readonly) Class superclass;


-(id)initWithDataSource:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 logEventSubmitter:(id)arg1 logEventDailyScheduler:(id)arg2 ;
-(void)registerForDailySetRoomLogEvents;
-(void)submitDailySetRoomEvent;
-(void)submitRoomChangeEvent:(id)arg0 previousRoom:(id)arg1 ;
-(void)triggerLogEventProviderDailySubmissionBlocks;


@end


#endif