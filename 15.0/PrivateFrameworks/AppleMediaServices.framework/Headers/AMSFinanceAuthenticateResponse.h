// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSFINANCEAUTHENTICATERESPONSE_H
#define AMSFINANCEAUTHENTICATERESPONSE_H

@class NSString, NSDictionary;
@protocol AMSFinancePerformable;

#import <Foundation/Foundation.h>

#import "AMSAuthenticateRequest.h"
#import "AMSFinanceDialogResponse.h"

@interface AMSFinanceAuthenticateResponse : NSObject <AMSFinancePerformable>



@property (readonly, nonatomic) AMSAuthenticateRequest *authenticateRequest; // ivar: _authenticateRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *dialogDictionary; // ivar: _dialogDictionary
@property (readonly, nonatomic) AMSFinanceDialogResponse *dialogResponse; // ivar: _dialogResponse
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)authenticationTypeForResponse:(id)arg0 responseDictionary:(id)arg1 ;
+(id)_authenticateRequestWithAuthType:(NSUInteger)arg0 taskInfo:(id)arg1 dialogResponse:(id)arg2 ;
+(id)_performAuthRequest:(id)arg0 actionResult:(id)arg1 redirectURL:(id)arg2 taskInfo:(id)arg3 ;
+(id)_presentAuthRequest:(id)arg0 taskInfo:(id)arg1 ;
+(id)performAuthFromResponse:(id)arg0 taskInfo:(id)arg1 ;
+(void)_handleDialogFromAuthError:(id)arg0 taskInfo:(id)arg1 ;
+(void)_updateTaskWithAuthedAccount:(id)arg0 taskInfo:(id)arg1 ;
+(void)_updateTaskWithLastCredentialSource:(id)arg0 taskInfo:(id)arg1 ;
-(id)_locateActionableButtonUsingDialogResponse:(id)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 taskInfo:(id)arg1 ;
-(id)performWithTaskInfo:(id)arg0 ;


@end


#endif