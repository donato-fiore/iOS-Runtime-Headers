// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKHTTPCLIENT_H
#define FBKHTTPCLIENT_H

@class NSString, NSURLSession;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, FBKForegroundDataClient, FBKLoginManagerDelegate;

#import <Foundation/Foundation.h>


@interface FBKHTTPClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, FBKForegroundDataClient, FBKLoginManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didTearDown; // ivar: _didTearDown
@property (readonly) NSUInteger hash;
@property (retain) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)_formEncodedBodyForDictionary:(id)arg0 ;
-(id)_keyValuePairsForKey:(id)arg0 value:(id)arg1 ;
-(id)bodyDataForParameters:(id)arg0 encoding:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)bundle;
-(id)contentTypeForParameterEncoding:(NSUInteger)arg0 ;
-(id)init;
-(id)logHTTPErrorWithResponse:(id)arg0 withData:(id)arg1 fromRequest:(id)arg2 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
// -(void)dataForURL:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)dataForURL:(id)arg0 successWithResponse:(id)arg1 error:(unk)arg2  ;
// -(void)dataForURLRequest:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)dataForURLRequest:(id)arg0 successWithResponse:(id)arg1 error:(unk)arg2  ;
// -(void)deleteAtURL:(id)arg0 parameters:(id)arg1 encoding:(NSUInteger)arg2 success:(id)arg3 error:(unk)arg4  ;
// -(void)deleteResourceAtURL:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
-(void)didLogInWithLoginUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)didLogOutWithCompletion:(id)arg0 ;
// -(void)jsonForURL:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)jsonForURLRequest:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)performHTTPMethod:(id)arg0 toURL:(id)arg1 parameters:(id)arg2 encoding:(NSUInteger)arg3 success:(id)arg4 error:(unk)arg5  ;
// -(void)postToURL:(id)arg0 parameters:(id)arg1 encoding:(NSUInteger)arg2 success:(id)arg3 error:(unk)arg4  ;
// -(void)putToURL:(id)arg0 parameters:(id)arg1 encoding:(NSUInteger)arg2 success:(id)arg3 error:(unk)arg4  ;
-(void)tearDown;


@end


#endif