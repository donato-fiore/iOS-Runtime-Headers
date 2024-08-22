// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCSESSIONPEERSTATE_H
#define MCSESSIONPEERSTATE_H

@class NSMutableDictionary, NSData;

#import <Foundation/Foundation.h>

#import "MCPeerID.h"

@interface MCSessionPeerState : NSObject

@property (nonatomic) NSInteger certificateDecision; // ivar: _certificateDecision
@property (nonatomic) BOOL connectPeerCalled; // ivar: _connectPeerCalled
@property (retain, nonatomic) NSMutableDictionary *incomingStreams; // ivar: _incomingStreams
@property (copy, nonatomic) NSData *nearbyConnectionData; // ivar: _nearbyConnectionData
@property (readonly, nonatomic) unsigned int newStreamID; // ivar: _newStreamID
@property (readonly, nonatomic) unsigned int newStreamOpenRequestID; // ivar: _newStreamOpenRequestID
@property (retain, nonatomic) NSMutableDictionary *outgoingStreamRequests; // ivar: _outgoingStreamRequests
@property (retain, nonatomic) NSMutableDictionary *outgoingStreams; // ivar: _outgoingStreams
@property (readonly, copy, nonatomic) MCPeerID *peerID; // ivar: _peerID
@property (nonatomic) NSInteger state; // ivar: _state


-(id)description;
-(id)initWithPeer:(id)arg0 ;
-(void)dealloc;


@end


#endif