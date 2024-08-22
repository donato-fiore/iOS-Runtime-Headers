// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSEVENTFOCUSMANAGER_H
#define BKSEVENTFOCUSMANAGER_H

@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSSet, NSString, NSXPCConnection, NSMapTable;
@protocol BKSHIDEventDeferringObserving, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BKSHIDEventObserver.h"
#import "BKSHIDEventDeliveryManager.h"

@interface BKSEventFocusManager : NSObject <BKSHIDEventDeferringObserving>

 {
    BKSHIDEventObserver *_observer;
    os_unfair_lock_s _focusDataLock;
    BKSHIDEventDeliveryManager *_focusDataLock_manager;
    id<BSInvalidatable> *_queue_keyCommandRulesAssertion;
    NSMutableSet *_focusDataLock_currentState;
    NSMutableDictionary *_focusDataLock_pendingStatesByPriority;
    NSMutableArray *_focusDataLock_assertions;
    id<BSInvalidatable> *_observingAssertion;
    NSObject<OS_dispatch_queue> *_focusClientQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSUInteger _propertyUpdateGeneration;
}


@property (retain, nonatomic) NSSet *cachedFocusedDeferralProperties; // ivar: _cachedFocusedDeferralProperties
@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *infoPerFocusChangeObserver; // ivar: _infoPerFocusChangeObserver
@property (nonatomic) BOOL needsFlush; // ivar: _needsFlush
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_initWithManager:(id)arg0 observer:(id)arg1 pid:(int)arg2 clientIdentifier:(id)arg3 ;
-(id)_queryDeferralResolutions;
-(id)init;
-(void)_focusClientQueue_deferringResolutionsChanged;
-(void)_focusDataLock_reallyFlushWithSet:(id)arg0 ;
-(void)_focusDataLock_rebuildPendingStatesByPriority;
-(void)_pruneSet:(id)arg0 ofDeferralsPassingTest:(id)arg1 ;
-(void)_syncObserverState;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)deferEventsForClientWithProperties:(id)arg0 toClientWithProperties:(id)arg1 ;
-(void)deferEventsForClientWithProperties:(id)arg0 toClientWithProperties:(id)arg1 withPriority:(int)arg2 ;
-(void)deferringResolutionsChanged;
-(void)flush;
-(void)removeObserver:(id)arg0 ;
-(void)setForegroundApplicationOnMainDisplay:(id)arg0 pid:(int)arg1 ;
-(void)setSystemAppControlsFocusOnMainDisplay:(BOOL)arg0 ;


@end


#endif