// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPCRASHREPORTER_H
#define CPCRASHREPORTER_H


#import <Foundation/Foundation.h>


@interface CPCrashReporter : NSObject



+(void)simulateCrashReportFromPID:(int)arg0 withKillCode:(unsigned int)arg1 usingReasonWithFormat:(id)arg2 ;
+(void)simulateCrashReportWithFormat:(id)arg0 ;
+(void)simulateCrashReportWithReason:(id)arg0 pid:(int)arg1 code:(unsigned int)arg2 ;


@end


#endif