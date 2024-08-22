// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNTESTSTORE_H
#define SNTESTSTORE_H

@class NSString, NSMutableDictionary, NSMutableArray;
@protocol SNTestRunFactory, SNTestCase;

#import <Foundation/Foundation.h>

#import "SNTestRun.h"

@interface SNTestStore : NSObject <SNTestRunFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<SNTestCase> *extendedLaunchTest; // ivar: _extendedLaunchTest
@property (readonly, nonatomic) SNTestRun *extendedLaunchTestRun;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *testCases; // ivar: _testCases
@property (readonly, nonatomic) NSMutableArray *testSuites; // ivar: _testSuites


-(id)init;
-(id)testRunForTestName:(id)arg0 ;
-(void)addTestCase:(id)arg0 ;
-(void)addTestSuite:(id)arg0 ;


@end


#endif