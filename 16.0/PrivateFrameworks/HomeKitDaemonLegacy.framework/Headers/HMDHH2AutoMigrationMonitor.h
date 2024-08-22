// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHH2AUTOMIGRATIONMONITOR_H
#define HMDHH2AUTOMIGRATIONMONITOR_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDBackgroundSystemTaskSchedulerInterfacing, HMDFeaturesDataSource;


#import "HMDHomeManager.h"
#import "HMDFMFHandler.h"
#import "HMDHH2AutoMigrationEligibilityChecker.h"

@interface HMDHH2AutoMigrationMonitor : HMFObject <HMFLogging>

 {
    HMDHomeManager *_homeManager;
    HMDFMFHandler *_fmfHandler;
    id<HMDBackgroundSystemTaskSchedulerInterfacing> *_taskScheduler;
    HMDHH2AutoMigrationEligibilityChecker *_eligibilityChecker;
    id<HMDFeaturesDataSource> *_featuresDataSource;
    NSInteger _taskState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHomeManager:(id)arg0 eligibilityChecker:(id)arg1 ;
-(id)initWithHomeManager:(id)arg0 fmfHandler:(id)arg1 backgroundTaskScheduler:(id)arg2 eligibilityChecker:(id)arg3 featuresDataSource:(id)arg4 ;
-(void)attemptAutoMigrationWithCompletionHandler:(id)arg0 ;
-(void)handleFMFStatusUpdatedNotification:(id)arg0 ;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif