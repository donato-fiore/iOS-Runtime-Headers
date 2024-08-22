// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRAVCONCRETEOUTPUTDEVICE_H
#define MRAVCONCRETEOUTPUTDEVICE_H

@class AVOutputDevice, NSString, NSData, NSDictionary, NINearbyObject, NSArray;
@protocol OS_dispatch_queue;


#import "MRAVOutputDevice.h"
#import "MRAVOutputDeviceSourceInfo.h"

@interface MRAVConcreteOutputDevice : MRAVOutputDevice {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    AVOutputDevice *_avOutputDevice;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSString *_uid;
    BOOL _overrideUID;
    NSString *_modelID;
    NSString *_firmwareVersion;
    NSString *_logicalDeviceID;
    NSString *_airPlayGroupID;
    BOOL _overrideGroupID;
    NSData *_MACAddress;
    NSDictionary *_modelSpecificInfo;
    NSString *_playingPairedDeviceName;
    NINearbyObject *_nearbyObject;
    NSArray *_clusterMembers;
}


@property (retain, nonatomic, setter=setAVOutputDevice:) AVOutputDevice *avOutputDevice;
@property (retain, nonatomic) MRAVOutputDeviceSourceInfo *sourceInfo;


-(BOOL)allowsHeadTrackedSpatialAudio;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)containsUID:(id)arg0 ;
-(BOOL)discoveredOnSameInfra;
-(BOOL)groupContainsGroupLeader;
-(BOOL)hasBatteryLevel;
-(BOOL)isAddedToHomeKit;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)isAppleAccessory;
-(BOOL)isClusterLeader;
-(BOOL)isDeviceGroupable;
-(BOOL)isGroupLeader;
-(BOOL)isGroupable;
-(BOOL)isHeadTrackedSpatialAudioActive;
-(BOOL)isLocalDevice;
-(BOOL)isPickedOnPairedDevice;
-(BOOL)isProxyGroupPlayer;
-(BOOL)isRemoteControllable;
-(BOOL)isVolumeControlAvailable;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)producesLowFidelityAudio;
-(BOOL)requiresAuthorization;
-(BOOL)setAllowsHeadTrackedSpatialAudio:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setCurrentBluetoothListeningMode:(id)arg0 error:(*id)arg1 ;
-(BOOL)setHeadTrackedSpatialAudioMode:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsBluetoothSharing;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)supportsExternalScreen;
-(BOOL)supportsHAP;
-(BOOL)supportsHeadTrackedSpatialAudio;
-(BOOL)supportsMultiplayer;
-(BOOL)supportsRapport;
-(BOOL)supportsRapportRemoteControlTransport;
-(BOOL)supportsSharePlayHandoff;
-(NSInteger)transportType;
-(NSUInteger)configuredClusterSize;
-(float)batteryLevel;
-(float)distance;
-(float)volume;
-(id)MACAddress;
-(id)airPlayGroupID;
-(id)availableBluetoothListeningModes;
-(id)bluetoothID;
-(id)clusterComposition;
-(id)clusterID;
-(id)clusterMembers;
-(id)currentBluetoothListeningMode;
-(id)dnsNames;
-(id)firmwareVersion;
-(id)headTrackedSpatialAudioMode;
-(id)initWithAVOutputDevice:(id)arg0 sourceInfo:(id)arg1 ;
-(id)logicalDeviceID;
-(id)modelID;
-(id)modelSpecificInfo;
-(id)name;
-(id)parentGroupIdentifier;
-(id)playingPairedDeviceName;
-(id)uid;
-(unsigned int)clusterType;
-(unsigned int)deviceSubtype;
-(unsigned int)deviceType;
-(unsigned int)volumeCapabilities;
-(void)adjustVolume:(NSInteger)arg0 ;
-(void)setAirPlayGroupID:(id)arg0 ;
-(void)setVolume:(float)arg0 ;


@end


#endif