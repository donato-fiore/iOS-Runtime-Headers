// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATABASEMIGRATIONTRANSACTION_H
#define HDDATABASEMIGRATIONTRANSACTION_H

@class _HKBehavior, NSString, NSArray;
@protocol HDDatabaseMigrationTransactionDelegate;

#import <Foundation/Foundation.h>

#import "HDHFDataStore.h"
#import "HDSQLiteDatabase.h"

@interface HDDatabaseMigrationTransaction : NSObject

@property (readonly, nonatomic) HDHFDataStore *HFDataStore; // ivar: _HFDataStore
@property (readonly, nonatomic) _HKBehavior *behavior; // ivar: _behavior
@property (readonly, nonatomic) HDSQLiteDatabase *defaultDatabase;
@property (readonly, copy, nonatomic) NSString *defaultDatabaseName;
@property (readonly, nonatomic) NSInteger defaultProtectionClass;
@property (weak, nonatomic) NSObject<HDDatabaseMigrationTransactionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isProtectedMigration;
@property (readonly, nonatomic) HDSQLiteDatabase *protectedDatabase; // ivar: _protectedDatabase
@property (readonly, copy, nonatomic) NSArray *schemaProviders; // ivar: _schemaProviders
@property (readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase; // ivar: _unprotectedDatabase


+(id)unprotectedMigrationTransactionForMigrationTransaction:(id)arg0 ;
-(NSInteger)migrateOrCreateSchemaWithError:(*id)arg0 ;
-(id)databaseNameForProtectionClass:(NSInteger)arg0 ;
-(id)initWithUnprotectedDatabase:(id)arg0 protectedDatabase:(id)arg1 HFDataStore:(id)arg2 schemaProviders:(id)arg3 behavior:(id)arg4 ;


@end


#endif