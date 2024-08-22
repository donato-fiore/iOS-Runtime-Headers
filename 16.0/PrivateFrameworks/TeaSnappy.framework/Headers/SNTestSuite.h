// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNTESTSUITE_H
#define SNTESTSUITE_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SNTestSuite.h"

@interface SNTestSuite : NSObject

@property (weak, nonatomic) SNTestSuite *parentTestSuite; // ivar: _parentTestSuite
@property (readonly, nonatomic) NSMutableArray *subTestSuites; // ivar: _subTestSuites
@property (readonly, nonatomic) NSMutableDictionary *testCases; // ivar: _testCases


-(id)init;
-(id)testRunForTestName:(id)arg0 ;
-(id)testSetupList;
-(void)addSubTestSuite:(id)arg0 ;
-(void)addTestCase:(id)arg0 ;


@end


#endif