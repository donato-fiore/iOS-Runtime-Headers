// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRUSERNOTIFICATIONMANAGER_H
#define TRUSERNOTIFICATIONMANAGER_H


#import <Foundation/Foundation.h>

#import "_TRUserNotification.h"

@interface TRUserNotificationManager : NSObject

@property (retain, nonatomic) _TRUserNotification *activeUserNotification; // ivar: _activeUserNotification


+(id)sharedInstance;
-(void)_showUserNotificationWithDictionary:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)presentAuthenticationFailureWithMessage:(id)arg0 completion:(id)arg1 ;
-(void)presentErrorWithTitle:(id)arg0 message:(id)arg1 completion:(id)arg2 ;
-(void)presentLegacyAuthenticationFailedDialogWithMessage:(id)arg0 completion:(id)arg1 ;
-(void)presentWiFiNetworkConnectionError:(BOOL)arg0 completion:(id)arg1 ;
-(void)requestAppleIDAuthenticationWithAccountID:(id)arg0 completion:(id)arg1 ;
-(void)requestAuthenticationWithAccountID:(id)arg0 message:(id)arg1 completion:(id)arg2 ;
-(void)requestLegacyAuthenticationWithAccountID:(id)arg0 completion:(id)arg1 ;
-(void)requestPermissionForDiagnosticSubmissionWithCompletion:(id)arg0 ;
-(void)requestPermissionToInitiateSetupWithCompletion:(id)arg0 ;


@end


#endif