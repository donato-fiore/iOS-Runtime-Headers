// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRELAYACTIVATIONSESSION_H
#define HMDRELAYACTIVATIONSESSION_H

@class HMFObject, NSString, HMFTimer, NSOperationQueue, NSURLSession;
@protocol HMDFairPlaySAPSessionDelegate, HMFTimerDelegate, HMFLogging, OS_dispatch_queue;


#import "HMDFairPlaySAPSession.h"

@interface HMDRelayActivationSession : HMFObject <HMDFairPlaySAPSessionDelegate, HMFTimerDelegate, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDFairPlaySAPSession *fairPlaySAPSession; // ivar: _fairPlaySAPSession
@property (retain, nonatomic) HMFTimer *fairPlaySessionTimer; // ivar: _fairPlaySessionTimer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOperationQueue *requestOperationQueue; // ivar: _requestOperationQueue
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURLSession *urlSession; // ivar: _urlSession
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)sharedSession;
-(id)init;
-(void)_addRequestOperation:(id)arg0 ;
-(void)_cancelAllPendingRequestOperations;
-(void)_handleCertificateResponseData:(id)arg0 response:(id)arg1 error:(id)arg2 fairPlaySession:(id)arg3 completionQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)_handleChallengeResponseData:(id)arg0 response:(id)arg1 error:(id)arg2 fairPlaySession:(id)arg3 completionQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)_handleFairPlayCertificateResponseData:(id)arg0 response:(id)arg1 error:(id)arg2 completionHandler:(id)arg3 ;
-(void)_handleFairPlaySetupExchangeResponseData:(id)arg0 response:(id)arg1 error:(id)arg2 completionHandler:(id)arg3 ;
-(void)_requestFairPlayCertificateWithCompletionHandler:(id)arg0 ;
-(void)_requestFairPlaySetupExchangeWithExchangeData:(id)arg0 completionHandler:(id)arg1 ;
-(void)_resumeRequestOperations;
-(void)_setupFairPlaySession;
-(void)_suspendRequestOperations;
-(void)_teardownFairPlaySession;
-(void)_verifyURLResponse:(id)arg0 responseData:(id)arg1 fairPlaySession:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestCertificateWithCertificateRequest:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestChallengeWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)session:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)session:(id)arg0 didReceiveClientExchangeData:(id)arg1 completionHandler:(id)arg2 ;
-(void)session:(id)arg0 didReceiveServerCertificateRequestWithCompletionHandler:(id)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif