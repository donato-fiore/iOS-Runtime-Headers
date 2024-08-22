// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMPERFORMANCETESTHARNESS_H
#define CAMPERFORMANCETESTHARNESS_H

@class NSString;
@protocol CAMPerformanceTestHarnessDelegate;

#import <Foundation/Foundation.h>


@interface CAMPerformanceTestHarness : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (weak, nonatomic) NSObject<CAMPerformanceTestHarnessDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isSetupHarness; // ivar: _isSetupHarness
@property (nonatomic, getter=isRunningTest) BOOL runningTest; // ivar: _runningTest
@property (copy, nonatomic) id *startHandler; // ivar: _startHandler
@property (readonly, copy, nonatomic) NSString *testName; // ivar: _testName


-(id)initWithTestName:(id)arg0 ;
-(void)failedTestwithReason:(id)arg0 ;
-(void)startSubtestWithName:(id)arg0 ;
-(void)startSubtestWithName:(id)arg0 withMetrics:(id)arg1 ;
-(void)startTesting;
-(void)stopSubtestWithName:(id)arg0 ;
-(void)stopTesting;


@end


#endif