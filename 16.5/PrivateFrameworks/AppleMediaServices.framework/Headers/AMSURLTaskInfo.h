// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSURLTASKINFO_H
#define AMSURLTASKINFO_H

@class NSMutableData, NSMutableSet, NSData, NSError, NSURLSessionTaskMetrics, NSURLResponse, NSSet, NSURLSessionTask;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSContiguousActionPerformer.h"
#import "AMSURLRequestProperties.h"
#import "AMSURLAction.h"
#import "AMSURLSession.h"

@interface AMSURLTaskInfo : NSObject {
    NSMutableData *_data;
    NSMutableSet *_retryIdentifiers;
    BOOL _performingBlockWithDataAccess;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) AMSContiguousActionPerformer *contiguousActionPerformer; // ivar: _contiguousActionPerformer
@property (readonly, nonatomic) NSData *data;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics; // ivar: _metrics
@property (nonatomic) NSUInteger previousAuthorizationCredentialSource; // ivar: _previousAuthorizationCredentialSource
@property (retain, nonatomic) AMSURLRequestProperties *properties; // ivar: _properties
@property (retain, nonatomic) AMSURLAction *receivedAction; // ivar: _receivedAction
@property (retain, nonatomic) NSURLResponse *response; // ivar: _response
@property (nonatomic) NSInteger retryCount; // ivar: _retryCount
@property (readonly, nonatomic) NSSet *retryIdentifiers;
@property (retain, nonatomic) AMSURLSession *session; // ivar: _session
@property (nonatomic) NSUInteger signpostID; // ivar: _signpostID
@property (readonly, nonatomic) NSURLSessionTask *task; // ivar: _task
@property (readonly, nonatomic) os_unfair_recursive_lock_s taskLock; // ivar: _taskLock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // ivar: _taskQueue


+(id)createTaskInfoForTask:(id)arg0 ;
+(id)sharedTaskQueue;
+(id)sharedTaskStore;
+(id)taskInfoForTask:(id)arg0 ;
+(void)removeTaskInfoForTask:(id)arg0 ;
-(NSUInteger)startContiguousAsyncActionWithInitialBlock:(id)arg0 ;
-(NSUInteger)startContiguousAsyncActionWithInitialDataBlock:(id)arg0 ;
-(id)createMetricsContextForDecodedObject:(id)arg0 ;
-(id)initWithTask:(id)arg0 ;
-(void)_performDataAccessUsingBlock:(id)arg0 ;
-(void)addRetryIdentifier:(id)arg0 ;
-(void)appendData:(id)arg0 ;
-(void)assertHasExclusiveAccess;
-(void)assertIsOnPrivateQueue;
-(void)continueContiguousAsyncActionWithIdentifier:(NSUInteger)arg0 block:(id)arg1 ;
-(void)finishContiguousAsyncActionWithIdentifier:(NSUInteger)arg0 ;
-(void)migrateFromTaskInfo:(id)arg0 ;
-(void)performAsyncBlock:(id)arg0 ;
-(void)performAsyncBlockWithData:(id)arg0 ;
-(void)performSyncBlock:(id)arg0 ;
-(void)performSyncBlockWithExclusiveAccess:(id)arg0 ;
-(void)setAccount:(id)arg0 ;


@end


#endif