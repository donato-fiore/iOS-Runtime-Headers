// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMPROXYOBJECT_H
#define HMPROXYOBJECT_H

@class NSProxy;



@interface HMProxyObject : NSProxy



-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)isMemberOfClass:(Class)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(Class)class;
-(Class)superclass;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)performSelector:(SEL)arg0 ;
-(id)performSelector:(SEL)arg0 withObject:(id)arg1 ;
-(id)performSelector:(SEL)arg0 withObject:(id)arg1 withObject:(id)arg2 ;
-(id)self;
-(void)doesNotRecognizeSelector:(SEL)arg0 ;


@end


#endif