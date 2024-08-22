// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCNEARBYSERVICEBROWSER_H
#define MCNEARBYSERVICEBROWSER_H

@class NSString, NSMutableDictionary, NSNetServiceBrowser;
@protocol NSNetServiceBrowserDelegate, NSNetServiceDelegate, MCNearbyServiceBrowserDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MCPeerID.h"

@interface MCNearbyServiceBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>

 {
    id<MCNearbyServiceBrowserDelegate> *_delegate;
}


@property (nonatomic, getter=isAWDLDisabled) BOOL AWDLDisabled; // ivar: _AWDLDisabled
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MCNearbyServiceBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *formattedServiceType; // ivar: _formattedServiceType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *invites; // ivar: _invites
@property (nonatomic) BOOL isBrowsing; // ivar: _isBrowsing
@property (readonly, nonatomic) MCPeerID *myPeerID; // ivar: _myPeerID
@property (retain, nonatomic) NSMutableDictionary *netServices; // ivar: _netServices
@property (retain, nonatomic) NSNetServiceBrowser *networkBrowser; // ivar: _networkBrowser
@property (nonatomic) NSInteger outgoingInviteID; // ivar: _outgoingInviteID
@property (retain, nonatomic) NSMutableDictionary *peers; // ivar: _peers
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (nonatomic) BOOL wasBrowsing; // ivar: _wasBrowsing


-(NSInteger)syncNextOutgoingInviteID;
-(id)init;
-(id)initWithPeer:(id)arg0 serviceType:(id)arg1 ;
-(id)rebuildUserDiscoveryInfoFromTXTRecordDictionary:(id)arg0 ;
-(void)applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)applicationWillTerminateNotification:(id)arg0 ;
-(void)dealloc;
-(void)invitePeer:(id)arg0 toSession:(id)arg1 withContext:(id)arg2 timeout:(CGFloat)arg3 ;
-(void)netService:(id)arg0 didUpdateTXTRecordData:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didFindDomain:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowser:(id)arg0 didNotSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didRemoveDomain:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowser:(id)arg0 didRemoveService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowserDidStopSearch:(id)arg0 ;
-(void)netServiceBrowserWillSearch:(id)arg0 ;
-(void)parseIDString:(*id)arg0 displayName:(*id)arg1 fromIdentifier:(id)arg2 ;
-(void)startBrowsingForPeers;
-(void)stopBrowsingForPeers;
-(void)syncAttachConnection:(id)arg0 toPeer:(id)arg1 ;
-(void)syncCloseConnectionForPeer:(id)arg0 ;
-(void)syncHandleDeclinedInviteWithInfo:(id)arg0 ;
-(void)syncHandleInviteResponse:(id)arg0 fromPeer:(id)arg1 ;
-(void)syncHandleInviteTimeout:(id)arg0 forPeer:(id)arg1 ;
-(void)syncInitiateConnectionToPeer:(id)arg0 ;
-(void)syncInvitePeer:(id)arg0 toSession:(id)arg1 withContext:(id)arg2 timeout:(CGFloat)arg3 ;
-(void)syncReceivedData:(id)arg0 fromPeer:(id)arg1 ;
-(void)syncSendData:(id)arg0 toPeer:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)syncSendDictionary:(id)arg0 toPeer:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)syncStartBrowsingForPeers;
-(void)syncStopBrowsingForPeers;


@end


#endif