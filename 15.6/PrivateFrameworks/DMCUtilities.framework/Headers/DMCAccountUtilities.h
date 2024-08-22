// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCACCOUNTUTILITIES_H
#define DMCACCOUNTUTILITIES_H


#import <Foundation/Foundation.h>

#import "DMCHangDetectionQueue.h"

@interface DMCAccountUtilities : NSObject

@property (retain, nonatomic) DMCHangDetectionQueue *signInQueue; // ivar: _signInQueue


+(id)_appleAccountWithPersonaID:(id)arg0 ;
+(id)accountIdentifierForAppleAccountWithPersonaID:(id)arg0 ;
+(id)appStoreAccountIdentifierForPersona:(id)arg0 ;
+(id)managedAppleIDNameWithPersonaID:(id)arg0 ;
-(BOOL)_signIniCloudAccountWithAuthenticationResult:(id)arg0 personaID:(id)arg1 baseViewController:(id)arg2 outError:(*id)arg3 ;
-(BOOL)_signIniTunesAccountWithAuthenticationResult:(id)arg0 personaID:(id)arg1 canMakeAccountActive:(BOOL)arg2 baseViewController:(id)arg3 outError:(*id)arg4 ;
-(void)signInAccountsWithTypes:(id)arg0 authenticationResult:(id)arg1 personaID:(id)arg2 canMakeAccountActive:(BOOL)arg3 baseViewController:(id)arg4 completionHandler:(id)arg5 ;
-(void)signOutAllPrimaryAccounts;


@end


#endif