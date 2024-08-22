// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBSESSIONREQUESTER_H
#define PBSESSIONREQUESTER_H

@class NSOperationQueue, NSMutableData, NSMutableArray, NSMutableDictionary, NSDictionary, NSURL, NSString, NSArray, NSURLSessionTask, NSURLSession;
@protocol NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate, PBSessionRequesterDelegate;

#import <Foundation/Foundation.h>

#import "PBDataReader.h"

@interface PBSessionRequester : NSObject <NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate>

 {
    NSOperationQueue *_delegateQueue;
    NSOperationQueue *_sessionDelegateQ;
    NSMutableData *_data;
    PBDataReader *_dataReader;
    NSUInteger _lastGoodDataOffset;
    NSUInteger _timeRequestSent;
    NSUInteger _timeResponseReceived;
    NSInteger _responseStatusCode;
    NSMutableArray *_requests;
    NSMutableArray *_responses;
    NSMutableArray *_internalRequests;
    NSMutableArray *_internalResponses;
    NSMutableDictionary *_httpRequestHeaders;
    BOOL _didNotifyRequestCompleted;
    NSDictionary *_connectionProperties;
    ? _flags;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSString *apsRelayTopic; // ivar: _apsRelayTopic
@property (retain, nonatomic) NSArray *clientCertificates; // ivar: _clientCertificates
@property (retain, nonatomic) NSURLSessionTask *currentTask; // ivar: _currentTask
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PBSessionRequesterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger downloadPayloadSize; // ivar: _downloadPayloadSize
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *httpRequestHeaders;
@property (retain, nonatomic) NSDictionary *httpResponseHeaders; // ivar: _httpResponseHeaders
@property (nonatomic) BOOL ignoresResponse;
@property (retain, nonatomic) NSString *logRequestToFile; // ivar: _logRequestToFile
@property (retain, nonatomic) NSString *logResponseToFile; // ivar: _logResponseToFile
@property (nonatomic) NSUInteger nwActivityDomain; // ivar: _nwActivityDomain
@property (nonatomic) NSUInteger nwActivityLabel; // ivar: _nwActivityLabel
@property (readonly, nonatomic) NSUInteger requestResponseTime;
@property (readonly, weak, nonatomic) NSArray *requests;
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (nonatomic) BOOL shouldHandleCookies; // ivar: _shouldHandleCookies
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeoutSeconds; // ivar: _timeoutSeconds
@property (readonly, nonatomic) NSUInteger uploadPayloadSize; // ivar: _uploadPayloadSize


+(BOOL)usesEncodedMessages;
-(BOOL)isPaused;
-(BOOL)readResponsePreamble:(id)arg0 ;
-(id)decodeResponseData:(id)arg0 ;
-(id)initWithURL:(id)arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(id)internalRequests;
-(id)newMutableURLRequestWithURL:(id)arg0 ;
-(id)newSessionTaskOnSession:(id)arg0 withURLRequest:(id)arg1 ;
-(id)newSessionWithDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(id)newSessionWithDelegate:(id)arg0 delegateQueue:(id)arg1 connectionProperties:(id)arg2 ;
-(id)requestPreamble;
-(id)responseForInternalRequest:(id)arg0 ;
-(id)responseForRequest:(id)arg0 ;
-(id)tryReadResponseData:(id)arg0 forRequest:(id)arg1 forResponseClass:(Class)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)addInternalRequest:(id)arg0 ;
-(void)addRequest:(id)arg0 ;
-(void)cancel;
-(void)cancelWithErrorCode:(NSInteger)arg0 ;
-(void)clearRequests;
-(void)dealloc;
-(void)encodeRequestData:(id)arg0 startRequestCallback:(id)arg1 ;
-(void)handleResponse:(id)arg0 forInternalRequest:(id)arg1 ;
-(void)pause;
-(void)resume;
-(void)setHttpRequestHeader:(id)arg0 forKey:(id)arg1 ;
-(void)setNeedsCancel;
-(void)start;
-(void)startWithConnectionProperties:(id)arg0 ;
-(void)writeRequest:(id)arg0 into:(id)arg1 ;


@end


#endif