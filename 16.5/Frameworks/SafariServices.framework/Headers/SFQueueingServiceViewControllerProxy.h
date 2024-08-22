// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFQUEUEINGSERVICEVIEWCONTROLLERPROXY_H
#define SFQUEUEINGSERVICEVIEWCONTROLLERPROXY_H

@class NSProxy, NSMutableArray, Protocol;
@protocol SFQueueingServiceViewControllerProxyDelegate;



@interface SFQueueingServiceViewControllerProxy : NSProxy {
    NSMutableArray *_queuedInvocations;
    Protocol *_protocol;
}


@property (weak, nonatomic) NSObject<SFQueueingServiceViewControllerProxyDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) id *target; // ivar: _target


-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithProtocol:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif