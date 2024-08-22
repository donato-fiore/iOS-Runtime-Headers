// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUICLOUDSYNCSERVICESCONTROLLER_H
#define AAUICLOUDSYNCSERVICESCONTROLLER_H

@class ACAccountStore, ACAccount, NSMutableDictionary, NSMutableArray, MFAccountValidator, AAAutoAccountVerifier;

#import <Foundation/Foundation.h>


@interface AAUICloudSyncServicesController : NSObject {
    ACAccountStore *_accountStore;
    ACAccount *_account;
    NSMutableDictionary *_queuedDataclassActions;
    NSMutableArray *_dataclassesRequiringMergeDecision;
    NSMutableDictionary *_queuedDataclassStates;
    BOOL _didUserConsentToMerge;
    BOOL _isVerifyingExistingEmailAccount;
    MFAccountValidator *_validator;
    AAAutoAccountVerifier *_verifier;
    id *_handler;
}




+(id)_domainFromAddress:(id)arg0 ;
+(id)_usernameFromAddress:(id)arg0 ;
-(id)_account;
-(id)init;
-(void)_addMailAccount:(id)arg0 ;
-(void)_presentMergeConfirmationForDataclasses:(id)arg0 account:(id)arg1 ;
-(void)_validateMailAccount:(id)arg0 ;
-(void)accountValidator:(id)arg0 finishedValidationOfAccount:(id)arg1 usedSSL:(BOOL)arg2 ;
-(void)completeEnablingCloudServicesWithCompletion:(id)arg0 ;
-(void)setBackupEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)setCloudServicesEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)setDeviceLocatorEnabled:(BOOL)arg0 ;
-(void)verifyAccountWithAppleID:(id)arg0 completion:(id)arg1 ;


@end


#endif