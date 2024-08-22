// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAPPLEIDFOLLOWUPSERVERUIPRESENTER_H
#define AKAPPLEIDFOLLOWUPSERVERUIPRESENTER_H

@class AKAppleIDAuthenticationController, NSURL, FLFollowUpItem;
@protocol AKExtensionlessFollowUpServiceProvider, AKFollowupExtensionlessServerUIProvider;

#import <Foundation/Foundation.h>

#import "AKAppleIDServerUIContextController.h"
#import "AKAppleIDServerUIEventHandlerImp.h"
#import "AKAppleIDAuthenticationInAppExtensionContext.h"
#import "AKExtensionlessFollowUpHelperContext.h"

@interface AKAppleIDFollowUpServerUIPresenter : NSObject <AKExtensionlessFollowUpServiceProvider, AKFollowupExtensionlessServerUIProvider>

 {
    AKAppleIDServerUIContextController *_serverUIContextController;
    AKAppleIDAuthenticationController *_authController;
    AKAppleIDServerUIEventHandlerImp *_eventHandler;
    id *_presentingClientCompletion;
    id *_serverUICompletion;
    NSURL *_initialURL;
    FLFollowUpItem *_item;
}


@property (copy, nonatomic) AKAppleIDAuthenticationInAppExtensionContext *authContext; // ivar: _authContext
@property (copy, nonatomic) AKExtensionlessFollowUpHelperContext *followupHelperContext; // ivar: _followupHelperContext


-(BOOL)_shouldSignWithIDMSAppleIDHeader;
-(BOOL)shouldAcknowledgeUserAction;
-(id)_fetchCurrentFollowUpItem;
-(id)init;
-(void)_performAuthKitActionWithResponse:(id)arg0 additionalData:(id)arg1 error:(id)arg2 ;
-(void)_performClientCompletionWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_prepareServerUIContext;
-(void)_presentServerUIWithConfiguration:(id)arg0 ;
-(void)_signRequestAndPrepareServerConfig:(id)arg0 ;
-(void)_signWithIDMSAppleIDHeaderForRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)acknowledgeActionTakenOnFollowUpWithIdentifier:(id)arg0 withAdditionalData:(id)arg1 completion:(id)arg2 ;
-(void)handleFinalResponse:(id)arg0 additionalData:(id)arg1 error:(id)arg2 ;
-(void)presentServerUIWithContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)signAdditionalHeadersWithRequest:(id)arg0 ;


@end


#endif