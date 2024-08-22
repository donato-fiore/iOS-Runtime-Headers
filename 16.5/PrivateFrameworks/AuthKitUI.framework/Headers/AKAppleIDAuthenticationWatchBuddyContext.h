// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAPPLEIDAUTHENTICATIONWATCHBUDDYCONTEXT_H
#define AKAPPLEIDAUTHENTICATIONWATCHBUDDYCONTEXT_H

@class NSString, RUIStyle;
@protocol RemoteUIControllerDelegate;


#import "AKAppleIDAuthenticationInAppContext.h"

@interface AKAppleIDAuthenticationWatchBuddyContext : AKAppleIDAuthenticationInAppContext <RemoteUIControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) RUIStyle *remoteUIStyle; // ivar: _remoteUIStyle
@property (readonly) Class superclass;


-(void)dismissBasicLoginUIWithCompletion:(id)arg0 ;
-(void)presentBasicLoginUIWithCompletion:(id)arg0 ;
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg0 completion:(id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg0 title:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)willPresentModalNavigationController:(id)arg0 ;


@end


#endif