// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDMODEASSERTIONSERVICE_H
#define DNDMODEASSERTIONSERVICE_H

@class NSHashTable, NSString;
@protocol DNDRemoteServiceConnectionEventListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DNDModeAssertion.h"

@interface DNDModeAssertionService : NSObject <DNDRemoteServiceConnectionEventListener>

 {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_assertionUpdateListeners;
    atomic_flag _registeredForUpdates;
    DNDModeAssertion *_activeAssertion;
    os_unfair_lock_s _activeAssertionLock;
    BOOL _activeAssertionQueried;
}


@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceForClientIdentifier:(id)arg0 ;
+(void)initialize;
-(BOOL)addAssertionUpdateListener:(id)arg0 error:(*id)arg1 ;
-(BOOL)invalidateAllActiveModeAssertionsWithError:(*id)arg0 ;
-(BOOL)removeAssertionUpdateListener:(id)arg0 error:(*id)arg1 ;
-(id)_initWithClientIdentifier:(id)arg0 ;
-(id)activeModeAssertionWithError:(*id)arg0 ;
-(id)allModeAssertionsWithError:(*id)arg0 ;
-(id)invalidateActiveModeAssertionWithError:(*id)arg0 ;
-(id)invalidateActiveModeAssertionWithInvalidationDetails:(id)arg0 reasonOverride:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)latestModeAssertionInvalidationWithError:(*id)arg0 ;
-(id)takeModeAssertionWithDetails:(id)arg0 error:(*id)arg1 ;
-(void)_handleChangeActiveModeAssertion:(id)arg0 invalidation:(id)arg1 ;
-(void)_registerForAssertionUpdatesIfRequiredWithCompletionHandler:(id)arg0 ;
-(void)addAssertionUpdateListener:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)remoteService:(id)arg0 didChangeActiveModeAssertion:(id)arg1 invalidation:(id)arg2 ;
-(void)removeAssertionUpdateListener:(id)arg0 ;


@end


#endif