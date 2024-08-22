// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDATABASEMIGRATIONTRANSACTION_H
#define HDDATABASEMIGRATIONTRANSACTION_H

@class _HKBehavior, NSArray;
@protocol HDDatabaseMigrationTransactionDelegate;

#import <Foundation/Foundation.h>

#import "HDSQLiteDatabase.h"

@interface HDDatabaseMigrationTransaction : NSObject

@property (readonly, nonatomic) _HKBehavior *behavior; // ivar: _behavior
@property (readonly, nonatomic) HDSQLiteDatabase *defaultDatabase;
@property (readonly, nonatomic) NSInteger defaultProtectionClass;
@property (weak, nonatomic) NSObject<HDDatabaseMigrationTransactionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isProtectedMigration;
@property (readonly, nonatomic) HDSQLiteDatabase *protectedDatabase; // ivar: _protectedDatabase
@property (readonly, copy, nonatomic) NSArray *schemaProviders; // ivar: _schemaProviders
@property (readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase; // ivar: _unprotectedDatabase


+(id)unprotectedMigrationTransactionForMigrationTransaction:(id)arg0 ;
-(NSInteger)HFDRebuildState;
-(NSInteger)accessHistoricHFDWithError:(*id)arg0 block:(id)arg1 ;
-(NSInteger)migrateOrCreateSchemaWithError:(*id)arg0 ;
-(id)initWithUnprotectedDatabase:(id)arg0 protectedDatabase:(id)arg1 schemaProviders:(id)arg2 behavior:(id)arg3 ;
-(void)setHFDRebuildState:(NSInteger)arg0 ;


@end


#endif