// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBCLASSICMANAGER_H
#define CBCLASSICMANAGER_H

@class NSMapTable;


#import "CBManager.h"

@interface CBClassicManager : CBManager

@property (copy) id *classicPeerDiscovered; // ivar: _classicPeerDiscovered
@property (copy) id *connectCallback; // ivar: _connectCallback
@property (readonly) BOOL connectable; // ivar: _connectable
@property (copy) id *connectionStatusHandler; // ivar: _connectionStatusHandler
@property (copy) id *disconnectCallback; // ivar: _disconnectCallback
@property (readonly) BOOL discoverable; // ivar: _discoverable
@property (copy) id *inquiryServiceAddedHandler; // ivar: _inquiryServiceAddedHandler
@property (readonly) BOOL inquiryState; // ivar: _inquiryState
@property (readonly, nonatomic) BOOL isInquiryRunning; // ivar: _isInquiryRunning
@property (copy) id *pairingStatusHandler; // ivar: _pairingStatusHandler
@property (readonly, retain, nonatomic) NSMapTable *peers; // ivar: _peers
@property (readonly) NSInteger powerState; // ivar: _powerState
@property (copy) id *sdpRecordAddedHandler; // ivar: _sdpRecordAddedHandler
@property (copy) id *serviceAddedHandler; // ivar: _serviceAddedHandler
@property (nonatomic) BOOL testMode; // ivar: _testMode


-(BOOL)isMsgAllowedAlways:(unsigned short)arg0 ;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg0 ;
-(BOOL)secureBluetooth:(BOOL)arg0 withAuthData:(id)arg1 ;
-(BOOL)setBTPowerState:(BOOL)arg0 ;
-(id)classicPeerWithInfo:(id)arg0 ;
-(id)getLocalSDPDatabase;
-(id)initWithQueue:(id)arg0 options:(id)arg1 ;
-(id)peerWithIdentifier:(id)arg0 ;
-(id)peerWithInfo:(id)arg0 ;
-(id)retrievePairedPeersWithOptions:(id)arg0 ;
-(id)retrievePeerWithAddress:(id)arg0 ;
-(unsigned int)addServiceWithData:(id)arg0 ;
-(void)addAACPClient:(unsigned short)arg0 aacpClientAdded:(id)arg1 ;
-(void)addService:(id)arg0 ;
-(void)addService:(id)arg0 sdpRecord:(id)arg1 sdpRecordAddedHandler:(id)arg2 ;
-(void)addServiceToInquiryList:(id)arg0 ;
-(void)alertUserNotificationIsReady;
-(void)cancelPeerConnection:(id)arg0 ;
-(void)cancelPeerConnection:(id)arg0 force:(BOOL)arg1 ;
-(void)cancelPeerConnection:(id)arg0 options:(id)arg1 ;
-(void)connectPeer:(id)arg0 options:(id)arg1 ;
-(void)dealloc;
-(void)forEachClassicPeer:(id)arg0 ;
-(void)handleLocalDeviceStateUpdatedMsg:(id)arg0 ;
-(void)handleMsg:(unsigned short)arg0 args:(id)arg1 ;
-(void)handlePeerConnectionCompleted:(id)arg0 ;
-(void)handlePeerConnectionStateUpdated:(id)arg0 ;
-(void)handlePeerDisconnectionCompleted:(id)arg0 ;
-(void)handlePeerDiscovered:(id)arg0 ;
-(void)handleSDPRecordAdded:(id)arg0 ;
-(void)handleServiceAddedToInquiryList:(id)arg0 ;
-(void)handleServiceAddedToSDP:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)orphanClassicPeers;
-(void)removeAACPClient:(unsigned short)arg0 ;
-(void)removeAllServices;
-(void)removeAllServicesFromInquiryList;
-(void)removeService:(id)arg0 ;
-(void)removeServiceFromInquiryList:(id)arg0 ;
-(void)removeServiceHandle:(unsigned int)arg0 ;
-(void)setBTConnectable:(BOOL)arg0 ;
-(void)setBTDiscoverable:(BOOL)arg0 ;
-(void)startInquiryWithOptions:(id)arg0 classicPeerDiscovered:(id)arg1 ;
-(void)stopInquiry;


@end


#endif