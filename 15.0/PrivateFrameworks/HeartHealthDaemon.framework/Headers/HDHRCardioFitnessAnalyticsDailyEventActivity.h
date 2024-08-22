// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHRCARDIOFITNESSANALYTICSDAILYEVENTACTIVITY_H
#define HDHRCARDIOFITNESSANALYTICSDAILYEVENTACTIVITY_H

@class HDAssertion, HKHRCardioFitnessAnalyticsManager, NSString, HDPeriodicActivity, HDProfile;
@protocol HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDHRCardioFitnessAnalyticsDailyEventDataSource.h"

@interface HDHRCardioFitnessAnalyticsDailyEventActivity : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate>

 {
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
}


@property (readonly, nonatomic) HKHRCardioFitnessAnalyticsManager *analyticsManager; // ivar: _analyticsManager
@property (readonly, nonatomic) CGFloat calculationPeriod; // ivar: _calculationPeriod
@property (readonly, nonatomic) HDHRCardioFitnessAnalyticsDailyEventDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDPeriodicActivity *periodicActivity; // ivar: _periodicActivity
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) CGFloat retryPeriod; // ivar: _retryPeriod
@property (readonly) Class superclass;


-(BOOL)periodicActivityRequiresProtectedData:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)_queue_submitAnalyticsWithActivityCompletion:(id)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)dealloc;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;


@end


#endif