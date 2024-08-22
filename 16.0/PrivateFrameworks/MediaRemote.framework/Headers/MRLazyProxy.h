// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRLAZYPROXY_H
#define MRLAZYPROXY_H

@class NSProxy, Protocol;



@interface MRLazyProxy : NSProxy

@property (readonly, nonatomic) id *objectCallback; // ivar: _objectCallback
@property (readonly, nonatomic) Protocol *protocol; // ivar: _protocol


+(id)proxyWithProtocol:(id)arg0 objectCallback:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif