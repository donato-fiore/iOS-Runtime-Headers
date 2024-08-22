// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMRUNTIMETESTSUITETESTRUN_H
#define IMRUNTIMETESTSUITETESTRUN_H

@class NSMutableArray, NSArray;


#import "IMRuntimeTestRun.h"

@interface IMRuntimeTestSuiteTestRun : IMRuntimeTestRun {
    NSMutableArray *_testRuns;
}


@property (readonly, copy) NSArray *testRuns; // ivar: _testRun


-(id)init;
-(void)addTestRun:(id)arg0 ;


@end


#endif