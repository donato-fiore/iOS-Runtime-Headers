// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSINTERDEVICECOMMUNICATOR_H
#define AXSSINTERDEVICECOMMUNICATOR_H

@class MCNearbyServiceAdvertiser, NSMutableArray, MCNearbyServiceBrowser, NSString, NSMutableDictionary, NSTimer, MCPeerID, NSArray, IDSService, MCSession;
@protocol IDSServiceDelegate, MCSessionDelegate, MCNearbyServiceBrowserDelegate, MCNearbyServiceAdvertiserDelegate, AXSSInterDeviceActionReceiver, AXSSInterDeviceConnectionListener, AXSSInterDeviceSearchObserver;

#import <Foundation/Foundation.h>

#import "AXSSInterDeviceSecurityHelper.h"

@interface AXSSInterDeviceCommunicator : NSObject <IDSServiceDelegate, MCSessionDelegate, MCNearbyServiceBrowserDelegate, MCNearbyServiceAdvertiserDelegate>



@property (weak, nonatomic) NSObject<AXSSInterDeviceActionReceiver> *actionReceiver; // ivar: _actionReceiver
@property (retain, nonatomic) MCNearbyServiceAdvertiser *advertiser; // ivar: _advertiser
@property (retain, nonatomic) NSMutableArray *availableDevices; // ivar: _availableDevices
@property (retain, nonatomic) MCNearbyServiceBrowser *browser; // ivar: _browser
@property (readonly, nonatomic) BOOL canSearch;
@property (weak, nonatomic) NSObject<AXSSInterDeviceConnectionListener> *connectionListener; // ivar: _connectionListener
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *deviceTypesByPeerID; // ivar: _deviceTypesByPeerID
@property (retain, nonatomic) NSTimer *dummyPacketTimer; // ivar: _dummyPacketTimer
@property (retain, nonatomic) MCPeerID *forwarder; // ivar: _forwarder
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isForwardingSwitchEvents;
@property (readonly, nonatomic) BOOL isIdle;
@property (readonly, nonatomic) BOOL isReceivingSwitchEvents;
@property (readonly, nonatomic) BOOL isSearching;
@property (readonly, nonatomic) MCPeerID *localPeerID; // ivar: _localPeerID
@property (nonatomic) NSUInteger numberOfBurstPacketsRemaining; // ivar: _numberOfBurstPacketsRemaining
@property (retain, nonatomic) MCPeerID *receiver; // ivar: _receiver
@property (weak, nonatomic) NSObject<AXSSInterDeviceSearchObserver> *searchObserver; // ivar: _searchObserver
@property (readonly, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) AXSSInterDeviceSecurityHelper *securityHelper; // ivar: _securityHelper
@property (readonly, nonatomic) IDSService *service; // ivar: _service
@property (retain, nonatomic) MCSession *session; // ivar: _session
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger switchEventIndex; // ivar: _switchEventIndex


-(BOOL)_setUpSessionIfNecessary;
-(id)_messageForSelection:(BOOL)arg0 settings:(id)arg1 ;
-(id)_messageForSwitchEvent:(id)arg0 index:(NSUInteger)arg1 ;
-(id)_stringForState:(NSInteger)arg0 ;
-(id)init;
-(void)_advertise;
-(void)_broadcastICloudMessage:(id)arg0 ;
-(void)_cancelAdvertising;
-(void)_handleHighlightMessage;
-(void)_handlePerformSysdiagnoseMessage;
-(void)_handleSelectionMessageWithPayload:(id)arg0 ;
-(void)_handleSwitchEventMessageWithPayload:(id)arg0 fromPeer:(id)arg1 ;
-(void)_handleTimeoutAsPotentialReceiver;
-(void)_removePeerFromAvailableDevices:(id)arg0 ;
-(void)_sendDataToReceiver:(id)arg0 ;
-(void)_sendDummyPacket;
-(void)_tearDownAdvertiser;
-(void)_tearDownBrowser;
-(void)_tearDownConnectivity;
-(void)_tearDownSession;
-(void)advertiser:(id)arg0 didNotStartAdvertisingPeer:(id)arg1 ;
-(void)advertiser:(id)arg0 didReceiveInvitationFromPeer:(id)arg1 withContext:(id)arg2 invitationHandler:(id)arg3 ;
-(void)browser:(id)arg0 didNotStartBrowsingForPeers:(id)arg1 ;
-(void)browser:(id)arg0 foundPeer:(id)arg1 withDiscoveryInfo:(id)arg2 ;
-(void)browser:(id)arg0 lostPeer:(id)arg1 ;
-(void)dealloc;
-(void)forwardSwitchEvent:(id)arg0 ;
-(void)highlightSearchResult:(id)arg0 ;
-(void)performSysdiagnoseOnReceiver;
-(void)search;
-(void)selectSearchResult:(id)arg0 settings:(id)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)session:(id)arg0 didFinishReceivingResourceWithName:(id)arg1 fromPeer:(id)arg2 atURL:(id)arg3 withError:(id)arg4 ;
-(void)session:(id)arg0 didReceiveCertificate:(id)arg1 fromPeer:(id)arg2 certificateHandler:(id)arg3 ;
-(void)session:(id)arg0 didReceiveData:(id)arg1 fromPeer:(id)arg2 ;
-(void)session:(id)arg0 didReceiveStream:(id)arg1 withName:(id)arg2 fromPeer:(id)arg3 ;
-(void)session:(id)arg0 didStartReceivingResourceWithName:(id)arg1 fromPeer:(id)arg2 withProgress:(id)arg3 ;
-(void)session:(id)arg0 peer:(id)arg1 didChangeState:(NSInteger)arg2 ;
-(void)stop;


@end


#endif