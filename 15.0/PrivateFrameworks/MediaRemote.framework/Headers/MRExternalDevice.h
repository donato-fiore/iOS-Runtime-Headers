// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MREXTERNALDEVICE_H
#define MREXTERNALDEVICE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "MROrigin.h"
#import "MRDeviceInfo.h"
#import "MRSupportedProtocolMessages.h"

@interface MRExternalDevice : NSObject

@property (nonatomic) NSInteger connectionRecoveryBehavior; // ivar: _connectionRecoveryBehavior
@property (readonly, nonatomic) unsigned int connectionState; // ivar: _connectionState
@property (readonly, nonatomic) MROrigin *customOrigin;
@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) NSString *hostName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) NSArray *personalOutputDevices; // ivar: _personalOutputDevices
@property (readonly, nonatomic) NSInteger port;
@property (copy, nonatomic) NSArray *subscribedPlayerPaths;
@property (readonly, nonatomic) MRSupportedProtocolMessages *supportedMessages;
@property (readonly, nonatomic) NSString *uid;
@property (nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing; // ivar: _usingSystemPairing
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid
@property (nonatomic) BOOL wantsEndpointChangeNotifications; // ivar: _wantsEndpointChangeNotifications
@property (nonatomic) BOOL wantsNowPlayingArtworkNotifications;
@property (nonatomic) BOOL wantsNowPlayingNotifications;
@property (nonatomic) BOOL wantsOutputDeviceNotifications;
@property (nonatomic) BOOL wantsSystemEndpointNotifications;
@property (nonatomic) BOOL wantsVolumeNotifications;


-(id)_init;
-(id)currentClientUpdatesConfigMessage;
-(id)errorForCurrentState;
-(void)connectWithOptions:(unsigned int)arg0 ;
-(void)connectWithOptions:(unsigned int)arg0 clientBundleIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)connectWithOptions:(unsigned int)arg0 userInfo:(id)arg1 ;
-(void)disconnect:(id)arg0 ;
-(void)modifyByAddingDeviceUIDs:(id)arg0 removingDeviceUIDs:(id)arg1 settingDeviceUIDs:(id)arg2 addingClusterAwareDeviceUIDs:(id)arg3 removingClusterAwareDeviceUIDs:(id)arg4 settingClusterAwareDeviceUIDs:(id)arg5 withReplyQueue:(id)arg6 completion:(id)arg7 ;
-(void)outputDeviceVolume:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)outputDeviceVolumeControlCapabilities:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
// -(void)ping:(CGFloat)arg0 callback:(id)arg1 withQueue:(unk)arg2  ;
-(void)removeFromParentGroup:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)sendButtonEvent:(struct _MRHIDButtonEvent )arg0 ;
-(void)sendClientUpdatesConfigMessage;
-(void)sendCustomData:(id)arg0 withName:(id)arg1 ;
// -(void)setCustomDataCallback:(id)arg0 withQueue:(unk)arg1  ;
-(void)setDiscoveryMode:(unsigned int)arg0 forConfiguration:(id)arg1 ;
-(void)setDiscoveryOutputDevicesChangedCallback:(id)arg0 ;
-(void)setListeningMode:(id)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setOutputDeviceVolume:(float)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
// -(void)setOutputDevicesRemovedCallback:(id)arg0 withQueue:(unk)arg1  ;
// -(void)setOutputDevicesUpdatedCallback:(id)arg0 withQueue:(unk)arg1  ;
// -(void)setPairingAllowedCallback:(id)arg0 withQueue:(unk)arg1  ;
// -(void)setPairingCallback:(id)arg0 withQueue:(unk)arg1  ;
// -(void)setVolumeCallback:(id)arg0 withQueue:(unk)arg1  ;
// -(void)setVolumeChangedCallback:(id)arg0 withQueue:(unk)arg1  ;
// -(void)setVolumeControlCapabilitiesCallback:(id)arg0 withQueue:(unk)arg1  ;
-(void)unpair;


@end


#endif