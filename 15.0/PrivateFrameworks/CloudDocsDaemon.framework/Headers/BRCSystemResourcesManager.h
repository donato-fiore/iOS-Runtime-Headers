// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCSYSTEMRESOURCESMANAGER_H
#define BRCSYSTEMRESOURCESMANAGER_H

@class NSHashTable, BRReachabilityMonitor, NSDate, NSMutableSet, NSMutableDictionary, br_pacer, NSMapTable, NSString;
@protocol BRReachabilityObserver, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface BRCSystemResourcesManager : NSObject <BRReachabilityObserver>

 {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BOOL _invalidated;
    NSHashTable *_reachabilityObservers;
    BRReachabilityMonitor *_reachabilityMonitor;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_source> *_reachabilityFlagsTimer;
    NSHashTable *_powerObservers;
    int _powerNotifyToken;
    BOOL _powerLevelOK;
    NSObject<OS_dispatch_source> *_powerLevelOKTimer;
    BOOL _connectedToPowerSource;
    NSDate *_connectedToPowerSourceCheckedDate;
    NSMutableSet *_lowDiskSet;
    NSMutableDictionary *_lowDiskDict;
    NSObject<OS_dispatch_source> *_lowDiskSource;
    NSObject<OS_dispatch_source> *_lowDiskTimer;
    NSHashTable *_lowMemoryObservers;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    br_pacer *_memoryNotificationCoalescePacer;
    NSMapTable *_processObservers;
    NSHashTable *_appListObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isNetworkReachable;
@property (readonly) BOOL isPowerOK;
@property (readonly) unsigned int reachabilityFlags;
@property (readonly) Class superclass;


+(id)manager;
-(BOOL)connectedToPowerSource;
-(BOOL)hasEnoughSpaceForDevice:(int)arg0 ;
-(id)_createMonitoringObjectForProcessID:(int)arg0 observer:(id)arg1 ;
-(id)init;
-(void)__resetReachability;
-(void)_didReceiveMemoryWarning;
-(void)_initAppListObservers;
-(void)_initLowDiskManager;
-(void)_initLowMemory;
-(void)_initPowerManager;
-(void)_initProcessObservers;
-(void)_initReachability;
-(void)_initXPCFSEvents;
-(void)_invalidateAppListObservers;
-(void)_invalidateLowDiskManager;
-(void)_invalidateLowMemory;
-(void)_invalidatePowerManager;
-(void)_invalidateProcessMonitorObject:(id)arg0 ;
-(void)_invalidateProcessObservers;
-(void)_invalidateReachability;
-(void)_processLowDiskNotification:(BOOL)arg0 ;
-(void)_resetLowDiskManager;
-(void)_resetPowerManager;
-(void)_resetReachability;
-(void)_setPowerLevel:(BOOL)arg0 ;
-(void)_setPowerLevelWithCoalescing:(BOOL)arg0 ;
-(void)addAppListObserver:(id)arg0 ;
-(void)addLowDiskObserver:(id)arg0 forDevice:(int)arg1 ;
-(void)addLowMemoryObserver:(id)arg0 ;
-(void)addPowerObserver:(id)arg0 ;
-(void)addProcessMonitor:(id)arg0 forProcessID:(int)arg1 ;
-(void)addReachabilityObserver:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)reachabilityMonitor:(id)arg0 didChangeReachabilityFlagsTo:(unsigned int)arg1 ;
-(void)reachabilityMonitor:(id)arg0 didChangeReachabilityStatusTo:(BOOL)arg1 ;
-(void)removeAppListObserver:(id)arg0 ;
-(void)removeLowDiskObserver:(id)arg0 forDevice:(int)arg1 ;
-(void)removeLowMemoryObserver:(id)arg0 ;
-(void)removePowerObserver:(id)arg0 ;
-(void)removeProcessMonitor:(id)arg0 ;
-(void)removeReachabilityObserver:(id)arg0 ;
-(void)reset;
-(void)resume;
-(void)suspend;


@end


#endif