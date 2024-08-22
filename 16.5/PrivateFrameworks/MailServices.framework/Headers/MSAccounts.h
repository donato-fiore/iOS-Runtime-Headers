// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSACCOUNTS_H
#define MSACCOUNTS_H



#import "MSMailDefaultService.h"

@interface MSAccounts : MSMailDefaultService



+(BOOL)canSendMail;
+(BOOL)canSendMailSourceAccountManagement:(int)arg0 ;
+(BOOL)deleteAccountsWithUniqueIdentifiers:(id)arg0 error:(*id)arg1 ;
+(BOOL)hasActiveAccounts;
+(BOOL)setPushStateForMailboxWithPath:(id)arg0 account:(id)arg1 pushState:(BOOL)arg2 error:(*id)arg3 ;
+(id)attachmentCapabilities;
+(id)customSignatureForSendingEmailAddress:(id)arg0 ;
+(void)accountValuesForKeys:(id)arg0 completionBlock:(id)arg1 ;
+(void)accountValuesForKeys:(id)arg0 launchMobileMail:(BOOL)arg1 completionBlock:(id)arg2 ;
+(void)accountValuesForKeys:(id)arg0 originatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 launchMobileMail:(BOOL)arg3 completionBlock:(id)arg4 ;
+(void)mailboxListingForAccountWithUniqueIdentifier:(id)arg0 keys:(id)arg1 completionBlock:(id)arg2 ;
-(void)_listAccountKeys:(id)arg0 originatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 handler:(id)arg3 ;
-(void)_simulateServicesMethod:(id)arg0 arguments:(id)arg1 callback:(id)arg2 ;


@end


#endif