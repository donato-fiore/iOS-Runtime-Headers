// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RSPEERTOPEERSERVERCONTROLLER_H
#define RSPEERTOPEERSERVERCONTROLLER_H

@class NSString, MCNearbyServiceAdvertiser;
@protocol MCNearbyServiceAdvertiserDelegate;


#import "RSPeerToPeerConnectionController.h"

@interface RSPeerToPeerServerController : RSPeerToPeerConnectionController <MCNearbyServiceAdvertiserDelegate>



@property (nonatomic) BOOL advertiserDidNotStartAdvertising; // ivar: _advertiserDidNotStartAdvertising
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MCNearbyServiceAdvertiser *serviceAdvertiser; // ivar: _serviceAdvertiser
@property (readonly) Class superclass;


-(BOOL)didStartAcceptingConnections;
-(void)abort;
-(void)advertiser:(id)arg0 didNotStartAdvertisingPeer:(id)arg1 ;
-(void)advertiser:(id)arg0 didReceiveInvitationFromPeer:(id)arg1 withContext:(id)arg2 invitationHandler:(id)arg3 ;
-(void)prepareForConnection;


@end


#endif