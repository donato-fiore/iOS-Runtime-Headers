// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRDATABASEANALYSISSCHEDULERIMPL_H
#define HKHRDATABASEANALYSISSCHEDULERIMPL_H

@class HDProfile, NSString, NSUserDefaults, HDXPCGatedActivity;
@protocol HDHealthDaemonReadyObserver, HKHRDatabaseAnalysisScheduler, OS_os_log, HKHRDatabaseAnalysisSchedulerGatedActivityFactory, HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider, HKHRDatabaseAnalysisSchedulerDelegate;

#import <Foundation/Foundation.h>


@interface HKHRDatabaseAnalysisSchedulerImpl : NSObject <HDHealthDaemonReadyObserver, HKHRDatabaseAnalysisScheduler>

 {
    HDProfile *_profile;
    NSString *_identifier;
    NSObject<OS_os_log> *_loggingCategory;
    CGFloat _maximumDelay;
    CGFloat _retryDelay;
    id<HKHRDatabaseAnalysisSchedulerGatedActivityFactory> *_gatedActivityFactory;
    id<HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider> *_assertionProvider;
    NSUserDefaults *_persistentStateDefaults;
    os_unfair_lock_s _lock;
    NSUInteger _state;
    HDXPCGatedActivity *_lock_gatedActivity;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKHRDatabaseAnalysisSchedulerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_enterStateIfPossible:(NSUInteger)arg0 ;
-(CGFloat)_retryDelayGivenRetryCount:(NSInteger)arg0 ;
-(id)_gatedActivity;
-(id)initWithProfile:(id)arg0 identifier:(id)arg1 loggingCategory:(id)arg2 maximumDelay:(CGFloat)arg3 retryDelay:(CGFloat)arg4 ;
-(id)initWithProfile:(id)arg0 identifier:(id)arg1 loggingCategory:(id)arg2 maximumDelay:(CGFloat)arg3 retryDelay:(CGFloat)arg4 gatedActivityFactory:(id)arg5 assertionProvider:(id)arg6 persistentStateDefaults:(id)arg7 ;
-(id)retryCountKey;
-(void)_maybeRetryLater;
-(void)_requestGatedActivityRunWithDelay:(CGFloat)arg0 ;
-(void)_resetRetryCounter;
-(void)_runActivity:(id)arg0 withCompletion:(id)arg1 ;
-(void)_runMaintenanceOperationForActivity:(id)arg0 assertion:(id)arg1 withCompletion:(id)arg2 ;
-(void)daemonReady:(id)arg0 ;
-(void)forceAnalysis;
-(void)scheduleAnalysis;


@end


#endif