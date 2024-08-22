// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFEXTERNALCREDENTIALIDENTITYSTORE_H
#define SFEXTERNALCREDENTIALIDENTITYSTORE_H

@class WBSSQLiteStore, WBSSQLiteStatementCache;
@protocol OS_dispatch_queue;



@interface SFExternalCredentialIdentityStore : WBSSQLiteStore {
    WBSSQLiteStatementCache *_statements;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)_fetchStoreIsEmpty;
-(id)_credentialIdentityFromRow:(id)arg0 ;
-(id)_fetchCredentialIdentities;
-(id)_fetchCredentialIdentitiesMatchingDomains:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 protectionType:(NSInteger)arg1 ;
-(int)_createFreshDatabaseSchema;
-(int)_currentSchemaVersion;
-(int)_insertCredentialIdentity:(id)arg0 ;
-(int)_removeAllCredentialIdentities;
-(int)_removeCredentialIdentities:(id)arg0 ;
-(int)_removeCredentialIdentity:(id)arg0 ;
-(int)_saveCredentialIdentities:(id)arg0 ;
-(int)_updateCredentialIdentity:(id)arg0 ;
-(int)_vacuum;
-(void)_databaseWillClose;
-(void)fetchCredentialIdentitiesMatchingDomains:(id)arg0 completion:(id)arg1 ;
-(void)fetchCredentialIdentitiesWithCompletion:(id)arg0 ;
-(void)fetchStoreEmptyStateWithCompletion:(id)arg0 ;
-(void)openAndCheckIntegrity:(BOOL)arg0 createIfNeeded:(BOOL)arg1 fallBackToMemoryStoreIfError:(BOOL)arg2 lockingPolicy:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)removeAllCredentialIdentitiesWithCompletion:(id)arg0 ;
-(void)removeCredentialIdentities:(id)arg0 completion:(id)arg1 ;
-(void)replaceCredentialIdentitiesWithIdentities:(id)arg0 completion:(id)arg1 ;
-(void)saveCredentialIdentities:(id)arg0 completion:(id)arg1 ;


@end


#endif