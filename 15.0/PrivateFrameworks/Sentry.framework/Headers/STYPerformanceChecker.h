// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STYPERFORMANCECHECKER_H
#define STYPERFORMANCECHECKER_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STYPerformanceChecker : NSObject

@property (retain) NSDictionary *perfCheckerErrors; // ivar: _perfCheckerErrors
@property (retain) NSObject<OS_dispatch_queue> *serialUtilityQueue; // ivar: _serialUtilityQueue
@property BOOL underMemoryPressure; // ivar: _underMemoryPressure
@property BOOL underThermalPressure; // ivar: _underThermalPressure


+(id)sharedPerfChecker;
-(NSInteger)triage:(id)arg0 ;
-(void)checkFramerateOfAnimationScenario:(id)arg0 completionHandler:(id)arg1 ;
-(void)checkLatencyOfResponsivenessScenario:(id)arg0 completionHandler:(id)arg1 ;
-(void)checkPerformanceOfScenarioReport:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)reportError:(NSInteger)arg0 report:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif