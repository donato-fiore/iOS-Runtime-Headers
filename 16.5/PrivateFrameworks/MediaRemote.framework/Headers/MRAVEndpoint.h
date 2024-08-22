// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAVENDPOINT_H
#define MRAVENDPOINT_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "MROutputContextDataSource.h"
#import "_MRAVEndpointDescriptorProtobuf.h"
#import "MRAVOutputDevice.h"
#import "MRExternalDevice.h"
#import "MROrigin.h"

@interface MRAVEndpoint : NSObject {
    BOOL _outputDevicesDidChangeNotificationScheduled;
    MROutputContextDataSource *_outputContextDataSource;
}


@property (readonly, nonatomic) BOOL canModifyGroupMembership;
@property (readonly, nonatomic, getter=isCompanionEndpoint) BOOL companionEndpoint;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) NSInteger connectionType; // ivar: _connectionType
@property (readonly, nonatomic) NSString *debugName;
@property (readonly, nonatomic) _MRAVEndpointDescriptorProtobuf *descriptor;
@property (readonly, nonatomic) MRAVOutputDevice *designatedGroupLeader;
@property (retain, nonatomic) MRExternalDevice *externalDevice;
@property (readonly, nonatomic) MRAVOutputDevice *groupLeader;
@property (readonly, nonatomic, getter=isGroupable) BOOL groupable;
@property (readonly, nonatomic) NSDictionary *jsonEncodableDictionaryRepresentation;
@property (readonly, nonatomic, getter=isLocalEndpoint) BOOL localEndpoint;
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSUInteger logicalOutputDeviceCount;
@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) MROrigin *origin;
@property (retain, nonatomic) MROutputContextDataSource *outputContextDataSource;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSArray *personalOutputDevices;
@property (readonly, nonatomic) MRAVOutputDevice *predictedOutputDevice;
@property (readonly, nonatomic, getter=isProxyGroupPlayer) BOOL proxyGroupPlayer;
@property (readonly, nonatomic) NSArray *resolvedOutputDevices;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSArray *syncedOutputDevices;
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) unsigned int volumeCapabilities;


+(id)_userInfoFromEndpoint:(id)arg0 outputDevice:(id)arg1 ;
+(void)_notifyDidAddOutputDevice:(id)arg0 endpoint:(id)arg1 ;
+(void)_notifyDidChangeOutputDevice:(id)arg0 endpoint:(id)arg1 ;
+(void)_notifyDidChangePredictedOutputDevice:(id)arg0 endpoint:(id)arg1 ;
+(void)_notifyDidRemoveOutputDevice:(id)arg0 endpoint:(id)arg1 ;
+(void)_notifyEndpointDidConnect:(id)arg0 ;
+(void)_notifyEndpointDidDisconnect:(id)arg0 withError:(id)arg1 ;
+(void)_notifyVolumeCapabilitiesDidChange:(unsigned int)arg0 outputDevice:(id)arg1 endpoint:(id)arg2 ;
+(void)_notifyVolumeDidChange:(float)arg0 outputDevice:(id)arg1 endpoint:(id)arg2 ;
+(void)createEndpointWithOutputDeviceUIDs:(id)arg0 options:(NSUInteger)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)createEndpointWithOutputDeviceUIDs:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
+(void)directEndpointForOutputDeviceUIDs:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
+(void)hostedEndpointForOutputDeviceUIDs:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(BOOL)containsOutputDeviceWithUID:(id)arg0 ;
-(BOOL)effectivelyEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEndpoint:(id)arg0 ;
-(id)_externalOutputContext;
-(id)_init;
-(id)debugDescription;
-(id)description;
-(id)discoverySessionWithConfiguration:(id)arg0 ;
-(id)outputDeviceForUID:(id)arg0 ;
-(id)outputDeviceUIDsMatchingPredicate:(id)arg0 ;
-(id)outputDeviceWithUID:(id)arg0 ;
-(id)outputDevicesMatchingPredicate:(id)arg0 ;
-(void)_adjustOutputDeviceVolume:(NSInteger)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_setOutputDeviceIsMuted:(BOOL)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_setOutputDeviceVolume:(float)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)addOutputDevices:(id)arg0 initiator:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3 ;
-(void)adjustOutputDeviceVolume:(NSInteger)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)adjustVolume:(NSInteger)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)canMigrateToEndpoint:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)connectToExternalDeviceWithOptions:(unsigned int)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)connectToExternalDeviceWithUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)createHostedEndpointWithOutputDeviceUIDs:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)isMutedOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)migrateToEndpoint:(id)arg0 request:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)migrateToOrAddOutputDevices:(id)arg0 initiator:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3 ;
-(void)migrateToOrSetOutputDevices:(id)arg0 initiator:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3 ;
-(void)migrateToOutputDevice:(id)arg0 request:(id)arg1 initiator:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)migrateToOutputDevices:(id)arg0 request:(id)arg1 initiator:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)outputContextDataSourceDidAddOutputDevice:(id)arg0 ;
-(void)outputContextDataSourceDidChangeOutputDevice:(id)arg0 ;
-(void)outputContextDataSourceDidRemoveOutputDevice:(id)arg0 ;
-(void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)arg0 ;
-(void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)arg0 ;
-(void)outputContextDidChangePredictedOutputDevice:(id)arg0 ;
-(void)outputDeviceIsMuted:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)outputDeviceVolume:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)outputDeviceVolumeControlCapabilities:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)performMigrationToEndpoint:(id)arg0 request:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)performMigrationToOutputDevices:(id)arg0 request:(id)arg1 initiator:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)removeOutputDeviceFromParentGroup:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)removeOutputDevices:(id)arg0 initiator:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3 ;
-(void)scheduleEndpointOutputDevicesDidChangeNotification;
-(void)setAllowsHeadTrackedSpatialAudio:(BOOL)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setHeadTrackedSpatialAudioMode:(id)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setIsMuted:(BOOL)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)setListeningMode:(id)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setOutputDeviceIsMuted:(BOOL)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setOutputDeviceVolume:(float)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)volumeControlCapabilitiesOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)volumeOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)willStartingPlaybackToOutputDeviceInterruptPlayback:(id)arg0 duration:(CGFloat)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)willStartingPlaybackToOutputDevicesInterruptPlayback:(id)arg0 originatingOutputDeviceUID:(id)arg1 duration:(CGFloat)arg2 queue:(id)arg3 completion:(id)arg4 ;


@end


#endif