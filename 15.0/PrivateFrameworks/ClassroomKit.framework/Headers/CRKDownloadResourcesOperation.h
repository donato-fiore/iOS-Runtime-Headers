// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKDOWNLOADRESOURCESOPERATION_H
#define CRKDOWNLOADRESOURCESOPERATION_H

@class CATOperation, NSURLSession, NSArray, NSMutableArray, NSURLCredential, NSString;
@protocol NSURLSessionDownloadDelegate, CRKIdentity;



@interface CRKDownloadResourcesOperation : CATOperation <NSURLSessionDownloadDelegate>

 {
    NSURLSession *mSession;
    NSArray *mDownloadTasks;
    NSMutableArray *mFileURLs;
    NSMutableArray *mCompletedUnitCounts;
}


@property (readonly, nonatomic) NSObject<CRKIdentity> *clientIdentity; // ivar: _clientIdentity
@property (readonly, nonatomic) NSURLCredential *credential; // ivar: _credential
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *resources; // ivar: _resources
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *trustedCertificates; // ivar: _trustedCertificates


-(BOOL)isAsynchronous;
-(id)initWithResources:(id)arg0 clientIdentity:(id)arg1 trustedAnchorCertificates:(id)arg2 ;
-(id)initWithResources:(id)arg0 clientIdentity:(id)arg1 trustedCertificates:(id)arg2 ;
-(id)moveURLToNonEphemeralLocation:(id)arg0 withFileName:(id)arg1 error:(*id)arg2 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)cancel;
-(void)cancelIfNeeded;
-(void)finalizeDownloadedItem:(id)arg0 forRequestURL:(id)arg1 ;
-(void)main;
-(void)operationWillFinish;
-(void)run;
-(void)unzipOperationDidFinish:(id)arg0 forRequestURL:(id)arg1 ;


@end


#endif