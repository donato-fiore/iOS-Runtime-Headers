// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENTESTRESULTNETWORKREQUEST_H
#define ENTESTRESULTNETWORKREQUEST_H

@class NSURLSession, NSURLSessionTask, NSString, NSDictionary, NSError, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ENTestResultNetworkRequest : NSObject {
    NSUInteger _maxRetryTime;
    NSObject<OS_dispatch_queue> *_queue;
    NSURLSession *_URLSession;
    NSURLSessionTask *_URLSessionTask;
    id *_completionHandler;
}


@property (copy, nonatomic) NSString *APIKey; // ivar: _APIKey
@property (readonly, copy, nonatomic) NSDictionary *additionalRequestHeaders;
@property (readonly, copy, nonatomic) NSDictionary *bodyJSON;
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSUInteger paddedRequestSize; // ivar: _paddedRequestSize
@property (readonly, copy, nonatomic) NSDictionary *requestHeaders;
@property (readonly, copy, nonatomic) NSURL *requestURL; // ivar: _requestURL


-(NSUInteger)retryCheck:(id)arg0 retryAttempt:(int)arg1 baseMultiplier:(int)arg2 ;
-(id)_createURLRequestWithError:(*id)arg0 ;
-(id)_dictionaryFromData:(id)arg0 response:(id)arg1 error:(*id)arg2 ;
-(id)_errorForURLRequestError:(id)arg0 ;
-(id)errorForUnsuccessfulResponse:(id)arg0 body:(id)arg1 ;
-(id)getPaddedBodyJSONAndReturnError:(*id)arg0 ;
-(id)handleResponse:(id)arg0 body:(id)arg1 ;
-(id)initWithRequestURL:(id)arg0 URLSession:(id)arg1 queue:(id)arg2 ;
-(void)_completeWithError:(id)arg0 ;
-(void)_dataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_performURLRequest:(id)arg0 attempt:(int)arg1 ;
-(void)handleURLResponse:(id)arg0 data:(id)arg1 error:(id)arg2 ;
-(void)invalidate;
-(void)resumeWithCompletionHandler:(id)arg0 ;
-(void)setMaxRetryTime:(NSUInteger)arg0 ;


@end


#endif