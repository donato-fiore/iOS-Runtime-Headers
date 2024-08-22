// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMIFEATURESTORE_H
#define SGMIFEATURESTORE_H

@class _PASLock, _PASDatabaseMigrator, NSString;
@protocol _PASDatabaseMigrationProtocol;

#import <Foundation/Foundation.h>


@interface SGMIFeatureStore : NSObject <_PASDatabaseMigrationProtocol>

 {
    _PASLock *_lock;
    id *_dbGetter;
    _PASDatabaseMigrator *_migrator;
    id *_lockStateRegistration;
    NSString *_journalPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)storeInMemory;
+(id)storeWithFilename:(id)arg0 ;
// -(BOOL)_applyCappingPolicy:(id)arg0 shouldContinue:(id)arg1 usingDatabase:(unk)arg2  ;
-(BOOL)_areSubmodelsEmptyUsingDatabase:(id)arg0 ;
// -(BOOL)_purgeTokensWhichLastUpdateWasBefore:(id)arg0 shouldContinue:(id)arg1 usingDatabase:(unk)arg2  ;
-(BOOL)_writeJournalCommand:(unsigned char)arg0 blob:(id)arg1 ;
-(BOOL)applyCappingPolicy:(id)arg0 shouldContinue:(id)arg1 ;
-(BOOL)areSubmodelsEmpty;
-(BOOL)performMaintenanceWithShouldContinueBlock:(id)arg0 ;
-(BOOL)purgeTokensWhichLastUpdateWasBefore:(id)arg0 shouldContinue:(id)arg1 ;
-(NSInteger)_featureNameForString:(id)arg0 ;
-(id)_columnFromDate:(id)arg0 ;
-(id)_dateFormatter;
-(id)_dateFromColumn:(id)arg0 ;
-(id)_db;
-(id)_featuresForDatabase:(id)arg0 ;
-(id)_getSGMIStoredAddressesUsingDatabase:(id)arg0 ;
-(id)_highlyDiscriminantTokensForFeature:(NSInteger)arg0 minCount:(NSUInteger)arg1 minRatio:(CGFloat)arg2 usingDatabase:(id)arg3 ;
-(id)_journalQueue;
-(id)_naiveBayesModelQueryResultForFeature:(NSInteger)arg0 unigramTokens:(id)arg1 bigramTokens:(id)arg2 usingDatabase:(id)arg3 ;
-(id)_stringForFeatureName:(NSInteger)arg0 ;
// -(id)_subModelsStatsWithShouldContinueBlock:(id)arg0 usingDatabase:(unk)arg1  ;
-(id)databaseHandle;
-(id)getSGMIStoredAddresses;
-(id)highlyDiscriminantTokensForFeature:(NSInteger)arg0 minCount:(NSUInteger)arg1 minRatio:(CGFloat)arg2 ;
-(id)init;
// -(id)initWithDatabaseGetter:(id)arg0 journalPath:(unk)arg1  ;
-(id)migrations;
-(id)naiveBayesModelQueryResultForFeature:(NSInteger)arg0 unigramTokens:(id)arg1 bigramTokens:(id)arg2 ;
-(id)queriesToSkipFromEmptyToVersion:(*unsigned int)arg0 ;
-(id)subModelsStats;
-(id)subModelsStatsWithShouldContinueBlock:(id)arg0 ;
-(id)submodelsAgesInDays;
-(int)_effectiveLockState;
-(unsigned char)migration_createFeaturesTable;
-(void)_clearBucketForColumn:(id)arg0 ;
-(void)_clearBucketForColumn:(id)arg0 usingDatabase:(id)arg1 ;
-(void)_clearSubModelsTablesUsingDatabase:(id)arg0 ;
-(void)_commitNaiveBayesModel:(id)arg0 probabilityFeatureName:(NSInteger)arg1 updateDate:(id)arg2 usingDatabase:(id)arg3 ;
-(void)_deleteNaiveBayesModelForProbabilityFeatureName:(NSInteger)arg0 usingDatabase:(id)arg1 ;
-(void)_deleteTokensForDeletedEmailAddresses:(id)arg0 usingDatabase:(id)arg1 ;
-(void)_handleDeviceLockStateEvent:(int)arg0 ;
-(void)_runJournal;
-(void)clearBucketForDate:(id)arg0 ;
-(void)clearBucketsForDates:(id)arg0 ;
-(void)clearSubModelsTables;
-(void)commitNaiveBayesModel:(id)arg0 probabilityFeatureName:(NSInteger)arg1 ;
-(void)commitNaiveBayesModel:(id)arg0 probabilityFeatureName:(NSInteger)arg1 updateDate:(id)arg2 ;
-(void)dealloc;
-(void)deleteNaiveBayesModelForProbabilityFeatureName:(NSInteger)arg0 ;
-(void)deleteTokensForDeletedEmailAddresses:(id)arg0 ;
-(void)insertToken:(id)arg0 forFeatureName:(NSInteger)arg1 salientCount:(NSInteger)arg2 regularCount:(NSInteger)arg3 time:(id)arg4 ;
-(void)reset;


@end


#endif