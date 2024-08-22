// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSXPCSERVERPROXY_H
#define MTSXPCSERVERPROXY_H

@class HMFObject, NSUUID, NSString;
@protocol HMFLogging, MTSXPCServerInterface, MTSXPCConnection;



@interface MTSXPCServerProxy : HMFObject <HMFLogging, MTSXPCServerInterface>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (retain, nonatomic) NSObject<MTSXPCConnection> *connection; // ivar: _connection
@property (readonly) id *connectionFactory; // ivar: _connectionFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)initWithConnectionFactory:(id)arg0 ;
-(id)logIdentifier;
-(void)dealloc;
-(void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchSystemCommissionerPairingsWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)performDeviceSetupUsingRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDevicePairingWithUUID:(id)arg0 forSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeSystemCommissionerPairingWithUUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif