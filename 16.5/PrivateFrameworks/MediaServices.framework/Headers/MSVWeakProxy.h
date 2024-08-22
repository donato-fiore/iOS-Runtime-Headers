// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVWEAKPROXY_H
#define MSVWEAKPROXY_H

@class NSProxy, Protocol;



@interface MSVWeakProxy : NSProxy

@property (readonly, weak, nonatomic) id *object; // ivar: _object
@property (readonly, nonatomic) Protocol *protocol; // ivar: _protocol


+(id)proxyWithObject:(id)arg0 protocol:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif