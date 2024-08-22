// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RSPEERTOPEERCONNECTIONCONTROLLER_H
#define RSPEERTOPEERCONNECTIONCONTROLLER_H

@class NSMutableArray, NSString, MCPeerID, MCSession;
@protocol MCSessionDelegate, RSPeerToPeerConnectionControllerDataSource, RSPeerToPeerConnectionControllerDelegate;

#import <Foundation/Foundation.h>


@interface RSPeerToPeerConnectionController : NSObject <MCSessionDelegate>



@property (retain, nonatomic) NSMutableArray *alreadyConnectedPeerIDs; // ivar: _alreadyConnectedPeerIDs
@property (weak, nonatomic) NSObject<RSPeerToPeerConnectionControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RSPeerToPeerConnectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MCPeerID *localPeerID; // ivar: _localPeerID
@property (retain, nonatomic) MCSession *session; // ivar: _session
@property (readonly) Class superclass;


-(BOOL)_shouldInteractWithPeer:(id)arg0 ;
-(id)_connectedPeerWithDisplayName:(id)arg0 ;
-(id)_stateDataWithRequestType:(NSUInteger)arg0 stateContent:(id)arg1 info:(id)arg2 ;
-(id)initWithDataSource:(id)arg0 ;
-(void)_sendData:(id)arg0 toPeers:(id)arg1 ;
-(void)abort;
-(void)attemptConnectionWithPeer:(id)arg0 successBlock:(id)arg1 ;
-(void)dealloc;
-(void)prepareForConnection;
-(void)requestState:(id)arg0 fromPeer:(id)arg1 ;
-(void)sendState:(id)arg0 withInfo:(id)arg1 toPeer:(id)arg2 ;
-(void)session:(id)arg0 didFinishReceivingResourceWithName:(id)arg1 fromPeer:(id)arg2 atURL:(id)arg3 withError:(id)arg4 ;
-(void)session:(id)arg0 didReceiveData:(id)arg1 fromPeer:(id)arg2 ;
-(void)session:(id)arg0 didReceiveStream:(id)arg1 withName:(id)arg2 fromPeer:(id)arg3 ;
-(void)session:(id)arg0 didStartReceivingResourceWithName:(id)arg1 fromPeer:(id)arg2 withProgress:(id)arg3 ;
-(void)session:(id)arg0 peer:(id)arg1 didChangeState:(NSInteger)arg2 ;


@end


#endif