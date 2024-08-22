// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUBCALURLREQUEST_H
#define SUBCALURLREQUEST_H

@class NSMutableData, NSString, NSFileHandle, NSTimer, NSURLSession, NSDate, DAStatusReport, NSURLSessionDataTask, NSURL;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, SubCalURLRequestDelegate;

#import <Foundation/Foundation.h>


@interface SubCalURLRequest : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>



@property (retain, nonatomic) NSMutableData *connectionData; // ivar: _connectionData
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SubCalURLRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger expectedDataSize; // ivar: _expectedDataSize
@property (retain, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (retain, nonatomic) NSString *filePath; // ivar: _filePath
@property (nonatomic) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *idleTimer; // ivar: _idleTimer
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSInteger receivedDataSize; // ivar: _receivedDataSize
@property (nonatomic) BOOL sendDataUpdateCallback; // ivar: _sendDataUpdateCallback
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (retain, nonatomic) NSString *startRunloopDescriptionString; // ivar: _startRunloopDescriptionString
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (retain, nonatomic) DAStatusReport *statusReport; // ivar: _statusReport
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURLSessionDataTask *task; // ivar: _task
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (copy, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) BOOL useFileCache; // ivar: _useFileCache
@property (nonatomic) BOOL useShortTimeoutInterval; // ivar: _useShortTimeoutInterval
@property (copy, nonatomic) NSString *username; // ivar: _username
@property (nonatomic) BOOL wasUserRequested; // ivar: _wasUserRequested


+(id)_cachedICSFilesDirectory;
+(void)_initializeFileCache;
-(BOOL)_canAuthenticateAgainstProtectionSpace:(id)arg0 ;
-(id)initWithURL:(id)arg0 wasUserRequested:(BOOL)arg1 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_cancelIdleTimer;
-(void)_createIdleTimer;
-(void)_extendIdleTimer;
-(void)_finishWithError:(id)arg0 ;
-(void)_handleAuthenticationChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)_markEndTime;
-(void)_markStartTime;
-(void)_openFileHandle;
-(void)_receivedDataForFile:(id)arg0 ;
-(void)_respondToChallenge:(id)arg0 withCredential:(id)arg1 noCredentialBehavior:(int)arg2 completionHandler:(id)arg3 ;
-(void)_setHeadersOnRequest:(id)arg0 ;
-(void)cancel;
-(void)startConnection;


@end


#endif