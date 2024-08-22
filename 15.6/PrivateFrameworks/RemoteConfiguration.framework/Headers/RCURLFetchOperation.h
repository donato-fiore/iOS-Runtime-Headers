// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCURLFETCHOPERATION_H
#define RCURLFETCHOPERATION_H

@class NSData, NSString, NSURL, NSDictionary, NSError, NSHTTPURLResponse, NSNumber, NSURLSessionTask;
@protocol OS_dispatch_queue;


#import "RCOperation.h"

@interface RCURLFetchOperation : RCOperation

@property (retain, nonatomic) NSData *HTTPBody; // ivar: _HTTPBody
@property (retain, nonatomic) NSString *HTTPMethod; // ivar: _HTTPMethod
@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) CGFloat URLRequestTimeoutDuration; // ivar: _URLRequestTimeoutDuration
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // ivar: _additionalRequestHTTPHeaders
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (copy, nonatomic) id *configurationCompletionHandler; // ivar: _configurationCompletionHandler
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSHTTPURLResponse *httpResponse; // ivar: _httpResponse
@property (copy, nonatomic) NSString *loggingKey; // ivar: _loggingKey
@property (retain, nonatomic) NSNumber *maxAge; // ivar: _maxAge
@property (retain) NSURLSessionTask *requestTask; // ivar: _requestTask
@property (retain, nonatomic) NSString *requestUUID; // ivar: _requestUUID
@property (retain, nonatomic) NSData *responseData; // ivar: _responseData
@property (retain, nonatomic) NSString *responseMIMEType; // ivar: _responseMIMEType
@property (nonatomic) NSUInteger responseSize; // ivar: _responseSize
@property (nonatomic) CGFloat taskStartTime; // ivar: _taskStartTime
@property (retain, nonatomic) NSDictionary *timingData; // ivar: _timingData
@property (retain, nonatomic) NSString *urlString; // ivar: _urlString


-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)resetForRetry;
-(void)setRelativePriority:(NSInteger)arg0 ;


@end


#endif