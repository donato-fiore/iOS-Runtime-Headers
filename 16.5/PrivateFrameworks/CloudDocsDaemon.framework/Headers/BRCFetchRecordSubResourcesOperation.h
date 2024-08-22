// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCFETCHRECORDSUBRESOURCESOPERATION_H
#define BRCFETCHRECORDSUBRESOURCESOPERATION_H

@class BRCOperation, NSMutableDictionary, NSMutableArray, NSMutableSet, NSMutableOrderedSet, NSString, NSError;
@protocol BRCOperationSubclass, OS_dispatch_group, OS_dispatch_source;


#import "BRCServerZone.h"
#import "BRCPendingChangesStream.h"

@interface BRCFetchRecordSubResourcesOperation : BRCOperation <BRCOperationSubclass>

 {
    BRCServerZone *_serverZone;
    NSMutableDictionary *_recordsByID;
    NSMutableDictionary *_subResourceRecordsByID;
    NSMutableArray *_deletedRecordIDs;
    NSMutableArray *_deletedShareIDs;
    NSMutableSet *_movedZoneNames;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSObject<OS_dispatch_group> *_xattrFetchingGroup;
    NSObject<OS_dispatch_source> *_xattrFetchingSource;
    NSObject<OS_dispatch_group> *_deserializeGroup;
    NSObject<OS_dispatch_source> *_deserializeSource;
    unsigned int _loopDetectionCacheSize;
    NSMutableOrderedSet *_loopDetectionCache;
    unsigned char _deserializeState;
    BOOL _isDoneFetchingRecords;
    BOOL _isDeltaSync;
    BOOL _canSaveDirectly;
    BOOL _canSaveDirectlyWithDeletes;
    BOOL _contentRecordsFetchedInline;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BRCPendingChangesStream *pendingChangesStream; // ivar: _pendingChangesStream
@property (copy, nonatomic) id *queryFinishedClientTruthCallback; // ivar: _queryFinishedClientTruthCallback
@property (copy, nonatomic) id *queryFinishedServerTruthCallback; // ivar: _queryFinishedServerTruthCallback
@property (readonly, nonatomic) NSUInteger recordsFetched; // ivar: _recordsRequested
@property (readonly, nonatomic) NSUInteger recordsFetchedTotalMetadataSize; // ivar: _recordsRequestedTotalMetadataSize
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger xattrsFetchedTotalSize; // ivar: _xattrsFetchedTotalSize


-(BOOL)_hasRecordsPendingSubResources;
-(BOOL)_markSubResourceRecordAsFetchedIfNecessary:(id)arg0 ;
-(BOOL)_willFetchRecordForDeserialize:(id)arg0 ;
-(BOOL)saveRecordsWithQueryCursor:(id)arg0 ;
-(BOOL)saveRecordsWithServerChangeToken:(id)arg0 clientChangeToken:(NSInteger)arg1 syncStatus:(NSInteger)arg2 ;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initAndScheduleWithServerZone:(id)arg0 parentOperation:(id)arg1 pendingChangesStream:(id)arg2 contentRecordsFetchedInline:(BOOL)arg3 ;
-(id)movedZoneNames;
-(id)records;
-(void)_cleanUpAfterSavingRecords;
-(void)_createSubResourceGroupsFromPendingChangesStreamIfNecessary;
-(void)_dump;
-(void)_fetchRecordsBlockingSaveIfNecessary;
-(void)_notifyWhenRecordsAreFetched:(id)arg0 ;
-(void)_prepareToSaveRecords;
-(void)_saveRecordsToPendingChangesWithServerChangeToken:(id)arg0 clientChangeToken:(NSInteger)arg1 ;
-(void)_scheduleDeserialize;
-(void)_scheduleXattrFetch;
-(void)_startWithParentOperation:(id)arg0 ;
-(void)addRecord:(id)arg0 ;
-(void)addRecordIDToDeserialize:(id)arg0 ;
-(void)addRecordIDToDeserialize:(id)arg0 recordType:(NSInteger)arg1 ;
-(void)cancel;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)notifyWhenCaughtUp:(BOOL)arg0 whenRecordsAreFetchedAndFinish:(id)arg1 ;
-(void)notifyWhenRecordsAreFetchedAndFinish:(id)arg0 ;
-(void)recordIDWasDeleted:(id)arg0 ;
-(void)shareIDWasDeleted:(id)arg0 ;
-(void)stop;
-(void)stopWithError:(id)arg0 ;


@end


#endif