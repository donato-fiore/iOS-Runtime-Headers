// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKIDVREMOTEDEVICESERVICE_H
#define NPKIDVREMOTEDEVICESERVICE_H

@class NSXPCListener, NSMutableSet, NSString;
@protocol NSXPCListenerDelegate, NPKIDVRemoteDeviceServiceServerDelegate, NPKIDVRemoteDeviceServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKIDVRemoteDeviceService : NSObject <NSXPCListenerDelegate, NPKIDVRemoteDeviceServiceServerDelegate>

 {
    id<NPKIDVRemoteDeviceServiceDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateCallBackQueue;
    NSXPCListener *_xpcListener;
    NSMutableSet *_serviceServers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKIDVRemoteDeviceServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithServiceName:(id)arg0 delegate:(id)arg1 callbackQueue:(id)arg2 ;
-(void)_addConnection:(id)arg0 ;
-(void)_addServer:(id)arg0 ;
-(void)_removeServer:(id)arg0 ;
-(void)dealloc;
-(void)identityRemoteDeviceServiceServer:(id)arg0 didReceiveEvent:(NSUInteger)arg1 fromRemoteDeviceWithID:(id)arg2 ;
-(void)registerForEvents:(NSUInteger)arg0 withSession:(id)arg1 completion:(id)arg2 ;
-(void)unregisterFromEvents:(NSUInteger)arg0 withSession:(id)arg1 completion:(id)arg2 ;


@end


#endif