// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPMIDDLEWARECHAINBUILDERPROXY_H
#define _MPMIDDLEWARECHAINBUILDERPROXY_H

@class NSProxy, Protocol;



@interface _MPMiddlewareChainBuilderProxy : NSProxy {
    Protocol *_protocol;
}




+(id)allocWithProtocol:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif