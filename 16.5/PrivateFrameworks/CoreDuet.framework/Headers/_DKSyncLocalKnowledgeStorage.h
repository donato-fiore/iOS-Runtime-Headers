// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKSYNCLOCALKNOWLEDGESTORAGE_H
#define _DKSYNCLOCALKNOWLEDGESTORAGE_H

@protocol _DKSyncLocalKnowledgeStorage;

#import <Foundation/Foundation.h>

#import "_DKKnowledgeStorage.h"

@interface _DKSyncLocalKnowledgeStorage : NSObject <_DKSyncLocalKnowledgeStorage>

 {
    _DKKnowledgeStorage *_storage;
}




-(BOOL)deleteEventsWithEventIDs:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveEvents:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveSyncedDownWindows:(id)arg0 peer:(id)arg1 transportName:(id)arg2 error:(*id)arg3 ;
-(id)additionsSyncHistoryForPeer:(id)arg0 transportName:(id)arg1 error:(*id)arg2 ;
-(id)deletionsSyncHistoryForPeer:(id)arg0 transportName:(id)arg1 error:(*id)arg2 ;
-(id)lastSyncDownDeletionDateForPeer:(id)arg0 transportName:(id)arg1 error:(*id)arg2 ;
-(id)sortedEventsFromSyncWindows:(id)arg0 streamNames:(id)arg1 compatibility:(id)arg2 limit:(NSUInteger)arg3 fetchOrder:(NSInteger)arg4 error:(*id)arg5 ;
-(id)sortedEventsFromSyncWindows:(id)arg0 streamNames:(id)arg1 limit:(NSUInteger)arg2 fetchOrder:(NSInteger)arg3 error:(*id)arg4 ;
-(id)sortedSyncDownWindowsOverlappingBetweenDate:(id)arg0 andDate:(id)arg1 peer:(id)arg2 error:(*id)arg3 ;
-(id)tombstonesSinceDate:(id)arg0 streamNames:(id)arg1 limit:(NSUInteger)arg2 endDate:(*id)arg3 error:(*id)arg4 ;
-(void)setLastSyncDownDeletionDate:(id)arg0 previousDate:(id)arg1 forPeer:(id)arg2 transportName:(id)arg3 error:(*id)arg4 ;


@end


#endif