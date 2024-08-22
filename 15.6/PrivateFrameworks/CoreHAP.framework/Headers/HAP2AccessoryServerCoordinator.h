// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2ACCESSORYSERVERCOORDINATOR_H
#define HAP2ACCESSORYSERVERCOORDINATOR_H

@class NSString, NSMutableDictionary, NSOperationQueue;
@protocol HAP2AccessoryServerDiscoveryDelegate, HAP2AccessoryServerCoordinatorPrivate, HAP2AccessoryServerCoordinator, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerControllerFactory, HAP2AccessoryServerCoordinatorDelegate, HAP2AccessoryServerDiscovery, HAP2AccessoryServerEncodingFactory, HAP2AccessoryServerPairingFactory, HAP2AccessoryServerSecureTransportFactory, HAP2AccessoryServerTransportFactory;


#import "HAP2LoggingObject.h"
#import "HAP2SerializedOperationQueue.h"
#import "HAP2PropertyLock.h"

@interface HAP2AccessoryServerCoordinator : HAP2LoggingObject <HAP2AccessoryServerDiscoveryDelegate, HAP2AccessoryServerCoordinatorPrivate, HAP2AccessoryServerCoordinator>



@property (readonly, weak, nonatomic) NSObject<HAP2AccessoryServerBrowserPrivate> *browser; // ivar: _browser
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerControllerFactory> *controllerFactory; // ivar: _controllerFactory
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAP2AccessoryServerCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *discoveredAccessoryServers; // ivar: _discoveredAccessoryServers
@property (nonatomic, getter=isDiscovering) BOOL discovering; // ivar: _discovering
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerDiscovery> *discovery; // ivar: _discovery
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerEncodingFactory> *encodingFactory; // ivar: _encodingFactory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOperationQueue *localOperationQueue; // ivar: _localOperationQueue
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerPairingFactory> *pairingFactory; // ivar: _pairingFactory
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock; // ivar: _propertyLock
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerSecureTransportFactory> *secureTransportFactory; // ivar: _secureTransportFactory
@property (nonatomic, getter=isStartDiscoveringPending) BOOL startDiscoveringPending; // ivar: _startDiscoveringPending
@property (nonatomic, getter=isStopDiscoveringPending) BOOL stopDiscoveringPending; // ivar: _stopDiscoveringPending
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerTransportFactory> *transportFactory; // ivar: _transportFactory


-(id)_createMetadataForAccessoryServerWithAccessoryInfo:(id)arg0 ;
-(id)_createPairedAccessoryServerWithAccessoryInfo:(id)arg0 transport:(id)arg1 operationQueue:(id)arg2 ;
-(id)_createUnpairedAccessoryServerWithAccessoryInfo:(id)arg0 transport:(id)arg1 operationQueue:(id)arg2 ;
-(id)initWithDiscovery:(id)arg0 pairingFactory:(id)arg1 transportFactory:(id)arg2 secureTransportFactory:(id)arg3 encodingFactory:(id)arg4 controllerFactory:(id)arg5 ;
-(void)_didDeterminePairingStateForAccessory:(id)arg0 isPaired:(BOOL)arg1 completion:(id)arg2 ;
-(void)_didDiscoverAccessory:(id)arg0 completion:(id)arg1 ;
-(void)_didDiscoverPairedAccessory:(id)arg0 transport:(id)arg1 operationQueue:(id)arg2 completion:(id)arg3 ;
-(void)_didDiscoverUnpairedAccessory:(id)arg0 transport:(id)arg1 operationQueue:(id)arg2 completion:(id)arg3 ;
-(void)_didLoseAccessory:(id)arg0 error:(id)arg1 ;
-(void)_didStartDiscoveringWithError:(id)arg0 ;
-(void)_didStopDiscoveringWithError:(id)arg0 ;
-(void)_startDiscovering;
-(void)_stopDiscovering;
-(void)discovery:(id)arg0 didDiscoverAccessory:(id)arg1 ;
-(void)discovery:(id)arg0 didLoseAccessory:(id)arg1 error:(id)arg2 ;
-(void)discovery:(id)arg0 didStartDiscoveringWithError:(id)arg1 ;
-(void)discovery:(id)arg0 didStopDiscoveringWithError:(id)arg1 ;
-(void)resurfaceDiscoveryInfoForDeviceID:(id)arg0 ;
-(void)startDiscovering;
-(void)stopDiscovering;


@end


#endif