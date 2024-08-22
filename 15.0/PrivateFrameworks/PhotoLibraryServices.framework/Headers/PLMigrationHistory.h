// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMIGRATIONHISTORY_H
#define PLMIGRATIONHISTORY_H

@class NSNumber, NSDictionary, NSDate, NSString;


#import "PLManagedObject.h"

@interface PLMigrationHistory : PLManagedObject

@property (retain, nonatomic) NSNumber *forceRebuildReason;
@property (retain, nonatomic) NSDictionary *globalKeyValues;
@property (nonatomic) NSInteger index;
@property (retain, nonatomic) NSDate *migrationDate;
@property (nonatomic) short migrationType;
@property (nonatomic) NSInteger modelVersion;
@property (nonatomic) short origin;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSNumber *sourceModelVersion;
@property (retain, nonatomic) NSString *storeUUID;


+(BOOL)currentMigrationHistoryIndex:(*NSInteger)arg0 withManagedObjectContext:(id)arg1 error:(*id)arg2 ;
+(BOOL)recordCurrentMigrationStateInManagedObjectContext:(id)arg0 withPathManager:(id)arg1 migrationType:(NSInteger)arg2 forceRebuildReason:(id)arg3 sourceModelVersion:(id)arg4 updateLegacyMigrationState:(BOOL)arg5 journalRebuildRequred:(BOOL)arg6 origin:(short)arg7 libraryCreateOptions:(NSUInteger)arg8 ;
+(NSInteger)_rebuildMigrationHistoryWithJournal:(id)arg0 managedObjectContext:(id)arg1 ;
+(id)currentMigrationHistoryWithManagedObjectContext:(id)arg0 ;
+(id)entityName;
+(id)insertCreatedWithManagedObjectContext:(id)arg0 index:(NSInteger)arg1 migrationDate:(id)arg2 ;
+(id)insertIntoManagedObjectContext:(id)arg0 index:(NSInteger)arg1 sourceModelVersion:(id)arg2 migrationType:(NSInteger)arg3 migrationDate:(id)arg4 forceRebuildReason:(id)arg5 ;
+(id)insertLightweightWithManagedObjectContext:(id)arg0 index:(NSInteger)arg1 sourceModelVersion:(NSUInteger)arg2 migrationDate:(id)arg3 ;
+(id)insertRebuildWithManagedObjectContext:(id)arg0 index:(NSInteger)arg1 migrationDate:(id)arg2 forceRebuildReason:(id)arg3 ;
+(id)migrateLegacyMigrationHistoryWithMetadata:(id)arg0 index:(NSInteger)arg1 outGlobalKeyValues:(id)arg2 managedObjectContext:(id)arg3 ;
+(id)migrationHistoryWithManagedObjectContext:(id)arg0 ;
+(void)initialize;
-(BOOL)supportsCloudUpload;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg0 ;


@end


#endif