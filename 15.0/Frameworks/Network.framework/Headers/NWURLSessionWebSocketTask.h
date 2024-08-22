// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWURLSESSIONWEBSOCKETTASK_H
#define NWURLSESSIONWEBSOCKETTASK_H

@class NSData;


#import "NWURLSessionTask.h"

@interface NWURLSessionWebSocketTask : NWURLSessionTask

@property (readonly, nonatomic) NSInteger closeCode; // ivar: _closeCode
@property (readonly, copy, nonatomic) NSData *closeReason; // ivar: _closeReason
@property (nonatomic) NSInteger maximumMessageSize; // ivar: _maximumMessageSize


-(BOOL)isKindOfClass:(Class)arg0 ;
-(void)cancelWithCloseCode:(NSInteger)arg0 reason:(id)arg1 ;
-(void)receiveMessageWithCompletionHandler:(id)arg0 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendPingWithPongReceiveHandler:(id)arg0 ;


@end


#endif