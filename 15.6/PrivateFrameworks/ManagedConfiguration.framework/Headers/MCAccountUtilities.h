// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCACCOUNTUTILITIES_H
#define MCACCOUNTUTILITIES_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MCAccountUtilities : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *signInQueue; // ivar: _signInQueue


+(BOOL)hasManagedAccountOfDataclasses:(id)arg0 ;
+(id)accountDataclassesForBundleID:(id)arg0 ;
+(id)appStoreAccountIdentifierForPersona:(id)arg0 ;
+(void)checkAccountConsistencyAndReleaseOrphanedAccounts:(BOOL)arg0 ;
-(BOOL)_signIniCloudAccountWithAuthenticationResult:(id)arg0 personaID:(id)arg1 baseViewController:(id)arg2 outError:(*id)arg3 ;
-(BOOL)_signIniTunesAccountWithAuthenticationResult:(id)arg0 personaID:(id)arg1 baseViewController:(id)arg2 outError:(*id)arg3 ;
-(id)init;
-(void)signInAccountsWithTypes:(id)arg0 authenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif