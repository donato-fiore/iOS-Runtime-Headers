// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKIMDAEMONCONTROLLER_H
#define CKIMDAEMONCONTROLLER_H

@class IMDaemonController, NSArray, NSProtocolChecker;



@interface CKIMDaemonController : IMDaemonController

@property (retain, nonatomic) NSArray *listeners; // ivar: _listeners
@property (retain, nonatomic) NSProtocolChecker *protocol; // ivar: _protocol


+(id)sharedInstance;
+(void)beginSimulatingDaemon;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 capabilities:(unsigned int)arg1 blockUntilConnected:(BOOL)arg2 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)queryController;
-(id)synchronousRemoteDaemon;
-(void)_agentDidLaunchNotification:(id)arg0 ;
-(void)_capabilitiesDidChange;
-(void)blockUntilConnected;
-(void)broadcastCloudKitState;
-(void)broadcastCloudKitStateAfterFetchingAccountStatus;
-(void)deleteMessageWithGUIDs:(id)arg0 queryID:(id)arg1 ;
-(void)fetchCommonCapabilities:(id)arg0 fromChatWithGUID:(id)arg1 reply:(id)arg2 ;
-(void)fileTransfer:(id)arg0 acceptedWithPath:(id)arg1 autoRename:(BOOL)arg2 overwrite:(BOOL)arg3 options:(NSInteger)arg4 ;
-(void)fileTransfer:(id)arg0 createdWithProperties:(id)arg1 ;
-(void)fileTransferRemoved:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)joinChatID:(id)arg0 handleInfo:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 joinProperties:(id)arg7 account:(id)arg8 ;
-(void)markAsSpamForIDs:(id)arg0 style:(unsigned char)arg1 onServices:(id)arg2 chatID:(id)arg3 queryID:(id)arg4 autoReport:(BOOL)arg5 ;
-(void)markReadForIDs:(id)arg0 style:(unsigned char)arg1 onServices:(id)arg2 messages:(id)arg3 clientUnreadCount:(NSInteger)arg4 setUnreadCountToZero:(BOOL)arg5 ;
-(void)requestNetworkDataAvailability;
-(void)requestPendingMessages;
-(void)sendBalloonPayload:(id)arg0 attachments:(id)arg1 withMessageGUID:(id)arg2 bundleID:(id)arg3 ;


@end


#endif