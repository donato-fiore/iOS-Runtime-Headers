// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ITIDLETIMERSTATESERVER_H
#define ITIDLETIMERSTATESERVER_H

@class BSServiceConnectionListener, NSMutableSet, NSMutableDictionary, NSString;
@protocol BSServiceConnectionListenerDelegate, ITIdleTimerServerInterface, OS_dispatch_queue, ITIdleTimerStateServerDelegate;

#import <Foundation/Foundation.h>


@interface ITIdleTimerStateServer : NSObject <BSServiceConnectionListenerDelegate, ITIdleTimerServerInterface>

 {
    os_unfair_lock_s _accessLock;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BSServiceConnectionListener *_connectionListener;
    NSMutableSet *_connections;
    NSMutableDictionary *_clientTargetsByConfigIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ITIdleTimerStateServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasIdleTimerServicesEntitlementForProcess:(id)arg0 missingEntitlementError:(*id)arg1 ;
-(BOOL)clientConfiguration:(id)arg0 handleIdleEvent:(NSUInteger)arg1 ;
-(BOOL)isIdleTimerServiceAvailableWithError:(*id)arg0 ;
-(id)initWithCalloutQueue:(id)arg0 delegate:(id)arg1 ;
-(void)_addConnection:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)addIdleTimerServiceConfiguration:(id)arg0 forReason:(id)arg1 error:(*id)arg2 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)removeIdleTimerServiceConfiguration:(id)arg0 forReason:(id)arg1 error:(*id)arg2 ;


@end


#endif