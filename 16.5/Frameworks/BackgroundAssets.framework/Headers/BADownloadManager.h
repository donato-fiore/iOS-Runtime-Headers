// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BADOWNLOADMANAGER_H
#define BADOWNLOADMANAGER_H

@class NSString, NSMutableDictionary;
@protocol BADownloadManagerSyncProtocol, OS_dispatch_queue, BADownloadManagerDelegate;

#import <Foundation/Foundation.h>

#import "BAAgentClientProxy.h"

@interface BADownloadManager : NSObject <BADownloadManagerSyncProtocol>

 {
    os_unfair_lock_s _stateLock;
    BOOL _scheduleLocked;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    BAAgentClientProxy *_proxy;
    NSString *_applicationIdentifier;
    NSMutableDictionary *_downloads;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<BADownloadManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)cancelDownload:(id)arg0 error:(*id)arg1 ;
-(BOOL)scheduleDownload:(id)arg0 error:(*id)arg1 ;
-(BOOL)startForegroundDownload:(id)arg0 error:(*id)arg1 ;
-(id)fetchCurrentDownloads:(*id)arg0 ;
-(id)init;
-(void)downloadIdentifier:(id)arg0 didFailWithError:(id)arg1 wasHandled:(id)arg2 ;
-(void)downloadIdentifier:(id)arg0 didReceiveChallenge:(id)arg1 authChallengeHandler:(id)arg2 ;
-(void)downloadIdentifier:(id)arg0 didWriteBytes:(NSInteger)arg1 totalBytesWritten:(NSInteger)arg2 totalBytesExpectedToWrite:(NSInteger)arg3 ;
-(void)downloadIdentifierDidBegin:(id)arg0 ;
-(void)downloadIdentifierDidFinish:(id)arg0 sandboxExtensionToken:(id)arg1 wasHandled:(id)arg2 ;
-(void)downloadIdentifierDidPause:(id)arg0 ;
-(void)fetchCurrentDownloadsWithCompletionHandler:(id)arg0 ;
-(void)performWithExclusiveControl:(id)arg0 ;
-(void)performWithExclusiveControlBeforeDate:(id)arg0 performHandler:(id)arg1 ;
-(void)removeDownloadIdentifier:(id)arg0 ;
-(void)syncDownloads:(id)arg0 ;


@end


#endif