// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFHTTPCLIENT_H
#define HMFHTTPCLIENT_H

@class NSURL, NSString, NSOperationQueue, NSURLSession;
@protocol HMFLogging, HMFNetMonitorDelegate, HMFTimerDelegate, NSURLSessionDelegate, OS_dispatch_queue, HMFHTTPClientDelegate;


#import "HMFObject.h"
#import "HMFHTTPClientConfiguration.h"
#import "HMFTimer.h"
#import "HMFNetManager.h"
#import "HMFNetService.h"
#import "HMFNetMonitor.h"

@interface HMFHTTPClient : HMFObject <HMFLogging, HMFNetMonitorDelegate, HMFTimerDelegate, NSURLSessionDelegate>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) BOOL allowAnonymousConnection; // ivar: _allowAnonymousConnection
@property (readonly, copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) HMFHTTPClientConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMFHTTPClientDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HMFTimer *delegatedPingTimer; // ivar: _delegatedPingTimer
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMFNetManager *netManager; // ivar: _netManager
@property (readonly, copy, nonatomic) HMFNetService *netService; // ivar: _netService
@property (readonly, nonatomic) NSUInteger options;
@property (nonatomic, getter=isPinging) BOOL pinging; // ivar: _pinging
@property (readonly, nonatomic) HMFNetMonitor *reachabilityMonitor; // ivar: _reachabilityMonitor
@property (readonly, nonatomic) NSOperationQueue *reachabilityProbeQueue; // ivar: _reachabilityProbeQueue
@property (nonatomic, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (copy) id *timerFactory; // ivar: _timerFactory


+(id)baseURLWithScheme:(id)arg0 hostAddress:(id)arg1 port:(NSUInteger)arg2 ;
+(id)logCategory;
-(BOOL)requestClientReachabilityPingWithRetry:(BOOL)arg0 ;
-(id)attributeDescriptions;
-(id)createNSURLSession:(id)arg0 ;
-(id)init;
-(id)initWithBaseURL:(id)arg0 configuration:(id)arg1 ;
-(id)initWithBaseURL:(id)arg0 configuration:(id)arg1 session:(id)arg2 reachabilityMonitor:(id)arg3 netManager:(id)arg4 ;
-(id)initWithBaseURL:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithNetService:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithService:(id)arg0 configuration:(id)arg1 ;
-(id)initWithService:(id)arg0 configuration:(id)arg1 session:(id)arg2 reachabilityMonitor:(id)arg3 netManager:(id)arg4 ;
-(id)logIdentifier;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)_sendRequest:(id)arg0 baseURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)cancelPendingRequests;
-(void)dealloc;
-(void)finishCommonInitialization;
-(void)invalidate;
-(void)networkMonitorIsReachable:(id)arg0 ;
-(void)networkMonitorIsUnreachable:(id)arg0 ;
-(void)resolveWithCompletionHandler:(id)arg0 ;
-(void)sendRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)startDelegatedPingTimer;
-(void)startReachabilityProbe;
-(void)stopDelegatedPingTimer;
-(void)timerDidFire:(id)arg0 ;


@end


#endif