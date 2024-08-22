// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHCOACHINGDIAGNOSTICMANAGER_H
#define CHCOACHINGDIAGNOSTICMANAGER_H

@class HDProfile, HDPeriodicActivity, CMMotionActivityManager, NSOperationQueue, NSDate, AWDServerConnection, NSString;
@protocol HDPeriodicActivityDelegate, HDDiagnosticObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHCoachingDiagnosticManager : NSObject <HDPeriodicActivityDelegate, HDDiagnosticObject>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDPeriodicActivity *_scheduler;
    CMMotionActivityManager *_activityManager;
    NSOperationQueue *_activityQueue;
    NSDate *_cachedLastSubmittedDate;
    AWDServerConnection *_serverConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) Class motionActivityManagerClass; // ivar: _motionActivityManagerClass
@property (readonly) Class superclass;


-(BOOL)_queue_acquireMotionActivityStatisticsForAnchorDate:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(BOOL)_queue_addHealthCharacteristicsToMetrics:(id)arg0 error:(*id)arg1 ;
-(BOOL)_queue_computeWorkoutStatisticsForAnchorDate:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(BOOL)_queue_submitMetricForActivitySummary:(id)arg0 dateOfBirth:(id)arg1 biologicalSex:(id)arg2 heightSample:(id)arg3 weightSample:(id)arg4 ;
-(BOOL)_queue_submitMetricForData:(id)arg0 ;
-(BOOL)_queue_submitMetrics:(id)arg0 ;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg0 ;
-(id)_dateComponentsAsAge:(id)arg0 ;
-(id)_queue_computeStatisticsForCoachingEvent:(id)arg0 error:(*id)arg1 ;
-(id)_queue_lastSubmittedDate;
-(id)_queue_statisticsCollectionForAnchorDate:(id)arg0 quantityType:(id)arg1 statisticsOptions:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 ;
-(void)_performCoachingDiagnosticWithCompletion:(id)arg0 ;
-(void)_queue_applyDataItem:(id)arg0 toMetric:(id)arg1 ;
-(void)_queue_performCoachingDiagnosticWithRunDate:(id)arg0 ignoreAnchor:(BOOL)arg1 completion:(id)arg2 ;
// -(void)_queue_performCoachingDiagnosticWithRunDate:(id)arg0 ignoreAnchor:(BOOL)arg1 submitMetrics:(BOOL)arg2 handler:(id)arg3 completion:(unk)arg4  ;
-(void)_queue_setLastSubmittedDate:(id)arg0 ;
-(void)dealloc;
// -(void)performCoachingDiagnosticWithRunDate:(id)arg0 ignoreAnchor:(BOOL)arg1 submitMetrics:(BOOL)arg2 handler:(id)arg3 completion:(unk)arg4  ;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;
-(void)setActivityManager:(id)arg0 ;


@end


#endif