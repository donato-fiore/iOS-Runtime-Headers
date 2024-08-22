// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKMOTIONMONITOR_H
#define _DKMOTIONMONITOR_H

@class DKMonitor, CMMotionActivityManager, NSOperationQueue;
@protocol OS_dispatch_source;



@interface _DKMotionMonitor : DKMonitor

@property (readonly, nonatomic) BOOL activateTimer; // ivar: _activateTimer
@property (retain, nonatomic) CMMotionActivityManager *activityManager; // ivar: _activityManager
@property (readonly, nonatomic) NSUInteger currentDominantMotionState; // ivar: _currentDominantMotionState
@property (readonly, nonatomic) CGFloat dominantActivityInterval; // ivar: _dominantActivityInterval
@property (nonatomic) NSInteger lastReportedMotionState; // ivar: _lastReportedMotionState
@property (nonatomic) BOOL monitoringActivity; // ivar: _monitoringActivity
@property (retain, nonatomic) NSObject<OS_dispatch_source> *motionStateProcessingTimer; // ivar: _motionStateProcessingTimer
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (nonatomic) BOOL shouldRecordMotion; // ivar: _shouldRecordMotion


+(BOOL)shouldMergeUnchangedEvents;
+(NSUInteger)_activityTypeToMotionState:(id)arg0 ;
+(id)_eventWithState:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
+(id)entitlements;
+(id)eventStream;
+(id)log;
-(id)classesForSecureStateDecoding;
-(id)init;
-(id)initForUnitTest:(BOOL)arg0 ;
-(void)addMotionActivity:(id)arg0 ;
-(void)addState:(id)arg0 ;
-(void)computeDominantMotionState;
-(void)deactivate;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;
-(void)update;


@end


#endif