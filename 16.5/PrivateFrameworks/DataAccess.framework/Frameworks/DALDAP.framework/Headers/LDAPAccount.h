// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LDAPACCOUNT_H
#define LDAPACCOUNT_H

@class DAAccount, NSMutableArray, NSMutableSet;



@interface LDAPAccount : DAAccount

@property (retain, nonatomic) NSMutableArray *mutableSearchSettings; // ivar: _mutableSearchSettings
@property (retain, nonatomic) NSMutableSet *searchTaskSet; // ivar: _searchTaskSet


-(BOOL)isEqualToAccount:(id)arg0 ;
-(BOOL)isLDAPAccount;
-(id)connectionURL;
-(id)connectionURLWithSSL:(BOOL)arg0 ;
-(id)initWithBackingAccountInfo:(id)arg0 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(id)searchSettings;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyCancelSearchQuery:(id)arg0 ;
-(void)_reallyPerformSearchQuery:(id)arg0 ;
-(void)addSearchSettings:(id)arg0 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg0 ;
-(void)ingestBackingAccountInfoProperties;
-(void)ldapGetDefaultSearchBaseTask:(id)arg0 completedWithStatus:(NSInteger)arg1 error:(id)arg2 defaultSearchBase:(id)arg3 ;
-(void)ldapSearchTask:(id)arg0 finishedWithError:(id)arg1 foundItems:(id)arg2 ;
-(void)removeSearchSettings:(id)arg0 ;


@end


#endif