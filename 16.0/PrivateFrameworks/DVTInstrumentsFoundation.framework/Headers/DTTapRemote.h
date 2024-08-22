// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTTAPREMOTE_H
#define DTTAPREMOTE_H

@class DTXConnection, DTXChannel;
@protocol OS_dispatch_queue;


#import "DTTap.h"
#import "DTTapMessageHandler.h"

@interface DTTapRemote : DTTap {
    DTXConnection *_connection;
    DTXChannel *_channel;
    NSObject<OS_dispatch_queue> *_unprocessedMessageQueue;
    BOOL _connectionEnabled;
}


@property (readonly, retain, nonatomic) DTTapMessageHandler *messageHandler; // ivar: _messageHandler


-(id)_fetchDataForReason:(NSUInteger)arg0 ;
-(id)initWithConfig:(id)arg0 memoHandler:(id)arg1 messageHandler:(id)arg2 connection:(id)arg3 ;
-(void)_pause;
-(void)_start;
-(void)_stop;
-(void)_unpause;
-(void)messageReceived:(id)arg0 ;


@end


#endif