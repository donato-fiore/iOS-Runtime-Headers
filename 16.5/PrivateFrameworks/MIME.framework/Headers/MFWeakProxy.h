// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFWEAKPROXY_H
#define MFWEAKPROXY_H

@class NSProxy;


#import "MFWeakReferenceHolder.h"

@interface MFWeakProxy : NSProxy {
    Class _objectClass;
    MFWeakReferenceHolder *_weakRef;
    NSUInteger _hash;
}




+(id)weakProxyForObject:(id)arg0 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isProxy;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(Class)class;
-(Class)superclass;
-(NSUInteger)hash;
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)self;
-(void)dealloc;
-(void)doesNotRecognizeSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif