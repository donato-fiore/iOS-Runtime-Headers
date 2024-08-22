// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSXPCCLIENTPROXY_H
#define MTSXPCCLIENTPROXY_H

@class HMFObject;
@protocol MTSXPCServerInterface, MTSXPCConnection, MTSXPCClientProxyDelegate;



@interface MTSXPCClientProxy : HMFObject <MTSXPCServerInterface>



@property (readonly) NSObject<MTSXPCConnection> *connection; // ivar: _connection
@property (weak) NSObject<MTSXPCClientProxyDelegate> *delegate; // ivar: _delegate
@property (readonly) BOOL hasDevicePairingEntitlement;
@property (readonly) BOOL hasMatterSetupPayloadEntitlement;
@property (readonly) BOOL hasPrivateHomeKitEntitlement;


-(id)attributeDescriptions;
-(id)initWithConnection:(id)arg0 ;
-(void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchSystemCommissionerPairingsWithCompletionHandler:(id)arg0 ;
-(void)performDeviceSetupUsingRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDevicePairingWithUUID:(id)arg0 forSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeSystemCommissionerPairingWithUUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif