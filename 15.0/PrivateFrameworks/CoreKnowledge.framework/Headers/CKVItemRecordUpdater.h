// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVITEMRECORDUPDATER_H
#define CKVITEMRECORDUPDATER_H

@class NSNumber, NSMutableDictionary, NSString;
@protocol CKVDatabaseReadWriteAccess;

#import <Foundation/Foundation.h>


@interface CKVItemRecordUpdater : NSObject {
    NSObject<CKVDatabaseReadWriteAccess> *_database;
    NSNumber *_itemTypeNumber;
    NSNumber *_startTimeMicros;
    NSMutableDictionary *_commandCache;
}


@property (readonly, nonatomic) NSUInteger datasetItemCount; // ivar: _datasetItemCount
@property (readonly, nonatomic) NSNumber *datasetRowId; // ivar: _datasetRowId
@property (readonly, nonatomic) NSUInteger modifiedRowCount; // ivar: _modifiedRowCount
@property (readonly, nonatomic) NSString *originAppId; // ivar: _originAppId


-(BOOL)_insertDatasetReturningRowId:(*id)arg0 ;
-(BOOL)_insertItemMetaWithItemIdHash:(id)arg0 itemBufferHash:(id)arg1 recordId:(id)arg2 isDuplicate:(*BOOL)arg3 ;
-(BOOL)_insertItemWithItemIdHash:(id)arg0 recordId:(id)arg1 itemBuffer:(id)arg2 ;
-(BOOL)_registerDataset;
-(BOOL)_selectDatasetItemCount:(*id)arg0 ;
-(BOOL)_selectDatasetRowId:(*id)arg0 ;
-(BOOL)_updateDatasetValidity;
-(BOOL)_updateItemMetaWithRowId:(id)arg0 recordId:(id)arg1 itemBufferHash:(id)arg2 ;
-(BOOL)_updateItemWithItemIdHash:(id)arg0 recordId:(id)arg1 itemBuffer:(id)arg2 ;
-(BOOL)deleteDataset:(BOOL)arg0 ;
-(BOOL)deleteItemMetaRowId:(id)arg0 ;
-(BOOL)enumerateDatasetRecordIdsUsingBlock:(id)arg0 ;
-(BOOL)enumerateInvalidRecordsUsingBlock:(id)arg0 ;
-(BOOL)insertItemWithItemIdHash:(id)arg0 recordId:(id)arg1 itemBuffer:(id)arg2 itemBufferHash:(id)arg3 isDuplicate:(*BOOL)arg4 ;
-(BOOL)selectWithItemIdHash:(id)arg0 outItemMetaRowId:(*id)arg1 outRecordId:(*id)arg2 outItemBufferHash:(*id)arg3 isDuplicate:(*BOOL)arg4 ;
-(BOOL)updateItemWithItemMetaRowId:(id)arg0 itemIdHash:(id)arg1 recordId:(id)arg2 itemBuffer:(id)arg3 itemBufferHash:(id)arg4 ;
-(BOOL)updateValidityForItemMetaRowId:(id)arg0 ;
-(id)_itemCriterionWithItemIdHash:(id)arg0 ;
-(id)description;
-(id)initWithDatabase:(id)arg0 originApp:(id)arg1 itemType:(NSInteger)arg2 startTimeMicros:(NSInteger)arg3 ;


@end


#endif