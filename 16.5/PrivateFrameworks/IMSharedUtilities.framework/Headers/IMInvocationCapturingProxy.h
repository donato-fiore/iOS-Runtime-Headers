// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMINVOCATIONCAPTURINGPROXY_H
#define IMINVOCATIONCAPTURINGPROXY_H

@class NSProxy, Protocol;



@interface IMInvocationCapturingProxy : NSProxy

@property (readonly, copy, nonatomic) id *forwardingHandler; // ivar: _forwardingHandler
@property (readonly, nonatomic) Protocol *protocol; // ivar: _protocol


-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithProtocol:(id)arg0 forwardingHandler:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif