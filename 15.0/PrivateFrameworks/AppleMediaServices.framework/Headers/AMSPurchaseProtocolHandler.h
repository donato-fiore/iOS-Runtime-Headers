// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(BOOL)_shouldRetryForFailureAction:(id)arg0 response:(id)arg1 task:(id)arg2 decodedObject:(id)arg3 responseDictionary:(id)arg4 ;
-(id)_locateBuyParamsFromResponse:(id)arg0 selectedAction:(id)arg1 purchaseInfo:(id)arg2 ;
-(id)handleCompletionWithTask:(id)arg0 metrics:(id)arg1 decodedObject:(id)arg2 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleDialogRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id)arg3 ;
-(void)_syncDiversityBagFromResponse:(id)arg0 purchaseInfo:(id)arg1 ;
-(void)_syncKeybagFromResponse:(id)arg0 purchaseInfo:(id)arg1 ;
-(void)_updatePasswordSettingWithBuyParams:(id)arg0 account:(id)arg1 ;
-(void)_updateSubscriptionStatusFromBody:(id)arg0 account:(id)arg1 ;
-(void)reconfigureNewRequest:(id)arg0 originalTask:(id)arg1 redirect:(BOOL)arg2 error:(*id)arg3 ;
-(void)setSession:(id)arg0 ;


@end


#endif