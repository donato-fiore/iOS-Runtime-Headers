// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNSIMULATEDCRASHREPORTER_H
#define CNSIMULATEDCRASHREPORTER_H


#import <Foundation/Foundation.h>


@interface CNSimulatedCrashReporter : NSObject



+(id)os_log;
+(void)simulateCrashWithCode:(NSInteger)arg0 description:(id)arg1 ;
+(void)simulateCrashWithMessage:(id)arg0 ;


@end


#endif