// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEODATAURLSESSION_H
#define GEODATAURLSESSION_H

@class NSString, NSOperationQueue, NSMutableDictionary;
@protocol NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, GEOSystemMonitorSystemSleepObserver, GEODataSession, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEODataURLSessionList.h"

@interface GEODataURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, GEOSystemMonitorSystemSleepObserver, GEODataSession>

 {
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    int _symptomsAlternateAdviceToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int nextSessionIdentifier; // ivar: _nextSessionIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation; // ivar: _sessionIsolation
@property (readonly, nonatomic) NSOperationQueue *sessionIsolationOperationQueue; // ivar: _sessionIsolationOperationQueue
@property (readonly, nonatomic) NSMutableDictionary *sessionTasks; // ivar: _sessionTasks
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEODataURLSessionList *urlSessions; // ivar: _urlSessions


-(BOOL)_wifiAssistRetryEnabled;
-(CGFloat)_wifiAssistRetryDelay;
-(id)activeSessionIdentifiers;
-(id)createNewURLSessionWithRequest:(id)arg0 ;
-(id)downloadTaskWithRequest:(id)arg0 priority:(float)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)init;
-(id)removeTaskForURLSession:(id)arg0 task:(id)arg1 ;
-(id)taskForURLSession:(id)arg0 task:(id)arg1 ;
-(id)taskWithRequest:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
-(id)taskWithRequest:(id)arg0 priority:(float)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)urlSessionForRequest:(id)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)_configureTask:(id)arg0 withRequest:(id)arg1 ;
-(void)_considerRetryingDueToAlternateAdvice;
-(void)configureTask:(id)arg0 withRequest:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)dealloc;
-(void)didReceiveMemoryPressureWarning;
-(void)finishTasksAndInvalidateForegroundSessions:(id)arg0 ;
-(void)pruneInactiveSessions;
-(void)replaceBackingTask:(id)arg0 withTask:(id)arg1 forURLSession:(id)arg2 ;
-(void)systemCanSleep:(id)arg0 ;
-(void)systemDidWake;
-(void)systemWillSleep:(id)arg0 ;
-(void)tearDown;


@end


#endif