// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSESSION_H
#define GKSESSION_H

@class GKConnection, NSString;
@protocol GKSessionDelegate, GKSessionPrivateDelegate;

#import <Foundation/Foundation.h>


@interface GKSession : NSObject {
    id *_session;
}


@property (getter=isAvailable) BOOL available;
@property (getter=isBusy) BOOL busy;
@property (readonly) GKConnection *connection;
@property (weak) NSObject<GKSessionDelegate> *delegate;
@property CGFloat disconnectTimeout;
@property (readonly) NSString *displayName;
@property (readonly) NSString *peerID;
@property (weak) NSObject<GKSessionPrivateDelegate> *privateDelegate;
@property (readonly) NSString *sessionID;
@property (readonly) int sessionMode;
@property BOOL wifiEnabled;


+(void)initialize;
-(BOOL)acceptConnectionFromPeer:(id)arg0 error:(*id)arg1 ;
-(BOOL)isPeerBusy:(id)arg0 ;
-(BOOL)sendData:(id)arg0 toPeers:(id)arg1 withDataMode:(int)arg2 error:(*id)arg3 ;
-(BOOL)sendDataToAllPeers:(id)arg0 withDataMode:(int)arg1 error:(*id)arg2 ;
-(id)description;
-(id)displayNameForPeer:(id)arg0 ;
-(id)initWithConnection:(id)arg0 delegate:(id)arg1 ;
-(id)initWithSessionID:(id)arg0 displayName:(id)arg1 sessionMode:(int)arg2 ;
-(id)peersWithConnectionState:(int)arg0 ;
-(id)privateImpl;
-(void)cancelConnectToPeer:(id)arg0 ;
-(void)connectToPeer:(id)arg0 withTimeout:(CGFloat)arg1 ;
-(void)dealloc;
-(void)denyConnectionFromPeer:(id)arg0 ;
-(void)disconnectFromAllPeers;
-(void)disconnectPeerFromAllPeers:(id)arg0 ;
-(void)setDataReceiveHandler:(id)arg0 withContext:(*void)arg1 ;


@end


#endif