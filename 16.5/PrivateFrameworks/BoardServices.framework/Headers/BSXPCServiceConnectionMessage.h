// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSXPCSERVICECONNECTIONMESSAGE_H
#define BSXPCSERVICECONNECTIONMESSAGE_H

@class BSXPCCoder, NSString;
@protocol BSXPCServiceConnectionMessage, BSInvalidatable, OS_dispatch_queue, BSXPCServiceConnectionHandshake, BSServiceDispatchingQueue;



@interface BSXPCServiceConnectionMessage : BSXPCCoder <BSXPCServiceConnectionMessage, BSInvalidatable>

 {
    NSObject<OS_dispatch_queue> *_targetQueue;
    id<BSXPCServiceConnectionHandshake> *_handshake;
    int _sendFlag;
    BOOL _notification;
    id *_completion;
    id<BSServiceDispatchingQueue> *_replyQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)expectsReply;
-(BOOL)send;
-(BOOL)sendSynchronously;
-(id)createReply;
-(id)initWithMessage:(id)arg0 ;
-(id)sendSynchronouslyWithError:(*id)arg0 ;
-(void)invalidate;


@end


#endif