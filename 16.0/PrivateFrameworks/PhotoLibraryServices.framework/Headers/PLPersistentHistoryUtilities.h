// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPERSISTENTHISTORYUTILITIES_H
#define PLPERSISTENTHISTORYUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLPersistentHistoryUtilities : NSObject



+(BOOL)deleteHistoryBeforeDate:(id)arg0 whenHistoryPercentageOfStoreIsGreaterThan:(NSUInteger)arg1 withContext:(id)arg2 error:(*id)arg3 ;
+(BOOL)deleteHistoryBeforeDate:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
+(BOOL)deleteHistoryBeforeToken:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
+(NSInteger)fetchApproximateHistoryRecordCountInLibrary:(id)arg0 error:(*id)arg1 ;
+(id)_executePersistentHistoryChangeRequest:(id)arg0 withContext:(id)arg1 ;
+(id)archivedDataWithToken:(id)arg0 ;
+(id)fetchTransactionCountSinceToken:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchTransactionsSinceMarker:(id)arg0 withFetchRequest:(id)arg1 batchSize:(NSUInteger)arg2 context:(id)arg3 error:(*id)arg4 ;
+(id)newestTransactionWithContext:(id)arg0 ;
+(id)oldestTransactionWithContext:(id)arg0 ;
+(id)unarchiveTokenWithData:(id)arg0 ;


@end


#endif