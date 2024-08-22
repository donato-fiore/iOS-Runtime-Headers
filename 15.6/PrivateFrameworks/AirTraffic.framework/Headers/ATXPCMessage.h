// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPCMESSAGE_H
#define ATXPCMESSAGE_H

@class NSDictionary, NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "ATXPCConnection.h"

@interface ATXPCMessage : NSObject {
    ATXPCConnection *_receivingConnection;
    NSObject<OS_xpc_object> *_x_reply_connection;
    NSObject<OS_xpc_object> *_x_reply;
}


@property (copy, nonatomic) NSDictionary *info; // ivar: _info
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(BOOL)needsReply;
-(id)_createXPCMessage;
-(id)_initWithXPCMessage:(id)arg0 onConnection:(id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(void)dealloc;
-(void)sendReply:(id)arg0 ;


@end


#endif