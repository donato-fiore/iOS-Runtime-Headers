// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTOBJECTINVOCATIONBATCH_H
#define SUSCRIPTOBJECTINVOCATIONBATCH_H

@class NSMutableArray, NSLock;

#import <Foundation/Foundation.h>

#import "SUScriptObject.h"

@interface SUScriptObjectInvocationBatch : NSObject {
    NSMutableArray *_invocationQueue;
    NSLock *_lock;
    *__CFDictionary _proxies;
    SUScriptObject *_rootObject;
}


@property SUScriptObject *rootObject;


-(id)batchProxyForObject:(id)arg0 ;
-(id)copyQueuedInvocationsForObject:(id)arg0 ;
-(id)init;
-(void)_delayedDequeueInvocations;
-(void)checkOutBatchTarget:(id)arg0 ;
-(void)dealloc;
-(void)dequeueInvocations;
-(void)enqueueInvocation:(id)arg0 ;


@end


#endif