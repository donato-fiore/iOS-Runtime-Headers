// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWURLSESSION_H
#define NWURLSESSION_H

@class NSURLSessionConfiguration, NSHashTable, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue, OS_nw_context, NSURLSessionDelegate;

#import <Foundation/Foundation.h>

#import "NWURLSessionDelegateWrapper.h"

@interface NWURLSession : NSObject {
    os_unfair_lock_s lock;
    BOOL _invalidated;
    NSURLSessionConfiguration *_internalConfiguration;
    NSUInteger _nextTaskIdentifier;
    NSHashTable *_weakUnresumedTasks;
    NSMutableSet *_runningTasks;
    NSObject<OS_dispatch_queue> *_queue;
    NWURLSessionDelegateWrapper *_delegateWrapper;
    NSObject<OS_nw_context> *_context;
}


@property (readonly, copy, nonatomic) NSURLSessionConfiguration *configuration;
@property (readonly, nonatomic) NSObject<NSURLSessionDelegate> *delegate;
@property (readonly, nonatomic) NSOperationQueue *delegateQueue;
@property (copy) NSString *sessionDescription; // ivar: _sessionDescription


+(void)_disableAppSSO;
+(void)_strictTrustEvaluate:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)_dataTaskWithRequest:(id)arg0 delegate:(id)arg1 ;
-(id)_dataTaskWithRequest:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
-(id)_dataTaskWithURL:(id)arg0 delegate:(id)arg1 ;
-(id)_dataTaskWithURL:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
-(id)_downloadTaskWithRequest:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
-(id)_downloadTaskWithResumeData:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
-(id)_downloadTaskWithURL:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
-(id)_uploadTaskWithRequest:(id)arg0 fromData:(id)arg1 delegate:(id)arg2 completionHandler:(id)arg3 ;
-(id)_uploadTaskWithRequest:(id)arg0 fromFile:(id)arg1 delegate:(id)arg2 completionHandler:(id)arg3 ;
-(id)dataTaskWithRequest:(id)arg0 ;
-(id)dataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg0 ;
-(id)dataTaskWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)downloadTaskWithRequest:(id)arg0 ;
-(id)downloadTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)downloadTaskWithResumeData:(id)arg0 ;
-(id)downloadTaskWithResumeData:(id)arg0 completionHandler:(id)arg1 ;
-(id)downloadTaskWithURL:(id)arg0 ;
-(id)downloadTaskWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
-(id)streamTaskWithHostName:(id)arg0 port:(NSInteger)arg1 ;
-(id)streamTaskWithNetService:(id)arg0 ;
-(id)uploadTaskWithRequest:(id)arg0 fromData:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg0 fromData:(id)arg1 completionHandler:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg0 fromFile:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg0 fromFile:(id)arg1 completionHandler:(id)arg2 ;
-(id)uploadTaskWithStreamedRequest:(id)arg0 ;
-(id)webSocketTaskWithRequest:(id)arg0 ;
-(id)webSocketTaskWithURL:(id)arg0 ;
-(id)webSocketTaskWithURL:(id)arg0 protocols:(id)arg1 ;
-(void)finishTasksAndInvalidate;
-(void)flushWithCompletionHandler:(id)arg0 ;
-(void)getAllTasksWithCompletionHandler:(id)arg0 ;
-(void)getTasksWithCompletionHandler:(id)arg0 ;
-(void)invalidateAndCancel;
-(void)resetWithCompletionHandler:(id)arg0 ;


@end


#endif