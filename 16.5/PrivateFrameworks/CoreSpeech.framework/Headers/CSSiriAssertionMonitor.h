// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSIRIASSERTIONMONITOR_H
#define CSSIRIASSERTIONMONITOR_H

@class NSString;
@protocol CSXPCConnectionDelegate, OS_dispatch_queue;


#import "CSEventMonitor.h"

@interface CSSiriAssertionMonitor : CSEventMonitor <CSXPCConnectionDelegate>

 {
    unsigned char _assertionState;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isEnabled;
-(id)init;
-(void)_notifyObserver:(BOOL)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)dealloc;
-(void)disableAssertionReceived;
-(void)enableAssertionReceived;


@end


#endif