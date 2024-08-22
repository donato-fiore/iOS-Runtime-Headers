// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTUVSHELLSERVICE_H
#define DTUVSHELLSERVICE_H

@class DTXService, NSMutableArray;
@protocol OS_dispatch_queue, DTUVService;



@interface DTUVShellService : DTXService {
    NSObject<OS_dispatch_queue> *_messageQueue;
    id<DTUVService> *_service;
    NSMutableArray *_queuedServiceMessages;
    id *_serviceMessageHandler;
}




-(id)_makeDTXMessageFrom:(id)arg0 ;
-(id)_makeDTXReplyHandlerFrom:(SEL)arg0 ;
-(id)_makeServiceMessageFrom:(id)arg0 error:(*id)arg1 ;
-(id)_makeServiceReplyHandlerFrom:(SEL)arg0 ;
// -(id)createExternalService:(id)arg0 error:(unk)arg1  ;
-(id)initWithChannel:(id)arg0 ;
-(void)_activateService;
-(void)_bindServiceCancelationToChannelCancelation;
-(void)_replyToQueuedMessages:(id)arg0 ;
-(void)messageReceived:(id)arg0 ;
-(void)sendMessage:(id)arg0 ;


@end


#endif