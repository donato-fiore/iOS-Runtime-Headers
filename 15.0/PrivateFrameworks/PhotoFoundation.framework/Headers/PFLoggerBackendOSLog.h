// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLOGGERBACKENDOSLOG_H
#define PFLOGGERBACKENDOSLOG_H

@class NSMutableDictionary, NSString;


#import "PFLoggerBackendAdapter.h"

@interface PFLoggerBackendOSLog : PFLoggerBackendAdapter {
    NSMutableDictionary *_osLogs;
    NSString *_sender;
    os_unfair_lock_s _lock;
}




+(id)backendsFromUserDefaultsWithLogLevel:(int)arg0 ;
-(BOOL)allowsConcurrentAccess;
-(BOOL)formatsMessage;
-(BOOL)outputsToDebuggerConsole;
-(id)initWithSender:(id)arg0 ;
-(void)_logFromCodeLocation:(struct ? )arg0 subsystem:(id)arg1 type:(unsigned int)arg2 ;
-(void)logFromCodeLocation:(struct ? )arg0 facility:(id)arg1 subsystem:(id)arg2 level:(int)arg3 message:(id)arg4 format:(id)arg5 args:(char *)arg6 ;


@end


#endif