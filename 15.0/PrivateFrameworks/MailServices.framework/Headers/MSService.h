// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSSERVICE_H
#define MSSERVICE_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface MSService : NSObject {
    int _canceled;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_responseListener;
    NSObject<OS_xpc_object> *_responseHandler;
}


@property (readonly, getter=isCanceled) BOOL canceled;


-(BOOL)_unitTestsAreEnabled;
-(id)_connection;
-(id)_createMessageForService:(id)arg0 arguments:(id)arg1 index:(*NSInteger)arg2 ;
-(id)_createServiceOnQueue:(id)arg0 ;
-(id)_generateUnitTestReplyForMethod:(id)arg0 arg:(id)arg1 error:(*id)arg2 ;
-(id)_handleMessageSendFailure:(id)arg0 message:(id)arg1 messageIndex:(NSInteger)arg2 context:(*id)arg3 ;
-(id)init;
-(void)_callServicesMethod:(id)arg0 arguments:(id)arg1 callback:(id)arg2 ;
-(void)_callServicesMethod:(id)arg0 arguments:(id)arg1 replyHandler:(id)arg2 ;
-(void)_generateUnitTestResponsesForResultArray:(id)arg0 ;
-(void)_registerConnection:(id)arg0 onQueue:(id)arg1 ;
-(void)_simulateServicesMethod:(id)arg0 arguments:(id)arg1 callback:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)responseConnection:(id)arg0 handleError:(id)arg1 ;
-(void)responseConnection:(id)arg0 handleResponse:(id)arg1 ;
-(void)setupResponseConnectionOnQueue:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif