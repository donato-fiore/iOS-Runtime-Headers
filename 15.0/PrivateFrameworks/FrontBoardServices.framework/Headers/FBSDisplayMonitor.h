// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSDISPLAYMONITOR_H
#define FBSDISPLAYMONITOR_H

@class CADisplay, NSHashTable, NSMapTable, NSSet, NSString, NSEnumerator;
@protocol BSInvalidatable, FBSDisplayObserving, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FBSDisplaySource.h"
#import "FBSDisplayConfiguration.h"
#import "FBSDisplayIdentity.h"

@interface FBSDisplayMonitor : NSObject <BSInvalidatable>

 {
    CADisplay *_mainDisplay;
    FBSDisplaySource *_mainDisplaySource;
    os_unfair_lock_s _lock;
    id<FBSDisplayObserving> *_lock_bookendObserver;
    NSHashTable *_lock_observers;
    NSMapTable *_lock_sourcesByDisplay;
    BOOL _lock_allowsUnknownDisplays;
    BOOL _lock_canPostToBookendObserver;
}


@property (readonly, weak, nonatomic) NSObject<FBSDisplayObserving> *bookendObserver;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // ivar: _callOutQueue
@property (readonly, nonatomic) BOOL canPostToBookendObserver;
@property (readonly, copy, nonatomic) NSSet *connectedIdentities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (readonly, copy, nonatomic) NSEnumerator *observersEnumerator;
@property (readonly) Class superclass;


-(BOOL)allowsUnknownDisplays;
-(id)_initWithBookendObserver:(id)arg0 ;
-(id)_sortedSources;
-(id)configurationForIdentity:(id)arg0 ;
-(id)init;
-(id)initWithInitializationCompletion:(id)arg0 ;
-(void)_lock_enumerateConnectedWithBlock:(id)arg0 ;
-(void)_lock_enumerateSourcesWithBlock:(id)arg0 ;
-(void)_postInitialBookendObserverConnections;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)setAllowsUnknownDisplays:(BOOL)arg0 ;


@end


#endif