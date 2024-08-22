// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLIENTSERVERTRANSACTION_H
#define PLCLIENTSERVERTRANSACTION_H

@class NSSet, PLPhotoLibraryPathManager, NSString;

#import <Foundation/Foundation.h>


@interface PLClientServerTransaction : NSObject

@property (readonly, nonatomic) NSSet *changeScopes; // ivar: _changeScopes
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager
@property (copy, nonatomic) NSString *transactionToken; // ivar: _transactionToken


+(BOOL)_archiveRecoveryHistoryForPathManager:(id)arg0 error:(*id)arg1 ;
+(BOOL)_hasExcessiveRecoveryAttemptsForPathManager:(id)arg0 ;
+(BOOL)_isOutstandingTransactionAtPath:(id)arg0 getScopeValues:(*NSUInteger)arg1 ;
+(NSUInteger)_readScopeValuesFromFileDescriptor:(int)arg0 ;
+(NSUInteger)scopeValuesFromScopes:(id)arg0 ;
+(id)_allTransactionPathsForPathManager:(id)arg0 ;
+(id)_changeScopesFromXPCDictionary:(id)arg0 ;
+(id)_filePathForTransactionWithToken:(id)arg0 pathManager:(id)arg1 ;
+(id)_libraryURLFromXPCDictionary:(id)arg0 ;
+(id)_outstandingTransactionScopesByPathForPathManager:(id)arg0 ;
+(id)_recoveryHistoryFilePathForPathManager:(id)arg0 ;
+(id)_scopeValuesByScope;
+(id)_serverTransactionForPathManager:(id)arg0 isNew:(*BOOL)arg1 ;
+(id)_transactionTokenFromXPCDictionary:(id)arg0 ;
+(id)beginClientTransactionWithChangeScopes:(id)arg0 pathManager:(id)arg1 ;
+(id)beginServerTransactionWithClientTransactionFromXPCDictionary:(id)arg0 pathManager:(id)arg1 ;
+(id)beginServerTransactionWithToken:(id)arg0 changeScopes:(id)arg1 pathManager:(id)arg2 ;
+(id)descriptionOfAllTransactionFilesForPathManager:(id)arg0 ;
+(id)descriptionOfTransactionScopes:(id)arg0 ;
// +(id)handleOutstandingTransactionsForPathManager:(id)arg0 sqliteErrorHandler:(id)arg1 handler:(unk)arg2  ;
+(id)scopesFromScopeValues:(NSUInteger)arg0 ;
+(id)serverTransactionQueue;
+(id)transactionFromUserInfo:(id)arg0 ;
+(void)_checkForAndHandleExcessiveRecoveryAttemptsForPathManager:(id)arg0 sqliteErrorHandler:(id)arg1 ;
+(void)_cleanupAllTransactionsScopesByPath:(id)arg0 ;
+(void)_recordRecoveryAttemptForPathManager:(id)arg0 ;
+(void)addTransaction:(id)arg0 toUserInfo:(id)arg1 ;
+(void)addTransaction:(id)arg0 toXPCDictionary:(id)arg1 ;
+(void)cancelOutstandingTransactionHandlerTimer:(id)arg0 ;
+(void)removeTransactionFromUserInfo:(id)arg0 ;
-(BOOL)isClientTransaction;
-(id)initWithPathManager:(id)arg0 ;
-(void)abortTransaction;
-(void)addChangeScopes:(id)arg0 ;
-(void)completeTransaction;
-(void)completeTransactionScope:(id)arg0 ;
-(void)popChangeScopesBatch;
-(void)pushChangeScopesBatch;
-(void)stillAlive;


@end


#endif