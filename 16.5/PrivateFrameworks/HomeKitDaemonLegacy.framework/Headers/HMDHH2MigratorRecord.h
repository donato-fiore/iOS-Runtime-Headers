// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHH2MIGRATORRECORD_H
#define HMDHH2MIGRATORRECORD_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMDHH2MigratorRecord : HMFObject <HMFLogging>



@property (nonatomic) unsigned int currentMigrationAttempt; // ivar: _currentMigrationAttempt
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dryRun; // ivar: _dryRun
@property (nonatomic) BOOL forceMigrationFailureForTesting; // ivar: _forceMigrationFailureForTesting
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *hh2MigratorRecordDataStorePath; // ivar: _hh2MigratorRecordDataStorePath
@property (nonatomic) BOOL isMigrationInProgress; // ivar: _isMigrationInProgress
@property (nonatomic) BOOL migrateFromTestDirectory; // ivar: _migrateFromTestDirectory
@property (nonatomic) BOOL shouldSkipKeyRollOperations; // ivar: _shouldSkipKeyRollOperations
@property (readonly) Class superclass;


+(BOOL)recordMigrationFailureWithError:(id)arg0 ;
+(id)archiveMigratorDict:(id)arg0 ;
+(id)lastMigrationFailure;
+(id)logCategory;
+(id)prepareDictionary:(BOOL)arg0 attempt:(unsigned int)arg1 skipKeyRoll:(BOOL)arg2 forceFailForTesting:(BOOL)arg3 migrateFromTestDirectory:(BOOL)arg4 dryRun:(BOOL)arg5 ;
+(id)prepareDictionary:(id)arg0 ;
+(id)singleRecord;
+(id)unarchiveMigratorDict:(id)arg0 ;
+(void)removeMigrationFailureRecord;
-(BOOL)beginMigration;
-(BOOL)finishMigration;
-(BOOL)isMaximumMigrationAttemptReached;
-(BOOL)writeMigratorRecord:(id)arg0 ;
-(BOOL)writeNewMigrationRecord;
-(BOOL)writeToDisk;
-(id)attributeDescriptions;
-(id)initWithLocalStorePath:(id)arg0 ;
-(void)readMigratorRecord;
-(void)unarchiveRecordFromData:(id)arg0 ;
-(void)updateValuesFromDict:(id)arg0 ;


@end


#endif