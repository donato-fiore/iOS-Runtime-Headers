// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYDCLIENT_H
#define SYDCLIENT_H

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface SYDClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSString *_bundleIdentifier;
    NSString *_storeIdentifier;
    BOOL _additionalSource;
}




-(id)_newMessageWithName:(id)arg0 userInfo:(id)arg1 ;
-(id)_sendMessageWithReplySync:(id)arg0 ;
-(id)initWithQueue:(id)arg0 bundleIdentifier:(struct __CFString *)arg1 storeIdentifier:(struct __CFString *)arg2 ;
-(id)initWithQueue:(id)arg0 bundleIdentifier:(struct __CFString *)arg1 storeIdentifier:(struct __CFString *)arg2 additionalSource:(BOOL)arg3 ;
-(id)sendMessageWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)_createConnectionIfNecessary;
-(void)_resetConnection;
-(void)_sendMessage:(id)arg0 replyHandler:(id)arg1 ;
-(void)_sendMessageNoReply:(id)arg0 ;
-(void)sendMessageWithName:(id)arg0 ;
-(void)sendMessageWithName:(id)arg0 replyHandler:(id)arg1 ;
-(void)sendMessageWithName:(id)arg0 userInfo:(id)arg1 replyHandler:(id)arg2 ;
-(void)shutdown;


@end


#endif