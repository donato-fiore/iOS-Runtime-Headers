// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBACKINGSTORELOCAL_H
#define HMDBACKINGSTORELOCAL_H

@class HMFObject, NSString, NSMutableDictionary, NSMutableArray;
@protocol HMFLogging;



@interface HMDBackingStoreLocal : HMFObject <HMFLogging>

 {
    *sqlite3 context;
    *void sqlite3_cache;
    *sqlite3_stmt insertZone;
    *sqlite3_stmt deleteZone;
    *sqlite3_stmt selectZones;
    *sqlite3_stmt insertStore;
    *sqlite3_stmt selectStores;
    *sqlite3_stmt insertGroup;
    *sqlite3_stmt deleteGroup;
    *sqlite3_stmt selectGroups;
    *sqlite3_stmt updateGroupToken;
    *sqlite3_stmt updateGroupSubscription;
    *sqlite3_stmt insertShare;
    *sqlite3_stmt updateShareShare;
    *sqlite3_stmt updateShareUsers;
    *sqlite3_stmt deleteShare;
    *sqlite3_stmt selectShares;
    *sqlite3_stmt insertRecord;
    *sqlite3_stmt updateRecordSchema;
    *sqlite3_stmt selectRecordCountGroup;
    *sqlite3_stmt selectRecordGroupTypeSchema;
    *sqlite3_stmt selectRecordGroup;
    *sqlite3_stmt selectRecordGroupMap;
    *sqlite3_stmt selectRecordUUID;
    *sqlite3_stmt selectRecordParentUUID;
    *sqlite3_stmt selectRecordParent;
    *sqlite3_stmt selectRecordName;
    *sqlite3_stmt selectRecordUUIDNoShare;
    *sqlite3_stmt selectRecordParentNoShare;
    *sqlite3_stmt selectRecordNameNoShare;
    *sqlite3_stmt selectRecords;
    *sqlite3_stmt selectStoreRecords;
    *sqlite3_stmt deleteRecord;
    *sqlite3_stmt flushPushedXact;
    *sqlite3_stmt insertLog;
    *sqlite3_stmt updateLogToDiskCommited;
    *sqlite3_stmt updateLogXactID;
    *sqlite3_stmt selectLog;
    *sqlite3_stmt selectChangeExistsLog;
    *sqlite3_stmt selectAllLog;
    *sqlite3_stmt insertLogOptions;
    *sqlite3_stmt selectLogOptions;
    *sqlite3_stmt updateLog;
    *sqlite3_stmt deleteLog;
    *sqlite3_stmt insertArchive;
    *sqlite3_stmt selectArchive;
    *sqlite3_stmt commit;
    *sqlite3_stmt rollback;
    *sqlite3_stmt begin;
}


@property (readonly, nonatomic) NSString *datastoreFile; // ivar: _datastoreFile
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isTransactionReplayFeatureEnabled; // ivar: _isTransactionReplayFeatureEnabled
@property (retain, nonatomic) NSMutableDictionary *storeCache; // ivar: _storeCache
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *zoneCache; // ivar: _zoneCache


