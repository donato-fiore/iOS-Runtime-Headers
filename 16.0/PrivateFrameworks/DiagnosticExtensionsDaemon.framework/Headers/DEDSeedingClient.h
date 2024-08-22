// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEDSEEDINGCLIENT_H
#define DEDSEEDINGCLIENT_H

@class NSURLSession, NSString;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, OS_os_log, DEDSeedingClientDelegate;

#import <Foundation/Foundation.h>

#import "DEDBugSessionConfiguration.h"

@interface DEDSeedingClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>



@property (retain) NSURLSession *backgroundSession; // ivar: _backgroundSession
@property (retain) NSString *bugSessionIdentifier; // ivar: _bugSessionIdentifier
@property (retain) DEDBugSessionConfiguration *config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSURLSession *foregroundSession; // ivar: _foregroundSession
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;
@property (weak) NSObject<DEDSeedingClientDelegate> *uploadDelegate; // ivar: _uploadDelegate


-(BOOL)isLoggedIn;
-(id)HTTPErrorWithResponse:(id)arg0 withData:(id)arg1 ;
-(id)_formEncodedBodyForDictionary:(id)arg0 ;
-(id)_keyValuePairsForKey:(id)arg0 value:(id)arg1 ;
-(id)_serverErrorFromTask:(id)arg0 ;
-(id)baseURL;
-(id)beginUploadWithRequest:(id)arg0 fromFileURL:(id)arg1 error:(*id)arg2 ;
-(id)bodyDataForParameters:(id)arg0 encoding:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)contentTypeForParameterEncoding:(NSUInteger)arg0 ;
-(id)filePromiseURLForPromise:(id)arg0 ;
-(id)filerURL;
-(id)initWithConfiguration:(id)arg0 sessionID:(id)arg1 delegate:(id)arg2 ;
-(id)newFilePromiseURL;
-(id)newFilerTokenURL;
-(id)ongoingUploads;
-(id)promiseConfiguration;
-(id)seedingURL;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg0 ;
// -(void)cancelPromise:(id)arg0 withSuccess:(id)arg1 error:(unk)arg2  ;
-(void)cleanup;
// -(void)dataForURL:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)dataForURLRequest:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)deleteResourceAtURL:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)getFilerTokenForPromise:(id)arg0 withSuccess:(id)arg1 error:(unk)arg2  ;
// -(void)getPromise:(id)arg0 withSuccess:(id)arg1 error:(unk)arg2  ;
// -(void)jsonForURL:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)jsonForURLRequest:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)makePromiseWithUUID:(id)arg0 extensionID:(id)arg1 success:(id)arg2 error:(unk)arg3  ;
// -(void)performHTTPMethod:(id)arg0 toURL:(id)arg1 parameters:(id)arg2 encoding:(NSUInteger)arg3 success:(id)arg4 error:(unk)arg5  ;
// -(void)postToURL:(id)arg0 parameters:(id)arg1 encoding:(NSUInteger)arg2 success:(id)arg3 error:(unk)arg4  ;
// -(void)putToURL:(id)arg0 parameters:(id)arg1 encoding:(NSUInteger)arg2 success:(id)arg3 error:(unk)arg4  ;
// -(void)seedingLoginWithSuccess:(id)arg0 error:(unk)arg1  ;
-(void)sendFile:(id)arg0 promise:(id)arg1 withCompletion:(id)arg2 ;
// -(void)updatePromise:(id)arg0 withAttachmentGroup:(id)arg1 status:(NSInteger)arg2 success:(id)arg3 error:(unk)arg4  ;
// -(void)updatePromise:(id)arg0 withFilename:(id)arg1 size:(NSInteger)arg2 extensionID:(id)arg3 status:(NSInteger)arg4 success:(id)arg5 error:(unk)arg6  ;
// -(void)updatePromise:(id)arg0 withFilename:(id)arg1 size:(NSInteger)arg2 status:(NSInteger)arg3 success:(id)arg4 error:(unk)arg5  ;


@end


#endif