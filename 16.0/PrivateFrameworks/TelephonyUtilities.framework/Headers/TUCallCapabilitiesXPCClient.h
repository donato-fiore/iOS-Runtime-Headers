// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCALLCAPABILITIESXPCCLIENT_H
#define TUCALLCAPABILITIESXPCCLIENT_H

@class NSString, NSMapTable, NSXPCConnection;
@protocol TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TUCallCapabilitiesState.h"

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMapTable *delegateToQueue; // ivar: _delegateToQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) TUCallCapabilitiesState *state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) int token; // ivar: _token
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)asynchronousServer;
+(id)callCapabilitiesClientXPCInterface;
+(id)callCapabilitiesServerXPCInterface;
+(id)synchronousServer;
+(void)setAsynchronousServer:(id)arg0 ;
+(void)setSynchronousServer:(id)arg0 ;
-(id)asynchronousServer;
-(id)asynchronousServerWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)synchronousServerWithErrorHandler:(id)arg0 ;
-(void)_retrieveState;
-(void)_updateState:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)cancelPinRequestFromPrimaryDevice;
-(void)capabilityStateUpdated:(id)arg0 ;
-(void)dealloc;
-(void)endEmergencyCallbackMode;
-(void)handleServerDisconnect;
-(void)invalidate;
-(void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)arg0 ;
-(void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)arg0 ;
-(void)performDelegateCallbackBlock:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)requestPinFromPrimaryDevice;
-(void)setRelayCallingEnabled:(BOOL)arg0 ;
-(void)setRelayCallingEnabled:(BOOL)arg0 forDeviceWithID:(id)arg1 ;
-(void)setThumperCallingAllowed:(BOOL)arg0 onSecondaryDeviceWithID:(id)arg1 forSenderIdentityWithUUID:(id)arg2 ;
-(void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg0 forSenderIdentityWithUUID:(id)arg1 ;
-(void)setThumperCallingEnabled:(BOOL)arg0 forSenderIdentityWithUUID:(id)arg1 ;
-(void)setVoLTECallingEnabled:(BOOL)arg0 forSenderIdentityWithUUID:(id)arg1 ;
-(void)setWiFiCallingEnabled:(BOOL)arg0 forSenderIdentityWithUUID:(id)arg1 ;
-(void)setWiFiCallingRoamingEnabled:(BOOL)arg0 forSenderIdentityWithUUID:(id)arg1 ;


@end


#endif