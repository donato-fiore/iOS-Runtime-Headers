// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRAVENDPOINT_H
#define MRAVENDPOINT_H

@class NSMutableArray, NSOperationQueue, NSTimer, NSHashTable, NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "_MRAVEndpointDescriptorProtobuf.h"
#import "MRAVOutputDevice.h"
#import "MRExternalDevice.h"
#import "MROrigin.h"

@interface MRAVEndpoint : NSObject {
    NSMutableArray *_pendingConnectionHandlers;
    NSOperationQueue *_connectionHandlerOperationQueue;
    BOOL _registeredForConnectionStateDidChangeNotifications;
    NSTimer *_connectionTimeoutTimer;
    BOOL _outputDevicesDidChangeNotificationScheduled;
    NSHashTable *_weakObservers;
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
@property (readonly, nonatomic) NSDictionary *jsonEncodableDictionaryRepresentation;
@property (readonly, nonatomic, getter=isLocalEndpoint) BOOL localEndpoint;
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSUInteger logicalOutputDeviceCount;
@property (readonly, nonatomic) MROrigin *origin;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSArray *personalOutputDevices;
@property (readonly, nonatomic) MRAVOutputDevice *predictedOutputDevice;
@property (readonly, nonatomic, getter=isProxyGroupPlayer) BOOL proxyGroupPlayer;
@property (readonly, nonatomic) NSString *shortDescription;
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)_notificationSerialQueue;
+(void)createEndpointWithOutputDeviceUIDs:(id)arg0 options:(NSUInteger)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)createEndpointWithOutputDeviceUIDs:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
+(void)directEndpointForOutputDeviceUIDs:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
+(void)hostedEndpointForOutputDeviceUIDs:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(BOOL)containsOutputDeviceWithUID:(id)arg0 ;
-(BOOL)effectivelyEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEndpoint:(id)arg0 ;
-(BOOL)isVolumeControlAvailable;
-(BOOL)supportsExternalDiscovery;
-(id)_externalDiscoverySessionDestinationUID;
-(id)_init;
-(id)_initiatorStringWithInitiator:(id)arg0 uid:(id)arg1 ;
-(id)description;
-(id)discoverySessionWithConfiguration:(id)arg0 ;
-(id)outputDeviceForUID:(id)arg0 ;
-(id)outputDeviceUIDsMatchingPredicate:(id)arg0 ;
-(id)outputDeviceWithUID:(id)arg0 ;
-(id)outputDevicesMatchingPredicate:(id)arg0 ;
-(id)translateClusterUIDIfNeeded:(id)arg0 ;
-(void)_adjustOutputDeviceVolume:(NSInteger)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_callAllCompletionHandlersWithError:(id)arg0 ;
-(void)_externalDeviceConnectionStateDidChangeNotification:(id)arg0 ;
-(void)_outputDeviceIsMuted:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_outputDeviceVolume:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_outputDeviceVolumeControlCapabilities:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_prepareToMigrateToEndpoint:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_requestSharedAudioPresentationOutputContextModificationWithAddingDevices:(id)arg0 removingDevices:(id)arg1 settingDevices:(id)arg2 replyQueue:(id)arg3 completion:(id)arg4 ;
-(void)_setOutputDeviceIsMuted:(BOOL)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_setOutputDeviceVolume:(float)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_willStartingPlaybackToOutputDeviceInterruptPlayback:(id)arg0 duration:(CGFloat)arg1 requestID:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)addObserver:(id)arg0 ;
-(void)addOutputDevices:(id)arg0 initiator:(id)arg1 fadeAudio:(BOOL)arg2 withReplyQueue:(id)arg3 completion:(id)arg4 ;
-(void)addOutputDevices:(id)arg0 initiator:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3 ;
-(void)adjustOutputDeviceVolume:(NSInteger)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)adjustVolume:(NSInteger)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)canMigrateToEndpoint:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)connectToExternalDeviceWithOptions:(unsigned int)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)connectToExternalDeviceWithUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)createHostedEndpointWithOutputDeviceUIDs:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)isMutedOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)migrateToEndpoint:(id)arg0 request:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)migrateToOrAddOutputDevices:(id)arg0 initiator:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3 ;
-(void)migrateToOrSetOutputDevices:(id)arg0 initiator:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3 ;
-(void)migrateToOutputDevice:(id)arg0 request:(id)arg1 initiator:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)migrateToOutputDevices:(id)arg0 request:(id)arg1 initiator:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)outputDeviceIsMuted:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)outputDeviceVolume:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)outputDeviceVolumeControlCapabilities:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)performMigrationToEndpoint:(id)arg0 request:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)performMigrationToOutputDevices:(id)arg0 request:(id)arg1 initiator:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeOutputDeviceFromParentGroup:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)removeOutputDevices:(id)arg0 initiator:(id)arg1 fadeAudio:(BOOL)arg2 withReplyQueue:(id)arg3 completion:(id)arg4 ;
-(void)removeOutputDevices:(id)arg0 initiator:(id)arg1 withReplyQueue:(id)arg2 completion:(id)arg3 ;
-(void)scheduleEndpointOutputDevicesDidChangeNotification;
-(void)setAllowsHeadTrackedSpatialAudio:(BOOL)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setHeadTrackedSpatialAudioMode:(id)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setIsMuted:(BOOL)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)setListeningMode:(id)arg0 outputDeviceUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setOutputDeviceIsMuted:(BOOL)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setOutputDeviceVolume:(float)arg0 outputDevice:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)setVolume:(float)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)volumeControlCapabilitiesOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)volumeOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)willStartingPlaybackToOutputDeviceInterruptPlayback:(id)arg0 duration:(CGFloat)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)willStartingPlaybackToOutputDevicesInterruptPlayback:(id)arg0 originatingOutputDeviceUID:(id)arg1 duration:(CGFloat)arg2 queue:(id)arg3 completion:(id)arg4 ;


@end


#endif