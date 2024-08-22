// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTURLSESSIONMANAGER_H
#define MTURLSESSIONMANAGER_H

@class MTSingleton, NSString, NSURLSession;
@protocol NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate, MTRestorableBackgroundSession, OS_dispatch_queue;



@interface MTURLSessionManager : MTSingleton <NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate, MTRestorableBackgroundSession>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *sessionCompletionHandler; // ivar: _sessionCompletionHandler
@property (retain, nonatomic) NSURLSession *sessionForBackgroundDownloads; // ivar: _sessionForBackgroundDownloads
@property (retain, nonatomic) NSURLSession *sessionForForegroundDownloads; // ivar: _sessionForForegroundDownloads
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *startQueue; // ivar: _startQueue
@property (readonly) Class superclass;


+(NSInteger)statusCodeForTask:(id)arg0 ;
+(id)originalURLForTask:(id)arg0 ;
+(void)purgeExternalCookies;
-(BOOL)_subclassImplementsConfigureSession;
-(BOOL)_subclassImplementsDataDidDownload;
-(BOOL)_subclassImplementsDidFailWithError;
-(BOOL)_subclassImplementsInstanceMethod:(SEL)arg0 ;
-(BOOL)_subclassImplementsURLDidDownload;
-(id)backgroundSessionConfigurationIdentifier;
-(id)init;
-(id)sessionForConfiguration:(id)arg0 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg0 ;
-(void)_assertSubclassRequirements;
-(void)_invokeURLSessionBackgroundEventsCompletionHandler;
// -(void)_showCredentialsActionControllerForHost:(id)arg0 signIn:(id)arg1 cancel:(unk)arg2  ;
-(void)configureSession:(id)arg0 ;
-(void)loadSessionsIfNeeded;
-(void)startDownloadTaskForURL:(id)arg0 userInitiated:(BOOL)arg1 useBackgroundFetch:(BOOL)arg2 usePrivatePath:(id)arg3 downloadStartedBlock:(id)arg4 ;
-(void)task:(id)arg0 didCompleteWithData:(id)arg1 ;
-(void)task:(id)arg0 didCompleteWithDownloadedContentUrl:(id)arg1 ;
-(void)task:(id)arg0 didFailWithError:(id)arg1 orStatusCode:(NSInteger)arg2 ;


@end


#endif