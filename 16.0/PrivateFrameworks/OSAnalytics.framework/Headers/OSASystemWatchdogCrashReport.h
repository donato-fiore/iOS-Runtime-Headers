// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSASYSTEMWATCHDOGCRASHREPORT_H
#define OSASYSTEMWATCHDOGCRASHREPORT_H



#import "OSACrackShotReport.h"

@interface OSASystemWatchdogCrashReport : OSACrackShotReport



-(id)initWithPid:(int)arg0 procName:(id)arg1 bundleID:(id)arg2 exitSnapshot:(struct exit_reason_snapshot *)arg3 reason:(id)arg4 ;
-(id)problemType;


@end


#endif