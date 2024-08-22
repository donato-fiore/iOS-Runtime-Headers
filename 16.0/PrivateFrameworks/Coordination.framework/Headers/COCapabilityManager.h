// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COCAPABILITYMANAGER_H
#define COCAPABILITYMANAGER_H

@class NSString, NSXPCConnection, NSArray, NSSet;
@protocol COCapabilityManagerClientInterface, OS_dispatch_queue, COCapabilityManagerConnectionProvider;

#import <Foundation/Foundation.h>


@interface COCapabilityManager : NSObject <COCapabilityManagerClientInterface>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSXPCConnection *lastConnection; // ivar: _lastConnection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // ivar: _observerQueue
@property (copy, nonatomic) NSArray *observers; // ivar: _observers
@property (readonly, nonatomic) NSObject<COCapabilityManagerConnectionProvider> *provider; // ivar: _provider
@property (copy, nonatomic) NSSet *registeredCapabilities; // ivar: _registeredCapabilities
@property (readonly) Class superclass;


-(id)_remoteInterfaceWithErrorHandler:(id)arg0 ;
-(id)addObserverForCapability:(id)arg0 inCluster:(id)arg1 usingBlock:(id)arg2 ;
-(id)init;
-(id)initWithConnectionProvider:(id)arg0 ;
-(void)_lostConnectionToService;
-(void)_notifyObserver:(id)arg0 available:(BOOL)arg1 ;
-(void)_registerCapabililty:(id)arg0 ;
-(void)_registerObserver:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)availabilityChanged:(BOOL)arg0 ofCapability:(id)arg1 inCluster:(id)arg2 ;
-(void)dealloc;
-(void)registerCapability:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)unregisterCapability:(id)arg0 ;


@end


#endif