// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSDAEMONCONTROLLERFORWARDER_H
#define IDSDAEMONCONTROLLERFORWARDER_H

@class NSProxy, NSProtocolChecker;
@protocol OS_dispatch_queue;



@interface IDSDaemonControllerForwarder : NSProxy

@property (readonly, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // ivar: _ivarQueue
@property (nonatomic) int priority; // ivar: _priority
@property (readonly, nonatomic) NSProtocolChecker *protocol; // ivar: _protocol
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteMessageQueue; // ivar: _remoteMessageQueue


-(id)initWithProtocol:(id)arg0 ivarQueue:(id)arg1 remoteMessageQueue:(id)arg2 ;
-(id)initWithProtocol:(id)arg0 ivarQueue:(id)arg1 remoteMessageQueue:(id)arg2 completion:(id)arg3 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif