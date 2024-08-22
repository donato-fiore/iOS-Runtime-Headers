// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXHASERVER_H
#define AXHASERVER_H

@class HCServer, NSMutableDictionary, NSArray, NSString;
@protocol AXHARemoteUpdateProtocol, AXHAServerDelegate;



@interface AXHAServer : HCServer <AXHARemoteUpdateProtocol>

 {
    NSMutableDictionary *_responseBlocks;
}


@property (retain, nonatomic) NSArray *availableControllers; // ivar: _availableControllers
@property (copy, nonatomic) NSArray *availableHearingAids; // ivar: _availableHearingAids
@property (retain, nonatomic) NSString *connectedDeviceName; // ivar: _connectedDeviceName
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXHAServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hearingAidConnectedOrReachable; // ivar: _hearingAidConnectedOrReachable
@property (readonly, nonatomic) BOOL hearingAidReachable;
@property (nonatomic) BOOL hearingAidReachableForAudioTransfer; // ivar: _hearingAidReachableForAudioTransfer
@property (retain, nonatomic) NSString *hearingDeviceName; // ivar: _hearingDeviceName
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *updates; // ivar: _updates


+(id)sharedInstance;
-(id)init;
-(void)_headphoneLevelDidUpdate:(id)arg0 messageIdentifier:(NSUInteger)arg1 ;
// -(void)_registerListener:(id)arg0 forAvailableDeviceHandler:(id)arg1 beginSearching:(unk)arg2  ;
// -(void)_registerListener:(id)arg0 forLiveHeadphoneLevelHandler:(id)arg1 messageIdentifier:(unk)arg2  ;
-(void)_unregisterLiveHeadphoneLevelHandler:(id)arg0 messageIdentifier:(NSUInteger)arg1 ;
-(void)_unregisterUpdateListenerHash:(id)arg0 ;
-(void)availableDevicesDidUpdate:(id)arg0 ;
-(void)cancelHearingAidConnectionRequest;
-(void)comfortSoundsAssetsDidUpdate:(id)arg0 ;
-(void)connectToControllerWithID:(id)arg0 ;
-(void)controlMessageDidUpdate:(id)arg0 ;
-(void)deviceDidUpdateProperty:(id)arg0 ;
-(void)downloadComfortSoundAsset:(id)arg0 ;
-(void)environmentalDosimetryDidUpdate:(id)arg0 ;
-(void)handleMessageWithPayload:(id)arg0 forIdentifier:(NSUInteger)arg1 ;
-(void)liveListenDidUpdate:(id)arg0 ;
-(void)registerListener:(id)arg0 forAvailableDeviceHandler:(id)arg1 ;
-(void)registerListener:(id)arg0 forComfortSoundsModelUpdatesHandler:(id)arg1 ;
-(void)registerListener:(id)arg0 forControlMessageHandler:(id)arg1 ;
-(void)registerListener:(id)arg0 forLiveDosimetryUpdates:(BOOL)arg1 withDoseHandler:(id)arg2 ;
-(void)registerListener:(id)arg0 forLiveHeadphoneLevelHandler:(id)arg1 ;
-(void)registerListener:(id)arg0 forLiveListenLevelsHandler:(id)arg1 ;
-(void)registerListener:(id)arg0 forPropertyUpdateHandler:(id)arg1 ;
-(void)registerListener:(id)arg0 forRemoteLiveHeadphoneLevelChangesHandler:(id)arg1 ;
-(void)registerListener:(id)arg0 forRemoteLiveHeadphoneLevelHandler:(id)arg1 ;
-(void)registerPassiveListener:(id)arg0 forAvailableDeviceHandler:(id)arg1 ;
// -(void)registerResponseBlock:(id)arg0 forUUID:(unk)arg1  ;
-(void)registerUpdateBlock:(id)arg0 forIdentier:(NSUInteger)arg1 withListener:(id)arg2 ;
-(void)registerUpdateBlock:(id)arg0 forIdentier:(NSUInteger)arg1 withListener:(id)arg2 listenerHash:(id)arg3 ;
-(void)removeComfortSoundAsset:(id)arg0 ;
-(void)requestHearingAidConnectionWithReason:(NSInteger)arg0 ;
-(void)reregisterForComfortSoundsAssetsUpdatesIfNeeded;
-(void)resetConnection;
-(void)shouldRestartOnInterruption:(id)arg0 ;
-(void)startLiveListen;
-(void)startServerWithDelegate:(id)arg0 ;
-(void)stopLiveListen;
-(void)unregisterComfortSoundsModelUpdatesHandler:(id)arg0 ;
-(void)unregisterControlMessageHandler:(id)arg0 ;
-(void)unregisterDoseHandler:(id)arg0 ;
-(void)unregisterLiveHeadphoneLevelHandler:(id)arg0 ;
-(void)unregisterRemoteLiveHeadphoneLevelChangesHandler:(id)arg0 ;
-(void)unregisterRemoteLiveHeadphoneLevelHandler:(id)arg0 ;
-(void)unregisterUpdateListener:(id)arg0 ;
-(void)unregisterUpdateListenerHash:(id)arg0 ;
-(void)updateProperty:(NSUInteger)arg0 forDeviceID:(id)arg1 ;
-(void)writeValue:(id)arg0 forProperty:(NSUInteger)arg1 andDeviceID:(id)arg2 ;


@end


#endif