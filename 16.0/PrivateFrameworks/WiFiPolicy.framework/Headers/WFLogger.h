// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLOGGER_H
#define WFLOGGER_H

@class NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFLoggerBase.h"

@interface WFLogger : NSObject {
    WFLoggerBase *_loggerBase;
    NSUInteger _destination;
    NSUInteger _privacy;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned char _wflRunningOnWatchClassDevice;
    unsigned char _wflEnableDualLoggingOnWatchClassDevice;
}


@property (readonly, getter=getDestination) NSUInteger destination;
@property (readonly, getter=getLogLevelEnable) NSUInteger logLevelEnable;
@property (readonly, getter=getLogLevelPersist) NSUInteger logLevelPersist;
@property (readonly, copy, getter=getLogLifespanInDays) NSNumber *logLifespanInDays;
@property (readonly, getter=getLogPrivacy) NSUInteger logPrivacy;
@property (readonly, getter=getMaxFileSizeInMB) NSUInteger maxFileSizeInMB;


+(id)sharedWFLoggerSingleton;
-(id)init;
-(id)loggerBase;
-(void)WFLog:(NSUInteger)arg0 message:(char *)arg1 ;
-(void)dump;


@end


#endif