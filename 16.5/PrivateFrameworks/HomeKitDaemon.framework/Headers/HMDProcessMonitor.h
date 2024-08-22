// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPROCESSMONITOR_H
#define HMDPROCESSMONITOR_H

@class HMFObject, RBSProcessMonitor, NSMutableSet, NSString, NSArray, HMFTimer;
@protocol HMFLogging, HMFTimerDelegate, OS_dispatch_queue;



@interface HMDProcessMonitor : HMFObject <HMFLogging, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
    RBSProcessMonitor *_internal;
    NSMutableSet *_processes;
    BOOL _activeHomeKitApps;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *foregroundProcesses;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *pendingTerminatedApplications; // ivar: _pendingTerminatedApplications
@property (readonly, copy) NSArray *processes;
@property (retain, nonatomic) HMFTimer *spiClientTerminationDelayTimer; // ivar: _spiClientTerminationDelayTimer
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcListenerQueue; // ivar: _xpcListenerQueue


+(id)logCategory;
-(id)init;
-(id)initWithXpcListenerQueue:(id)arg0 ;
-(id)processInfoForConnection:(id)arg0 ;
-(id)processInfoForPID:(int)arg0 ;
-(void)_processAppStateChange:(id)arg0 ;
-(void)_removeProcess:(id)arg0 ;
-(void)addProcess:(id)arg0 ;
-(void)dealloc;
-(void)removeFromPendingTerminated:(id)arg0 ;
-(void)removeProcess:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateApplicationMonitor;


@end


#endif