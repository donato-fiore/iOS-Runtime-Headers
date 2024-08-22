// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORESOURCELOADOPERATION_H
#define GEORESOURCELOADOPERATION_H

@class NSURL, NSURLSession, NSURLSessionTask, NSString, NSDate, NSMutableData, NSProgress;
@protocol NSURLSessionDataDelegate, GEOResourceLoadOperation, OS_dispatch_queue, GEORequestCounterTicket, OS_os_log;

#import <Foundation/Foundation.h>

#import "GEOApplicationAuditToken.h"
#import "GEOReportedProgress.h"

@interface GEOResourceLoadOperation : NSObject <NSURLSessionDataDelegate, GEOResourceLoadOperation>

 {
    NSURL *_url;
    NSURL *_proxyURL;
    id *_completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    id<GEORequestCounterTicket> *_requestCounterTicket;
    NSString *_eTag;
    GEOApplicationAuditToken *_auditToken;
    NSURL *_authProxyURL;
    os_unfair_lock_s _lock;
    GEOReportedProgress *_progress;
    NSObject<OS_os_log> *_log;
    NSString *_serviceAddress;
    NSDate *_starttime;
    NSURL *_downloadedFileURL;
    NSMutableData *_data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL preferDirectNetworking; // ivar: _preferDirectNetworking
@property (readonly) NSProgress *progress;
@property (nonatomic) BOOL requiresWiFi; // ivar: _requiresWiFi
@property (readonly) Class superclass;


-(id)initWithResource:(id)arg0 eTag:(id)arg1 auditToken:(id)arg2 baseURL:(id)arg3 alternateURLs:(id)arg4 proxyURL:(id)arg5 log:(id)arg6 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
// -(void)startWithCompletionHandler:(id)arg0 callbackQueue:(unk)arg1  ;


@end


#endif