// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAUTHSERVER_H
#define HMDAUTHSERVER_H

@class HMFObject, NSString, NSLocale, HMFTimer, NSData, MFAATokenManager, NSUUID;
@protocol HMFLogging, HMFTimerDelegate, HMDAuthServerDelegate, OS_dispatch_queue;



@interface HMDAuthServer : HMFObject <HMFLogging, HMFTimerDelegate>



@property (nonatomic) NSUInteger authFeatures; // ivar: _authFeatures
@property (retain, nonatomic) id *context; // ivar: _context
@property (nonatomic) NSUInteger currentOperation; // ivar: _currentOperation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDAuthServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) NSString *model; // ivar: _model
@property (nonatomic) NSInteger retryCount; // ivar: _retryCount
@property (retain, nonatomic) HMFTimer *retryTimer; // ivar: _retryTimer
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *token; // ivar: _token
@property (readonly) MFAATokenManager *tokenManager; // ivar: _tokenManager
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)resumeRetryIfPending;
-(id)initWithDelegate:(id)arg0 ;
-(void)_handleResponseMetadata:(id)arg0 ppid:(id)arg1 locale:(id)arg2 context:(id)arg3 error:(id)arg4 ;
-(void)_reportFailureWithContext:(id)arg0 error:(id)arg1 ;
-(void)getPPIDInfo:(id)arg0 model:(id)arg1 cert:(id)arg2 context:(id)arg3 ;
-(void)resetRetryOperation;
-(void)retryOrReportFailure:(id)arg0 context:(id)arg1 ;
-(void)saveRetryOperation:(NSUInteger)arg0 token:(id)arg1 authFeatures:(NSUInteger)arg2 uuid:(id)arg3 context:(id)arg4 locale:(id)arg5 model:(id)arg6 ;
-(void)sendActivationConfirmation:(id)arg0 uuid:(id)arg1 context:(id)arg2 ;
-(void)sendActivationRequest:(id)arg0 uuid:(id)arg1 context:(id)arg2 ;
-(void)sendPPIDInfoRequest:(id)arg0 model:(id)arg1 token:(id)arg2 authFeatures:(NSUInteger)arg3 uuid:(id)arg4 context:(id)arg5 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif