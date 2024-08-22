// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIOMETRICKITEVENTLOGGER_H
#define BIOMETRICKITEVENTLOGGER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "BKEvent.h"

@interface BiometricKitEventLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned int _eventList;
    int _eventListLength;
    BOOL _terminalFlushPending;
    BOOL _startEventFound;
    BKEvent *_lastSmartKeyboardEvent;
}




+(id)logger;
-(id)init;
-(void)appendEvent:(id)arg0 ;
-(void)appendEventValue:(unsigned int)arg0 isMetadata:(BOOL)arg1 ;
-(void)flushEvents;
-(void)logDeviceMetadata;
-(void)logEventOrCode:(NSUInteger)arg0 ;
-(void)logSmartKeyboardStatus;


@end


#endif