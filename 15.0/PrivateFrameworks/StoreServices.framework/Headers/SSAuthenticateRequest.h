// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSAUTHENTICATEREQUEST_H
#define SSAUTHENTICATEREQUEST_H

@class UIViewController, NSString;
@protocol SSXPCCoding, SSAuthenticateRequestDelegate;


#import "SSRequest.h"
#import "SSAuthenticationContext.h"
#import "SSLogConfig.h"

@interface SSAuthenticateRequest : SSRequest <SSXPCCoding>

 {
    SSAuthenticationContext *_authenticationContext;
}


@property (weak, nonatomic) UIViewController *_parentViewController; // ivar: __parentViewController
@property (readonly) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SSAuthenticateRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SSLogConfig *logConfig; // ivar: _logConfig
@property (readonly, nonatomic) NSString *logUUID;
@property (readonly) Class superclass;


+(BOOL)_isAuthkitEntitled;
+(BOOL)localAuthenticationAvailable;
+(id)_accountToAuthenticateWithAuthenticationContext:(id)arg0 ;
-(BOOL)_shouldRunAuthenticationForAccount:(id)arg0 ;
-(BOOL)start;
-(NSInteger)_responseTypeForError:(id)arg0 ;
-(id)_verifyCredentialsOptionsFromUpdateAccountResponse:(id)arg0 skipAuthKit:(BOOL)arg1 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAuthenticationContext:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)run;
-(void)_handleDialogFromError:(id)arg0 ;
-(void)_performRemoteAuthenticationWithCompletion:(id)arg0 ;
-(void)startWithAuthenticateResponseBlock:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif