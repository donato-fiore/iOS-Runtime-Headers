// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSUNIQUEEXECUTIONQUEUE_H
#define SSUNIQUEEXECUTIONQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSPromise.h"

@interface SSUniqueExecutionQueue : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callBlockQueue; // ivar: _callBlockQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeBlockQueue; // ivar: _executeBlockQueue
@property (retain, nonatomic) SSPromise *promise; // ivar: _promise
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *promiseAccessQueue; // ivar: _promiseAccessQueue


-(id)initWithBlock:(id)arg0 ;
-(void)addCompletionBlock:(id)arg0 ;


@end


#endif