// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXIPCOUTSTANDINGASYNCREQUEST_H
#define AXIPCOUTSTANDINGASYNCREQUEST_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXIPCOutstandingAsyncRequest : NSObject

@property (readonly, nonatomic) id *replyHandler; // ivar: _replyHandler
@property (readonly, nonatomic) *__CFRunLoopSource replyMachPortSource; // ivar: _replyMachPortSource
@property (readonly, nonatomic) unsigned int replyPort; // ivar: _replyPort
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // ivar: _replyQueue


+(id)lookupByPort:(unsigned int)arg0 ;
+(void)initialize;
+(void)registerOutstandingRequest:(id)arg0 ;
+(void)unregisterByPort:(unsigned int)arg0 ;
-(id)initWithReplyPort:(unsigned int)arg0 handlerQueue:(id)arg1 handler:(id)arg2 ;
-(void)_responseReceived:(id)arg0 ;
-(void)dealloc;
-(void)initialSendAborted;
-(void)rawResponseReceived:(id)arg0 ;
-(void)registerAndListenForResponse;
-(void)sendOnceRightDestroyed;


@end


#endif