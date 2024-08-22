// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSCFURLSESSIONDELEGATEWRAPPER_H
#define __NSCFURLSESSIONDELEGATEWRAPPER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "__NSCFURLSessionDelegateWrapper.h"
#import "NSURLSession.h"

@interface __NSCFURLSessionDelegateWrapper : NSObject {
    BOOL checked_sessionDidBecomeInvalidWithError;
    BOOL checked_sessionDidReceiveChallenge;
    BOOL checked_sessionDidFinishEventsForBackgroundURLSession;
    BOOL checked__getAuthHeadersForResponse;
    BOOL checked__sessionOpenFileAtPath;
    BOOL checked__sessionCompanionAvailabilityChanged;
    BOOL checked__sessionNeedConnectedSocketToHost;
    BOOL checked_willBeginDelayedRequest;
    BOOL checked_isWaitingForConnectivity;
    BOOL checked_willPerformHTTPRedirection;
    BOOL checked_didReceiveChallenge;
    BOOL checked_needNewBodyStream;
    BOOL checked_didSendBodyData;
    BOOL checked_didFinishCollectingMetrics;
    BOOL checked_didCompleteWithError;
    BOOL checked__schemeUpgraded;
    BOOL checked__willSendRequestForEstablishedConnection;
    BOOL checked__conditionalRequirementsChanged;
    BOOL checked__didReceiveInformationalResponse;
    BOOL checked__willUseEffectiveConfiguration;
    BOOL checked__isWaitingForConnection_withoutError;
    BOOL checked__isWaitingForConnection_withError;
    BOOL checked_didReceiveResponse;
    BOOL checked_didBecomeDownloadTask;
    BOOL checked_didBecomeStreamTask;
    BOOL checked_didReceiveData_withoutCB;
    BOOL checked_didReceiveData_withCB;
    BOOL checked_willCacheResponse;
    BOOL checked__willRetryBackgroundDataTask_withoutError;
    BOOL checked__willRetryBackgroundDataTask_withError;
    BOOL checked_didFinishDownloadingToURL;
    BOOL checked_didWriteData;
    BOOL checked_didResumeAtOffset;
    BOOL checked__didReceiveDownloadResponse;
    BOOL checked__needsDownloadDirectory;
    BOOL checked_readClosed;
    BOOL checked_writeClosed;
    BOOL checked_betterRouteDiscovered;
    BOOL checked_didBecomeInputOutputStream;
    BOOL checked__connectionEstablished;
    BOOL checked_didOpenWithProtocol;
    BOOL checked_didCloseWithCode;
    BOOL accept_sessionDidBecomeInvalidWithError;
    BOOL accept_sessionDidReceiveChallenge;
    BOOL accept_sessionDidFinishEventsForBackgroundURLSession;
    BOOL accept__getAuthHeadersForResponse;
    BOOL accept__sessionOpenFileAtPath;
    BOOL accept__sessionCompanionAvailabilityChanged;
    BOOL accept__sessionNeedConnectedSocketToHost;
    BOOL accept_willBeginDelayedRequest;
    BOOL accept_isWaitingForConnectivity;
    BOOL accept_willPerformHTTPRedirection;
    BOOL accept_didReceiveChallenge;
    BOOL accept_needNewBodyStream;
    BOOL accept_didSendBodyData;
    BOOL accept_didFinishCollectingMetrics;
    BOOL accept_didCompleteWithError;
    BOOL accept__schemeUpgraded;
    BOOL accept__willSendRequestForEstablishedConnection;
    BOOL accept__conditionalRequirementsChanged;
    BOOL accept__didReceiveInformationalResponse;
    BOOL accept__willUseEffectiveConfiguration;
    BOOL accept__isWaitingForConnection_withoutError;
    BOOL accept__isWaitingForConnection_withError;
    BOOL accept_didReceiveResponse;
    BOOL accept_didBecomeDownloadTask;
    BOOL accept_didBecomeStreamTask;
    BOOL accept_didReceiveData_withoutCB;
    BOOL accept_didReceiveData_withCB;
    BOOL accept_willCacheResponse;
    BOOL accept__willRetryBackgroundDataTask_withoutError;
    BOOL accept__willRetryBackgroundDataTask_withError;
    BOOL accept_didFinishDownloadingToURL;
    BOOL accept_didWriteData;
    BOOL accept_didResumeAtOffset;
    BOOL accept__didReceiveDownloadResponse;
    BOOL accept__needsDownloadDirectory;
    BOOL accept_readClosed;
    BOOL accept_writeClosed;
    BOOL accept_betterRouteDiscovered;
    BOOL accept_didBecomeInputOutputStream;
    BOOL accept__connectionEstablished;
    BOOL accept_didOpenWithProtocol;
    BOOL accept_didCloseWithCode;
    __NSCFURLSessionDelegateWrapper *_fallbackDelegateWrapper;
    id *_wrappedDelegate;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_workQueue;
}






@end


#endif