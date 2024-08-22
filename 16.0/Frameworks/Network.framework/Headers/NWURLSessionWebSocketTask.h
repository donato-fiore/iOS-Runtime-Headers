// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWURLSESSIONWEBSOCKETTASK_H
#define NWURLSESSIONWEBSOCKETTASK_H

@class NSData, NSURLResponse, NSMutableArray;
@protocol OS_nw_connection;


#import "NWURLSessionTask.h"

@interface NWURLSessionWebSocketTask : NWURLSessionTask {
    BOOL _receiving;
    unsigned short _pingSeed;
    NSInteger _closeCode;
    NSData *_closeReason;
    NSURLResponse *_storedResponse;
    NSObject<OS_nw_connection> *_upgradedConnection;
    NSMutableArray *_pendingWork;
    NSMutableArray *_pendingReceiveCompletionHandlers;
}


@property (readonly, nonatomic) NSInteger closeCode;
@property (readonly, copy, nonatomic) NSData *closeReason;
@property (nonatomic) NSInteger maximumMessageSize; // ivar: _maximumMessageSize


-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)response;
-(void)_sendCloseCode:(NSInteger)arg0 reason:(id)arg1 ;
-(void)cancelWithCloseCode:(NSInteger)arg0 reason:(id)arg1 ;
-(void)completeTaskWithError:(id)arg0 ;
-(void)receiveMessageWithCompletionHandler:(id)arg0 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendPingWithPongReceiveHandler:(id)arg0 ;
-(void)startNextLoad;


@end


#endif