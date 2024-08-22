// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAUTHENTICATIONMANAGER_H
#define VUIAUTHENTICATIONMANAGER_H

@class ACAccount, AMSPromise, AMSBinaryPromise;

#import <Foundation/Foundation.h>


@interface VUIAuthenticationManager : NSObject

@property (readonly, nonatomic) ACAccount *_activeUserAccount; // ivar: __activeUserAccount
@property (retain, nonatomic) AMSPromise *_authPromise; // ivar: __authPromise
@property (readonly, nonatomic) ACAccount *_localUserAccount; // ivar: __localUserAccount
@property (retain, nonatomic) AMSBinaryPromise *_signoutPromise; // ivar: __signoutPromise


+(BOOL)allowsAccountModification;
+(BOOL)userHasActiveAccount;
+(id)DSID;
+(id)_userAccount;
+(id)creditsString;
+(id)identifier;
+(id)sharedInstance;
+(id)storefrontId;
+(id)userAccountName;
+(id)userFirstName;
+(id)userFullName;
+(id)userLastName;
+(void)_performAuthenticationTask:(id)arg0 isSilent:(BOOL)arg1 completionHandler:(id)arg2 ;
+(void)_recordLog:(id)arg0 isSignOut:(BOOL)arg1 isSilent:(BOOL)arg2 ;
+(void)requestAuthenticationAlwaysPrompt:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
+(void)signInUserWithAppleID:(id)arg0 password:(id)arg1 completionHandler:(id)arg2 ;
+(void)signOutUserWithCompletionHandler:(id)arg0 ;
-(BOOL)_shouldNotifyAccountChange:(id)arg0 newAccount:(id)arg1 ;
-(id)init;
-(void)_accountStoreDidChange:(id)arg0 ;


@end


#endif