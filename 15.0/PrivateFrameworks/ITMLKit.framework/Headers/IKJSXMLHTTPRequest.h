// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKJSXMLHTTPREQUEST_H
#define IKJSXMLHTTPREQUEST_H

@class NSHTTPURLResponse, NSString, ISURLOperation, JSManagedValue, NSDictionary, NSNumber, NSMutableArray, NSData, NSError, NSURL, NSURLConnection, NSMutableURLRequest, NSURLSession, NSURLSessionConfiguration;
@protocol ISStoreURLOperationDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, IKJSXMLHTTPRequest, IKNetworkRequestRecord;


#import "IKJSEventListenerObject.h"
#import "IKDOMDocument.h"

@interface IKJSXMLHTTPRequest : IKJSEventListenerObject <ISStoreURLOperationDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, IKJSXMLHTTPRequest>

 {
    BOOL _shouldSquashOnReadyStateEvents;
    os_unfair_lock_s _onReadyStateChangeMessageQueueLock;
    BOOL _async;
    BOOL _inProgress;
}


@property (retain) NSHTTPURLResponse *cachedURLResponse; // ivar: _cachedURLResponse
@property (copy, nonatomic) NSString *dataToSend; // ivar: _dataToSend
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) ISURLOperation *jingleOperation; // ivar: _jingleOperation
@property (nonatomic) BOOL jingleRequest; // ivar: _jingleRequest
@property (retain, nonatomic) JSManagedValue *managedSelf; // ivar: _managedSelf
@property (readonly) NSDictionary *metrics;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSObject<IKNetworkRequestRecord> *networkRequestRecord; // ivar: _networkRequestRecord
@property (retain, nonatomic) NSMutableArray *onReadyStateChangeMessageQueue; // ivar: _onReadyStateChangeMessageQueue
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (retain) NSDictionary *performanceMetrics; // ivar: _performanceMetrics
@property (readonly, nonatomic) BOOL primeEnabled; // ivar: _primeEnabled
@property (nonatomic) NSInteger primeRetryCount; // ivar: _primeRetryCount
@property unsigned int readyState; // ivar: _readyState
@property (retain) NSData *receivedData; // ivar: _receivedData
@property (readonly, nonatomic) NSInteger reprimingResponseStatus; // ivar: _reprimingResponseStatus
@property (retain, nonatomic) NSError *requestError; // ivar: _requestError
@property (retain, nonatomic) NSString *requestId; // ivar: _requestId
@property (nonatomic) NSInteger requestReadyState; // ivar: _requestReadyState
@property (nonatomic) NSInteger requestResponseType; // ivar: _requestResponseType
@property (nonatomic) unsigned int requestStatusCode; // ivar: _requestStatusCode
@property (retain, nonatomic) NSString *requestStatusText; // ivar: _requestStatusText
@property (retain, nonatomic) NSURL *requestURL; // ivar: _requestURL
@property (readonly) id *response;
@property (readonly) NSString *responseText;
@property (retain) NSString *responseType;
@property (readonly) IKDOMDocument *responseXML;
@property unsigned int status; // ivar: _status
@property (retain) NSString *statusText; // ivar: _statusText
@property (readonly) Class superclass;
@property NSUInteger timeout; // ivar: timeout
@property (retain, nonatomic) NSURLConnection *urlConnection; // ivar: _urlConnection
@property (retain, nonatomic) NSMutableURLRequest *urlRequest; // ivar: _urlRequest
@property (retain, nonatomic) NSHTTPURLResponse *urlResponse; // ivar: _urlResponse
@property (retain, nonatomic) NSURLSession *urlSession; // ivar: _urlSession
@property (copy, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration; // ivar: _urlSessionConfiguration
@property (retain, nonatomic) NSString *user; // ivar: _user


+(id)xhrOperationQueue;
-(BOOL)_isPrimeError:(NSInteger)arg0 output:(id)arg1 ;
-(id)_constructProgressEventData;
-(id)_createStoreOperation:(id)arg0 ;
-(id)_dequeueReadyStateChangeMessage;
-(id)_loadingWillSendRequest:(id)arg0 redirectResponse:(id)arg1 ;
-(id)_timeIntervalSince1970;
-(id)connection:(id)arg0 willSendRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(id)getAllResponseHeaders;
-(id)getResponseHeader:(id)arg0 ;
-(id)init;
-(id)initWithAppContext:(id)arg0 jingleRequest:(BOOL)arg1 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_abort;
-(void)_clearAllReadyStateChangeMessagesAndSquashFutureOnes;
-(void)_loadingDidFailWithError:(id)arg0 ;
-(void)_loadingDidFinish;
-(void)_loadingDidReceiveData:(id)arg0 ;
-(void)_loadingDidReceiveResponse:(id)arg0 timingData:(id)arg1 ;
-(void)_openWithMethod:(id)arg0 url:(id)arg1 async:(BOOL)arg2 user:(id)arg3 password:(id)arg4 ;
-(void)_operationFinished:(id)arg0 ;
-(void)_prime:(id)arg0 ;
-(void)_reprime:(id)arg0 ;
-(void)_sendWithData:(id)arg0 ;
-(void)_setException:(id)arg0 ;
-(void)abort;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)open:(id)arg0 ;
-(void)operation:(id)arg0 didDiscoverContentLength:(id)arg1 ;
-(void)operation:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;
-(void)operation:(id)arg0 willSendRequest:(id)arg1 ;
-(void)send:(id)arg0 ;
-(void)setRequestHeader:(id)arg0 ;


@end


#endif