+(id)logCategory;
+(void)cleanDatastoreFilesAt:(id)arg0 everything:(BOOL)arg1 ;
-(BOOL)_selectArchiveWithIdentifier:(id)arg0 archive:(*id)arg1 controllerUserName:(*id)arg2 error:(*id)arg3 ;
-(NSInteger)_insertGroupWithZoneID:(NSInteger)arg0 root:(id)arg1 owner:(id)arg2 subscription:(id)arg3 error:(*id)arg4 ;
-(NSInteger)_insertZoneWithName:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_numUncommittedTransactions;
-(NSUInteger)_fetchIDForStore:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)_insertArchive:(id)arg0 identifier:(id)arg1 controllerUserName:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)_insertLogWithRoot:(id)arg0 transaction:(id)arg1 set:(NSInteger)arg2 error:(*id)arg3 ;
-(id)_begin;
-(id)_commit;
-(id)_createDatastoreTables:(id)arg0 ;
-(id)_createNewDatastore:(id)arg0 ;
-(id)_deleteGroupWithID:(NSInteger)arg0 ;
-(id)_deleteLog:(NSInteger)arg0 ;
-(id)_deleteRecordWithGroupID:(NSInteger)arg0 recordName:(id)arg1 ;
-(id)_deleteZoneWithID:(NSInteger)arg0 ;
-(id)_dropUncommittedUnpushedTransactions;
-(id)_fetchGroupsForZone:(id)arg0 withError:(*id)arg1 ;
-(id)_fetchRecordWithUUID:(id)arg0 root:(id)arg1 error:(*id)arg2 ;
-(id)_fetchUncommittedAndPushedTransactions;
-(id)_fetchZonesWithError:(*id)arg0 ;
-(id)_fillStoreCache;
-(id)_fillZoneCache;
-(id)_insertLogOptionsWithID:(NSInteger)arg0 options:(id)arg1 ;
-(id)_instanceResources:(BOOL)arg0 migrate:(BOOL)arg1 ;
-(id)_runSQLite3:(char *)arg0 bind:(id)arg1 error:(*id)arg2 ;
-(id)_selectLogOptionsWithID:(NSInteger)arg0 ;
-(id)_updateGroupWithID:(NSInteger)arg0 serverChangeToken:(id)arg1 ;
-(id)_updateGroupWithID:(NSInteger)arg0 subscription:(id)arg1 ;
-(id)_updateLog:(NSInteger)arg0 mask:(NSInteger)arg1 set:(NSInteger)arg2 ;
-(id)_updateRecordWithGroupID:(NSInteger)arg0 name:(id)arg1 schema:(id)arg2 ;
-(id)_updateRecordWithGroupID:(NSInteger)arg0 store:(NSInteger)arg1 name:(id)arg2 model:(id)arg3 ;
-(id)_updateRecordWithGroupID:(NSInteger)arg0 store:(NSInteger)arg1 name:(id)arg2 record:(id)arg3 uuid:(id)arg4 parentUUID:(id)arg5 type:(id)arg6 data:(id)arg7 encoding:(NSInteger)arg8 schema:(id)arg9 ;
-(id)_updateRecordWithGroupID:(NSInteger)arg0 store:(NSInteger)arg1 record:(id)arg2 ;
-(id)_updateRecordWithGroupID:(NSInteger)arg0 store:(NSInteger)arg1 record:(id)arg2 data:(id)arg3 encoding:(NSInteger)arg4 ;
-(id)flush:(BOOL)arg0 ;
-(id)initWithDB:(id)arg0 migrate:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithDB:(id)arg0 migrate:(BOOL)arg1 shouldEnableTransactionReplayMode:(BOOL)arg2 error:(*id)arg3 ;
-(id)initWithDatastore:(id)arg0 ;
-(id)initWithDatastore:(id)arg0 shouldEnableTransactionReplayMode:(BOOL)arg1 ;
-(id)logIdentifier;
-(void)_fetchRecordCountWithGroupID:(NSInteger)arg0 callback:(id)arg1 ;
-(void)_fetchRecordMapWithGroupID:(NSInteger)arg0 callback:(id)arg1 ;
-(void)_fetchRecordTypeSchemaWithGroupID:(NSInteger)arg0 callback:(id)arg1 ;
-(void)_fetchRecordsWithGroupID:(NSInteger)arg0 callback:(id)arg1 ;
-(void)_fetchRecordsWithGroupID:(NSInteger)arg0 names:(id)arg1 callback:(id)arg2 ;
-(void)_fetchRecordsWithGroupID:(NSInteger)arg0 parent:(id)arg1 type:(id)arg2 callback:(id)arg3 ;
-(void)_fetchRecordsWithGroupID:(NSInteger)arg0 parentUuids:(id)arg1 callback:(id)arg2 ;
-(void)_fetchRecordsWithGroupID:(NSInteger)arg0 uuids:(id)arg1 callback:(id)arg2 ;
-(void)_freeResources;
-(void)_rollback;
-(void)_selectAllLog:(id)arg0 ;
-(void)_selectAllRecords:(id)arg0 ;
-(void)_selectLogWithMask:(NSInteger)arg0 compare:(NSInteger)arg1 callback:(id)arg2 ;
-(void)_selectLogWithRoot:(id)arg0 after:(NSInteger)arg1 mask:(NSInteger)arg2 compare:(NSInteger)arg3 callback:(id)arg4 ;
-(void)dealloc;


@end


#endif