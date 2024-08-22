// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MMCSHTTPCONTEXT_H
#define MMCSHTTPCONTEXT_H

@class NSURLSessionDataTask, NSString, NSInputStream, NSOutputStream, NSDictionary, NSURLSession;
@protocol C2RequestDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegatePrivate, NSStreamDelegate;

#import <Foundation/Foundation.h>


@interface MMCSHTTPContext : NSObject <C2RequestDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegatePrivate, NSStreamDelegate>



@property (nonatomic) *os_activity_s activityMarker; // ivar: _activityMarker
@property (retain, nonatomic) NSURLSessionDataTask *dataTask; // ivar: _dataTask
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didOpen; // ivar: _didOpen
@property (readonly) NSUInteger hash;
@property (nonatomic) *mmcs_http_context hc; // ivar: _hc
@property (retain, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (nonatomic) BOOL isHandlingError; // ivar: _isHandlingError
@property (nonatomic) BOOL isTaskDone; // ivar: _isTaskDone
@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (retain, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream
@property (nonatomic) BOOL requestIsStreamed; // ivar: _requestIsStreamed
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *timingData; // ivar: _timingData
@property (retain, nonatomic) NSURLSession *urlSession; // ivar: _urlSession


-(?)initWithContext:(?)arg0 optionsactivityMarker;
-(BOOL)createNewRequestBodyInputStream;
-(BOOL)requestBodyCanAcceptData;
-(BOOL)send;
-(NSInteger)countOfRequestBodyBytesSent;
-(NSInteger)writeRequestBody:(char *)arg0 maxLength:(NSUInteger)arg1 ;
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
-(void)cleanupRequest;
-(void)cleanupResponse;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateStreamPair;
-(void)requestBodyDone;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif