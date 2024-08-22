// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NDANALYTICSUPLOADSCHEDULER_H
#define NDANALYTICSUPLOADSCHEDULER_H

@class NSURLSession, FCBalancedCounter, NSOperationQueue, NSString, FCDateRange, NFMutexLock, FCAsyncSerialQueue;
@protocol FCOperationThrottlerDelegate, NSURLSessionTaskDelegate, NDAnalyticsUploadSchedulerDelegate, FCOperationThrottler;

#import <Foundation/Foundation.h>


@interface NDAnalyticsUploadScheduler : NSObject <FCOperationThrottlerDelegate, NSURLSessionTaskDelegate>



@property (retain, nonatomic) NSURLSession *backgroundSession; // ivar: _backgroundSession
@property (retain, nonatomic) FCBalancedCounter *backgroundSessionLaunchEventCounter; // ivar: _backgroundSessionLaunchEventCounter
@property (retain, nonatomic) NSOperationQueue *backgroundSessionQueue; // ivar: _backgroundSessionQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NDAnalyticsUploadSchedulerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) FCDateRange *deliveryWindow; // ivar: _deliveryWindow
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NFMutexLock *lock; // ivar: _lock
@property (retain, nonatomic) NSObject<FCOperationThrottler> *schedulingAndForegroundUploadThrottler; // ivar: _schedulingAndForegroundUploadThrottler
@property (readonly) Class superclass;
@property (retain, nonatomic) FCAsyncSerialQueue *uploadQueue; // ivar: _uploadQueue


-(id)init;
-(id)initWithURLSessionQueue:(id)arg0 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willBeginDelayedRequest:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg0 ;
-(void)_scheduleBackgroundUploadInWindow:(id)arg0 ;
-(void)_uploadWithCompletion:(id)arg0 ;
-(void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)operationThrottler:(id)arg0 performAsyncOperationWithCompletion:(id)arg1 ;
-(void)scheduleUploadInWindow:(id)arg0 withForegroundUploadCompletion:(id)arg1 ;


@end


#endif