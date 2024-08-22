// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPURCHASEPROTOCOLHANDLER_H
#define AMSPURCHASEPROTOCOLHANDLER_H

@class NSString;
@protocol NSURLSessionDelegate, AMSURLProtocolDelegate;


#import "AMSURLProtocolHandler.h"

@interface AMSPurchaseProtocolHandler : AMSURLProtocolHandler <NSURLSessionDelegate, AMSURLProtocolDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)reversePushSamplingPercentageForTask:(id)arg0 ;
-(BOOL)_isEquivalentURL:(id)arg0 toURL:(id)arg1 ;
-(BOOL)_shouldRetryForFailureAction:(id)arg0 response:(id)arg1 task:(id)arg2 decodedObject:(id)arg3 responseDictionary:(id)arg4 ;
-(id)_determineUpdatedBuyParamsFromResponse:(id)arg0 urlAction:(id)arg1 selectedAction:(id)arg2 purchaseInfo:(id)arg3 ;
-(id)_shouldRedirectWithPurchaseInfo:(id)arg0 bag:(id)arg1 urlAction:(id)arg2 currentURL:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleDialogRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id)arg3 ;
-(void)_syncDiversityBagFromResponse:(id)arg0 purchaseInfo:(id)arg1 ;
-(void)_syncKeybagFromResponse:(id)arg0 purchaseInfo:(id)arg1 ;
-(void)_updatePasswordSettingWithBuyParams:(id)arg0 account:(id)arg1 ;
-(void)_updateSubscriptionStatusFromBody:(id)arg0 account:(id)arg1 ;
-(void)handleCompletionWithTask:(id)arg0 metrics:(id)arg1 decodedObject:(id)arg2 completionHandler:(id)arg3 ;
-(void)reconfigureNewRequest:(id)arg0 originalTask:(id)arg1 redirect:(BOOL)arg2 error:(*id)arg3 ;
-(void)setSession:(id)arg0 ;


@end


#endif