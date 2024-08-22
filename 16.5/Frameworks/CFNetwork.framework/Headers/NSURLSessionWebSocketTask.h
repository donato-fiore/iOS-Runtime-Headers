// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLSESSIONWEBSOCKETTASK_H
#define NSURLSESSIONWEBSOCKETTASK_H

@class NSData;


#import "NSURLSessionTask.h"

@interface NSURLSessionWebSocketTask : NSURLSessionTask

@property (readonly) NSInteger closeCode; // ivar: _closeCode
@property (readonly, copy) NSData *closeReason; // ivar: _closeReason
@property NSInteger maximumMessageSize; // ivar: _maximumMessageSize


-(void)cancelWithCloseCode:(NSInteger)arg0 reason:(id)arg1 ;
-(void)receiveMessageWithCompletionHandler:(id)arg0 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendPingWithPongReceiveHandler:(id)arg0 ;


@end


#endif