// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCUNITTESTUTILS_H
#define VCUNITTESTUTILS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VCUnitTestUtils : NSObject {
    NSArray *_crashFilesBeforeTest;
    NSArray *_crashFilesAfterTest;
}




+(void)setAutomaticTimeEnabled:(BOOL)arg0 ;
+(void)validateCrashFile:(id)arg0 exactErrStringToMatch:(id)arg1 crashType:(int)arg2 errorCode:(*int)arg3 ;
-(void)captureFinalCrashReporterSnapshotAndCheckForCrash:(id)arg0 crashType:(int)arg1 errorCode:(*int)arg2 ;
-(void)captureInitialCrashReporterSnapshot:(*int)arg0 ;
-(void)dealloc;


@end


#endif