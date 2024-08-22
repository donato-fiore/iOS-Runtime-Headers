// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSCROSSDEVICETRANSPORT_H
#define IDSCROSSDEVICETRANSPORT_H

@class NSMutableDictionary, NSMutableSet, IDSService, NSString;
@protocol IDSServiceDelegate, OS_dispatch_queue;


#import "CrossDeviceTransportCore.h"

@interface IDSCrossDeviceTransport : CrossDeviceTransportCore <IDSServiceDelegate>

 {
    NSObject<OS_dispatch_queue> *_idsServiceQueue;
    NSMutableDictionary *_endpointsRegistry;
    NSMutableSet *_delegateRegistry;
    IDSService *_idsService;
    NSString *_serviceName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isIDSEndpointEnabled;
-(NSUInteger)deliverMessage:(id)arg0 toEndpoint:(id)arg1 ;
-(id)idsService;
-(id)init;
-(id)initWithServiceName:(id)arg0 ;
-(void)addDelegate:(id)arg0 endpoint:(id)arg1 ;
-(void)dealloc;
-(void)registerIDSService;
-(void)removeDelegate:(id)arg0 endpoint:(id)arg1 ;
-(void)sendMessage:(id)arg0 toIDSDevices:(id)arg1 toEndpoint:(id)arg2 reply:(id)arg3 ;
-(void)sendMessage:(id)arg0 toIDSDevices:(id)arg1 toEndpoint:(id)arg2 validFor:(CGFloat)arg3 reply:(id)arg4 ;
-(void)sendMessage:(id)arg0 toIDSDevicesMatching:(id)arg1 toEndpoint:(id)arg2 reply:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 hasBeenDeliveredWithContext:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)unregisterIDSService;


@end


#endif