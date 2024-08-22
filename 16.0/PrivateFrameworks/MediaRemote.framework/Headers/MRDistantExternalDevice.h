// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRDISTANTEXTERNALDEVICE_H
#define MRDISTANTEXTERNALDEVICE_H

@class NSXPCConnection, NSArray, NSNumber, NSString, NSXPCListenerEndpoint;
@protocol MRAVDistantExternalDeviceClientProtocol, OS_dispatch_queue;


#import "MRExternalDevice.h"
#import "MRAVDistantExternalDeviceMetadata.h"
#import "MROrigin.h"

@interface MRDistantExternalDevice : MRExternalDevice <MRAVDistantExternalDeviceClientProtocol>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    MRAVDistantExternalDeviceMetadata *_externalDeviceMetadata;
    NSXPCConnection *_hostedExternalDeviceConnection;
    NSUInteger _deviceNotifications;
    unsigned int _connectionState;
    MROrigin *_customOrigin;
    BOOL _isValid;
    BOOL _hasEverAtteptedToConnectWhileInvalid;
    NSArray *_subscribedPlayerPaths;
    NSNumber *_isPaired;
    NSString *_uid;
}


@property (readonly, nonatomic) NSUInteger callbacks; // ivar: _callbacks
@property (copy, nonatomic) id *connectionStateCallback; // ivar: _connectionStateCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue; // ivar: _connectionStateCallbackQueue
@property (copy, nonatomic) id *customDataCallback; // ivar: _customDataCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *customDataCallbackQueue; // ivar: _customDataCallbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasEverAttemptedToConnect; // ivar: _hasEverAttemptedToConnect
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (copy, nonatomic) id *nameCallback; // ivar: _nameCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nameCallbackQueue; // ivar: _nameCallbackQueue
@property (readonly) Class superclass;
@property (copy, nonatomic) id *volumeCallback; // ivar: _volumeCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *volumeCallbackQueue; // ivar: _volumeCallbackQueue


+(id)clientInterface;
+(id)serviceInterface;
-(BOOL)isPaired;
-(BOOL)isUsingSystemPairing;
-(BOOL)isValid;
-(BOOL)wantsEndpointChangeNotifications;
-(BOOL)wantsNowPlayingArtworkNotifications;
-(BOOL)wantsNowPlayingNotifications;
-(BOOL)wantsOutputDeviceNotifications;
-(BOOL)wantsSystemEndpointNotifications;
-(BOOL)wantsVolumeNotifications;
-(NSInteger)port;
-(id)customOrigin;
-(id)deviceInfo;
-(id)hostName;
-(id)initWithExternalDeviceListenerEndpoint:(id)arg0 ;
-(id)name;
-(id)personalOutputDevices;
-(id)subscribedPlayerPaths;
-(id)supportedMessages;
-(id)uid;
-(unsigned int)connectionState;
-(void)_handleDeviceInfoDidChange:(id)arg0 ;
-(void)connectWithOptions:(unsigned int)arg0 clientBundleIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)createHostedEndpointWithOutputDeviceUIDs:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)disconnect:(id)arg0 ;
-(void)discoveryOutputDevicesChanged:(id)arg0 forConfiguration:(id)arg1 ;
-(void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg0 withError:(id)arg1 ;
-(void)hostedExternalDeviceDidReceiveCustomData:(id)arg0 withName:(id)arg1 ;
-(void)hostedExternalDeviceEndpoint:(id)arg0 didAddOutputDevice:(id)arg1 ;
-(void)hostedExternalDeviceEndpoint:(id)arg0 didChangeOutputDevice:(id)arg1 ;
-(void)hostedExternalDeviceEndpoint:(id)arg0 didRemoveOutputDevice:(id)arg1 ;
-(void)hostedExternalDeviceEndpoint:(id)arg0 volumeCapabilitiesDidChange:(unsigned int)arg1 forOutputDevice:(id)arg2 ;
-(void)hostedExternalDeviceEndpoint:(id)arg0 volumeDidChange:(float)arg1 forOutputDevice:(id)arg2 ;
-(void)hostedExternalDeviceEndpointDidChange:(id)arg0 ;
-(void)hostedExternalDeviceNameDidChange:(id)arg0 ;
-(void)modifyByAddingDeviceUIDs:(id)arg0 removingDeviceUIDs:(id)arg1 settingDeviceUIDs:(id)arg2 addingClusterAwareDeviceUIDs:(id)arg3 removingClusterAwareDeviceUIDs:(id)arg4 settingClusterAwareDeviceUIDs:(id)arg5 withReplyQueue:(id)arg6 completion:(id)arg7 ;
-(void)outputDeviceVolume:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)outputDeviceVolumeControlCapabilities:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
// -(void)ping:(CGFloat)arg0 callback:(id)arg1 withQueue:(unk)arg2  ;
-(void)sendButtonEvent:(struct _MRHIDButtonEvent )arg0 ;
-(void)sendCustomData:(id)arg0 withName:(id)arg1 ;
-(void)setDiscoveryMode:(unsigned int)arg0 forConfiguration:(id)arg1 ;
-(void)setListeningMode:(id)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setOutputDeviceVolume:(float)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
// -(void)setPairingAllowedCallback:(id)arg0 withQueue:(unk)arg1  ;
// -(void)setPairingCallback:(id)arg0 withQueue:(unk)arg1  ;
-(void)setSubscribedPlayerPaths:(id)arg0 ;
-(void)setWantsEndpointChangeNotifications:(BOOL)arg0 ;
-(void)setWantsNowPlayingArtworkNotifications:(BOOL)arg0 ;
-(void)setWantsNowPlayingNotifications:(BOOL)arg0 ;
-(void)setWantsOutputDeviceNotifications:(BOOL)arg0 ;
-(void)setWantsSystemEndpointNotifications:(BOOL)arg0 ;
-(void)setWantsVolumeNotifications:(BOOL)arg0 ;
-(void)unpair;


@end


#endif