// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDRECORDCACHETABLE_H
#define CKDRECORDCACHETABLE_H

@class CKSQLiteCacheTable;
@protocol CKDRecordCaching;



@interface CKDRecordCacheTable : CKSQLiteCacheTable <CKDRecordCaching>





+(Class)entryClass;
+(id)dbProperties;
-(BOOL)_cachedRecordHasValidAssets:(id)arg0 forRequiredKeys:(id)arg1 ;
-(BOOL)_cachedRecordKnownUserKeyData:(id)arg0 satisfiesRequiredKeys:(id)arg1 ;
-(NSUInteger)numberOfRecordsWithID:(id)arg0 container:(id)arg1 ;
-(id)_dsidForAccount:(id)arg0 ;
-(id)_recordWithID:(id)arg0 container:(id)arg1 requiredKeys:(id)arg2 scope:(NSInteger)arg3 ;
-(id)_trimRecord:(id)arg0 toRequiredKeys:(id)arg1 ;
-(id)etagForRecordID:(id)arg0 container:(id)arg1 requiredKeys:(id)arg2 scope:(NSInteger)arg3 ;
-(id)fetchCacheEntryRecordData:(id)arg0 ;
-(id)init;
-(id)recordWithID:(id)arg0 container:(id)arg1 requiredKeys:(id)arg2 scope:(NSInteger)arg3 ;
-(id)recordsWithIDs:(id)arg0 container:(id)arg1 requiredKeys:(id)arg2 scope:(NSInteger)arg3 ;
-(void)addRecord:(id)arg0 container:(id)arg1 knownUserKeys:(id)arg2 scope:(NSInteger)arg3 ;
-(void)clearAllRecords;
-(void)clearAllRecordsForZoneWithID:(id)arg0 ;
-(void)clearAllRecordsInScope:(NSInteger)arg0 ;
-(void)clearAssetAuthTokensForRecord:(id)arg0 container:(id)arg1 scope:(NSInteger)arg2 ;
-(void)clearAssetAuthTokensForRecordWithID:(id)arg0 container:(id)arg1 scope:(NSInteger)arg2 ;
-(void)deleteRecordWithID:(id)arg0 scope:(NSInteger)arg1 ;


@end


#endif