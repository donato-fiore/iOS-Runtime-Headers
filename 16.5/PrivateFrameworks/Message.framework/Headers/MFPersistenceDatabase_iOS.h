// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPERSISTENCEDATABASE_IOS_H
#define MFPERSISTENCEDATABASE_IOS_H

@class EDPersistenceDatabase, NSString, NSMutableArray;
@protocol EFLoggable, MFMailMessageLibraryMigratorDelegate;



@interface MFPersistenceDatabase_iOS : EDPersistenceDatabase <EFLoggable, MFMailMessageLibraryMigratorDelegate>



@property (nonatomic) BOOL createdTempTable; // ivar: _createdTempTable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL migrationHasRun; // ivar: _migrationHasRun
@property (readonly, nonatomic) id *migrationLock; // ivar: _migrationLock
@property (retain, nonatomic) NSMutableArray *postMigrationSteps; // ivar: _postMigrationSteps
@property (readonly) Class superclass;


+(id)log;
-(BOOL)_migrateWithDatabaseConnection:(id)arg0 migrator:(id)arg1 ;
-(BOOL)enforceDataProtection;
-(BOOL)mailMessageLibraryMigrator:(id)arg0 attachProtectedDatabaseWithName:(id)arg1 connection:(id)arg2 error:(*id)arg3 ;
-(id)checkOutConnectionIsWriter:(BOOL)arg0 ;
-(id)initWithBasePath:(id)arg0 databaseName:(id)arg1 maxConcurrentReaders:(NSUInteger)arg2 schema:(id)arg3 protectedSchema:(id)arg4 propertyMapper:(id)arg5 protectedDatabasePersistence:(id)arg6 ;
-(id)openConnectionIsWriter:(BOOL)arg0 ;
-(void)addPostMigrationStep:(id)arg0 ;
-(void)checkInConnection:(id)arg0 ;
-(void)mailMessageLibraryMigrator:(id)arg0 detachProtectedDatabaseWithConnection:(id)arg1 ;
-(void)mailMessageLibraryMigrator:(id)arg0 isInitializingDatabaseWithConnection:(id)arg1 ;
-(void)mailMessageLibraryMigratorScheduleSpotlightReindex:(id)arg0 ;


@end


#endif