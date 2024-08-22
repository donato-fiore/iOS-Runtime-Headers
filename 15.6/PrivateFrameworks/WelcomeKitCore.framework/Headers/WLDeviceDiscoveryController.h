// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLDEVICEDISCOVERYCONTROLLER_H
#define WLDEVICEDISCOVERYCONTROLLER_H

@class NSString, NSMutableArray, WLSourceDevice;
@protocol WLDeviceDiscoverySocketHandlerDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WLAutomation.h"

@interface WLDeviceDiscoveryController : NSObject <WLDeviceDiscoverySocketHandlerDelegate>

 {
    BOOL _starting;
    int _listenerSocket;
    NSUInteger _countOfPairingAttemptsWithCurrentSecret;
    NSString *_allowedAddress;
    NSMutableArray *_socketHandlers;
    NSMutableArray *_sourceDevices;
    NSObject<OS_dispatch_source> *_incomingConnSource;
    id *_nextIncomingConnectionHandler;
    WLAutomation *_automation;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) WLSourceDevice *sourceDevice;
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid


+(id)sharedInstance;
-(BOOL)_shouldForceDiscoveryError;
-(BOOL)supportsLocalImport;
-(id)_generatePairingSecret;
-(id)_ssidWithSecret:(id)arg0 ;
-(id)init;
-(id)listenForConnectionOnSocket:(int)arg0 withConnectionHandler:(id)arg1 ;
-(int)acceptIncomingConnectionWithListenerSocket:(int)arg0 nonBlocking:(BOOL)arg1 ;
-(int)createListenerSocketOnPort:(NSUInteger)arg0 ;
-(void)_allowConnectionsFromAnyAddress;
-(void)_postSourceDevicesDidChangeNotification;
-(void)_queue_startDiscoveryWithPreGeneratedCode:(id)arg0 completion:(id)arg1 ;
-(void)_queue_stopDeviceDiscoveryWithCompletion:(id)arg0 ;
-(void)_queue_stopWiFiAndDeviceDiscoveryWithCompletion:(id)arg0 ;
-(void)attemptDirectConnectionToAddress:(id)arg0 ;
-(void)deviceDiscoverySocketHandler:(id)arg0 didDiscoverCandidate:(id)arg1 ;
-(void)deviceDiscoverySocketHandler:(id)arg0 didFailToHandshakeWithSourceDevice:(id)arg1 error:(id)arg2 ;
-(void)deviceDiscoverySocketHandler:(id)arg0 didFinishHandshakeWithSourceDevice:(id)arg1 ;
-(void)importLocalContent;
-(void)listenerDidStart:(int)arg0 srp:(id)arg1 ;
-(void)setNextIncomingConnectionHandler:(id)arg0 ;
-(void)softAPDidStart:(BOOL)arg0 ssid:(id)arg1 psk:(id)arg2 secret:(id)arg3 srp:(id)arg4 error:(id)arg5 completion:(id)arg6 ;
-(void)startWiFiAndDeviceDiscoveryWithPreGeneratedCode:(id)arg0 completion:(id)arg1 ;
-(void)stopDeviceDiscoveryWithCompletion:(id)arg0 ;
-(void)stopWiFiAndDeviceDiscoveryWithCompletion:(id)arg0 ;


@end


#endif