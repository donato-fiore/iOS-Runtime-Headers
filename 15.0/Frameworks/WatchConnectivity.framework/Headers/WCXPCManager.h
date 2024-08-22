// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WCXPCMANAGER_H
#define WCXPCMANAGER_H

@class NSXPCConnection, NSString;
@protocol NSXPCConnectionDelegate, WCXPCManagerClientProtocol, WCXPCManagerDaemonProtocol, WCXPCManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WCXPCManager : NSObject <NSXPCConnectionDelegate, WCXPCManagerClientProtocol, WCXPCManagerDaemonProtocol>



@property (readonly) NSXPCConnection *connection; // ivar: _connection
@property BOOL connectionInvalidated; // ivar: _connectionInvalidated
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<WCXPCManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property int listenerResumedToken; // ivar: _listenerResumedToken
@property BOOL reconnectFailed; // ivar: _reconnectFailed
@property NSUInteger reconnectRetryCount; // ivar: _reconnectRetryCount
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)clientInterface;
+(id)daemonInterface;
+(id)sharedManager;
+(void)initialize;
-(id)init;
-(void)acknowledgeFileIndexWithIdentifier:(id)arg0 clientPairingID:(id)arg1 ;
-(void)acknowledgeFileResultIndexWithIdentifier:(id)arg0 clientPairingID:(id)arg1 ;
-(void)acknowledgeUserInfoIndexWithIdentifier:(id)arg0 clientPairingID:(id)arg1 ;
-(void)acknowledgeUserInfoResultIndexWithIdentifier:(id)arg0 clientPairingID:(id)arg1 ;
-(void)cancelAllOutstandingMessages;
-(void)cancelSendWithIdentifier:(id)arg0 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)handleActiveDeviceSwitchStarted;
-(void)handleApplicationContextWithPairingID:(id)arg0 ;
-(void)handleFileResultWithPairingID:(id)arg0 ;
-(void)handleIncomingFileWithPairingID:(id)arg0 ;
-(void)handleIncomingUserInfoWithPairingID:(id)arg0 ;
-(void)handleInterruptedConnection;
-(void)handleMessageSendingAllowed;
-(void)handleRequest:(id)arg0 ;
-(void)handleResponse:(id)arg0 ;
-(void)handleSentMessageWithIdentifier:(id)arg0 error:(id)arg1 ;
-(void)handleSessionStateChanged:(id)arg0 ;
-(void)handleUserInfoResultWithPairingID:(id)arg0 ;
-(void)interruptionHandler;
-(void)invalidateConnection;
-(void)onqueue_reconnect;
-(void)onqueue_retryConnectIfNecessary;
-(void)sendMessage:(id)arg0 clientPairingID:(id)arg1 acceptanceHandler:(id)arg2 ;
// -(void)sendMessage:(id)arg0 clientPairingID:(id)arg1 acceptanceHandler:(id)arg2 errorHandler:(unk)arg3  ;
-(void)sessionReadyForInitialStateForClientPairingID:(id)arg0 supportsActiveDeviceSwitch:(BOOL)arg1 withErrorHandler:(id)arg2 ;
-(void)setupConnection;
-(void)transferFile:(id)arg0 sandboxToken:(id)arg1 clientPairingID:(id)arg2 errorHandler:(id)arg3 ;
-(void)transferUserInfo:(id)arg0 withURL:(id)arg1 clientPairingID:(id)arg2 errorHandler:(id)arg3 ;
-(void)updateApplicationContext:(id)arg0 clientPairingID:(id)arg1 errorHandler:(id)arg2 ;


@end


#endif