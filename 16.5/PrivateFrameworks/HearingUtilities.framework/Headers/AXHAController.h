// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXHACONTROLLER_H
#define AXHACONTROLLER_H

@class AXDispatchTimer, NSDictionary, NSString, HCXPCMessage;
@protocol HUNearbyHearingAidControllerDelegate, AXHALiveListenDelegate, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface AXHAController : NSObject <HUNearbyHearingAidControllerDelegate, AXHALiveListenDelegate>

 {
    BOOL _isListening;
    AXDispatchTimer *_liveListenLevelsTimer;
}


@property (retain, nonatomic) NSDictionary *availableDevicesDescription; // ivar: _availableDevicesDescription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HCXPCMessage *liveListenMessage; // ivar: _liveListenMessage
@property (retain, nonatomic) NSString *pairedDeviceUUID; // ivar: _pairedDeviceUUID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


+(id)sharedController;
-(BOOL)hearingAidsPaired;
-(id)connectToControllerWithID:(id)arg0 ;
-(id)currentDeviceController;
-(id)disconnectAndForceClient:(id)arg0 ;
-(id)init;
-(id)liveListenController;
-(id)readAvailableControllers:(id)arg0 ;
-(id)readAvailableDevices:(id)arg0 ;
-(id)readDeviceProperty:(id)arg0 ;
-(id)registerForAvailableDevicesUpdates:(id)arg0 ;
-(id)registerForControlMessageUpdates:(id)arg0 ;
-(id)registerForDeviceUpdates:(id)arg0 ;
-(id)registerForLiveListenUpdates:(id)arg0 ;
-(id)toggleLiveListen:(id)arg0 ;
-(id)writeDeviceProperty:(id)arg0 ;
-(void)availableRemoteControllersDidChange;
-(void)connectToPairedDevice;
-(void)dealloc;
-(void)liveListenControllerStateDidChange;
-(void)readLiveListenLevels;
-(void)sendUpdatesForProperties:(id)arg0 excludingClient:(id)arg1 ;
-(void)setListenForAvailableDeviceUpdates:(BOOL)arg0 ;
-(void)setPairedHearingAid:(id)arg0 ;
-(void)transitionToPeer;
-(void)updateNearbyDeviceAvailability;
-(void)willSwitchUser;


@end


#endif