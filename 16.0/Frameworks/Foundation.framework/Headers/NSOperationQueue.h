// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSOPERATIONQUEUE_H
#define NSOPERATIONQUEUE_H

@protocol NSProgressReporting, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSProgress.h"

@interface NSOperationQueue : NSObject <NSProgressReporting>

 {
    ? _iqp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger maxConcurrentOperationCount;
@property (copy) NSString *name;
@property (readonly) NSProgress *progress;
@property NSInteger qualityOfService;
@property (readonly) Class superclass;
@property (getter=isSuspended) BOOL suspended;
@property NSObject<OS_dispatch_queue> *underlyingQueue;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)currentQueue;
+(id)mainQueue;
-(BOOL)overcommitsOperations;
-(NSUInteger)operationCount;
-(id)__graphDescription;
-(id)init;
-(id)operations;
-(void)_fc_addUncancellableOperationForReactorID:(id)arg0 block:(id)arg1 ;
-(void)_fc_addUncancellableOperationWithBlock:(id)arg0 ;
-(void)addBarrierBlock:(id)arg0 ;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)addOperation:(id)arg0 ;
-(void)addOperationWithBlock:(id)arg0 ;
-(void)addOperations:(id)arg0 waitUntilFinished:(BOOL)arg1 ;
-(void)cancelAllOperations;
-(void)dealloc;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setOvercommitsOperations:(BOOL)arg0 ;
-(void)waitUntilAllOperationsAreFinished;


@end


#endif