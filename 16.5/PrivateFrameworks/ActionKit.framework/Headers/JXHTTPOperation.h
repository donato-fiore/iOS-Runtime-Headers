// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JXHTTPOPERATION_H
#define JXHTTPOPERATION_H

@class NSURLAuthenticationChallenge, NSURLCredential, NSNumber, NSDate, NSString, NSDictionary, NSURL, NSArray;
@protocol OS_dispatch_queue, JXHTTPOperationDelegate, JXHTTPRequestBody;


#import "JXURLConnectionOperation.h"

@interface JXHTTPOperation : JXURLConnectionOperation

@property (retain) NSURLAuthenticationChallenge *authenticationChallenge; // ivar: _authenticationChallenge
@property (retain) NSObject<OS_dispatch_queue> *blockQueue; // ivar: _blockQueue
@property (retain) NSURLCredential *credential; // ivar: _credential
@property (weak) NSObject<JXHTTPOperationDelegate> *delegate; // ivar: _delegate
@property (copy) id *didFailBlock; // ivar: _didFailBlock
@property (copy) id *didFinishLoadingBlock; // ivar: _didFinishLoadingBlock
@property (copy) id *didReceiveDataBlock; // ivar: _didReceiveDataBlock
@property (copy) id *didReceiveResponseBlock; // ivar: _didReceiveResponseBlock
@property (copy) id *didSendDataBlock; // ivar: _didSendDataBlock
@property (copy) id *didStartBlock; // ivar: _didStartBlock
@property (retain) NSNumber *downloadProgress; // ivar: _downloadProgress
@property (readonly) CGFloat elapsedSeconds;
@property (retain) NSDate *finishDate; // ivar: _finishDate
@property (copy) NSString *password; // ivar: _password
@property BOOL performsBlocksOnMainQueue; // ivar: _performsBlocksOnMainQueue
@property (retain) NSObject<JXHTTPRequestBody> *requestBody; // ivar: _requestBody
@property (nonatomic) NSUInteger requestCachePolicy;
@property (retain, nonatomic) NSDictionary *requestHeaders;
@property (retain, nonatomic) NSURL *requestMainDocumentURL;
@property (retain, nonatomic) NSString *requestMethod;
@property (nonatomic) NSUInteger requestNetworkServiceType;
@property (nonatomic) BOOL requestShouldHandleCookies;
@property (nonatomic) BOOL requestShouldUsePipelining;
@property (nonatomic) CGFloat requestTimeoutInterval;
@property (retain, nonatomic) NSURL *requestURL;
@property (copy, nonatomic) NSString *responseDataFilePath; // ivar: _responseDataFilePath
@property (retain) NSDate *startDate; // ivar: _startDate
@property BOOL trustAllHosts; // ivar: _trustAllHosts
@property (copy) NSArray *trustedHosts; // ivar: _trustedHosts
@property (retain) NSString *uniqueString; // ivar: _uniqueString
@property BOOL updatesNetworkActivityIndicator; // ivar: _updatesNetworkActivityIndicator
@property (retain) NSNumber *uploadProgress; // ivar: _uploadProgress
@property BOOL useCredentialStorage; // ivar: _useCredentialStorage
@property (retain) id *userObject; // ivar: _userObject
@property (copy) NSString *username; // ivar: _username
@property (copy) id *willCacheResponseBlock; // ivar: _willCacheResponseBlock
@property (copy) id *willNeedNewBodyStreamBlock; // ivar: _willNeedNewBodyStreamBlock
@property (copy) id *willSendRequestForAuthenticationChallengeBlock; // ivar: _willSendRequestForAuthenticationChallengeBlock
@property (copy) id *willSendRequestRedirectBlock; // ivar: _willSendRequestRedirectBlock
@property (copy) id *willStartBlock; // ivar: _willStartBlock


+(id)withURLString:(id)arg0 ;
+(id)withURLString:(id)arg0 queryParameters:(id)arg1 ;
-(BOOL)connectionShouldUseCredentialStorage:(id)arg0 ;
-(NSInteger)responseExpectedContentLength;
-(NSInteger)responseStatusCode;
-(id)blockForSelector:(SEL)arg0 ;
-(id)connection:(id)arg0 needNewBodyStream:(id)arg1 ;
-(id)connection:(id)arg0 willCacheResponse:(id)arg1 ;
-(id)connection:(id)arg0 willSendRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(id)init;
-(id)responseData;
-(id)responseExpectedFileName;
-(id)responseHeaders;
-(id)responseJSON;
-(id)responseMIMEType;
-(id)responseStatusString;
-(id)responseString;
-(id)responseTextEncodingName;
-(id)responseURL;
-(void)addValue:(id)arg0 forRequestHeader:(id)arg1 ;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connection:(id)arg0 didSendBodyData:(NSInteger)arg1 totalBytesWritten:(NSInteger)arg2 totalBytesExpectedToWrite:(NSInteger)arg3 ;
-(void)connection:(id)arg0 willSendRequestForAuthenticationChallenge:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)dealloc;
-(void)finalizeRequestBody;
-(void)main;
-(void)performDelegateMethod:(SEL)arg0 ;
-(void)setValue:(id)arg0 forRequestHeader:(id)arg1 ;
-(void)willFinish;


@end


#endif