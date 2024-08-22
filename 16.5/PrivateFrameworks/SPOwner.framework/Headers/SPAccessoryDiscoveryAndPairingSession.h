// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPACCESSORYDISCOVERYANDPAIRINGSESSION_H
#define SPACCESSORYDISCOVERYANDPAIRINGSESSION_H

@class NSString, FMXPCServiceDescription, FMXPCSession;
@protocol SPAccessoryDiscoveryXPCClientProtocol, OS_dispatch_queue, SPAccessoryDiscoveryXPCProtocol;

#import <Foundation/Foundation.h>

#import "SPAccessoryDiscoverySessionState.h"

@interface SPAccessoryDiscoveryAndPairingSession : NSObject <SPAccessoryDiscoveryXPCClientProtocol>



@property (copy, nonatomic) id *accessoryDiscoveredCallback; // ivar: _accessoryDiscoveredCallback
@property (copy, nonatomic) id *accessoryDiscoveryErrorCallback; // ivar: _accessoryDiscoveryErrorCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SPAccessoryDiscoveryXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (copy, nonatomic) id *sessionInvalidatedCallback; // ivar: _sessionInvalidatedCallback
@property (copy, nonatomic) SPAccessoryDiscoverySessionState *state; // ivar: _state
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)remoteInterface;
-(id)init;
-(id)initWithPreviousState:(id)arg0 ;
-(void)accessoryDiscoveryError:(id)arg0 ;
-(void)discoveredAccessory:(id)arg0 ;
-(void)finalizePairingWith:(id)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)initiatePairingWith:(id)arg0 completion:(id)arg1 ;
-(void)interruptionHandler:(id)arg0 ;
-(void)invalidatePairingWith:(id)arg0 completion:(id)arg1 ;
-(void)invalidationHandler:(id)arg0 ;
-(void)lostAccessory:(id)arg0 ;
-(void)startAccessoryDiscoveryWithCompletion:(id)arg0 ;
-(void)stop;
-(void)stopAccessoryDiscoveryWithCompletion:(id)arg0 ;


@end


#endif