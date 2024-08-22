// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDREQUESTADVERTISER_H
#define DEDREQUESTADVERTISER_H

@class MCNearbyServiceAdvertiser, NSString, MCPeerID, MCSession;
@protocol MCSessionDelegate, MCNearbyServiceAdvertiserDelegate;

#import <Foundation/Foundation.h>


@interface DEDRequestAdvertiser : NSObject <MCSessionDelegate, MCNearbyServiceAdvertiserDelegate>



@property (retain) MCNearbyServiceAdvertiser *advertiser; // ivar: _advertiser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *hostIdentifier; // ivar: _hostIdentifier
@property (copy, nonatomic) id *onPeerJoin; // ivar: _onPeerJoin
@property (retain) MCPeerID *peerID; // ivar: _peerID
@property (retain) MCSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)displayName;
-(id)encodeRequestRecordAsJSON:(id)arg0 ;
-(void)advertiser:(id)arg0 didReceiveInvitationFromPeer:(id)arg1 withContext:(id)arg2 invitationHandler:(id)arg3 ;
-(void)broadcastRecord:(id)arg0 ;
-(void)sendRecord:(id)arg0 toPeer:(id)arg1 ;
-(void)session:(id)arg0 didFinishReceivingResourceWithName:(id)arg1 fromPeer:(id)arg2 atURL:(id)arg3 withError:(id)arg4 ;
-(void)session:(id)arg0 didReceiveData:(id)arg1 fromPeer:(id)arg2 ;
-(void)session:(id)arg0 didReceiveStream:(id)arg1 withName:(id)arg2 fromPeer:(id)arg3 ;
-(void)session:(id)arg0 didStartReceivingResourceWithName:(id)arg1 fromPeer:(id)arg2 withProgress:(id)arg3 ;
-(void)session:(id)arg0 peer:(id)arg1 didChangeState:(NSInteger)arg2 ;
-(void)start;
-(void)stop;


@end


#endif