// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLSCHOOLMODESERVER_H
#define SCLSCHOOLMODESERVER_H

@class NSString, NSHashTable;
@protocol SCLSchedulingEngineDelegate, SCLSuppressSchoolModeAssertionManagerObserver, OS_os_transaction, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SCLState.h"
#import "SCLSchedulingEngine.h"
#import "SCLSuppressSchoolModeAssertionManager.h"
#import "SCLSchoolModeWakeScheduler.h"

@interface SCLSchoolModeServer : NSObject <SCLSchedulingEngineDelegate, SCLSuppressSchoolModeAssertionManagerObserver>



@property (retain, nonatomic) NSObject<OS_os_transaction> *activeTransaction; // ivar: _activeTransaction
@property (readonly) SCLState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) SCLSchedulingEngine *schedulingEngine; // ivar: _schedulingEngine
@property (readonly) Class superclass;
@property (readonly, nonatomic) SCLSuppressSchoolModeAssertionManager *suppressionManager; // ivar: _suppressionManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (nonatomic) int timeChangeToken; // ivar: _timeChangeToken
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // ivar: _timerSource
@property (readonly, nonatomic) SCLSchoolModeWakeScheduler *wakeScheduler; // ivar: _wakeScheduler


-(id)initWithQueue:(id)arg0 suppressionManager:(id)arg1 wakeScheduler:(id)arg2 ;
-(void)_scheduleTimerForDate:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)applySchedule:(id)arg0 ;
-(void)assertionManager:(id)arg0 didUpdateAssertionsStatus:(NSUInteger)arg1 ;
-(void)configureParameters:(id)arg0 forSuppressionStatus:(NSUInteger)arg1 ;
-(void)handleLocaleChange;
-(void)handleSignificantTimeChange;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)schedulingEngine:(id)arg0 didUpdateState:(id)arg1 fromState:(id)arg2 nextEvaluationDate:(id)arg3 ;
-(void)setActive:(BOOL)arg0 ;
-(void)startWithScheduleSettings:(id)arg0 shouldStartManuallyActive:(BOOL)arg1 ;
-(void)timerFired;


@end


#endif