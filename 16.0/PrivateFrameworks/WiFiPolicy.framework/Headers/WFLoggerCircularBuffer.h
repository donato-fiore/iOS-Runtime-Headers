// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLOGGERCIRCULARBUFFER_H
#define WFLOGGERCIRCULARBUFFER_H

@class NSDateFormatter;
@protocol OS_dispatch_queue;


#import "WFLoggerBase.h"

@interface WFLoggerCircularBuffer : WFLoggerBase {
    char * _wiFiLoggingLogBufferRef;
    NSInteger _wiFiLoggingLogBufferIndex;
    NSInteger _wiFiLoggingLogBufferMaxSize;
    unsigned int _dumpId;
    NSDateFormatter *_tsFormatter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}




-(id)init;
-(void)WFLog:(NSUInteger)arg0 privacy:(NSUInteger)arg1 cfStrMsg:(struct __CFString *)arg2 ;
-(void)WFLog:(NSUInteger)arg0 privacy:(NSUInteger)arg1 message:(char *)arg2 valist:(char *)arg3 ;
-(void)dealloc;
-(void)dump;


@end


#endif