// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRAVVIRTUALOUTPUTDEVICE_H
#define MRAVVIRTUALOUTPUTDEVICE_H

@class NSString, NSData, NSDictionary, NSArray, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;


#import "MRAVOutputDevice.h"

@interface MRAVVirtualOutputDevice : MRAVOutputDevice {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSString *_uid;
    NSString *_modelID;
    NSString *_firmwareVersion;
    NSString *_logicalDeviceID;
    NSString *_groupID;
    NSData *_MACAddress;
    NSDictionary *_modelSpecificInfo;
    NSString *_playingPairedDeviceName;
    NSString *_name;
    BOOL _canAccessRemoteAssets;
    BOOL _canAccessAppleMusic;
    BOOL _canAccessiCloudMusicLibrary;
    BOOL _canPlayEncryptedProgressiveDownloadAssets;
    BOOL _canFetchMediaDataFromSender;
    BOOL _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
    BOOL _isRemoteControllable;
    BOOL _canRelayCommunicationChannel;
    BOOL _supportsBufferedAirPlay;
    BOOL _supportsRapport;
    BOOL _isAddedToHomeKit;
    BOOL _isGroupLeader;
    BOOL _groupContainsGroupLeader;
    BOOL _airPlayReceiver;
    NSString *_parentGroupIdentifier;
    BOOL _isGroupable;
    BOOL _supportsBluetoothSharing;
    BOOL _isProxyGroupPlayer;
    BOOL _isPickedOnPairedDevice;
    float _batteryLevel;
    BOOL _hasBatteryLevel;
    BOOL _isLocalDevice;
    BOOL _supportsExternalScreen;
    unsigned int _deviceType;
    unsigned int _deviceSubType;
    BOOL _requiresAuthorization;
    BOOL _isVolumeControlAvailable;
    float _volume;
    NSString *_bluetoothID;
    BOOL _isUsingJSONProtocol;
    NSString *_currentBluetoothListeningMode;
    NSArray *_availableBluetoothListeningModes;
}


@property (readonly, nonatomic) NSData *jsonDeviceDefinition; // ivar: _jsonDeviceDefinition
@property (readonly, nonatomic) NSXPCListenerEndpoint *pipeEndpoint; // ivar: _pipeEndpoint


-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)groupContainsGroupLeader;
-(BOOL)hasBatteryLevel;
-(BOOL)isAddedToHomeKit;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)isDeviceGroupable;
-(BOOL)isGroupLeader;
-(BOOL)isGroupable;
-(BOOL)isLocalDevice;
-(BOOL)isPickedOnPairedDevice;
-(BOOL)isProxyGroupPlayer;
-(BOOL)isRemoteControllable;
-(BOOL)isUsingJSONProtocol;
-(BOOL)isVolumeControlAvailable;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)requiresAuthorization;
-(BOOL)supportsBluetoothSharing;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)supportsExternalScreen;
-(BOOL)supportsRapport;
-(float)batteryLevel;
-(float)volume;
-(id)MACAddress;
-(id)availableBluetoothListeningModes;
-(id)bluetoothID;
-(id)currentBluetoothListeningMode;
-(id)firmwareVersion;
-(id)groupID;
-(id)initWithJSONData:(id)arg0 pipeEndpoint:(id)arg1 ;
-(id)logicalDeviceID;
-(id)modelID;
-(id)modelSpecificInfo;
-(id)name;
-(id)parentGroupIdentifier;
-(id)playingPairedDeviceName;
-(id)sourceInfo;
-(id)uid;
-(unsigned int)deviceSubtype;
-(unsigned int)deviceType;
-(void)setVolume:(float)arg0 ;


@end


#endif