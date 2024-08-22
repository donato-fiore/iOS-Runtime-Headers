// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHH2MIGRATIONSTATELOGGER_H
#define HMDHH2MIGRATIONSTATELOGGER_H

@class HMFObject, NSDictionary;



@interface HMDHH2MigrationStateLogger : HMFObject

@property (readonly, nonatomic, getter=isAutoMigration) BOOL autoMigration;
@property (retain, nonatomic) NSDictionary *logEventRecord; // ivar: _logEventRecord
@property (readonly, nonatomic, getter=isMigrationSuccessful) BOOL migrationSuccessful;
@property (readonly, nonatomic) NSInteger totalTimeTakenForMigration; // ivar: _totalTimeTakenForMigration


+(BOOL)doesLogEventExistOnDisk;
+(NSInteger)migrationAttempt;
+(id)allowedValues;
+(id)migrationLogEventRecord;
+(void)_addInfoFromCoreDataError:(id)arg0 logEvent:(id)arg1 ;
+(void)commitMigrationLogEventToDisk:(id)arg0 ;
+(void)commitMigrationLogEventToDiskWithKey:(id)arg0 value:(id)arg1 ;
+(void)incrementMigrationAttempt;
+(void)recordIsDryRun:(BOOL)arg0 ;
+(void)recordMigrationEnd:(BOOL)arg0 ;
+(void)recordMigrationEndTimeWithValue:(NSUInteger)arg0 ;
+(void)recordMigrationFailedWithError:(id)arg0 withReason:(id)arg1 ;
+(void)recordMigrationStart:(BOOL)arg0 isDryRun:(BOOL)arg1 ;
+(void)recordMigrationStartTimeWithValue:(NSUInteger)arg0 ;
+(void)removeMigrationLogEventRecordFromDisk;
-(BOOL)shouldSubmitLogEvent;
-(NSInteger)migrationEndTime;
-(NSInteger)migrationStartTime;
-(id)init;
-(id)migrationError;
-(id)populateLogEvent;
-(void)populateTotalMigrationTime;
-(void)resetStoredMigrationState;


@end


#endif