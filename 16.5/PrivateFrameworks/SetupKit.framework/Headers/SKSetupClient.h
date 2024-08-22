// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKSETUPCLIENT_H
#define SKSETUPCLIENT_H

@class CUNANEndpoint, CUNANSubscriber, NSString;
@protocol CUActivatable, CUAuthenticatableClient, OS_dispatch_queue;


#import "SKSetupBase.h"

@interface SKSetupClient : SKSetupBase <CUActivatable, CUAuthenticatableClient>

 {
    id *_activateCompletion;
    CUNANEndpoint *_nanEndpoint;
    CUNANSubscriber *_nanSubscriber;
}


@property (copy, nonatomic) id *authCompletionHandler; // ivar: _authCompletionHandler
@property (copy, nonatomic) id *authPromptHandler; // ivar: _authPromptHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *overallCompletionHandler; // ivar: _overallCompletionHandler
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly) Class superclass;


-(id)init;
-(void)_activateBLEWithCompletion:(id)arg0 ;
-(void)_activateNANContinueWithError:(id)arg0 ;
-(void)_activateNANWithCompletion:(id)arg0 ;
-(void)_activateOOBWithCompletion:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_completeWithError:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidateSteps;
-(void)_invalidated;
-(void)_prepareSteps;
-(void)_prepareStepsOSRecovery;
-(void)_run;
-(void)_setupConnectionCommon:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)tryPassword:(id)arg0 ;


@end


#endif