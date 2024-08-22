// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAUTHENTICATORDIALOG_H
#define SFAUTHENTICATORDIALOG_H

@class SFDialog, _WKWebAuthenticationAssertionResponse, NSArray, NSString, _WKWebAuthenticationPanel;
@protocol _SFAuthenticatorDialog;


#import "_SFDialogView.h"

@interface SFAuthenticatorDialog : SFDialog <_SFAuthenticatorDialog>

 {
    _SFDialogView *_dialogView;
    NSInteger _state;
    id *_pinRequestHandler;
    NSInteger _responseSource;
    id *_selectAssertionResponseHandler;
    _WKWebAuthenticationAssertionResponse *_assertionResponse;
    NSInteger _biometryType;
    id *_localAuthenticatorPolicyHandler;
}


@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) BOOL isForUpdateOnly; // ivar: _isForUpdateOnly
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) _WKWebAuthenticationPanel *panel; // ivar: _panel
@property (copy, nonatomic) NSString *title; // ivar: _title


-(NSInteger)presentationStyle;
-(id)initWithPanel:(id)arg0 ;
-(id)newDialogViewRepresentation;
-(id)useSecurityKeyAction;
-(void)_didSelectRow:(id)arg0 ;
-(void)_shake;
-(void)dealloc;
-(void)decidePolicyForLocalAuthenticatorWithCompletionHandler:(id)arg0 ;
-(void)didCompleteWithResponse:(id)arg0 ;
-(void)requestPINWithRemainingRetries:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)selectAssertionResponse:(id)arg0 source:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)transitionToState:(NSInteger)arg0 ;
-(void)triggerUseSecurityKey;
-(void)updateWebAuthenticationPanel:(NSInteger)arg0 ;


@end


#endif