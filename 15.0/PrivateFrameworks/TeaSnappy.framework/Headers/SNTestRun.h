// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNTESTRUN_H
#define SNTESTRUN_H

@class NSString;
@protocol SNTestRunOptions, SNTestCase;

#import <Foundation/Foundation.h>

#import "SNTestSuite.h"

@interface SNTestRun : NSObject <SNTestRunOptions>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger orientation;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SNTestCase> *testCase; // ivar: _testCase
@property (readonly, nonatomic) SNTestSuite *testSuite; // ivar: _testSuite
@property (readonly, nonatomic) BOOL waitForCommitToFinish;


-(id)initWithTestCase:(id)arg0 testSuite:(id)arg1 ;
-(void)runTestWithContext:(id)arg0 testCoordinator:(id)arg1 completion:(id)arg2 ;
-(void)runTestWithContext:(id)arg0 testName:(id)arg1 testCoordinator:(id)arg2 completion:(id)arg3 ;
-(void)setupWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif