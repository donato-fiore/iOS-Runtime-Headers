// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLUPDATETASK_H
#define MLUPDATETASK_H

@class NSString, MLModel<MLUpdatable>, NSURL;
@protocol MLTaskStateTransitionDelegate, MLBatchProvider, OS_dispatch_queue;


#import "MLTask.h"
#import "MLUpdateProgressHandlers.h"

@interface MLUpdateTask : MLTask <MLTaskStateTransitionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MLUpdateProgressHandlers *progressHandlers; // ivar: _progressHandlers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MLBatchProvider> *trainingData; // ivar: _trainingData
@property (readonly, nonatomic) MLModel<MLUpdatable> *updatableModel; // ivar: _updatableModel
@property (readonly, nonatomic) NSURL *updatableModelURL; // ivar: _updatableModelURL
@property (nonatomic) BOOL updateHasStarted; // ivar: _updateHasStarted
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // ivar: _updateQueue


+(BOOL)updateModelAtURL:(id)arg0 trainingData:(id)arg1 configuration:(id)arg2 writeToURL:(id)arg3 error:(*id)arg4 ;
// +(id)updateTaskForModelAtURL:(id)arg0 trainingData:(id)arg1 completionHandler:(id)arg2 error:(unk)arg3  ;
// +(id)updateTaskForModelAtURL:(id)arg0 trainingData:(id)arg1 configuration:(id)arg2 completionHandler:(id)arg3 error:(unk)arg4  ;
+(id)updateTaskForModelAtURL:(id)arg0 trainingData:(id)arg1 configuration:(id)arg2 progressHandlers:(id)arg3 error:(*id)arg4 ;
+(id)updateTaskForModelAtURL:(id)arg0 trainingData:(id)arg1 progressHandlers:(id)arg2 error:(*id)arg3 ;
-(id)_completionHandlerBlock:(SEL)arg0 ;
-(id)_progressHandlerBlock:(SEL)arg0 ;
-(id)initWithModelAtURL:(id)arg0 trainingData:(id)arg1 configuration:(id)arg2 progressHandlers:(id)arg3 error:(*id)arg4 ;
-(void)_invokeProgressHandlerForContext:(id)arg0 ;
-(void)onCancellation;
-(void)onCompletionWithTaskContext:(id)arg0 ;
-(void)onFailureWithTaskContext:(id)arg0 ;
-(void)onResumptionWithTaskContext:(id)arg0 ;
-(void)onSuspensionWithTaskContext:(id)arg0 ;
-(void)resumeWithParameters:(id)arg0 ;


@end


#endif