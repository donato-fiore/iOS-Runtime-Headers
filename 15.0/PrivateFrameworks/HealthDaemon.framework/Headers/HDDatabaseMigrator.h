// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATABASEMIGRATOR_H
#define HDDATABASEMIGRATOR_H

@class NSMutableArray, _HKBehavior;

#import <Foundation/Foundation.h>

#import "HDDatabaseSchemaManager.h"
#import "HDDatabaseMigrationTransaction.h"

@interface HDDatabaseMigrator : NSObject {
    BOOL _hasPerformedMigration;
    NSMutableArray *_migrationSteps;
}


@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, nonatomic) HDDatabaseSchemaManager *schemaManager; // ivar: _schemaManager
@property (readonly, nonatomic) HDDatabaseMigrationTransaction *transaction; // ivar: _transaction


-(BOOL)executeSQL:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeSQLStatements:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_corry_rewriteHFDStep1WithError:(*id)arg0 ;
-(NSInteger)_corry_rewriteHFDStep2WithError:(*id)arg0 ;
-(NSInteger)migrateFromVersion:(NSInteger)arg0 toVersion:(NSInteger)arg1 error:(*id)arg2 ;
// -(NSInteger)performHFDMigrationToVersion:(NSInteger)arg0 handler:(id)arg1 error:(unk)arg2  ;
-(id)boulderProtectedMigrationSteps;
-(id)boulderUnprotectedMigrationSteps;
-(id)butlerProtectedMigrationSteps;
-(id)butlerUnprotectedMigrationSteps;
-(id)cinarProtectedMigrationSteps;
-(id)cinarUnprotectedMigrationSteps;
-(id)corryProtectedMigrationSteps;
-(id)corryUnprotectedMigrationSteps;
-(id)eagleProtectedMigrationSteps;
-(id)eagleUnprotectedMigrationSteps;
-(id)emetProtectedMigrationSteps;
-(id)emetUnprotectedMigrationSteps;
-(id)erieProtectedMigrationSteps;
-(id)erieUnprotectedMigrationSteps;
-(id)init;
-(id)initWithTransaction:(id)arg0 ;
-(id)monarchProtectedMigrationSteps;
-(id)monarchUnprotectedMigrationSteps;
-(id)okemoZursProtectedMigrationSteps;
-(id)okemoZursUnprotectedMigrationSteps;
-(id)tigrisProtectedMigrationSteps;
-(id)tigrisUnprotectedMigrationSteps;
-(id)whitetailProtectedMigrationSteps;
-(id)whitetailUnprotectedMigrationSteps;
-(void)addLockstepMigrationForSchema:(id)arg0 toVersion:(NSInteger)arg1 requiringVersion:(NSInteger)arg2 foreignKeyStatus:(NSInteger)arg3 handler:(id)arg4 ;
-(void)addMigrationForSchema:(id)arg0 toVersion:(NSInteger)arg1 foreignKeyStatus:(NSInteger)arg2 handler:(id)arg3 ;
-(void)addMigrationSteps:(id)arg0 ;
-(void)addMigrationTo:(NSInteger)arg0 foreignKeys:(NSInteger)arg1 handler:(id)arg2 ;
-(void)addMigrationTo:(NSInteger)arg0 function:(*unk)arg1 ;
-(void)addMigrationTo:(NSInteger)arg0 function:(*unk)arg1 foreignKeys:(NSInteger)arg2 ;
-(void)addPrimaryMigrationSteps;
-(void)azul_addProtectedMigrationSteps;
-(void)azul_addUnprotectedMigrationSteps;
-(void)future_addProtectedMigrationSteps;
-(void)future_addUnprotectedMigrationSteps;
-(void)invalidate;
-(void)peace_addProtectedMigrationSteps;
-(void)peace_addUnprotectedMigrationSteps;
-(void)sky_addProtectedMigrationSteps;
-(void)sky_addUnprotectedMigrationSteps;
-(void)yukon_addProtectedMigrationSteps;
-(void)yukon_addUnprotectedMigrationSteps;


@end


#endif