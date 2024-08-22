// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKASYNCUNARYOPERATIONEVALUATOR_H
#define PKASYNCUNARYOPERATIONEVALUATOR_H

@class NSMutableArray, NSString;
@protocol PKCancelable;

#import <Foundation/Foundation.h>

#import "PKAsyncOperationState.h"

@interface PKAsyncUnaryOperationEvaluator : NSObject <PKCancelable>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_operations;
    uint8_t _crashed;
    id *_value;
    id *_completion;
    BOOL _started;
    BOOL _escaped;
    BOOL _canceled;
    PKAsyncOperationState *_runningOperationState;
}


@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_performOperation;
-(id)_initWithOperations:(id)arg0 input:(id)arg1 ;
-(id)evaluateWithCompletion:(id)arg0 ;
-(id)init;
-(void)cancel;
-(void)dealloc;


@end


#endif