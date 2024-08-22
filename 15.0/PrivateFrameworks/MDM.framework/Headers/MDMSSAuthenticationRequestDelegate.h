// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDMSSAUTHENTICATIONREQUESTDELEGATE_H
#define MDMSSAUTHENTICATIONREQUESTDELEGATE_H

@class SSAccount, NSString, SSAuthenticateRequest;
@protocol SSAuthenticateRequestDelegate;


#import "MDMSSRequestDelegate.h"

@interface MDMSSAuthenticationRequestDelegate : MDMSSRequestDelegate <SSAuthenticateRequestDelegate>

 {
    SSAccount *_authenticatedAccount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) SSAuthenticateRequest *request;
@property (readonly) Class superclass;


+(id)instanceWithAuthenticationContext:(id)arg0 ;
-(id)storeLoginFailedError;
-(void)authenticateRequest:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif