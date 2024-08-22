// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPAVOUTPUTDEVICEROUTINGDATASOURCE_H
#define MPAVOUTPUTDEVICEROUTINGDATASOURCE_H

@class NSArray, AVRoutingSessionManager, MRAVRoutingDiscoverySession, MRAVRoutingDiscoverySessionConfiguration, MRAVEndpoint, NSString, MRAVOutputDevice;
@protocol OS_dispatch_queue;


#import "MPAVRoutingDataSource.h"
#import "MPMRAVOutputContextWrapper.h"
#import "MPAVEndpointRoute.h"

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_discoverySessionQueue;
    BOOL _attemptedToInitializeAppOutputContext;
    id *_companionCallbackToken;
    BOOL _didFindCompanion;
    id *_callbackToken;
    BOOL _devicePresenceDetected;
    NSArray *_outputDeviceRoutes;
    BOOL _shouldSourceOutputDevicesFromAVODDS;
    AVRoutingSessionManager *_routingSessionManager;
    BOOL _didFinishLoading;
    unsigned int _targetSessionID;
    NSInteger _discoveryMode;
}


@property (retain, nonatomic) MPMRAVOutputContextWrapper *applicationOutputContext; // ivar: _applicationOutputContext
@property (retain, nonatomic) MRAVRoutingDiscoverySession *companionDiscoverySession; // ivar: _companionDiscoverySession
@property (nonatomic) BOOL detachesRoutesToGroup; // ivar: _detachesRoutesToGroup
@property (nonatomic) BOOL didFinishLoading;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *discoverySession; // ivar: _discoverySession
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (readonly, nonatomic) MRAVEndpoint *endpoint;
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute; // ivar: _endpointRoute
@property (retain, nonatomic) NSString *initiator; // ivar: _initiator
@property (retain, nonatomic) MRAVOutputDevice *predictedDevice; // ivar: _predictedDevice
@property (copy, nonatomic) NSString *presentingAppBundleID; // ivar: _presentingAppBundleID
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic) BOOL supportsMultipleSelection; // ivar: _supportsMultipleSelection
@property (nonatomic) BOOL supportsQueueHandoff; // ivar: _supportsQueueHandoff
@property (nonatomic) BOOL supportsRoutePrediction; // ivar: _supportsRoutePrediction


+(id)_globalAudioSessionLock;
-(BOOL)_isRemovingPredictedDevice:(id)arg0 ;
-(BOOL)_shouldAddPredictedDeviceToOuputDevices:(id)arg0 ;
-(BOOL)_shouldDetachOutputDevicesToGroup:(id)arg0 ;
-(BOOL)devicePresenceDetected;
-(BOOL)routeIsLeaderOfEndpoint:(id)arg0 ;
-(NSInteger)discoveryMode;
-(id)_detachableDevicesInOutputDevices:(id)arg0 ;
-(id)_initWithEndpointRoute:(id)arg0 ;
-(id)_outputDeviceRouteWithUID:(id)arg0 ;
-(id)_stateDumpObject;
-(id)getRoutesForCategory:(id)arg0 ;
-(id)init;
-(id)initWithEndpointRoute:(id)arg0 ;
-(id)outputDevicesForRoutes:(id)arg0 ;
-(id)routingSessionManager;
-(unsigned int)targetSessionID;
-(void)_endpointsDidChangeNotification:(id)arg0 ;
-(void)_generateDiscoverySession;
-(void)_outputDevicesDidChange:(id)arg0 ;
-(void)_outputDevicesDidChangeNotification:(id)arg0 ;
-(void)_personalRoutesDidChange;
-(void)_registerNotifications;
-(void)_resetPredictedOutputDevice;
-(void)_routeStatusDidChangeNotification:(id)arg0 ;
-(void)_setShouldSourceOutputDevicesFromAVODDS:(BOOL)arg0 ;
-(void)_unregisterNotifications;
-(void)addRouteToGroup:(id)arg0 completion:(id)arg1 ;
-(void)addRoutesToGroup:(id)arg0 completion:(id)arg1 ;
-(void)createGroupFromOutputDevices:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)removeRouteFromGroup:(id)arg0 completion:(id)arg1 ;
-(void)removeRoutesFromGroup:(id)arg0 completion:(id)arg1 ;
-(void)setDiscoveryMode:(NSInteger)arg0 ;
-(void)setPickedRoute:(id)arg0 withPassword:(id)arg1 completion:(id)arg2 ;
-(void)setTargetSessionID:(unsigned int)arg0 ;


@end


#endif