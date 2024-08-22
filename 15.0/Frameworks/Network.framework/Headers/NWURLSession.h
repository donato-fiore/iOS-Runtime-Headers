// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWURLSESSION_H
#define NWURLSESSION_H

@class NSURLSessionConfiguration, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue, NSURLSessionDelegate;

#import <Foundation/Foundation.h>

#import "NWURLSessionDelegateWrapper.h"

@interface NWURLSession : NSObject {
    uint8_t taskIdentifier;
    NSURLSessionConfiguration *_internalConfiguration;
    NSMutableSet *_dataTasks;
    NSMutableSet *_uploadTasks;
    NSMutableSet *_downloadTasks;
    NSMutableSet *_streamTasks;
    NSMutableSet *_webSocketTasks;
    NSObject<OS_dispatch_queue> *_queue;
    NWURLSessionDelegateWrapper *_delegateWrapper;
}


@property (readonly, copy, nonatomic) NSURLSessionConfiguration *configuration;
@property (readonly, nonatomic) NSObject<NSURLSessionDelegate> *delegate;
@property (readonly, nonatomic) NSOperationQueue *delegateQueue;
@property (copy) NSString *sessionDescription; // ivar: _sessionDescription


+(void)_disableAppSSO;
+(void)_strictTrustEvaluate:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
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