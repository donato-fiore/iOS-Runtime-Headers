// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACREMOTEDEVICEPROXY_H
#define ACREMOTEDEVICEPROXY_H

@class IDSService, NSMutableDictionary, NSLock, NSString;
@protocol IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACRemoteCommandHandler.h"

@interface ACRemoteDeviceProxy : NSObject <IDSServiceDelegate>

 {
    IDSService *_messageSendingService;
    NSObject<OS_dispatch_queue> *_messageSendingQueue;
    NSObject<OS_dispatch_queue> *_commandProcessingQueue;
    ACRemoteCommandHandler *_remoteCommandHandler;
    NSMutableDictionary *_completionHandlersByInternalMessageID;
    NSMutableDictionary *_internalMessageIDsByTransportID;
    NSLock *_completionHandlersLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isValidCommandForOutgoingMessage:(id)arg0 ;
-(BOOL)_sendMessageData:(id)arg0 toDestination:(id)arg1 withPriority:(NSInteger)arg2 bypassDuet:(BOOL)arg3 transportID:(*id)arg4 error:(*id)arg5 ;
-(NSInteger)_priorityForMessageCarryingCommand:(id)arg0 ;
-(id)init;
-(void)_dequeueCompletionHandlersForMessageWithInternalID:(id)arg0 success:(BOOL)arg1 result:(id)arg2 error:(id)arg3 ;
-(void)_dequeueCompletionHandlersForMessageWithTransportID:(id)arg0 success:(BOOL)arg1 result:(id)arg2 error:(id)arg3 ;
// -(void)_enqueueCompletionHandler:(id)arg0 forMessageWithInternalID:(unk)arg1 transportID:(id)arg2  ;
-(void)_sendReplyForMessage:(id)arg0 toDestination:(id)arg1 withSuccess:(BOOL)arg2 result:(id)arg3 error:(id)arg4 ;
-(void)sendCommand:(id)arg0 withAccount:(id)arg1 completion:(id)arg2 ;
-(void)sendCommand:(id)arg0 withAccount:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif