// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSPUNCTUATIONMANAGER_H
#define AXSSPUNCTUATIONMANAGER_H

@class NSArray;


#import "AXSSDatabaseManager.h"
#import "AXSSPunctuationEntryCloudKitHelper.h"
#import "AXSSPunctuationGroupCloudKitHelper.h"

@interface AXSSPunctuationManager : AXSSDatabaseManager {
    AXSSPunctuationEntryCloudKitHelper *_punctuationEntryCloudKitHelper;
    AXSSPunctuationGroupCloudKitHelper *_punctuationGroupCloudKitHelper;
    BOOL _finishedInitialization;
}


@property (nonatomic) BOOL cloudKitPushInSameProcess; // ivar: _cloudKitPushInSameProcess
@property (nonatomic) BOOL cloudKitSync; // ivar: _cloudKitSync
@property (readonly, nonatomic) NSArray *punctuationGroups;


+(id)overrideDatabasePath;
+(id)sharedDatabase;
+(void)initialize;
+(void)setOverrideDatabasePath:(id)arg0 ;
-(BOOL)_saveIfPossible;
-(BOOL)isBasePunctuationGroup:(id)arg0 ;
-(BOOL)isProtectedDataAvailable;
-(NSInteger)stringToRule:(id)arg0 ;
-(id)_databaseDirectoryPath;
-(id)_databaseFilePath;
-(id)_punctuationEntryFromManagedObject:(id)arg0 ;
-(id)_punctuationGroupForEntry:(id)arg0 ;
-(id)_punctuationGroupFromManagedObject:(id)arg0 ;
-(id)allPunctuationGroup;
-(id)cloudRecordsToPurge:(id)arg0 ;
-(id)init;
-(id)mostBasePunctuationGroupForGroup:(id)arg0 ;
-(id)nextDefaultGroupName;
-(id)nonePunctuationGroup;
-(id)parentPunctuationGroup:(id)arg0 ;
-(id)punctuationEntriesForGroupUUID:(id)arg0 ;
-(id)punctuationEntryForUUID:(id)arg0 ;
-(id)punctuationEntryObjectFromLocalObjects:(id)arg0 ;
-(id)punctuationGroupForUUID:(id)arg0 ;
-(id)ruleToString:(NSInteger)arg0 ;
-(id)somePunctuationGroup;
-(void)_cloudKitUpdated:(id)arg0 ;
-(void)_filterAutoswitchContexts:(id)arg0 punctuationGroupsForContexts:(id)arg1 ;
-(void)_initializeCloudKitHelpers;
-(void)_initializeDatabaseStartup;
-(void)_initializeSystemGroups;
-(void)_managedObjectChanged:(id)arg0 ;
-(void)_setupDatabase;
-(void)_updateCloudKitHelpers;
-(void)addCloudRecordToPurge:(id)arg0 recordEntityType:(id)arg1 ;
-(void)importPunctuationGroup:(id)arg0 ;
-(void)removeAllRecordsForPurge;
-(void)removeCloudRecordForPurge:(id)arg0 ;
-(void)removeEntry:(id)arg0 ;
-(void)removePunctuationGroup:(id)arg0 ;
-(void)updateEntry:(id)arg0 ;
-(void)updateEntry:(id)arg0 fromCloudKit:(BOOL)arg1 ;
-(void)updatePunctuationGroup:(id)arg0 ;
-(void)updatePunctuationGroup:(id)arg0 fromCloudKit:(BOOL)arg1 ;
-(void)userAuthChanged;


@end


#endif