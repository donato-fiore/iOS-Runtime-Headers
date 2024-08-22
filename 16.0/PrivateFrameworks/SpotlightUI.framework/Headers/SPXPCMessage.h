// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPXPCMESSAGE_H
#define SPXPCMESSAGE_H

@class NSDictionary, NSString;
@protocol OS_xpc_object, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "SPXPCConnection.h"

@interface SPXPCMessage : NSObject {
    SPXPCConnection *_receivingConnection;
    NSObject<OS_xpc_object> *_x_reply_connection;
    NSObject<OS_xpc_object> *_x_message;
    NSObject<OS_xpc_object> *_x_rootObject;
    NSObject<OS_xpc_object> *_x_Objects;
    NSObject<OS_xpc_object> *_x_reply;
    NSObject<OS_xpc_object> *_x_feedbackData;
    NSObject<OS_os_transaction> *_replyTransaction;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *feedbackData;
@property (copy, nonatomic) NSDictionary *info; // ivar: _info
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(BOOL)needsReply;
-(id)_createXPCMessage;
-(id)_initWithXPCMessage:(id)arg0 onConnection:(id)arg1 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(id)objectsOfClasses:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)rootObjectOfClasses:(id)arg0 ;
-(id)rootObjectOfClassesForFeedback:(id)arg0 ;
-(void)sendReply:(id)arg0 ;
-(void)setObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setRootObject:(id)arg0 ;
-(void)setRootObjectForFeedback:(id)arg0 ;


@end


#endif