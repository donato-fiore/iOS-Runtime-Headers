// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSTERMINATIONASSERTIONOBSERVERMANAGER_H
#define BKSTERMINATIONASSERTIONOBSERVERMANAGER_H

@class RBSProcessMonitor, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BKSTerminationAssertionObserverManager : NSObject {
    RBSProcessMonitor *_monitor;
    BOOL _monitorIsReady;
    NSMutableSet *_observers;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableSet *_launchPreventedBundleIDs;
}




-(BOOL)hasTerminationAssertionForBundleID:(id)arg0 ;
-(NSUInteger)efficacyForBundleID:(id)arg0 ;
-(id)init;
-(void)_createMonitor;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif