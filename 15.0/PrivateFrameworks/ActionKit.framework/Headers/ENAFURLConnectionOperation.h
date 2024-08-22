// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENAFURLCONNECTIONOPERATION_H
#define ENAFURLCONNECTIONOPERATION_H

@class NSOperation, NSURLConnection, NSString, NSError, NSInputStream, NSRecursiveLock, NSOutputStream, NSURLRequest, NSURLResponse, NSData, NSSet;
@protocol NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSCoding, NSCopying;



@interface ENAFURLConnectionOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSCoding, NSCopying>



@property (copy, nonatomic) id *authenticationAgainstProtectionSpace; // ivar: _authenticationAgainstProtectionSpace
@property (copy, nonatomic) id *authenticationChallenge; // ivar: _authenticationChallenge
@property (copy, nonatomic) id *cacheResponse; // ivar: _cacheResponse
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) NSURLConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *downloadProgress; // ivar: _downloadProgress
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (retain, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream
@property (copy, nonatomic) id *redirectResponse; // ivar: _redirectResponse
@property (retain, nonatomic) NSURLRequest *request; // ivar: _request
@property (retain, nonatomic) NSURLResponse *response; // ivar: _response
@property (retain, nonatomic) NSData *responseData; // ivar: _responseData
@property (copy, nonatomic) NSString *responseString; // ivar: _responseString
@property (retain, nonatomic) NSSet *runLoopModes; // ivar: _runLoopModes
@property (nonatomic) short state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) NSInteger totalBytesRead; // ivar: _totalBytesRead
@property (copy, nonatomic) id *uploadProgress; // ivar: _uploadProgress


+(id)networkRequestThread;
+(void)networkRequestThreadEntryPoint:(id)arg0 ;
-(BOOL)connection:(id)arg0 canAuthenticateAgainstProtectionSpace:(id)arg1 ;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isPaused;
-(BOOL)isReady;
-(id)connection:(id)arg0 willCacheResponse:(id)arg1 ;
-(id)connection:(id)arg0 willSendRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)cancel;
-(void)cancelConnection;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connection:(id)arg0 didSendBodyData:(NSInteger)arg1 totalBytesWritten:(NSInteger)arg2 totalBytesExpectedToWrite:(NSInteger)arg3 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finish;
-(void)operationDidStart;
-(void)pause;
-(void)resume;
-(void)setCompletionBlock:(id)arg0 ;
-(void)start;


@end


#endif