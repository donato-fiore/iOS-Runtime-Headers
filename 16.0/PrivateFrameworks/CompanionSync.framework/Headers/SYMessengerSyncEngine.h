// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYMESSENGERSYNCENGINE_H
#define SYMESSENGERSYNCENGINE_H

@class NSMapTable, NSString, NSDictionary;
@protocol NMSMessageCenterDelegate, OS_dispatch_semaphore, OS_dispatch_queue;


#import "SYSyncEngine.h"
#import "NMSMessageCenter.h"
#import "SYDevice.h"

@interface SYMessengerSyncEngine : SYSyncEngine <NMSMessageCenterDelegate>

 {
    NMSMessageCenter *_messageCenter;
    NSObject<OS_dispatch_semaphore> *_lookupLock;
    NSMapTable *_requestLookup;
    NSMapTable *_callbackLookup;
    SYDevice *_activeDevice;
    NSString *_sessionDeviceID;
}


@property (copy, nonatomic) NSDictionary *customIDSOptions; // ivar: _customIDSOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *idsQueue; // ivar: _idsQueue
@property (readonly) Class superclass;


-(BOOL)_checkMessageHeader:(id)arg0 messageID:(id)arg1 ;
-(BOOL)resume:(*id)arg0 ;
-(BOOL)targetConnected;
-(BOOL)targetIsNearby;
-(id)_fileTransferHeader;
-(id)_getRequestHeader:(id)arg0 ;
-(id)_getResponseHeader:(id)arg0 ;
-(id)_wrapMessage:(id)arg0 ofType:(unsigned short)arg1 userInfo:(id)arg2 ;
-(id)cancelMessagesReturningFailures:(id)arg0 ;
-(id)initWithService:(id)arg0 queue:(id)arg1 ;
-(id)messageCenter;
-(id)outputStreamWithMetadata:(id)arg0 priority:(NSInteger)arg1 options:(id)arg2 context:(id)arg3 error:(*id)arg4 ;
-(id)stateForLogging;
-(void)_handleError:(id)arg0 forMessageID:(unsigned short)arg1 ;
-(void)_hookupMessageHandler;
-(void)_recordLastSeqNo:(id)arg0 ;
-(void)_resumeIncomingMessages;
-(void)_suspendIncomingMessages;
-(void)_updateMessageCenterPrefs:(id)arg0 ;
-(void)beginSession;
-(void)enqueueSyncRequest:(id)arg0 withMessageID:(unsigned short)arg1 priority:(NSInteger)arg2 options:(id)arg3 userContext:(id)arg4 callback:(id)arg5 ;
-(void)messageCenter:(id)arg0 activeDeviceChanged:(id)arg1 acknowledgement:(id)arg2 ;
-(void)messageCenter:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)messageCenter:(id)arg0 didReceiveIncomingFileTransfer:(id)arg1 ;
-(void)messageCenter:(id)arg0 didReceiveUnknownRequest:(id)arg1 ;
-(void)messageCenter:(id)arg0 didResolveIDSIdentifier:(id)arg1 forFileTransfer:(id)arg2 ;
-(void)messageCenter:(id)arg0 didResolveIDSIdentifier:(id)arg1 forResponse:(id)arg2 ;
-(void)messageCenter:(id)arg0 didResolveIDSIdentifierForRequest:(id)arg1 ;
-(void)messageCenter:(id)arg0 didSuccessfullyDeliverRequestWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)messageCenter:(id)arg0 didSuccessfullySendRequestWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)messageCenter:(id)arg0 failedToSendMessageWithIdentifier:(id)arg1 error:(id)arg2 userInfo:(id)arg3 ;
-(void)messageCenter:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)suspend;


@end


#endif