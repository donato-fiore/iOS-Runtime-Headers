// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCNEARBYDISCOVERYPEER_H
#define MCNEARBYDISCOVERYPEER_H

@class NSNetService, NSMutableArray;

#import <Foundation/Foundation.h>

#import "MCNearbyDiscoveryPeerConnection.h"
#import "MCPeerID.h"

@interface MCNearbyDiscoveryPeer : NSObject

@property (retain, nonatomic) MCNearbyDiscoveryPeerConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSNetService *netService; // ivar: _netService
@property (copy, nonatomic) MCPeerID *peerID; // ivar: _peerID
@property (retain, nonatomic) NSMutableArray *sendDataBuffer; // ivar: _sendDataBuffer
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) MCNearbyDiscoveryPeerConnection *trialConnection; // ivar: _trialConnection


-(id)description;
-(id)init;
-(id)initWithPeerID:(id)arg0 ;
-(id)stringForState:(int)arg0 ;
-(void)attachConnection:(id)arg0 ;
-(void)closeConnection;
-(void)dealloc;
-(void)flushDataBuffer;
-(void)invalidate;
-(void)sendData:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif