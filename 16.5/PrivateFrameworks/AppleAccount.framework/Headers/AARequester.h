// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAREQUESTER_H
#define AAREQUESTER_H

@class NSOperation, NSURLConnection, NSMutableData, NSHTTPURLResponse, AKAppleIDSession, NSString;
@protocol NSURLConnectionDelegate, OS_dispatch_queue;


#import "AARequest.h"
#import "AAResponse.h"

@interface AARequester : NSOperation <NSURLConnectionDelegate>

 {
    AARequest *_request;
    AAResponse *_response;
    NSURLConnection *_urlConnection;
    id *_handler;
    NSMutableData *_data;
    NSHTTPURLResponse *_httpResponse;
    Class _responseClass;
    BOOL _canceled;
    AKAppleIDSession *_appleIDSession;
    BOOL _shouldRetry;
}


@property (getter=isCanceled) BOOL canceled; // ivar: _isCanceled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished) BOOL finished; // ivar: _isFinished
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // ivar: _handlerQueue
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isExecuting) BOOL isExecuting; // ivar: _isExecuting
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 handler:(id)arg1 ;
-(void)__unsafe_callHandler;
-(void)_callHandler;
-(void)_kickOffRequest:(id)arg0 ;
-(void)cancel;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connection:(id)arg0 willSendRequestForAuthenticationChallenge:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)start;


@end


#endif