// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSXPCSERVER_H
#define MTSXPCSERVER_H

@class NSMutableSet, NSString;
@protocol MTSXPCListenerDelegate, MTSXPCClientProxyDelegate, HMFLogging, MTSDevicePairingServerInterface, MTSXPCDeviceSetupClientProxyDelegate, MTSXPCListener, MTSSystemCommissionerPairingServerInterface;

#import <Foundation/Foundation.h>


@interface MTSXPCServer : NSObject <MTSXPCListenerDelegate, MTSXPCClientProxyDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) NSMutableSet *clientProxies; // ivar: _clientProxies
@property (readonly) id *clientProxyFactory; // ivar: _clientProxyFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) NSObject<MTSDevicePairingServerInterface> *devicePairingServer; // ivar: _devicePairingServer
@property (weak) NSObject<MTSXPCDeviceSetupClientProxyDelegate> *deviceSetupServer; // ivar: _deviceSetupServer
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MTSXPCListener> *listener; // ivar: _listener
@property (readonly) Class superclass;
@property (weak) NSObject<MTSSystemCommissionerPairingServerInterface> *systemCommissionerPairingServer; // ivar: _systemCommissionerPairingServer


+(id)logCategory;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithListener:(id)arg0 clientProxyFactory:(id)arg1 ;
-(void)clientProxy:(id)arg0 fetchDevicePairingsForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)clientProxy:(id)arg0 fetchSystemCommissionerPairingsWithCompletionHandler:(id)arg1 ;
-(void)clientProxy:(id)arg0 performDeviceSetupUsingRequest:(id)arg1 completionHandler:(id)arg2 ;
-(void)clientProxy:(id)arg0 removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)clientProxy:(id)arg0 removeDevicePairingWithUUID:(id)arg1 forSystemCommissionerPairingUUID:(id)arg2 completionHandler:(id)arg3 ;
-(void)clientProxy:(id)arg0 removeSystemCommissionerPairingWithUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)start;


@end


#endif