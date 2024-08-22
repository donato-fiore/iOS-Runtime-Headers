// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPERFORMANCETESTHARNESS_H
#define CAMPERFORMANCETESTHARNESS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CAMPerformanceTestHarness : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic, getter=isRunningTest) BOOL runningTest;
@property (readonly, copy, nonatomic) NSString *testName; // ivar: _testName


-(id)initWithTestName:(id)arg0 ;
-(void)failedTestwithReason:(id)arg0 ;
-(void)startSubtestWithName:(id)arg0 ;
-(void)startTesting;
-(void)stopSubtestWithName:(id)arg0 ;
-(void)stopTesting;


@end


#endif