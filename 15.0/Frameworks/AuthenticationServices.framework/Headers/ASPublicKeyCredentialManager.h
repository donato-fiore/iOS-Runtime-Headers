// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASPUBLICKEYCREDENTIALMANAGER_H
#define ASPUBLICKEYCREDENTIALMANAGER_H

@class _WKWebAuthenticationPanel, NSMutableDictionary, NSString, LAContext;
@protocol _WKWebAuthenticationPanelDelegate, OS_dispatch_queue, ASPublicKeyCredentialManagerDelegate;

#import <Foundation/Foundation.h>


@interface ASPublicKeyCredentialManager : NSObject <_WKWebAuthenticationPanelDelegate>

 {
    _WKWebAuthenticationPanel *_panel;
    NSMutableDictionary *_userHandlesToAssertionResponses;
    id *_selectPlatformAssertionCallback;
    id *_selectSecurityKeyAssertionCallback;
    NSString *_currentRelyingPartyIdentifier;
    LAContext *_currentAuthenticatedContext;
    BOOL _hasRunningPublicKeyCredentialOperation;
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<ASPublicKeyCredentialManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_cancelCurrentOperationSynchronouslyOnInternalQueueIfNecessary;
-(void)_createCredentialOfKind:(NSUInteger)arg0 withOptions:(id)arg1 ;
-(void)_tearDownOnMainQueue;
-(void)assertUsingPlatformCredentialForLoginChoice:(id)arg0 authenticatedContext:(id)arg1 ;
-(void)assertUsingSecurityKeyCredentialForLoginChoice:(id)arg0 ;
-(void)beginAssertionsWithOptions:(id)arg0 ;
-(void)beginCreatingNewSecurityKeyCredentialIfAvailableWithOptions:(id)arg0 ;
-(void)cancelCurrentOperationIfNecessary;
-(void)clearAllCredentials;
-(void)createNewPlatformCredentialWithOptions:(id)arg0 authenticatedContext:(id)arg1 ;
-(void)panel:(id)arg0 dismissWebAuthenticationPanelWithResult:(NSInteger)arg1 ;
-(void)panel:(id)arg0 requestLAContextForUserVerificationWithCompletionHandler:(id)arg1 ;
-(void)panel:(id)arg0 requestPINWithRemainingRetries:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)panel:(id)arg0 selectAssertionResponse:(id)arg1 source:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)panel:(id)arg0 updateWebAuthenticationPanel:(NSInteger)arg1 ;


@end


#endif