// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMPERFORMANCETESTPLAN_H
#define CAMPERFORMANCETESTPLAN_H

@class NSMutableArray, NSString;
@protocol CAMPerformanceTestHarnessDelegate;

#import <Foundation/Foundation.h>


@interface CAMPerformanceTestPlan : NSObject <CAMPerformanceTestHarnessDelegate>



@property (nonatomic) NSUInteger _completedHarnesses; // ivar: __completedHarnesses
@property (retain, nonatomic) NSMutableArray *_harnesses; // ivar: __harnesses
@property (nonatomic) BOOL _hasTriggeredTestStart; // ivar: __hasTriggeredTestStart
@property (nonatomic) NSUInteger _startedHarnesses; // ivar: __startedHarnesses
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isRunningTest) BOOL runningTest; // ivar: _runningTest
@property (nonatomic) unsigned int settlingDelaySeconds; // ivar: _settlingDelaySeconds
@property (copy, nonatomic) id *startHandler; // ivar: _startHandler
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *testName; // ivar: _testName


-(id)_findHarnessAfter:(id)arg0 ;
-(id)initWithTestName:(id)arg0 ;
-(void)_failedTestWithReason:(id)arg0 ;
-(void)_runHarnessAfter:(id)arg0 ;
-(void)_startTesting;
-(void)_stopTesting;
-(void)didFailTestHarness:(id)arg0 withReason:(id)arg1 ;
-(void)didStartSubtest:(id)arg0 withName:(id)arg1 withMetrics:(id)arg2 ;
-(void)didStopSubtest:(id)arg0 withName:(id)arg1 ;
-(void)queueHarness:(id)arg0 ;
-(void)run;
-(void)runHarness:(id)arg0 ;
-(void)runWithSecondsDelay:(NSUInteger)arg0 ;
-(void)startSubtestWithName:(id)arg0 withMetrics:(id)arg1 ;
-(void)stopSubtestWithName:(id)arg0 ;
-(void)willEndTestHarness:(id)arg0 ;
-(void)willStartTestHarness:(id)arg0 ;


@end


#endif