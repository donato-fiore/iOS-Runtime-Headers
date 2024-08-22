// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDLSERVICEDISCOVERYMANAGER_H
#define AWDLSERVICEDISCOVERYMANAGER_H

@class NSXPCConnection, NSMutableArray;
@protocol OS_dispatch_queue, WiFiP2PXPCProtocol;

#import <Foundation/Foundation.h>


@interface AWDLServiceDiscoveryManager : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    id<WiFiP2PXPCProtocol> *_proxy;
    NSMutableArray *_registeredServices;
    NSMutableArray *_activeTrafficRegistrations;
    int _numReconnectAttempts;
}




-(BOOL)clearTrafficRegistration:(id)arg0 error:(*id)arg1 ;
-(BOOL)isConnected;
-(BOOL)requiresConnection;
-(BOOL)setTrafficRegistration:(id)arg0 error:(*id)arg1 ;
-(NSInteger)createNewXpcConnection;
-(id)init;
-(void)attemptReconnect;
-(void)dealloc;
-(void)handleError:(NSInteger)arg0 ;
-(void)resetState;
-(void)startServiceDiscoverySync:(id)arg0 addObject:(BOOL)arg1 ;
-(void)startServiceDiscoveryWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopServiceDiscoverySync:(id)arg0 ;
-(void)stopServiceDiscoveryWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif