// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVDATABASESEARCHER_H
#define CKVDATABASESEARCHER_H


#import <Foundation/Foundation.h>

#import "CKVIndexManager.h"

@interface CKVDatabaseSearcher : NSObject {
    CKVIndexManager *_idxMgr;
}




+(BOOL)_enumerateItemsWithBatchSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 enumerateAll:(BOOL)arg2 database:(id)arg3 error:(*id)arg4 usingBlock:(id)arg5 ;
+(BOOL)enumerateAllItemsOfDataset:(id)arg0 database:(id)arg1 batchSize:(NSUInteger)arg2 error:(*id)arg3 usingBlock:(id)arg4 ;
+(BOOL)enumerateAllItemsWithBatchSize:(NSUInteger)arg0 database:(id)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
+(id)_datasetRecordForOriginApp:(id)arg0 itemType:(NSInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)_datasetRowIdToRecordMap:(id)arg0 error:(*id)arg1 ;
+(id)countDatasetItems:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)databaseSearcher;
+(id)selectAllDatasets:(id)arg0 error:(*id)arg1 ;
-(BOOL)_enumerateResultsOfFTSSearch:(id)arg0 searchCriteria:(id)arg1 sortByRelevance:(BOOL)arg2 error:(*id)arg3 usingBlock:(id)arg4 ;
-(BOOL)enumerateItemsWithBatchSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(id)_selectAllItemRecordsWithOriginApp:(id)arg0 itemType:(NSInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
-(id)_selectItemRecordsWithRecordIds:(id)arg0 databaseConnection:(id)arg1 error:(*id)arg2 ;
-(id)computeAllDatasetStatistics;
-(id)initWithIndexManager:(id)arg0 ;
-(id)searchFTSInternalWithCriteria:(id)arg0 sortByRelevance:(BOOL)arg1 error:(*id)arg2 ;
-(id)selectAllItemRecordsWithOriginApp:(id)arg0 itemType:(NSInteger)arg1 error:(*id)arg2 ;


@end


#endif