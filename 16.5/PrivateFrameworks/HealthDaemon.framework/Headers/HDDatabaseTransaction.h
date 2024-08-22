// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATABASETRANSACTION_H
#define HDDATABASETRANSACTION_H

@class NSMutableArray, NSDictionary;
@protocol HDSQLiteDatabaseProvider;

#import <Foundation/Foundation.h>

#import "HDHFDataStore.h"
#import "HDOntologyDatabase.h"
#import "HDProfile.h"
#import "HDSQLiteDatabase.h"
#import "HDDatabaseTransactionContext.h"

@interface HDDatabaseTransaction : NSObject {
    id<HDSQLiteDatabaseProvider> *_databaseProvider;
    NSMutableArray *_onCommitBlocks;
    NSMutableArray *_onRollbackBlocks;
    BOOL _isActive;
    BOOL _isOutermostTransactionUnprotected;
    BOOL _isHandlingTransactionEnd;
}


@property (readonly, nonatomic) NSInteger cacheScope;
@property (readonly, nonatomic) HDHFDataStore *highFrequencyDataStore; // ivar: _highFrequencyDataStore
@property (readonly, nonatomic) BOOL isWriteTransaction;
@property (readonly, nonatomic) HDOntologyDatabase *ontologyDatabase;
@property (nonatomic) BOOL performingMigration; // ivar: _performingMigration
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) HDSQLiteDatabase *protectedDatabase; // ivar: _protectedDatabase
@property (readonly, copy, nonatomic) NSDictionary *protectedResources; // ivar: _protectedResources
@property (readonly, copy, nonatomic) HDDatabaseTransactionContext *rootContext; // ivar: _rootContext
@property (readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase; // ivar: _unprotectedDatabase


// -(BOOL)performWithContext:(id)arg0 error:(*id)arg1 block:(id)arg2 inaccessibilityHandler:(unk)arg3  ;
-(id)databaseForEntity:(id)arg0 ;
-(id)databaseForEntityClass:(Class)arg0 ;
-(id)databaseForEntityProtectionClass:(NSInteger)arg0 ;
-(id)initWithDatabaseProvider:(id)arg0 profile:(id)arg1 rootContext:(id)arg2 ;
-(void)dealloc;
// -(void)onCommit:(id)arg0 orRollback:(unk)arg1  ;
-(void)requestTransactionInterruption;
-(void)requireRollback;
-(void)transactionDidEndWithError:(id)arg0 ;


@end


#endif