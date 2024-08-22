// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACTIVEXPCCLIENTCONNECTIONSPERIODICTIMER_H
#define HMDACTIVEXPCCLIENTCONNECTIONSPERIODICTIMER_H

@class HMFObject, NSSet, NSString, NSHashTable, HMFTimer;
@protocol HMFLogging, HMFTimerDelegate, HMDActiveXPCClientConnectionsPeriodicTimerDelegate, OS_dispatch_queue;



@interface HMDActiveXPCClientConnectionsPeriodicTimer : HMFObject <HMFLogging, HMFTimerDelegate>



@property (readonly, copy) NSSet *clientConnections;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDActiveXPCClientConnectionsPeriodicTimerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) NSHashTable *mutableClientConnections; // ivar: _mutableClientConnections
@property (readonly) Class superclass;
@property (readonly) CGFloat timeInterval; // ivar: _timeInterval
@property (retain) HMFTimer *timer; // ivar: _timer
@property (copy) id *timerFactory; // ivar: _timerFactory
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithTimeInterval:(CGFloat)arg0 logIdentifier:(id)arg1 workQueue:(id)arg2 ;
-(void)_updateTimer;
-(void)addClientConnection:(id)arg0 ;
-(void)handleClientConnectionDidActivate:(id)arg0 ;
-(void)handleClientConnectionDidDeactivate:(id)arg0 ;
-(void)removeClientConnection:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif