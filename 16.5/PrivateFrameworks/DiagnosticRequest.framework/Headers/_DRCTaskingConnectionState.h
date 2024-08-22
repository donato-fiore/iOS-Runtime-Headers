// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DRCTASKINGCONNECTIONSTATE_H
#define _DRCTASKINGCONNECTIONSTATE_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _DRCTaskingConnectionState : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (readonly, nonatomic) BOOL isClosed; // ivar: _isClosed


+(id)sharedConnectionState;
-(BOOL)sendMessage:(id)arg0 ;
-(id)init;
-(id)sendMessageWithReplySync:(id)arg0 ;
-(void)cleanupState;


@end


#endif