// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCPENDINGCHANGESSTREAM_H
#define BRCPENDINGCHANGESSTREAM_H

@class NSURL, NSError, CKServerChangeToken, NSString;

#import <Foundation/Foundation.h>

#import "BRCSafeDBHolder.h"
#import "BRCClientZone.h"
#import "BRCServerZone.h"

@interface BRCPendingChangesStream : NSObject {
    NSURL *_databaseURL;
    NSError *_error;
    BRCSafeDBHolder *_dbSafeHolder;
    CKServerChangeToken *_startingChangeToken;
    BRCClientZone *_clientZone;
    BRCServerZone *_serverZone;
    NSString *_label;
    BOOL _hasBeenCreated;
    BOOL _dbHasOpened;
}




-(BOOL)_dropExistingTablesWithDB:(id)arg0 ;
-(BOOL)_finishedFetchingRecordMetadata:(id)arg0 withDB:(id)arg1 ;
-(BOOL)_saveSubResourceRecord:(id)arg0 withDB:(id)arg1 ;
-(BOOL)dumpTablesToContext:(id)arg0 includeAllItems:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)enumerateRecordsNeedingMetadataFetchWithBlock:(id)arg0 ;
-(BOOL)enumerateRecordsNeedingXattrFetchWithBlock:(id)arg0 ;
-(BOOL)enumerateRecordsOfType:(NSInteger)arg0 block:(id)arg1 ;
-(BOOL)hasBeenCreated;
-(BOOL)hasFetchRecordByID:(id)arg0 ;
-(BOOL)hasRecordDeletes;
-(BOOL)hasRecordIDBlockedOnSubResources:(id)arg0 ;
-(BOOL)hasRecordIDsToDeserialize;
-(BOOL)hasSubResourceRecords;
-(BOOL)hasXattrsToFetch;
-(BOOL)saveEditedRecords:(id)arg0 deletedRecordIDs:(id)arg1 deletedShareIDs:(id)arg2 subResourceEditedRecords:(id)arg3 serverChangeToken:(id)arg4 clientChangeToken:(NSInteger)arg5 ;
-(BOOL)saveEditedRecords:(id)arg0 subResourceEditedRecords:(id)arg1 queryCursor:(id)arg2 ;
-(BOOL)saveSubResourceRecords:(id)arg0 afterSavingMainTableItems:(id)arg1 queryCursor:(id)arg2 ;
-(BOOL)unblockRecord:(id)arg0 waitingOnRecord:(id)arg1 ;
-(NSInteger)_recordTypeFromRecordID:(id)arg0 isShare:(BOOL)arg1 isDelete:(BOOL)arg2 ;
-(NSInteger)copyBlockingSaveRecordsToNeedingFetchIgnoringRecords:(id)arg0 ;
-(id)_getChangesStreamSafeDBHolder;
-(id)_initDeltaSyncWithChangeToken:(id)arg0 serverZone:(id)arg1 ;
-(id)initForListingWithParent:(id)arg0 serverZone:(id)arg1 ;
-(id)initWithServerZone:(id)arg0 ;
-(id)lastError;
-(void)_closeChangeStream;
-(void)_createSchemaIfNecessary;
-(void)_dbBecameCorrupted:(id)arg0 withDescription:(id)arg1 ;
-(void)_openDB;
-(void)_wasClosed;
-(void)destroyDatabase;
-(void)fetchQueryCursor:(id)arg0 ;
-(void)fetchTokenState:(id)arg0 ;
-(void)finishedFetchingXattrSignatures:(id)arg0 ;
-(void)unblockRecordSavesWaitingOnRecordID:(id)arg0 ;


@end


#endif