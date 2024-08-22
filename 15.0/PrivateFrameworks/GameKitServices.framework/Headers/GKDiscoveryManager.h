// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKDISCOVERYMANAGER_H
#define GKDISCOVERYMANAGER_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GKDiscoveryBonjour.h"

@interface GKDiscoveryManager : NSObject {
    NSObject<OS_dispatch_queue> *_peersQueue;
}


@property (retain, nonatomic) GKDiscoveryBonjour *bonjour; // ivar: _bonjour
@property (copy, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (retain, nonatomic) NSMutableDictionary *peers; // ivar: _peers
@property (copy, nonatomic) id *playerFoundHandler; // ivar: _playerFoundHandler
@property (copy, nonatomic) NSString *playerID; // ivar: _playerID
@property (copy, nonatomic) id *playerLostHandler; // ivar: _playerLostHandler
@property (copy, nonatomic) id *receiveDataHandler; // ivar: _receiveDataHandler


+(id)parseDeviceIDFromServiceName:(id)arg0 ;
-(id)generateDeviceID;
-(id)init;
-(id)initWithDomain:(id)arg0 type:(id)arg1 ;
-(id)localServiceName;
-(id)serviceNameforDeviceID:(id)arg0 playerID:(id)arg1 ;
-(id)startAdvertisingLocalPlayer:(id)arg0 discoveryInfo:(id)arg1 ;
-(void)addInterface:(unsigned int)arg0 withDiscoveryInfo:(id)arg1 forPeerWithServiceName:(id)arg2 ;
-(void)cleanUpPeersForBrowse;
-(void)connectToSockAddr:(struct sockaddr *)arg0 port:(unsigned short)arg1 forPeer:(id)arg2 ;
-(void)dealloc;
-(void)didLosePeer:(id)arg0 ;
-(void)forgetParticipant:(id)arg0 deviceID:(id)arg1 ;
-(void)passDataToGKLayer:(id)arg0 fromPeer:(id)arg1 ;
-(void)processEvent:(int)arg0 forPeer:(id)arg1 withUserInfo:(id)arg2 ;
-(void)removeInterface:(unsigned int)arg0 forPeerWithServiceName:(id)arg1 ;
-(void)resolveForPeer:(id)arg0 ;
-(void)sendDataToParticipant:(id)arg0 deviceID:(id)arg1 data:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)startBrowsingLocalPlayer:(id)arg0 ;
-(void)stopAdvertising;
-(void)stopBrowsing;


@end


#endif