// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLOGGERBASE_H
#define WFLOGGERBASE_H

@class NSString, NSNumber;
@protocol WFLogProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFLogger.h"

@interface WFLoggerBase : NSObject <WFLogProtocol>

 {
    WFLogger *_ctxt;
    unsigned char _internalInstall;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (readonly) unsigned char WFIsInternalInstall;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=getLogLevelEnable) NSUInteger logLevelEnable;
@property (getter=getLogLevelPersist) NSUInteger logLevelPersist;
@property (copy, getter=getLogLifespanInDays) NSNumber *logLifespanInDays;
@property (getter=getLogPrivacy) NSUInteger logPrivacy;
@property (getter=getMaxFileSizeInMB) NSUInteger maxSizeInKb;
@property (readonly) Class superclass;


-(void)WFLog:(NSUInteger)arg0 privacy:(NSUInteger)arg1 cfStrMsg:(struct __CFString *)arg2 ;
-(void)WFLog:(NSUInteger)arg0 privacy:(NSUInteger)arg1 message:(char *)arg2 valist:(char *)arg3 ;
-(void)dump;
-(void)stopWatchingLogFile;


@end


#endif