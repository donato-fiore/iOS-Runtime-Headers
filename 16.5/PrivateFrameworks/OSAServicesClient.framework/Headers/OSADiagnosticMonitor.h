// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSADIAGNOSTICMONITOR_H
#define OSADIAGNOSTICMONITOR_H

@class NSMutableArray, NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface OSADiagnosticMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableArray *_eventObservers;
    NSMutableArray *_writeObservers;
    NSMutableSet *_observedEventTypes;
    NSMutableSet *_observedWriteTypes;
    NSXPCConnection *_serverConnection;
}




+(id)sharedMonitor;
-(id)init;
-(id)q_serverConnection;
-(void)addEventObserver:(id)arg0 forTypes:(id)arg1 ;
-(void)addWriteObserver:(id)arg0 forTypes:(id)arg1 ;
-(void)didWriteLog:(id)arg0 ;
-(void)q_addEventObserver:(id)arg0 forTypes:(id)arg1 ;
-(void)q_addWriteObserver:(id)arg0 forTypes:(id)arg1 ;
-(void)q_computeEventObserverTypes;
-(void)q_computeWriteObserverTypes;
-(void)q_registerForEventTypes;
-(void)q_registerForWriteTypes;
-(void)q_removeEventObserver:(id)arg0 andComputeObservedTypes:(BOOL)arg1 ;
-(void)q_removeWriteObserver:(id)arg0 andComputeObservedTypes:(BOOL)arg1 ;
-(void)q_teardownServerConnectionIfNoMoreObservers;
-(void)receivedLogEvent:(id)arg0 ;
-(void)removeEventObserver:(id)arg0 ;
-(void)removeWriteObserver:(id)arg0 ;
-(void)willWriteLog:(id)arg0 ;


@end


#endif