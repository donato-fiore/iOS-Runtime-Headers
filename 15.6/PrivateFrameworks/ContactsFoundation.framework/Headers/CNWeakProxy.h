// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNWEAKPROXY_H
#define CNWEAKPROXY_H

@class NSProxy;



@interface CNWeakProxy : NSProxy {
    Class _targetClass;
    id *_weakReference;
}




+(id)weakProxyWithObject:(id)arg0 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(Class)class;
-(NSUInteger)hash;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif