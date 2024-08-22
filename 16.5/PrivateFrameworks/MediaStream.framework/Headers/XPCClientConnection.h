// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XPCCLIENTCONNECTION_H
#define XPCCLIENTCONNECTION_H

@class NSString;
@protocol OS_xpc_object, OS_dispatch_queue, XPCClientConnectionDelegate;

#import <Foundation/Foundation.h>


@interface XPCClientConnection : NSObject {
    NSString *_serviceName;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSObject<XPCClientConnectionDelegate> *delegate; // ivar: _delegate


-(id)debugDescription;
-(id)initWithServiceName:(id)arg0 delegate:(id)arg1 ;
-(void)_handleConnectionEvent:(id)arg0 ;
-(void)_handleIncomingMessage:(id)arg0 ;
// -(void)_reallySendMessage:(id)arg0 handler:(id)arg1 sequence:(unk)arg2 retryCount:(NSUInteger)arg3  ;
-(void)sendMessage:(id)arg0 withHandler:(id)arg1 ;
-(void)shutDownCompletionBlock:(id)arg0 ;


@end


#endif