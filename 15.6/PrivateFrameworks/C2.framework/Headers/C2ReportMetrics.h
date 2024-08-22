// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef C2REPORTMETRICS_H
#define C2REPORTMETRICS_H

@class NSString, NSMutableURLRequest, NSURLSessionTask;
@protocol C2RequestDelegate;

#import <Foundation/Foundation.h>

#import "C2MetricOptions.h"
#import "C2RequestOptions.h"

@interface C2ReportMetrics : NSObject <C2RequestDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreRequestThrottle; // ivar: _ignoreRequestThrottle
@property (retain, nonatomic) C2MetricOptions *metricOptions; // ivar: _metricOptions
@property (retain, nonatomic) NSMutableURLRequest *metricRequest; // ivar: _metricRequest
@property (retain, nonatomic) NSURLSessionTask *metricTask; // ivar: _metricTask
@property (retain, nonatomic) C2RequestOptions *metricsTransportRequestOptions; // ivar: _metricsTransportRequestOptions
@property (retain, nonatomic) NSString *requestThrottleIdentifier; // ivar: _requestThrottleIdentifier
@property (nonatomic) NSUInteger requestThrottleLimit; // ivar: _requestThrottleLimit
@property (readonly) Class superclass;
@property (copy, nonatomic) id *testBehavior_didCompleteWithError; // ivar: _testBehavior_didCompleteWithError
@property (copy, nonatomic) id *testBehavior_tooManyTasksRunning; // ivar: _testBehavior_tooManyTasksRunning


+(id)gzipDecode:(id)arg0 ;
+(id)gzipEncode:(id)arg0 ;
+(id)metricsForMetricRequestOptions:(id)arg0 networkEvent:(id)arg1 genericEvent:(id)arg2 triggers:(int)arg3 ;
+(id)requestForMetricRequestOptions:(id)arg0 metrics:(id)arg1 ;
+(void)_c2FormatValueForRTC:(id)arg0 keyPrefix:(id)arg1 targetDictionary:(id)arg2 multipleOperationGroups:(BOOL)arg3 ;
+(void)_reportWithOptions:(id)arg0 networkEvent:(id)arg1 genericEvent:(id)arg2 triggers:(int)arg3 eventName:(id)arg4 startTime:(id)arg5 endTime:(id)arg6 attributes:(id)arg7 ;
+(void)reportMetricWithOptions:(id)arg0 genericMetricType:(NSInteger)arg1 eventName:(id)arg2 startTime:(id)arg3 endTime:(id)arg4 attributes:(id)arg5 ;
+(void)reportNetworkEvent:(id)arg0 triggers:(int)arg1 originalSessionTask:(id)arg2 ;
-(id)initWithMetricRequest:(id)arg0 metricRequestOptions:(id)arg1 ignoreRequestThrottle:(BOOL)arg2 requestThrottleIdentifier:(id)arg3 requestThrottleLimit:(NSUInteger)arg4 ;
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
-(void)send;


@end


#endif