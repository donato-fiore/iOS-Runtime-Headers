// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRAVCONCRETEROUTINGDISCOVERYSESSION_H
#define MRAVCONCRETEROUTINGDISCOVERYSESSION_H

@class AVOutputDeviceDiscoverySession, NSString, NSArray;
@protocol MRCompanionConnectionControllerDelegate, MRExpanseManagerObserver, OS_dispatch_queue;


#import "MRAVRoutingDiscoverySession.h"
#import "MRCompanionConnectionController.h"

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRCompanionConnectionControllerDelegate, MRExpanseManagerObserver>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    MRAVRoutingDiscoverySession *_companionDiscoverySession;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    unsigned int _targetAudioSessionID;
    unsigned int _clientProvidedTargetAudioSessionID;
    BOOL _hasRegisteredForExpanseMonitoring;
    NSString *_routingContextUID;
    NSArray *_availableOutputDevices;
    BOOL _scheduledAvailableOutputDevicesReload;
    int _airplayActiveNotificationToken;
    BOOL _isLocalDeviceBeingAirplayedTo;
    MRCompanionConnectionController *_companionController;
    MRAVRoutingDiscoverySession *_externalDiscoverySession;
    id *_externalDiscoverySessionToken;
}


@property (retain, nonatomic) NSArray *availableEndpoints;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *virtualOutputDevices; // ivar: _virtualOutputDevices


+(id)daemonVirtualDevices;
+(void)setDaemonVirtualDevices:(id)arg0 ;
-(BOOL)_shouldUseStandaloneDiscovery;
-(BOOL)devicePresenceDetected;
-(id)_onQueue_reloadAvailableOutputDevices;
-(id)initWithConfiguration:(id)arg0 ;
-(id)routingContextUID;
-(unsigned int)discoveryMode;
-(unsigned int)endpointFeatures;
-(unsigned int)targetAudioSessionID;
-(void)_availableOutputDevicesDidChangeNotification:(id)arg0 ;
-(void)_deviceInfoDidChange:(id)arg0 ;
-(void)_handleDidJoinExpanse;
-(void)_onQueue_reload;
-(void)_onQueue_setTargetAudioSessionID:(unsigned int)arg0 ;
-(void)_scheduleAvailableOutputDevicesReload;
-(void)_scheduleReload;
-(void)_setupProxiedDiscoveryWithDestinationEndpoint:(id)arg0 ;
-(void)_setupStandaloneDiscovery;
-(void)controller:(id)arg0 didDiscoverCompanion:(id)arg1 ;
-(void)controllerDidUndiscoverCompanion:(id)arg0 ;
-(void)expanseManagerDidJoinExpanseSession:(id)arg0 ;
-(void)expanseManagerDidLeaveExpanseSession:(id)arg0 ;
-(void)setDiscoveryMode:(unsigned int)arg0 ;
-(void)setRoutingContextUID:(id)arg0 ;
-(void)setTargetAudioSessionID:(unsigned int)arg0 ;


@end


#endif