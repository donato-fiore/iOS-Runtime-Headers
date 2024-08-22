// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIPAYMENTVERIFICATIONPROTOCOLHANDLER_H
#define AMSUIPAYMENTVERIFICATIONPROTOCOLHANDLER_H

@class AMSURLProtocolHandler, ACAccount, NSMutableDictionary, NSString;
@protocol NSURLSessionDelegate, AMSURLProtocolDelegate;



@interface AMSUIPaymentVerificationProtocolHandler : AMSURLProtocolHandler <NSURLSessionDelegate, AMSURLProtocolDelegate>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSMutableDictionary *accountParameters; // ivar: _accountParameters
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_headersFromAccount:(id)arg0 ;
+(id)_headersFromAccountParameters:(id)arg0 ;
+(id)headersFromAccount:(id)arg0 accountParameters:(id)arg1 ;
+(id)requestAddingHeaders:(id)arg0 to:(id)arg1 ;
+(void)_setHeaders:(id)arg0 on:(id)arg1 ;
-(id)initWithAccount:(id)arg0 accountParameters:(id)arg1 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)reconfigureNewRequest:(id)arg0 originalTask:(id)arg1 redirect:(BOOL)arg2 error:(*id)arg3 ;


@end


#endif