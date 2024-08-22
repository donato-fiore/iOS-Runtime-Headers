// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTXCHANNEL_H
#define DTXCHANNEL_H

@class NSString;
@protocol DTXMessenger, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DTXConnection.h"

@interface DTXChannel : NSObject <DTXMessenger>

 {
    DTXConnection *_strongConnection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    os_unfair_lock_s _handlerGuard;
    __DTXChannelGuarded_private _channelGuarded;
}


@property (readonly, nonatomic) DTXConnection *_connection; // ivar: _connection
@property (readonly, nonatomic) unsigned int channelCode; // ivar: _channelCode
@property int compressionTypeHint; // ivar: _compressionTypeHint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isCanceled; // ivar: _canceled
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;


-(BOOL)sendMessageAsync:(id)arg0 replyHandler:(id)arg1 ;
-(id)initWithConnection:(id)arg0 channelIdentifier:(unsigned int)arg1 label:(id)arg2 ;
-(struct ? )_callbackSnapshot;
-(void)_scheduleBlock:(id)arg0 ;
-(void)_scheduleMessage:(id)arg0 tracker:(id)arg1 withHandler:(id)arg2 ;
-(void)_setDispatchTarget:(id)arg0 queue:(id)arg1 ;
-(void)_setDispatchValidator:(id)arg0 ;
-(void)cancel;
-(void)registerDisconnectHandler:(id)arg0 ;
-(void)resume;
-(void)sendControlAsync:(id)arg0 replyHandler:(id)arg1 ;
-(void)sendControlSync:(id)arg0 replyHandler:(id)arg1 ;
-(void)sendMessage:(id)arg0 replyHandler:(id)arg1 ;
-(void)sendMessageSync:(id)arg0 replyHandler:(id)arg1 ;
-(void)setDispatchTarget:(id)arg0 ;
-(void)setMessageHandler:(id)arg0 ;
-(void)suspend;


@end


#endif