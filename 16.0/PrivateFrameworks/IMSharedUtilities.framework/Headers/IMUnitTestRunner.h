// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMUNITTESTRUNNER_H
#define IMUNITTESTRUNNER_H

@class NSString, NSArray;
@protocol XCTestObservation, IMUnitTestRunnerDelegate;

#import <Foundation/Foundation.h>

#import "IMUnitTestBundleLoader.h"
#import "IMUnitTestFrameworkLoader.h"
#import "IMUnitTestLogger.h"

@interface IMUnitTestRunner : NSObject <XCTestObservation>



@property (readonly) IMUnitTestBundleLoader *bundleLoader; // ivar: _bundleLoader
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<IMUnitTestRunnerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *failedTests; // ivar: _failedTests
@property (readonly) IMUnitTestFrameworkLoader *frameworkLoader; // ivar: _frameworkLoader
@property (readonly) NSUInteger hash;
@property (readonly) IMUnitTestLogger *logger; // ivar: _logger
@property (readonly) Class superclass;


-(BOOL)_loadFrameworksIfNeeded:(*id)arg0 ;
-(NSInteger)runTestsInBundleAtPath:(id)arg0 ;
-(id)dateFormatter;
-(id)descriptionFromResult:(id)arg0 ;
-(id)init;
-(id)initWithLogger:(id)arg0 bundleLoader:(id)arg1 ;
-(id)initWithLogger:(id)arg0 bundleLoader:(id)arg1 frameworkLoader:(id)arg2 ;
-(id)pathToPluginBundle:(id)arg0 ;
-(id)runTestsInBundleAtPath:(id)arg0 error:(*id)arg1 ;
-(id)runTestsInBundleNamed:(id)arg0 error:(*id)arg1 ;
-(void)log:(id)arg0 ;
-(void)logBanner:(id)arg0 ;
-(void)testCase:(id)arg0 didFailWithDescription:(id)arg1 inFile:(id)arg2 atLine:(NSUInteger)arg3 ;
-(void)testCaseDidFinish:(id)arg0 ;
-(void)testCaseWillStart:(id)arg0 ;
-(void)testLogWithFormat:(id)arg0 ;
-(void)testSuite:(id)arg0 didFailWithDescription:(id)arg1 inFile:(id)arg2 atLine:(NSUInteger)arg3 ;
-(void)testSuiteDidFinish:(id)arg0 ;
-(void)testSuiteWillStart:(id)arg0 ;


@end


#endif