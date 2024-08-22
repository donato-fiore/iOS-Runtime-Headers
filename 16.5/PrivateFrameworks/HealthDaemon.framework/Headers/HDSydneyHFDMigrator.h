// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSYDNEYHFDMIGRATOR_H
#define HDSYDNEYHFDMIGRATOR_H

@class NSError;
@protocol HDHFDataStoreMigrationTransaction, HDHFDataStoreDelegate;

#import <Foundation/Foundation.h>

#import "HDSQLiteDatabase.h"
#import "HDDatabaseMigrationTransaction.h"

@interface HDSydneyHFDMigrator : NSObject <HDHFDataStoreMigrationTransaction, HDHFDataStoreDelegate>



@property (nonatomic) BOOL corruptionRebuildCompleted; // ivar: _corruptionRebuildCompleted
@property (retain, nonatomic) NSError *migrationError; // ivar: _migrationError
@property (readonly, nonatomic) HDSQLiteDatabase *protectedDatabase;
@property (retain, nonatomic) HDDatabaseMigrationTransaction *transaction; // ivar: _transaction
@property (copy, nonatomic) NSError *verificationError; // ivar: _verificationError


-(BOOL)allowHFDMigration:(id)arg0 ;
-(BOOL)migrateDataForHFDataStore:(id)arg0 from:(*void)arg1 to:(*void)arg2 recoveryAnalytics:(id)arg3 error:(*id)arg4 ;
-(BOOL)migrateDataForHFDataStore:(id)arg0 toSQLiteFrom:(*void)arg1 error:(*id)arg2 ;
-(NSInteger)HFDataStore:(id)arg0 integerForKey:(id)arg1 ;
-(NSInteger)migrateHFD:(*id)arg0 ;
-(id)activeTransactionForCurrentThreadForHFDataStore:(id)arg0 forWriting:(BOOL)arg1 ;
-(id)allSeriesEntityClassesForDataStore:(id)arg0 ;
-(id)initWithMigrationTransaction:(id)arg0 ;
-(void)HFDataStore:(id)arg0 detectedCorruptionOfType:(NSInteger)arg1 code:(int)arg2 error:(id)arg3 shouldPromptUser:(BOOL)arg4 initialRebuildState:(NSInteger)arg5 updatedRebuildState:(NSInteger)arg6 ;
-(void)HFDataStore:(id)arg0 setInteger:(NSInteger)arg1 forKey:(id)arg2 ;
-(void)HFDataStoreDetectedOutOfSpace:(id)arg0 ;
-(void)HFDataStoreDidPerformRebuild:(id)arg0 didDecompressArchivedHFD:(BOOL)arg1 didOpenArchivedHFD:(BOOL)arg2 didOpenMovedAsideHFD:(BOOL)arg3 recoveryAnalytics:(id)arg4 duration:(CGFloat)arg5 ;
-(void)didMigrateHFDataStore:(id)arg0 fromState:(NSInteger)arg1 toState:(NSInteger)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(void)requestRebuildTransactionForHFDataStore:(id)arg0 ;


@end


#endif