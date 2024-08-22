// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRINVOCATIONCHAIN_H
#define CRINVOCATIONCHAIN_H

@class NSPointerArray;
@protocol OS_dispatch_queue, CRInvocationChainDelegate;

#import <Foundation/Foundation.h>


@interface CRInvocationChain : NSObject {
    NSObject<OS_dispatch_queue> *_chainedObjectsAccessQueue;
}


@property (retain, nonatomic, getter=_chainedObjects, setter=_setChainedObjects:) NSPointerArray *chainedObjects; // ivar: _chainedObjects
@property (weak, nonatomic) NSObject<CRInvocationChainDelegate> *delegate; // ivar: _delegate


-(BOOL)_isEligibleForSelector:(SEL)arg0 ;
-(BOOL)_respondsToSelector:(SEL)arg0 ;
-(BOOL)isEligibleForSelector:(SEL)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_methodSignatureForSelector:(SEL)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_accessChainedObjectsSafely:(id)arg0 ;
-(void)_addChainedObject:(id)arg0 ;
-(void)_enumerateChainedObjectsUsingBlock:(id)arg0 ;
-(void)_forwardInvocation:(id)arg0 ;
-(void)addChainedObject:(id)arg0 ;
-(void)enumerateChainedObjectsUsingBlock:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif