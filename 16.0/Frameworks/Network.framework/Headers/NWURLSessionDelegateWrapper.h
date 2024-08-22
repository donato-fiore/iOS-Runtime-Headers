// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWURLSESSIONDELEGATEWRAPPER_H
#define NWURLSESSIONDELEGATEWRAPPER_H

@class NSURLSession;
@protocol NSObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NWURLSessionDelegateWrapper.h"
#import "NWURLSessionDelegateQueue.h"

@interface NWURLSessionDelegateWrapper : NSObject {
    BOOL checked_sessionDidBecomeInvalidWithError;
    BOOL checked_sessionDidReceiveChallenge;
    BOOL checked_sessionDidFinishEventsForBackgroundURLSession;
    BOOL checked_didCreateTask;
    BOOL checked_willBeginDelayedRequest;
    BOOL checked_isWaitingForConnectivity;
    BOOL checked_willPerformHTTPRedirection;
    BOOL checked_didReceiveChallenge;
    BOOL checked_needNewBodyStream;
    BOOL checked_didSendBodyData;
    BOOL checked_didFinishCollectingMetrics;
    BOOL checked_didCompleteWithError;
    BOOL checked__schemeUpgraded;
    BOOL checked__didReceiveInformationalResponse;
    BOOL checked_didReceiveResponse;
    BOOL checked_didBecomeDownloadTask;
    BOOL checked_didBecomeStreamTask;
    BOOL checked_didReceiveData_withoutCB;
    BOOL checked_didReceiveData_withCB;
    BOOL checked_willCacheResponse;
    BOOL checked_didFinishDownloadingToURL;
    BOOL checked_didWriteData;
    BOOL checked_didResumeAtOffset;
    BOOL checked_readClosed;
    BOOL checked_writeClosed;
    BOOL checked_betterRouteDiscovered;
    BOOL checked_didBecomeInputOutputStream;
    BOOL checked_didOpenWithProtocol;
    BOOL checked_didCloseWithCode;
    BOOL accept_sessionDidBecomeInvalidWithError;
    BOOL accept_sessionDidReceiveChallenge;
    BOOL accept_sessionDidFinishEventsForBackgroundURLSession;
    BOOL accept_didCreateTask;
    BOOL accept_willBeginDelayedRequest;
    BOOL accept_isWaitingForConnectivity;
    BOOL accept_willPerformHTTPRedirection;
    BOOL accept_didReceiveChallenge;
    BOOL accept_needNewBodyStream;
    BOOL accept_didSendBodyData;
    BOOL accept_didFinishCollectingMetrics;
    BOOL accept_didCompleteWithError;
    BOOL accept__schemeUpgraded;
    BOOL accept__didReceiveInformationalResponse;
    BOOL accept_didReceiveResponse;
    BOOL accept_didBecomeDownloadTask;
    BOOL accept_didBecomeStreamTask;
    BOOL accept_didReceiveData_withoutCB;
    BOOL accept_didReceiveData_withCB;
    BOOL accept_willCacheResponse;
    BOOL accept_didFinishDownloadingToURL;
    BOOL accept_didWriteData;
    BOOL accept_didResumeAtOffset;
    BOOL accept_readClosed;
    BOOL accept_writeClosed;
    BOOL accept_betterRouteDiscovered;
    BOOL accept_didBecomeInputOutputStream;
    BOOL accept_didOpenWithProtocol;
    BOOL accept_didCloseWithCode;
    id<NSObject> *_wrappedDelegate;
    NWURLSessionDelegateWrapper *_fallbackDelegateWrapper;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_workQueue;
    NWURLSessionDelegateQueue *_delegateQueueWrapper;
}






@end


#endif