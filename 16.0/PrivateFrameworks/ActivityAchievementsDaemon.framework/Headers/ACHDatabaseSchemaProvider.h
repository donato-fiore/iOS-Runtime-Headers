// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHDATABASESCHEMAPROVIDER_H
#define ACHDATABASESCHEMAPROVIDER_H

@class NSString;
@protocol HDDatabaseSchemaProvider;

#import <Foundation/Foundation.h>


@interface ACHDatabaseSchemaProvider : NSObject <HDDatabaseSchemaProvider>



@property (readonly, copy, nonatomic) NSString *schemaName;


-(NSInteger)currentSchemaVersionForProtectionClass:(NSInteger)arg0 ;
-(id)databaseEntitiesForProtectionClass:(NSInteger)arg0 ;
-(void)_addAddAvailableCountryCodesColumnMigrationToMigrator:(id)arg0 ;
-(void)_addAddSuffixesColumnMigrationToMigrator:(id)arg0 ;
-(void)_addDailyTargetExpressionAndUnitColumnsMigrationToMigrator:(id)arg0 ;
-(void)_addDropSyncAnchorSaveOffTableIfNecessaryToMigrator:(id)arg0 ;
-(void)_addEarnedInstancesExternalIdentifierMigrationToMigrator:(id)arg0 ;
-(void)_addGraceExpressionColumnsMigrationToMigrator:(id)arg0 ;
-(void)_addGracePredicateColumnsMigrationToMigrator:(id)arg0 ;
-(void)_addMisnamedTemplateRemovalToMigrator:(id)arg0 ;
-(void)_addNullTemplatesRemovalToMigrator:(id)arg0 ;
-(void)_addResetSyncAnchorsMigrationStepToMigrator:(id)arg0 ;
-(void)_addSyncAnchorSaveOffMigrationStepToMigrator:(id)arg0 ;
-(void)_addValidateEarnedInstanceRowStepToMigrator:(id)arg0 ;
-(void)_addVersion5MigratorToMigrator:(id)arg0 ;
-(void)registerMigrationStepsForProtectionClass:(NSInteger)arg0 migrator:(id)arg1 ;


@end


#endif