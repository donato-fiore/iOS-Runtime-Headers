// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKQUICKPAYMENTSESSIONLOCALAUTHENTICATIONCOORDINATOR_H
#define NPKQUICKPAYMENTSESSIONLOCALAUTHENTICATIONCOORDINATOR_H

@class NSNumber, LAContext, NSData, NSError, NSMutableArray;
@protocol LAUIDelegate, OS_dispatch_queue, NPKQuickPaymentSessionLocalAuthenticationCoordinatorCredentialDelegate;

#import <Foundation/Foundation.h>


@interface NPKQuickPaymentSessionLocalAuthenticationCoordinator : NSObject <LAUIDelegate>



@property (retain, nonatomic) NSNumber *activeLocalAuthenticationEvent; // ivar: _activeLocalAuthenticationEvent
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) LAContext *completedContext; // ivar: _completedContext
@property (retain, nonatomic) NSData *completedCredential; // ivar: _completedCredential
@property (retain, nonatomic) NSError *completedError; // ivar: _completedError
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (weak, nonatomic) NSObject<NPKQuickPaymentSessionLocalAuthenticationCoordinatorCredentialDelegate> *credentialDelegate; // ivar: _credentialDelegate
@property (retain, nonatomic) LAContext *inProgressContext; // ivar: _inProgressContext
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *localAuthenticationQueue; // ivar: _localAuthenticationQueue
@property (retain, nonatomic) NSMutableArray *pendingLocalAuthenticationEvents; // ivar: _pendingLocalAuthenticationEvents


-(NSInteger)_credentialTypeForEvent:(NSInteger)arg0 ;
-(id)_nameForLocalAuthenticationEvent:(NSInteger)arg0 ;
-(id)initWithCallbackQueue:(id)arg0 ;
-(void)_activateLocalAuthenticationEvent:(NSInteger)arg0 ;
-(void)_cancelLocalAuthentication;
-(void)_deactivateLocalAuthenticationEvent:(NSInteger)arg0 ;
-(void)_handleLocalAuthenticationPolicyEvaluatedWithContext:(id)arg0 error:(id)arg1 ;
-(void)_invokeCompletionHandlerForInvalidationWithError:(id)arg0 ;
-(void)_performDelegateCallback:(id)arg0 ;
-(void)_presentNextLocalAuthenticationEvent;
-(void)beginLocalAuthenticationWithAccessControl:(struct __SecAccessControl *)arg0 operation:(NSInteger)arg1 completion:(id)arg2 ;
-(void)beginLocalAuthenticationWithCompletion:(id)arg0 ;
-(void)beginLocalAuthenticationWithPolicy:(NSInteger)arg0 completion:(id)arg1 ;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)invalidateLocalAuthenticationContexts;


@end


#endif