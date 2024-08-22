// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCCOMPOUNDOPERATION_H
#define HDCLOUDSYNCCOMPOUNDOPERATION_H

@class NSMutableArray, NSArray, NSString;


#import "HDCloudSyncOperation.h"

@interface HDCloudSyncCompoundOperation : HDCloudSyncOperation {
    NSMutableArray *_operations;
    os_unfair_lock_s _lock;
    HDCloudSyncOperation *_currentOperation;
    NSArray *_remainingOperations;
    atomic_flag _runningOperations;
    NSMutableArray *_operationErrors;
}


@property (readonly) BOOL continueOnSubOperationError; // ivar: _continueOnSubOperationError
@property (readonly) BOOL hasEncounteredSubOperationError;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy) NSArray *operations;
@property (copy) id *preparationHandler; // ivar: _preparationHandler


+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
-(BOOL)finishWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(id)description;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 name:(id)arg2 continueOnSubOperationError:(BOOL)arg3 ;
-(void)addOperation:(id)arg0 transitionHandler:(id)arg1 ;
-(void)addOperationOfClass:(Class)arg0 transitionHandler:(id)arg1 ;
-(void)main;
-(void)skip;
-(void)start;


@end


#endif