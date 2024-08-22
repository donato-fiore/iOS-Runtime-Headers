// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKSYNCRAPPORTKNOWLEDGESTORAGE_H
#define _DKSYNCRAPPORTKNOWLEDGESTORAGE_H

@class DKSyncRapportStorage;
@protocol _DKSyncRemoteKnowledgeStorage, _DKSyncRemoteKnowledgeStorageFetchDelegate;


#import "_DKSync2Policy.h"

@interface _DKSyncRapportKnowledgeStorage : DKSyncRapportStorage <_DKSyncRemoteKnowledgeStorage>

 {
    NSUInteger _currentChangeSetSequenceNumber;
}


@property (readonly, nonatomic) NSObject<_DKSyncRemoteKnowledgeStorageFetchDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _DKSync2Policy *policy; // ivar: _policy


+(id)sharedInstance;
-(BOOL)hasAdditionsFlagForPeer:(id)arg0 ;
-(BOOL)hasDeletionsFlagForPeer:(id)arg0 ;
-(void)clearPrewarmedFlag;
-(void)fetchAdditionsHighWaterMarkWithPeer:(id)arg0 highPriority:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchDeletedEventIDsFromPeer:(id)arg0 sinceDate:(id)arg1 streamNames:(id)arg2 limit:(NSUInteger)arg3 highPriority:(BOOL)arg4 completion:(id)arg5 ;
-(void)fetchDeletionsHighWaterMarkWithPeer:(id)arg0 highPriority:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchEventsFromPeer:(id)arg0 windows:(id)arg1 streamNames:(id)arg2 limit:(NSUInteger)arg3 fetchOrder:(NSInteger)arg4 highPriority:(BOOL)arg5 completion:(id)arg6 ;
-(void)prewarmFetchWithCompletion:(id)arg0 ;
-(void)registerRequestIDsWithClient:(id)arg0 ;
-(void)setFetchDelegate:(id)arg0 ;
-(void)setHasAdditionsFlag:(BOOL)arg0 forPeer:(id)arg1 ;
-(void)setHasDeletionsFlag:(BOOL)arg0 forPeer:(id)arg1 ;
-(void)updateStorageWithAddedEvents:(id)arg0 deletedEventIDs:(id)arg1 highPriority:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif