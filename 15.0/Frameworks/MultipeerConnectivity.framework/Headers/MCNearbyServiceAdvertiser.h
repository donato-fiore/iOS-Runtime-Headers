// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCNEARBYSERVICEADVERTISER_H
#define MCNEARBYSERVICEADVERTISER_H

@class NSData, NSString, NSDictionary, NSMutableDictionary, NSNetService;
@protocol NSNetServiceDelegate, MCNearbyServiceAdvertiserDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MCPeerID.h"

@interface MCNearbyServiceAdvertiser : NSObject <NSNetServiceDelegate>

 {
    id<MCNearbyServiceAdvertiserDelegate> *_delegate;
}


@property (nonatomic, getter=isAWDLDisabled) BOOL AWDLDisabled; // ivar: _AWDLDisabled
@property (retain, nonatomic) NSData *TXTRecordData; // ivar: _TXTRecordData
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MCNearbyServiceAdvertiserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *discoveryInfo; // ivar: _discoveryInfo
@property (copy, nonatomic) NSString *formattedServiceType; // ivar: _formattedServiceType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *invites; // ivar: _invites
@property (nonatomic) BOOL isAdvertising; // ivar: _isAdvertising
@property (readonly, nonatomic) MCPeerID *myPeerID; // ivar: _myPeerID
@property (retain, nonatomic) NSNetService *networkServer; // ivar: _networkServer
@property (nonatomic) NSInteger outgoingInviteID; // ivar: _outgoingInviteID
@property (retain, nonatomic) NSMutableDictionary *peers; // ivar: _peers
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (nonatomic) BOOL wasAdvertising; // ivar: _wasAdvertising


-(id)init;
-(id)initWithPeer:(id)arg0 discoveryInfo:(id)arg1 serviceType:(id)arg2 ;
-(id)makeTXTRecordDataWithDiscoveryInfo:(id)arg0 ;
-(id)txtRecordDataWithDiscoveryInfo:(id)arg0 ;
-(void)applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)applicationWillTerminateNotification:(id)arg0 ;
-(void)dealloc;
-(void)netService:(id)arg0 didAcceptConnectionWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)netService:(id)arg0 didNotPublish:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg0 ;
-(void)netServiceDidStop:(id)arg0 ;
-(void)parseIDString:(*id)arg0 displayName:(*id)arg1 fromIdentifier:(id)arg2 ;
-(void)startAdvertisingPeer;
-(void)stopAdvertisingPeer;
-(void)syncAttachConnection:(id)arg0 toPeer:(id)arg1 ;
-(void)syncCloseConnectionForPeer:(id)arg0 ;
-(void)syncHandleIncomingInputStream:(id)arg0 outputStream:(id)arg1 ;
-(void)syncHandleInvite:(id)arg0 fromPeer:(id)arg1 ;
-(void)syncHandleInviteConnect:(id)arg0 fromPeer:(id)arg1 ;
-(void)syncReceivedData:(id)arg0 fromPeer:(id)arg1 ;
-(void)syncSendData:(id)arg0 toPeer:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)syncSendDictionary:(id)arg0 toPeer:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)syncStartAdvertisingPeer;
-(void)syncStopAdvertisingPeer;


@end


#endif