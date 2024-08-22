// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMCOMMANDBASE_H
#define FMCOMMANDBASE_H

@class NSOperation, NSURLConnection, NSError, NSString, NSNumber, NSURLRequest, NSHTTPURLResponse, NSData, NSURLSessionDataTask;


#import "FMServerInteractionController.h"

@interface FMCommandBase : NSOperation

@property (nonatomic) BOOL commandTaskComplete; // ivar: _commandTaskComplete
@property (retain, nonatomic) NSURLConnection *connection; // ivar: _connection
@property (copy) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *host; // ivar: _host
@property (copy, nonatomic) NSString *originalHostname; // ivar: _originalHostname
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (copy, nonatomic) NSNumber *port; // ivar: _port
@property (nonatomic) NSUInteger redirectCount; // ivar: _redirectCount
@property (copy, nonatomic) NSString *redirectedHostname; // ivar: _redirectedHostname
@property (retain, nonatomic) NSURLRequest *request; // ivar: _request
@property (retain, nonatomic) NSHTTPURLResponse *response; // ivar: _response
@property (retain, nonatomic) NSData *responseData; // ivar: _responseData
@property (copy, nonatomic) NSString *scheme; // ivar: _scheme
@property (weak, nonatomic) FMServerInteractionController *serverInteractionController; // ivar: _serverInteractionController
@property (retain, nonatomic) NSURLSessionDataTask *task; // ivar: _task
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (copy, nonatomic) NSString *username; // ivar: _username


-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isTransactionCompleteWithError:(id)arg0 ;
-(BOOL)wasRedirected;
-(BOOL)wasSuccessful;
-(id)authHeaders;
-(id)body;
-(id)headers;
-(id)init;
-(id)method;
-(id)path;
-(id)valueForResponseHTTPHeader:(id)arg0 ;
-(void)_dataTaskCompletionHandlerWithData:(id)arg0 response:(id)arg1 error:(id)arg2 ;
-(void)cancel;
-(void)finishWithError:(id)arg0 ;
-(void)generateFakeResponse:(id)arg0 data:(id)arg1 error:(id)arg2 ;
-(void)sendRequest;
-(void)start;


@end


#endif