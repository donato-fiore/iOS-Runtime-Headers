// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMCANALYTICSMANAGER_H
#define HDMCANALYTICSMANAGER_H

@class HDProfile, HDFeatureAvailabilityManager, NSString;
@protocol HDAnalyticsSubmissionCoordinatorDelegate, HDHealthDaemonReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDMCAnalysisManager.h"

@interface HDMCAnalyticsManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDHealthDaemonReadyObserver>

 {
    HDMCAnalysisManager *_analysisManager;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDFeatureAvailabilityManager *_heartRateFeatureAvailabilityManager;
    HDFeatureAvailabilityManager *_deviationDetectionFeatureAvailabilityManager;
    HDFeatureAvailabilityManager *_wristTemperatureInputFeatureAvailabilityManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 analysisManager:(id)arg1 heartRateFeatureAvailabilityManager:(id)arg2 deviationDetectionFeatureAvailabilityManager:(id)arg3 wristTemperatureInputFeatureAvailabilityManager:(id)arg4 ;
-(void)_queue_submitAnalyticsWithCompletion:(id)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)reportDailyAnalyticsWithCoordinator:(id)arg0 completion:(id)arg1 ;


@end


#endif