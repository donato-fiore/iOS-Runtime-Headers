// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVOUTPUTDEVICE_H
#define AVOUTPUTDEVICE_H


#import <Foundation/Foundation.h>

#import "AVOutputDeviceInternal.h"

@interface AVOutputDevice : NSObject {
    AVOutputDeviceInternal *_outputDevice;
}




+(BOOL)canSyncController:(struct OpaqueAPSyncController *)arg0 supportRoute:(struct __CFDictionary *)arg1 ;
+(BOOL)prefersRouteDescriptors;
+(id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint *)arg0 ;
+(id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint *)arg0 routingContextFactory:(id)arg1 ;
+(id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint *)arg0 volumeController:(struct OpaqueFigVolumeControllerState *)arg1 ;
+(id)outputDeviceWithRouteDescriptor:(struct __CFDictionary *)arg0 ;
+(id)outputDeviceWithRouteDescriptor:(struct __CFDictionary *)arg0 routeDiscoverer:(struct OpaqueFigRouteDiscoverer *)arg1 ;
+(id)outputDeviceWithRouteDescriptor:(struct __CFDictionary *)arg0 routeDiscoverer:(struct OpaqueFigRouteDiscoverer *)arg1 syncController:(struct OpaqueAPSyncController *)arg2 ;
+(id)outputDeviceWithRouteDescriptor:(struct __CFDictionary *)arg0 routingContextFactory:(id)arg1 ;
+(id)outputDeviceWithRouteDescriptor:(struct __CFDictionary *)arg0 syncController:(struct OpaqueAPSyncController *)arg1 ;
+(id)outputDeviceWithRouteDescriptor:(struct __CFDictionary *)arg0 volumeController:(struct OpaqueFigVolumeControllerState *)arg1 ;
+(id)sharedLocalDevice;
+(void)initialize;
+(void)localDeviceDidChange;
+(void)localDeviceWithCompletion:(id)arg0 ;
-(BOOL)allowsHeadTrackedSpatialAudio;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)canBeGroupLeader;
-(BOOL)canBeGrouped;
-(BOOL)canCommunicateWithAllLogicalDeviceMembers;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)canSetVolume;
-(BOOL)groupContainsGroupLeader;
-(BOOL)hasBatteryLevel;
-(BOOL)isAppleAccessory;
-(BOOL)isClusterLeader;
-(BOOL)isEligibleToBePredictedOutputDevice;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGroupLeader;
-(BOOL)isHeadTrackedSpatialAudioActive;
-(BOOL)isInUseByPairedDevice;
-(BOOL)isLogicalDeviceLeader;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)participatesInGroupPlayback;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)producesLowFidelityAudio;
-(BOOL)requiresAuthorization;
-(BOOL)setAllowsHeadTrackedSpatialAudio:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setCurrentBluetoothListeningMode:(id)arg0 error:(*id)arg1 ;
-(BOOL)setHeadTrackedSpatialAudioMode:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsBluetoothSharing;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)supportsFitnessDataDestination;
-(BOOL)supportsHeadTrackedSpatialAudio;
-(CGFloat)frecencyScore;
-(NSInteger)HAPConformance;
-(NSInteger)clusterType;
-(NSInteger)configuredClusterSize;
-(NSInteger)deviceSubType;
-(NSInteger)deviceType;
-(NSInteger)volumeControlType;
-(NSUInteger)deviceFeatures;
-(NSUInteger)hash;
-(float)batteryLevel;
-(float)volume;
-(id)ID;
-(id)airPlayProperties;
-(id)availableBluetoothListeningModes;
-(id)clusterID;
-(id)clusteredDeviceDescriptions;
-(id)communicationChannelDelegate;
-(id)connectedPairedDevices;
-(id)currentBluetoothListeningMode;
-(id)description;
-(id)deviceID;
-(id)deviceName;
-(id)figEndpointOutputDeviceImpl;
-(id)firmwareVersion;
-(id)groupID;
-(id)headTrackedSpatialAudioMode;
-(id)identifyingMACAddress;
-(id)impl;
-(id)init;
-(id)initWithOutputDeviceImpl:(id)arg0 commChannelManager:(id)arg1 ;
-(id)logicalDeviceID;
-(id)manufacturer;
-(id)modelID;
-(id)modelSpecificInformation;
-(id)name;
-(id)proposedGroupID;
-(id)serialNumber;
-(void)communicationChannelManager:(id)arg0 didCloseCommunicationChannel:(id)arg1 ;
-(void)communicationChannelManager:(id)arg0 didReceiveData:(id)arg1 fromCommunicationChannel:(id)arg2 ;
// -(void)configureUsingBlock:(id)arg0 completionHandler:(unk)arg1  ;
// -(void)configureUsingBlock:(id)arg0 options:(unk)arg1 completionHandler:(id)arg2  ;
-(void)dealloc;
-(void)decreaseVolumeByCount:(NSInteger)arg0 ;
-(void)increaseVolumeByCount:(NSInteger)arg0 ;
-(void)openCommunicationChannelToDestination:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)openCommunicationChannelWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)outputDeviceImplDidChangeCanChangeVolume:(id)arg0 ;
-(void)outputDeviceImplDidChangeProposedGroupID:(id)arg0 ;
-(void)outputDeviceImplDidChangeVolume:(id)arg0 ;
-(void)outputDeviceImplDidChangeVolumeControlType:(id)arg0 ;
-(void)setCommunicationChannelDelegate:(id)arg0 ;
-(void)setCurrentBluetoothListeningMode:(id)arg0 ;
-(void)setSecondDisplayEnabled:(BOOL)arg0 ;
-(void)setSecondDisplayMode:(id)arg0 completionHandler:(id)arg1 ;
-(void)setVolume:(float)arg0 ;
-(void)updateFrecencyScore;


@end


#endif