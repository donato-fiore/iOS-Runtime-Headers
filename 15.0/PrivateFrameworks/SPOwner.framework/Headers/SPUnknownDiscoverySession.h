// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUNKNOWNDISCOVERYSESSION_H
#define SPUNKNOWNDISCOVERYSESSION_H

@class NSString, FMXPCServiceDescription, FMXPCSession;
@protocol SPUnknownDiscoveryXPCClientProtocol, OS_dispatch_queue, SPUnknownDiscoveryXPCProtocol;

#import <Foundation/Foundation.h>

#import "SPUnknownDiscoverySessionState.h"

@interface SPUnknownDiscoverySession : NSObject <SPUnknownDiscoveryXPCClientProtocol>



@property (copy, nonatomic) id *accessoryDiscoveredCallback; // ivar: _accessoryDiscoveredCallback
@property (copy, nonatomic) id *accessoryDiscoveryErrorCallback; // ivar: _accessoryDiscoveryErrorCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SPUnknownDiscoveryXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (copy, nonatomic) id *sessionInvalidatedCallback; // ivar: _sessionInvalidatedCallback
@property (copy, nonatomic) SPUnknownDiscoverySessionState *state; // ivar: _state
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)remoteInterface;
-(id)init;
-(id)initWithPreviousState:(id)arg0 ;
-(void)discoveredUnknownAccessory:(id)arg0 ;
-(void)fetchEncryptedPayloadForUnknownBeacon:(id)arg0 completion:(id)arg1 ;
-(void)interruptionHandler:(id)arg0 ;
-(void)invalidationHandler:(id)arg0 ;
-(void)lostUnknownAccessory:(id)arg0 ;
-(void)startDiscoveryWithCompletion:(id)arg0 ;
-(void)stop;
-(void)stopDiscoveryWithCompletion:(id)arg0 ;
-(void)unknownAccessoryDiscoveryError:(id)arg0 ;


@end


#endif