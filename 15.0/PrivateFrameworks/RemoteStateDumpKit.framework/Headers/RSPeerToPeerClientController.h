// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RSPEERTOPEERCLIENTCONTROLLER_H
#define RSPEERTOPEERCLIENTCONTROLLER_H

@class NSString, MCNearbyServiceBrowser;
@protocol MCNearbyServiceBrowserDelegate;


#import "RSPeerToPeerConnectionController.h"

@interface RSPeerToPeerClientController : RSPeerToPeerConnectionController <MCNearbyServiceBrowserDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MCNearbyServiceBrowser *serviceBrowser; // ivar: _serviceBrowser
@property (readonly) Class superclass;


-(void)abort;
-(void)browser:(id)arg0 didNotStartBrowsingForPeers:(id)arg1 ;
-(void)browser:(id)arg0 foundPeer:(id)arg1 withDiscoveryInfo:(id)arg2 ;
-(void)browser:(id)arg0 lostPeer:(id)arg1 ;
-(void)prepareForConnection;


@end


#endif