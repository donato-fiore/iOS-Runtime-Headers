// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSTREAMINGASSETAPPENDCONTEXT_H
#define CKSTREAMINGASSETAPPENDCONTEXT_H

@class NSURLSessionDataTask, NSString;
@protocol C2RequestDelegate, OS_dispatch_queue, OS_os_activity;

#import <Foundation/Foundation.h>

#import "CKStreamingAsset.h"

@interface CKStreamingAssetAppendContext : NSObject <C2RequestDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *appendQueue; // ivar: _appendQueue
@property (nonatomic, getter=isAppending) BOOL appending; // ivar: _appending
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic, getter=isCurrentAppendCancelled) BOOL currentAppendCancelled; // ivar: _currentAppendCancelled
@property (nonatomic) NSUInteger currentSegmentLength; // ivar: _currentSegmentLength
@property (retain, nonatomic) NSURLSessionDataTask *dataTask; // ivar: _dataTask
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fakeMissingUploadReceipt; // ivar: _fakeMissingUploadReceipt
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_activity> *osActivity; // ivar: _osActivity
@property (retain, nonatomic) NSString *requestUUID; // ivar: _requestUUID
@property (retain, nonatomic) CKStreamingAsset *streamingAsset; // ivar: _streamingAsset
@property (readonly) Class superclass;


+(id)requestToAppendSegmentData:(id)arg0 uploadURL:(id)arg1 requestUUID:(id)arg2 offset:(NSUInteger)arg3 ;
-(BOOL)appendSegmentWithData:(id)arg0 error:(*id)arg1 ;
-(BOOL)appendSegmentWithData:(id)arg0 newStreamingAsset:(*id)arg1 error:(*id)arg2 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)init;
-(id)initWithStreamingAsset:(id)arg0 ;
-(void)URLSession:(id)arg0 _taskIsWaitingForConnection:(id)arg1 ;
-(void)URLSession:(id)arg0 _willRetryBackgroundDataTask:(id)arg1 withError:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 _conditionalRequirementsChanged:(BOOL)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)abort;
-(void)appendSegmentWithData:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif