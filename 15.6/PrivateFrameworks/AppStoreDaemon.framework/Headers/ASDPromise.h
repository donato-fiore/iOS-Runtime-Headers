// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDPROMISE_H
#define ASDPROMISE_H

@class NSMutableArray, NSRecursiveLock;

#import <Foundation/Foundation.h>

#import "ASDPromiseResult.h"

@interface ASDPromise : NSObject {
    NSMutableArray *_observers;
    NSInteger _state;
    NSRecursiveLock *_stateLock;
}


@property (readonly, getter=isResolved) BOOL resolved;
@property (readonly) ASDPromiseResult *result; // ivar: _result


+(id)onScheduler:(id)arg0 usingBlock:(id)arg1 ;
+(id)promiseWithError:(id)arg0 ;
+(id)promiseWithValue:(id)arg0 ;
-(id)completionHandlerAdapter:(SEL)arg0 ;
// -(id)flatMapUsingTransformer:(id)arg0 onScheduler:(unk)arg1  ;
-(id)init;
-(id)initOnScheduler:(id)arg0 withExecutor:(id)arg1 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithState:(NSInteger)arg0 result:(id)arg1 ;
-(id)initWithValue:(id)arg0 ;
-(id)joinWithPromise:(id)arg0 ;
// -(id)mapUsingTransformer:(id)arg0 onScheduler:(unk)arg1  ;
// -(void)_invokeExecutor:(id)arg0 onScheduler:(unk)arg1  ;
// -(void)alwaysPerform:(id)arg0 onScheduler:(unk)arg1  ;
// -(void)catchError:(id)arg0 onScheduler:(unk)arg1  ;
-(void)rejectWithError:(id)arg0 ;
-(void)resolveWithValue:(id)arg0 ;
// -(void)thenPerform:(id)arg0 orCatchError:(unk)arg1 onScheduler:(id)arg2  ;


@end


#endif