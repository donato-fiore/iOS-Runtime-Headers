// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLTRAININGSTORE_H
#define PMLTRAININGSTORE_H

@class NSString, _PASSqliteDatabase;

#import <Foundation/Foundation.h>


@interface PMLTrainingStore : NSObject {
    NSString *_dbPath;
    _PASSqliteDatabase *_db;
    id *_lockStateNotificationToken;
    BOOL _allowSkipSchema;
    NSUInteger _maxTimesAccessed;
}




+(BOOL)_runQueries:(id)arg0 andUpdateVersionTo:(unsigned int)arg1 inTransactionOnDb:(id)arg2 forStore:(id)arg3 ;
+(CGFloat)lastUsedTimestampLimit;
+(NSInteger)_migrate:(id)arg0 forStore:(id)arg1 ;
+(NSInteger)migrate:(id)arg0 to:(id)arg1 forStore:(id)arg2 ;
+(id)_sessionDataToBatchWithNumberOfColumns:(NSUInteger)arg0 rowsData:(id)arg1 labelsData:(id)arg2 ;
+(id)getSchema:(*NSUInteger)arg0 ;
+(id)inMemoryStoreForTesting;
+(void)setLastUsedTimestampLimit:(CGFloat)arg0 ;
-(BOOL)_truncateDbIfCorrupted;
-(BOOL)createSnapshot:(id)arg0 ;
-(BOOL)isDbOpen;
-(NSInteger)_openDbIfUnlocked;
-(NSInteger)_unsafeOpenDbIfUnlocked;
-(NSInteger)migrateTo:(id)arg0 ;
-(NSUInteger)numberOfRowsInTable:(id)arg0 ;
-(NSUInteger)sessionDescriptorIdFor:(id)arg0 ;
-(id)dbForTesting;
-(id)getSchema:(*NSUInteger)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 allowSkipSchema:(BOOL)arg1 ;
-(id)lastTrainingFeaturizationForModelName:(id)arg0 andLocale:(id)arg1 ;
-(id)sessionDimensionsForModel:(id)arg0 startingRowId:(NSUInteger)arg1 onlyAppleInternal:(BOOL)arg2 labelFilter:(id)arg3 ;
-(id)sessionStats;
-(id)sessionStatsForSessionDescriptor:(id)arg0 ;
-(void)_loadBatchForModel:(id)arg0 privacyBudgetRefreshPeriod:(CGFloat)arg1 labels:(id)arg2 batchSize:(NSUInteger)arg3 block:(id)arg4 ;
-(void)_loadDataForModel:(id)arg0 positiveRowId:(NSUInteger)arg1 negativeRowId:(NSUInteger)arg2 excludeItemIdsUsedWithin:(CGFloat)arg3 limit:(NSUInteger)arg4 onlyAppleInternal:(BOOL)arg5 positiveLabel:(NSUInteger)arg6 skew:(CGFloat)arg7 block:(id)arg8 ;
-(void)_loadDataForModel:(id)arg0 privacyBudgetRefreshPeriod:(CGFloat)arg1 labelAndStartRows:(id)arg2 batchSize:(NSUInteger)arg3 supportPerLabel:(NSUInteger)arg4 block:(id)arg5 ;
-(void)_loadDataFromLabelAndTuples:(id)arg0 model:(id)arg1 numberOfRows:(NSUInteger)arg2 numberOfColumns:(NSUInteger)arg3 lastUsedMax:(CGFloat)arg4 block:(id)arg5 ;
-(void)_registerUnlockHandler;
-(void)_unregisterUnlockHandler;
-(void)closeDbForTesting;
-(void)convertToBagOfIdsVectorForModel:(id)arg0 ;
-(void)dealloc;
-(void)deleteSessionsWithBundleId:(id)arg0 ;
-(void)deleteSessionsWithBundleId:(id)arg0 domainId:(id)arg1 ;
-(void)deleteSessionsWithBundleId:(id)arg0 itemId:(id)arg1 ;
-(void)enumerateSessionDescriptorsUsingBlock:(id)arg0 ;
-(void)limitSessionsByLastUsedTTL:(CGFloat)arg0 ;
-(void)limitSessionsByMaxTimesAccessed;
-(void)limitSessionsForEachLabelWithSessionDescriptor:(id)arg0 totalSessionLimit:(NSUInteger)arg1 ;
-(void)limitSessionsWithSessionDescriptor:(id)arg0 withLabel:(id)arg1 limit:(NSUInteger)arg2 ;
-(void)loadDataForModel:(id)arg0 excludeItemIdsUsedWithin:(CGFloat)arg1 limit:(NSUInteger)arg2 onlyAppleInternal:(BOOL)arg3 positiveLabel:(NSUInteger)arg4 skew:(CGFloat)arg5 block:(id)arg6 ;
-(void)loadDataForModel:(id)arg0 privacyBudgetRefreshPeriod:(CGFloat)arg1 labels:(id)arg2 batchSize:(NSUInteger)arg3 block:(id)arg4 ;
-(void)loadSessionsForModel:(id)arg0 excludeItemIdsUsedWithin:(CGFloat)arg1 limit:(NSUInteger)arg2 onlyAppleInternal:(BOOL)arg3 block:(id)arg4 ;
-(void)loadSessionsForModel:(id)arg0 excludeItemIdsUsedWithin:(CGFloat)arg1 limit:(NSUInteger)arg2 onlyAppleInternal:(BOOL)arg3 positiveLabel:(NSUInteger)arg4 skew:(CGFloat)arg5 block:(id)arg6 ;
-(void)loadSessionsForModel:(id)arg0 excludeItemIdsUsedWithin:(CGFloat)arg1 withSkew:(CGFloat)arg2 andLimit:(int)arg3 block:(id)arg4 ;
-(void)loadSessionsForModel:(id)arg0 privacyBudgetRefreshPeriod:(CGFloat)arg1 labels:(id)arg2 batchSize:(NSUInteger)arg3 block:(id)arg4 ;
-(void)logDbNotOpenEvent;
-(void)setMaxTimesAccessed:(NSUInteger)arg0 ;
-(void)storeSession:(id)arg0 label:(NSInteger)arg1 model:(id)arg2 ;
-(void)storeSession:(id)arg0 label:(NSInteger)arg1 model:(id)arg2 bundleId:(id)arg3 domainId:(id)arg4 itemIds:(id)arg5 isAppleInternal:(BOOL)arg6 ;
-(void)updateLastTrainingFeaturizationForModel:(id)arg0 andData:(id)arg1 ;
-(void)vacuumDbWithDeferralBlock:(id)arg0 ;


@end


#endif