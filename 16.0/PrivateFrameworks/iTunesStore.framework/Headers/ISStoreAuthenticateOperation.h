// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISSTOREAUTHENTICATEOPERATION_H
#define ISSTOREAUTHENTICATEOPERATION_H

@class SSMutableAuthenticationContext, SSAuthenticateResponse, SSAuthenticationContext, NSString;
@protocol SSAuthenticateRequestDelegate;


#import "ISOperation.h"

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate>

 {
    SSMutableAuthenticationContext *_authenticationContext;
    SSAuthenticateResponse *_authenticateResponse;
}


@property (readonly) SSAuthenticateResponse *authenticateResponse;
@property (readonly) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) id *parentViewController; // ivar: _parentViewController
@property (readonly) Class superclass;


+(BOOL)_copyErrorForAuthenticateResponse:(id)arg0 error:(*id)arg1 ;
-(id)authenticatedAccountDSID;
-(id)initWithAuthenticationContext:(id)arg0 ;
-(id)uniqueKey;
-(void)_handleAuthenticateResponse:(id)arg0 ;
-(void)dealloc;
-(void)run;


@end


#endif