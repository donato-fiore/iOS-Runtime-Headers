// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKHOSTRESOURCESOPERATION_H
#define CRKHOSTRESOURCESOPERATION_H

@class CATOperation, NSDictionary, NSMutableDictionary, NSNetService, NSMutableSet, NSError, NSString;
@protocol NSNetServiceDelegate, CATRemoteConnectionDelegate, CRKHostResourcesOperationDelegate;


#import "CRKHostResourcesConfiguration.h"

@interface CRKHostResourcesOperation : CATOperation <NSNetServiceDelegate, CATRemoteConnectionDelegate>

 {
    CRKHostResourcesConfiguration *mConfiguration;
    NSDictionary *mFileURLsByFilePath;
    NSMutableDictionary *mStartedDownloadCountByFileURL;
    NSMutableDictionary *mFinishedDownloadCountByFileURL;
    NSNetService *mNetService;
    NSMutableSet *mConnections;
    BOOL mPublished;
    NSMutableSet *mConnectionCloseTimers;
    NSError *mStashedError;
    NSMutableDictionary *mZipOperationsByDirectoryURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRKHostResourcesOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)allDownloadsFinished;
-(BOOL)downloadAllowedForFileURL:(id)arg0 ;
-(BOOL)isAsynchronous;
-(id)hostingSocketOptions;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithResourceURLs:(id)arg0 serverIdentity:(id)arg1 trustedAnchorCertificates:(id)arg2 ;
-(id)initWithResourceURLs:(id)arg0 serverIdentity:(id)arg1 trustedAnchorCertificates:(id)arg2 maximumAllowedDownloads:(NSUInteger)arg3 ;
-(id)initWithResourceURLs:(id)arg0 serverIdentity:(id)arg1 trustedAnchorCertificates:(id)arg2 maximumAllowedDownloads:(NSUInteger)arg3 port:(unsigned short)arg4 ;
-(void)IPAddressDidChange;
-(void)cancel;
-(void)connection:(id)arg0 didFailToSendDataWithStream:(id)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)connection:(id)arg0 didInterruptWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveDataRequestWithURL:(id)arg1 ;
-(void)connection:(id)arg0 didSendDataWithStream:(id)arg1 userInfo:(id)arg2 ;
-(void)connectionCloseDidTimeout:(id)arg0 ;
-(void)connectionDidClose:(id)arg0 ;
-(void)delegateDownloadFinished:(id)arg0 fileURL:(id)arg1 error:(id)arg2 ;
-(void)delegateDownloadStarted:(id)arg0 fileURL:(id)arg1 ;
-(void)incrementFinishedDownloadCountForFileURL:(id)arg0 ;
-(void)incrementStartedDownloadCountForFileURL:(id)arg0 ;
-(void)main;
-(void)netService:(id)arg0 didAcceptConnectionWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)netService:(id)arg0 didNotPublish:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg0 ;
-(void)netServiceDidStop:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)operationDidFinish;
-(void)run;
-(void)serveItemAtURL:(id)arg0 toConnection:(id)arg1 forRequestURL:(id)arg2 originalItemURL:(id)arg3 ;
-(void)zipDirectoryAtURL:(id)arg0 completion:(id)arg1 ;
-(void)zipOperationDidFail:(id)arg0 directoryURL:(id)arg1 ;


@end


#endif