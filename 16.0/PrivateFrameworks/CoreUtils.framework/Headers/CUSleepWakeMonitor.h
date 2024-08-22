// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUSLEEPWAKEMONITOR_H
#define CUSLEEPWAKEMONITOR_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUSleepWakeMonitor : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _powerCnx;
    *IONotificationPort _powerNotificationPort;
    unsigned int _powerNotifier;
    unsigned int _sleepWakeFlags;
    int _sleepWakeState;
    *LogCategory _ucat;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *sleepWakeHandler; // ivar: _sleepWakeHandler


-(id)init;
-(void)_ensureStarted;
-(void)_ensureStopped;
-(void)_invalidate;
-(void)_invalidated;
-(void)_sleepWakeHandlerForService:(unsigned int)arg0 type:(unsigned int)arg1 arg:(*void)arg2 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif