// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRXPCCONNECTION_H
#define MRXPCCONNECTION_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface MRXPCConnection : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_customXpcHandlers;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *messageHandler; // ivar: _messageHandler
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned int uid;


-(id)initWithConnection:(id)arg0 queue:(id)arg1 ;
-(id)sendSyncMessage:(id)arg0 error:(*id)arg1 ;
// -(void)addCustomXPCHandler:(id)arg0 forKey:(unk)arg1  ;
-(void)dealloc;
-(void)removeCustomXPCHandler:(NSUInteger)arg0 ;
-(void)sendMessage:(id)arg0 queue:(id)arg1 reply:(id)arg2 ;
-(void)sendMessageWithType:(NSUInteger)arg0 queue:(id)arg1 reply:(id)arg2 ;


@end


#endif