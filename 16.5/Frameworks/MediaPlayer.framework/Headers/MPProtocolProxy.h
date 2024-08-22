// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPPROTOCOLPROXY_H
#define MPPROTOCOLPROXY_H

@class NSProxy, NSHashTable, Protocol;



@interface MPProtocolProxy : NSProxy

@property (retain, nonatomic) NSHashTable *objects; // ivar: _objects
@property (retain, nonatomic) Protocol *protocol; // ivar: _protocol


+(id)proxyForObject:(id)arg0 protocol:(id)arg1 ;
+(id)proxyForObjects:(id)arg0 protocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif