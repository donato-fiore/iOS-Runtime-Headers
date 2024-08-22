// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAEXCHANGEOAUTHFLOWCONTROLLER_H
#define DAEXCHANGEOAUTHFLOWCONTROLLER_H



#import "DAEASOAuthFlowController.h"

@interface DAExchangeOAuthFlowController : DAEASOAuthFlowController



-(id)_accountDescription;
-(id)initWithAuthURI:(id)arg0 easEndPoint:(id)arg1 username:(id)arg2 claims:(id)arg3 ;
-(id)initialRedirectURL;
-(void)exchangeAuthCode:(id)arg0 codeVerifier:(id)arg1 claims:(id)arg2 withCompletion:(id)arg3 ;


@end


#endif