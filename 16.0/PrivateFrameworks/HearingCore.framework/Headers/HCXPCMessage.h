// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HCXPCMESSAGE_H
#define HCXPCMESSAGE_H

@class NSError, NSDictionary;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "HCXPCClient.h"

@interface HCXPCMessage : NSObject

@property (weak, nonatomic) HCXPCClient *client; // ivar: _client
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSDictionary *payload; // ivar: _payload
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage; // ivar: _xpcMessage


+(id)messageWithPayload:(id)arg0 ;
+(id)messageWithPayload:(id)arg0 xpcMessage:(id)arg1 andClient:(id)arg2 ;
-(BOOL)hasEntitlement:(id)arg0 ;
-(id)description;
-(id)initWithPayload:(id)arg0 ;
-(id)replyMessageWithPayload:(id)arg0 ;
-(void)dealloc;


@end


#endif