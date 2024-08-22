// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIP2PDNSSERVICEDISCOVERYMANAGER_H
#define WIFIP2PDNSSERVICEDISCOVERYMANAGER_H

@class NSMutableArray, NSString;
@protocol WiFiP2PDNSServiceDiscoveryXPCDelegate, WiFiP2PXPCConnectionDelegate;

#import <Foundation/Foundation.h>

#import "WiFiP2PXPCConnection.h"

@interface WiFiP2PDNSServiceDiscoveryManager : NSObject <WiFiP2PDNSServiceDiscoveryXPCDelegate, WiFiP2PXPCConnectionDelegate>

 {
    BOOL _useWiFiAware;
    id *_serviceCallback;
    NSMutableArray *_registeredServices;
    WiFiP2PXPCConnection *_xpcConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)exportedInterface;
-(id)exportedObject;
-(id)initUsingWiFiAware:(BOOL)arg0 serviceCallback:(id)arg1 ;
-(id)remoteObjectInterface;
-(void)handleConnectionEstablishedWithProxy:(id)arg0 ;
-(void)handleEventType:(NSUInteger)arg0 keyData:(id)arg1 valueData:(id)arg2 ;
-(void)startConnectionUsingProxy:(id)arg0 completionHandler:(id)arg1 ;
-(void)startServiceDiscoveryWithConfiguration:(id)arg0 ;
-(void)startServiceDiscoveryWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopServiceDiscoveryWithConfiguration:(id)arg0 ;


@end


#endif