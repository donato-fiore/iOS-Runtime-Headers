// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMRUNTIMETESTSUITE_H
#define IMRUNTIMETESTSUITE_H

@class NSMutableArray, NSArray, NSTimer;


#import "IMRuntimeTest.h"

@interface IMRuntimeTestSuite : IMRuntimeTest

@property (retain) IMRuntimeTest *currentTest; // ivar: _currentTest
@property (retain) NSMutableArray *runningTests; // ivar: _runningTests
@property CGFloat testStartDelay; // ivar: _testStartDelay
@property CGFloat testSuiteStartDelay; // ivar: _testSuiteStartDelay
@property (retain) NSArray *tests; // ivar: _tests
@property (weak) NSTimer *timer; // ivar: _timer


+(void)runTestsIfNeededWithRepeatCount:(NSInteger)arg0 ;
+(void)runTestsIfNeededWithRepeatCount:(NSInteger)arg0 withCount:(NSInteger)arg1 ;
-(id)init;
-(void)_cancelTimer;
-(void)_startNextTest;
-(void)_timerExpired:(id)arg0 ;
-(void)addTest:(id)arg0 ;
-(void)removeTest:(id)arg0 ;
-(void)startTest;


@end


#endif