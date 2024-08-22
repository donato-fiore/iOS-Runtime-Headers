// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICEXTERNALSHAREDLISTENINGCONNECTIONCONTROLLER_H
#define ICEXTERNALSHAREDLISTENINGCONNECTIONCONTROLLER_H

@class NSString, NSXPCConnection;
@protocol ICSharedListeningConnectionClientProtocol, OS_dispatch_queue;


#import "ICSharedListeningConnectionController.h"

@interface ICExternalSharedListeningConnectionController : ICSharedListeningConnectionController <ICSharedListeningConnectionClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)initWithSessionIdentifier:(id)arg0 identity:(id)arg1 bundleID:(id)arg2 ;
-(void)_initializeConnectionIfNeeded;
-(void)dealloc;
-(void)receiveConnectionError:(id)arg0 ;
-(void)receiveFatalError:(id)arg0 ;
-(void)receiveMessageData:(id)arg0 ;
-(void)receiveStartWithSessionIdentifier:(id)arg0 sessionToken:(id)arg1 inviteURLString:(id)arg2 ;
-(void)sendMessage:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif