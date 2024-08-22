// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVITEMRECORDUPDATER_H
#define CKVITEMRECORDUPDATER_H

@class NSString, NSNumber, NSMutableDictionary;
@protocol CKVDatabaseReadWriteAccess;

#import <Foundation/Foundation.h>


@interface CKVItemRecordUpdater : NSObject {
    NSObject<CKVDatabaseReadWriteAccess> *_database;
    NSString *_requestDescription;
    NSNumber *_startTimeMicros;
    NSNumber *_itemTypeNumber;
    NSString *_originAppId;
    NSString *_deviceId;
    NSString *_userId;
    NSNumber *_versionNumber;
    NSMutableDictionary *_commandCache;
}


@property (readonly, nonatomic) unsigned int datasetItemCount; // ivar: _datasetItemCount
@property (readonly, nonatomic) NSNumber *datasetRowId; // ivar: _datasetRowId
@property (readonly, nonatomic) unsigned int modifiedRowCount; // ivar: _modifiedRowCount
@property (readonly, nonatomic) NSUInteger priorOptions; // ivar: _priorOptions
@property (readonly, nonatomic) NSNumber *priorValidityHash; // ivar: _priorValidityHash
@property (readonly, nonatomic) NSUInteger priorVersion; // ivar: _priorVersion
@property (readonly, nonatomic) NSNumber *updateValidityHash; // ivar: _updateValidityHash
@property (readonly, nonatomic) NSUInteger updateVersion; // ivar: _updateVersion


-(BOOL)_insertDatasetReturningRowId:(*id)arg0 ;
-(BOOL)_insertItemMetaWithItemIdHash:(id)arg0 itemBufferHash:(id)arg1 recordId:(id)arg2 isDuplicate:(*BOOL)arg3 rank:(NSUInteger)arg4 ;
-(BOOL)_insertItemWithItemIdHash:(id)arg0 recordId:(id)arg1 itemBuffer:(id)arg2 ;
-(BOOL)_registerDataset;
-(BOOL)_selectDatasetItemCount:(*id)arg0 ;
-(BOOL)_selectDatasetRowId:(*id)arg0 version:(*NSUInteger)arg1 validityHash:(*id)arg2 options:(*NSUInteger)arg3 ;
-(BOOL)_updateDatasetVersionAndValidity;
-(BOOL)_updateItemMetaWithRowId:(id)arg0 recordId:(id)arg1 itemBufferHash:(id)arg2 rank:(NSUInteger)arg3 ;
-(BOOL)_updateItemWithItemIdHash:(id)arg0 recordId:(id)arg1 itemBuffer:(id)arg2 ;
-(BOOL)deleteDataset:(BOOL)arg0 ;
-(BOOL)deleteItemMetaRowId:(id)arg0 ;
-(BOOL)deleteItemWithItemIdHash:(id)arg0 outRecordId:(*id)arg1 ;
-(BOOL)enumerateDatasetRecordIdsUsingBlock:(id)arg0 ;
-(BOOL)enumerateUnmodifiedRecordsUsingBlock:(id)arg0 ;
-(BOOL)insertItemWithItemIdHash:(id)arg0 recordId:(id)arg1 itemBuffer:(id)arg2 itemBufferHash:(id)arg3 isDuplicate:(*BOOL)arg4 rank:(NSUInteger)arg5 ;
-(BOOL)selectWithItemIdHash:(id)arg0 outItemMetaRowId:(*id)arg1 outRecordId:(*id)arg2 outItemBufferHash:(*id)arg3 isDuplicate:(*BOOL)arg4 ;
-(BOOL)updateDatasetOptions:(NSUInteger)arg0 ;
-(BOOL)updateItemRankForItemMetaRowId:(id)arg0 rank:(NSUInteger)arg1 ;
-(BOOL)updateItemWithItemMetaRowId:(id)arg0 itemIdHash:(id)arg1 recordId:(id)arg2 itemBuffer:(id)arg3 itemBufferHash:(id)arg4 rank:(NSUInteger)arg5 ;
-(id)_itemCriterionWithItemIdHash:(id)arg0 ;
-(id)description;
-(id)initWithDatabase:(id)arg0 request:(id)arg1 startTimeMicros:(NSInteger)arg2 ;


@end


#endif