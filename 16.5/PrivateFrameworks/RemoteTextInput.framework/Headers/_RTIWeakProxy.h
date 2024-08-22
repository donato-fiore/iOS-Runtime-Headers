// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _RTIWEAKPROXY_H
#define _RTIWEAKPROXY_H

@class NSProxy;



@interface _RTIWeakProxy : NSProxy

@property (weak, nonatomic, setter=_setTarget:) id *_target; // ivar: __target


+(id)proxyWithTarget:(id)arg0 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif