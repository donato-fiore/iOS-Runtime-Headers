// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMRUNTIMETEST_H
#define IMRUNTIMETEST_H


#import <Foundation/Foundation.h>

#import "IMRuntimeTestRun.h"

@interface IMRuntimeTest : NSObject

@property (copy) id *completion; // ivar: _completion
@property (retain) IMRuntimeTestRun *testRun; // ivar: _testRun


+(id)logHandle;
+(id)testName;
+(void)testLog:(id)arg0 ;
-(id)logHandle;
-(id)testName;
-(void)dispatchAfter:(CGFloat)arg0 block:(id)arg1 ;
-(void)finishTest;
-(void)finishTestAfterInterval:(CGFloat)arg0 ;
-(void)runTest:(id)arg0 ;
-(void)setUp;
-(void)startTest;
-(void)tearDown;
-(void)testLog:(id)arg0 ;


@end


#endif