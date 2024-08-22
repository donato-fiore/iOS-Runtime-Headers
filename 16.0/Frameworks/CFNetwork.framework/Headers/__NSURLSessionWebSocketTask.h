// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSURLSESSIONWEBSOCKETTASK_H
#define __NSURLSESSIONWEBSOCKETTASK_H

@class NSCFLocalSessionTask, NSMutableArray, NSError, NSString, NSData;
@protocol OS_nw_protocol_options;



@interface __NSURLSessionWebSocketTask : NSCFLocalSessionTask {
    BOOL _webSocketHandshakeCompleted;
    BOOL _readInProgress;
    int _pingSeed;
    NSMutableArray *_pendingSendWork;
    NSMutableArray *_pendingReceiveWork;
    NSMutableArray *_highPriorityPendingWork;
    NSMutableArray *_delegateWork;
    NSError *_webSocketError;
    NSString *_protocolPicked;
    NSObject<OS_nw_protocol_options> *_wsOptions;
}


@property (readonly) NSInteger closeCode; // ivar: _closeCode
@property (readonly, copy) NSData *closeReason; // ivar: _closeReason
@property NSInteger maximumMessageSize; // ivar: _maximumMessageSize


-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)initWithOriginalRequest:(id)arg0 ident:(NSUInteger)arg1 taskGroup:(id)arg2 ;
-(void)_onqueue_cancel;
-(void)_onqueue_didReceiveResponse:(id)arg0 completion:(id)arg1 ;
-(void)_onqueue_resume;
-(void)_sendCloseCode:(NSInteger)arg0 reason:(id)arg1 ;
-(void)cancel;
-(void)cancelWithCloseCode:(NSInteger)arg0 reason:(id)arg1 ;
-(void)connection:(id)arg0 didFinishLoadingWithError:(id)arg1 ;
-(void)dealloc;
-(void)receiveMessageWithCompletionHandler:(id)arg0 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendPingWithPongReceiveHandler:(id)arg0 ;


@end


#endif