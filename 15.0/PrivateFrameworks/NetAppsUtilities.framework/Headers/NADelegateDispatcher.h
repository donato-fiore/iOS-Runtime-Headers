// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NADELEGATEDISPATCHER_H
#define NADELEGATEDISPATCHER_H

@class NSMapTable, NSHashTable, NSArray, Protocol;

#import <Foundation/Foundation.h>

#import "NADelegateMethodLogSettings.h"

@interface NADelegateDispatcher : NSObject

@property (readonly, nonatomic) NSMapTable *cachedMethodMetadataBySelector; // ivar: _cachedMethodMetadataBySelector
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NADelegateMethodLogSettings *logSettings; // ivar: _logSettings
@property (readonly, nonatomic) NSHashTable *observerTable; // ivar: _observerTable
@property (readonly, nonatomic) NSArray *observers;
@property (retain, nonatomic) NSArray *overrideObservers; // ivar: _overrideObservers
@property (readonly, nonatomic) Protocol *protocol; // ivar: _protocol
@property (readonly, nonatomic) id *proxy;


+(id)_findMethodSignatureForSelector:(SEL)arg0 inProtocol:(id)arg1 ;
+(id)dispatcherWithProtocol:(id)arg0 logSettings:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_descriptionForArgument:(id)arg0 index:(NSUInteger)arg1 format:(BOOL)arg2 metadata:(id)arg3 ;
-(id)_effectiveObservers;
-(id)_lock_methodMetadataForSelector:(SEL)arg0 ;
-(id)_methodMetadataForSelector:(SEL)arg0 ;
-(id)_trampolineBlockForSelector:(SEL)arg0 withMethodSignature:(id)arg1 ;
-(id)initWithProtocol:(id)arg0 logSettings:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_logEventForInvocation:(id)arg0 metadata:(id)arg1 ;
-(void)_logEventForSelector:(SEL)arg0 metadata:(id)arg1 ;
-(void)_logEventForSelector:(SEL)arg0 metadata:(id)arg1 formatArgs:(BOOL)arg2 arg0:(id)arg3 ;
-(void)_logEventForSelector:(SEL)arg0 metadata:(id)arg1 formatArgs:(BOOL)arg2 arg0:(id)arg3 arg1:(id)arg4 ;
-(void)_logEventForSelector:(SEL)arg0 metadata:(id)arg1 formatArgs:(BOOL)arg2 arg0:(id)arg3 arg1:(id)arg4 arg2:(id)arg5 ;
-(void)_logEventForSelector:(SEL)arg0 metadata:(id)arg1 formatArgs:(BOOL)arg2 arg0:(id)arg3 arg1:(id)arg4 arg2:(id)arg5 arg3:(id)arg6 ;
-(void)_logEventForSelector:(SEL)arg0 metadata:(id)arg1 formatArgs:(BOOL)arg2 arg0:(id)arg3 arg1:(id)arg4 arg2:(id)arg5 arg3:(id)arg6 arg4:(id)arg7 ;
-(void)_logEventForSelector:(SEL)arg0 metadata:(id)arg1 formatArgs:(BOOL)arg2 arg0:(id)arg3 arg1:(id)arg4 arg2:(id)arg5 arg3:(id)arg6 arg4:(id)arg7 arg5:(id)arg8 ;
-(void)addObserver:(id)arg0 ;
-(void)dispatchMessageExcludingSender:(id)arg0 usingBlock:(id)arg1 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)registerCustomHandlerForSelector:(SEL)arg0 handler:(id)arg1 ;
-(void)registerCustomLogSettings:(id)arg0 forSelector:(SEL)arg1 argumentIndex:(NSUInteger)arg2 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif