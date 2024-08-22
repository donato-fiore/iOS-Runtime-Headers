// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSTATESERVICE_H
#define DNDSTATESERVICE_H

@class NSHashTable, NSString;
@protocol DNDRemoteServiceConnectionEventListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDStateService : NSObject <DNDRemoteServiceConnectionEventListener>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_stateUpdateListeners;
    BOOL _registeredForUpdates;
}


@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceForClientIdentifier:(id)arg0 ;
+(void)initialize;
-(BOOL)_queue_registerForStateUpdatesIfRequired;
-(BOOL)addStateUpdateListener:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeStateUpdateListener:(id)arg0 error:(*id)arg1 ;
-(id)_initWithClientIdentifier:(id)arg0 ;
-(id)queryCurrentStateWithError:(*id)arg0 ;
-(void)addStateUpdateListener:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)queryCurrentStateWithCompletionHandler:(id)arg0 ;
-(void)remoteService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;
-(void)removeStateUpdateListener:(id)arg0 ;


@end


#endif