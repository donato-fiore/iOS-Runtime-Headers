// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUPERFORMANCETESTHARNESS_H
#define TSUPERFORMANCETESTHARNESS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSUPerformanceTestHarness : NSObject {
    NSMutableArray *mTestCases;
    timeval mSetupTime;
}


@property (readonly, nonatomic) BOOL passed; // ivar: mPassed
@property (readonly, nonatomic) NSInteger passingTestCount; // ivar: mPassingTests
@property (nonatomic) BOOL quiet; // ivar: mQuiet
@property (readonly, nonatomic) NSInteger testCount; // ivar: mTotalTests


+(id)harness;
-(BOOL)runTests;
-(id)init;
-(id)p_createResultDirectory;
-(id)testWithName:(id)arg0 selector:(SEL)arg1 goalTime:(CGFloat)arg2 ;
-(void)cleanup;
-(void)dealloc;
-(void)p_writeCsvResultsToDirectory:(id)arg0 ;
-(void)p_writeSystemConfigurationToDirectory:(id)arg0 ;
-(void)report;
-(void)runTestWithName:(id)arg0 selector:(SEL)arg1 goalTime:(CGFloat)arg2 ;
-(void)runTestWithName:(id)arg0 selector:(SEL)arg1 goalTime:(CGFloat)arg2 precision:(CGFloat)arg3 ;
-(void)setup;
-(void)testSuite;


@end


#endif