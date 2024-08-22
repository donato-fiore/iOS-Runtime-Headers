// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDANALYTICSDAILYEVENTMANAGER_H
#define HDANALYTICSDAILYEVENTMANAGER_H

@class HKAnalyticsEventSubmissionManager, NSString;
@protocol HDAnalyticsSubmissionCoordinatorDelegate, HDHealthDaemonReadyObserver, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDAnalyticsDailyEventManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDHealthDaemonReadyObserver>

 {
    HDProfile *_profile;
    HKAnalyticsEventSubmissionManager *_eventSubmissionManager;
    id *_eventConstructor;
    BOOL _queue_isObserving;
    id *_observationReadyCompletion;
    NSObject<OS_os_log> *_logCategory;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 eventSubmissionManager:(id)arg1 logCategory:(id)arg2 eventConstructor:(id)arg3 ;
-(void)_submitAnalyticsEventWithCompletion:(id)arg0 ;
-(void)_unitTest_setObservationReadyCompletion:(id)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)reportDailyAnalyticsWithCoordinator:(id)arg0 completion:(id)arg1 ;


@end


#endif