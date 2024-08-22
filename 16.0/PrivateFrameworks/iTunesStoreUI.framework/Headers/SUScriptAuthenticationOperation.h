// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTAUTHENTICATIONOPERATION_H
#define SUSCRIPTAUTHENTICATIONOPERATION_H

@class ISOperation, SSMutableAuthenticationContext, NSNumber, UIViewController;



@interface SUScriptAuthenticationOperation : ISOperation {
    SSMutableAuthenticationContext *_authenticationContext;
}


@property (retain) NSNumber *authenticatedDSID; // ivar: _authenticatedDSID
@property (retain) UIViewController *presentingViewController; // ivar: _presentingViewController


-(id)authenticatedAccountDSID;
-(id)init;
-(id)initWithAccountIdentifier:(id)arg0 ;
-(void)run;
-(void)sendCompletionCallback:(id)arg0 ;
-(void)setScriptOptions:(id)arg0 ;


@end


#endif