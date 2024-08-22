// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUNEARBYCONTROLLER_H
#define HUNEARBYCONTROLLER_H

@class NSArray, RPCompanionLinkClient, NSString, SFDeviceDiscovery, AXDispatchTimer, IDSService;
@protocol IDSServiceDelegate, HUNearbyDeviceDelegate, HUNearbyControllerDelegate, OS_dispatch_queue;


#import "HUDeviceController.h"
#import "AXRemoteHearingAidDevice.h"

@interface HUNearbyController : HUDeviceController <IDSServiceDelegate, HUNearbyDeviceDelegate>



@property (copy, nonatomic) NSArray *availableDevices; // ivar: _availableDevices
@property (retain, nonatomic) RPCompanionLinkClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUNearbyControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SFDeviceDiscovery *deviceDiscovery; // ivar: _deviceDiscovery
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL holdingMediaForConnection; // ivar: _holdingMediaForConnection
@property (nonatomic) BOOL holdingPhoneForConnection; // ivar: _holdingPhoneForConnection
@property (retain, nonatomic) AXRemoteHearingAidDevice *localDevice; // ivar: _localDevice
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaQueue; // ivar: _mediaQueue
@property (nonatomic, getter=isSearching) BOOL searching; // ivar: _searching
@property (retain, nonatomic) AXDispatchTimer *sendConnectionToCompanionTimer; // ivar: _sendConnectionToCompanionTimer
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)hasConnectionToHearingDevice;
-(BOOL)representsLocalDevices;
-(BOOL)shouldRelinquishConnectionForReason:(NSInteger)arg0 ;
-(NSUInteger)currentConnectionStatus;
-(id)addDeviceWithIdentifier:(id)arg0 ;
-(id)connectedPeer;
-(id)deviceWithIdentifier:(id)arg0 didReceiveMessage:(id)arg1 ;
-(id)hearingAidForDeviceID:(id)arg0 ;
-(id)hearingDevice;
-(id)init;
-(id)nearbyDeviceWithIdentifier:(id)arg0 ;
-(id)nearbyDeviceWithPeerDevice:(id)arg0 ;
-(void)callStatusDidChange:(id)arg0 ;
-(void)checkConnectionPeers:(id)arg0 ;
-(void)checkConnectionToHearingDevice:(id)arg0 ;
-(void)checkPairedPeerExists:(id)arg0 ;
-(void)getConnectedPeer:(id)arg0 ;
-(void)mediaPlaybackDidChange:(id)arg0 ;
-(void)mediaServerDied;
-(void)registerMediaNotifications;
-(void)relinquishConnectionForReason:(NSInteger)arg0 ;
-(void)requestConnectionForReason:(NSInteger)arg0 ;
-(void)requestHandoffForMedia;
-(void)routesDidChange:(id)arg0 ;
-(void)sendConnectionToCompanionIfPossible;
-(void)sendConnectionToCompanionIfPossible:(BOOL)arg0 ;
-(void)sendConnectionUpdateToPeers;
-(void)sendMessage:(id)arg0 toDevices:(id)arg1 ;
-(void)sendMessageToAllDevices:(id)arg0 ;
-(void)sendWrite:(id)arg0 toDevices:(id)arg1 ;
-(void)sendWriteToAllDevices:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)service:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)shouldRequestAudioConnectionForCall:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)unregisterMediaNotifications;
-(void)updateProperty:(NSUInteger)arg0 forDeviceID:(id)arg1 ;
-(void)updateState;
-(void)updateStateOnDeviceQueue;
-(void)writeValue:(id)arg0 forProperty:(NSUInteger)arg1 andDeviceID:(id)arg2 ;
-(void)writeValue:(id)arg0 forProperty:(NSUInteger)arg1 andDeviceID:(id)arg2 toDevices:(id)arg3 ;


@end


#endif