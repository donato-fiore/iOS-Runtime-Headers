// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUREACHABILITYMONITOR_H
#define CUREACHABILITYMONITOR_H

@class NSURLSession, NSString, NSURL;
@protocol NSURLSessionDelegate, NSURLSessionDownloadDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUReachabilityMonitor : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>

 {
    int _downloadStatus;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSURLSession *_urlSession;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(id)init;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_activate;
-(void)_complete:(id)arg0 ;
-(void)_startDownload;
-(void)activate;
-(void)invalidate;


@end


#endif