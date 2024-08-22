// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKUNITTESTRUNNER_H
#define CKUNITTESTRUNNER_H

@class NSString, NSFileHandle, IMUnitTestRunner;
@protocol IMUnitTestRunnerDelegate;

#import <Foundation/Foundation.h>


@interface CKUnitTestRunner : NSObject <IMUnitTestRunnerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IMUnitTestRunner *runner; // ivar: _runner
@property (nonatomic) BOOL shouldWrite; // ivar: _shouldWrite
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)_dumpResults:(id)arg0 ;
-(void)runUnitTestBundleAtPath:(id)arg0 writeToFile:(BOOL)arg1 ;
-(void)unitTestRunner:(id)arg0 didReceiveOutput:(id)arg1 ;


@end


#endif