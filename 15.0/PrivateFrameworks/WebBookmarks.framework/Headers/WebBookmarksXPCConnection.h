// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBBOOKMARKSXPCCONNECTION_H
#define WEBBOOKMARKSXPCCONNECTION_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object, WebBookmarksXPCConnectionDelegate;

#import <Foundation/Foundation.h>


@interface WebBookmarksXPCConnection : NSObject {
    NSMutableDictionary *_messageHandlers;
    NSMutableDictionary *_entitlementLookupCache;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (nonatomic) NSObject<WebBookmarksXPCConnectionDelegate> *delegate; // ivar: _delegate


-(BOOL)hasBoolEntitlement:(id)arg0 ;
-(id)initClientForMachService:(char *)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(id)messageWithName:(char *)arg0 ;
-(void)_handleMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 withReplyHandler:(id)arg1 ;
// -(void)setHandler:(id)arg0 forMessageNamed:(unk)arg1  ;
-(void)setMessageHandlers:(id)arg0 ;


@end


#endif