// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSAFARICREDENTIALSTORE_H
#define SFSAFARICREDENTIALSTORE_H


#import <Foundation/Foundation.h>


@interface SFSafariCredentialStore : NSObject



+(BOOL)_savedAccount:(id)arg0 isRelatedToEntryHighLevelDomains:(id)arg1 andWebsiteURL:(id)arg2 ;
+(BOOL)isAppAutoFillAvailable;
+(BOOL)isRemoteAutoFillAvailable;
+(id)_bestDomainFromApprovedDomainsForWebCredentials:(id)arg0 appLinks:(id)arg1 otherServices:(id)arg2 appID:(id)arg3 allDomains:(*id)arg4 ;
+(id)_credentialProviderExtensionHelperProxy;
+(id)_credentialsMatchingSharedWebCredentialsDatabaseEntries:(id)arg0 websiteURL:(id)arg1 savedAccounts:(id)arg2 ;
+(id)_highLevelDomainsFromDatabaseEntries:(id)arg0 ;
+(id)bestDomainForAutoFillFromDomains:(id)arg0 appID:(id)arg1 ;
+(id)textSuggestionHeaderForExternalCredential:(id)arg0 ;
+(id)titleForPasswordCredentialIdentity:(id)arg0 formURL:(id)arg1 ;
+(void)_approvedAndValidSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg0 completionHandler:(id)arg1 ;
+(void)_approvedSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg0 completionHandler:(id)arg1 ;
+(void)_getAllowedActionForAppCredentialsWithAppID:(id)arg0 websiteURL:(id)arg1 user:(id)arg2 password:(id)arg3 shouldAnalyzeExistingCredentials:(BOOL)arg4 completionHandler:(id)arg5 ;
+(void)_getBundleIDForPrimaryCredentialProviderWithCompletionHandler:(id)arg0 ;
+(void)_getCredentialsForAppWithApprovedAndValidSharedWebCredentialsDatabaseEntries:(id)arg0 websiteURL:(id)arg1 completionHandler:(id)arg2 ;
+(void)_getExternalCredentialsMatchingSharedWebCredentialsDatabaseEntries:(id)arg0 websiteURL:(id)arg1 completion:(id)arg2 ;
+(void)_sharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg0 completionHandler:(id)arg1 ;
+(void)_sortCredentials:(id)arg0 usingApprovedSharedWebCredentialsDatabaseEntries:(id)arg1 ;
+(void)bestDomainForAppID:(id)arg0 completionHandler:(id)arg1 ;
+(void)getAllApprovedSharedWebCredentialsEntries:(id)arg0 ;
+(void)getAllCredentialsWithCompletionHandler:(id)arg0 ;
+(void)getAllowedActionForAppCredentialsWithAppID:(id)arg0 websiteURL:(id)arg1 user:(id)arg2 password:(id)arg3 completionHandler:(id)arg4 ;
+(void)getApprovedSharedWebCredentialsEntriesForAppWithAppID:(id)arg0 completionHandler:(id)arg1 ;
+(void)getApprovedSharedWebCredentialsEntriesSortedByHighestValueForAppWithAppID:(id)arg0 completionHandler:(id)arg1 ;
+(void)getCanSaveCredentialsWithAppID:(id)arg0 websiteURL:(id)arg1 completionHandler:(id)arg2 ;
+(void)getCredentialsForAppWithAppID:(id)arg0 completionHandler:(id)arg1 ;
+(void)getCredentialsForAppWithAppID:(id)arg0 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)arg1 completionHandler:(id)arg2 ;
+(void)getCredentialsForAppWithAppID:(id)arg0 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)arg1 websiteURL:(id)arg2 completionHandler:(id)arg3 ;
+(void)getCredentialsForAppWithAppID:(id)arg0 websiteURL:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif