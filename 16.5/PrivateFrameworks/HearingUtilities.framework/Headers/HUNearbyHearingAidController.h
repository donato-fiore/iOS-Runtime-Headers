// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNEARBYHEARINGAIDCONTROLLER_H
#define HUNEARBYHEARINGAIDCONTROLLER_H

@class AXDispatchTimer;
@protocol HUNearbyHearingAidControllerDelegate, OS_dispatch_queue;


#import "HUDeviceController.h"
#import "AXRemoteHearingAidDevice.h"

@interface HUNearbyHearingAidController : HUDeviceController

@property (weak, nonatomic) NSObject<HUNearbyHearingAidControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL holdingMediaForConnection; // ivar: _holdingMediaForConnection
@property (nonatomic) BOOL holdingPhoneForConnection; // ivar: _holdingPhoneForConnection
@property (retain, nonatomic) AXRemoteHearingAidDevice *localDevice; // ivar: _localDevice
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaQueue; // ivar: _mediaQueue
@property (retain, nonatomic) AXDispatchTimer *sendConnectionToCompanionTimer; // ivar: _sendConnectionToCompanionTimer
@property (nonatomic) NSInteger state; // ivar: _state


+(id)sharedInstance;
-(BOOL)hasConnectionToHearingDevice;
-(BOOL)representsLocalDevices;
-(BOOL)shouldRelinquishConnectionForReason:(NSInteger)arg0 ;
-(id)availableDevices;
-(id)connectedPeer;
-(id)device:(id)arg0 didReceiveMessage:(id)arg1 ;
-(id)hearingAidForDeviceID:(id)arg0 ;
-(id)hearingDevice;
-(id)init;
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