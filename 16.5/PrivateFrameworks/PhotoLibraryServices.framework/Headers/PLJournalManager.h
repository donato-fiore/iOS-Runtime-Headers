// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLJOURNALMANAGER_H
#define PLJOURNALMANAGER_H

@class NSPersistentHistoryToken;


#import "PLJournalManagerCore.h"

@interface PLJournalManager : PLJournalManagerCore {
    NSPersistentHistoryToken *_currentHistoryToken;
    uint8_t _ignoreHistoryDuringSnapshot;
}




+(id)journalManagerWithClass:(Class)arg0 libraryServiceManager:(id)arg1 ;
// -(BOOL)_enumerateJournalEntriesFromHistoryToken:(id)arg0 latestHistoryToken:(*id)arg1 withManagedObjectContext:(id)arg2 journalEntryBlock:(id)arg3 shouldStopBlock:(unk)arg4 error:(id)arg5  ;
-(BOOL)_needsFullSnapshot;
-(BOOL)_needsPartialSnapshot:(id)arg0 ;
-(BOOL)coalesceJournalsForPayloadClassIDs:(id)arg0 withChangeJournalOverThreshold:(float)arg1 error:(*id)arg2 ;
-(BOOL)needsSnapshot;
-(BOOL)performFullSnapshotAppend:(BOOL)arg0 createOnlyIfNecessary:(BOOL)arg1 withManagedObjectContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)performPartialSnapshotForPayloadClassIDs:(id)arg0 append:(BOOL)arg1 createOnlyIfNecessary:(BOOL)arg2 withManagedObjectContext:(id)arg3 error:(*id)arg4 ;
-(BOOL)performSnapshotIfNecessaryAppend:(BOOL)arg0 withManagedObjectContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)replayFromCurrentHistoryTokenWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;
-(id)_existingObjectWithID:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)currentHistoryToken;
-(void)_loadHistoryTokenIfNecessary;
-(void)clearHistoryToken;
-(void)clearIgnoreHistoryDuringSnapshot;
-(void)setIgnoreHistoryDuringSnapshot;


@end


#endif