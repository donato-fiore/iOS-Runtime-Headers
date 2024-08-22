// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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


+(id)nsDataFromSignature:(id)arg0 ;
+(id)shouldExposeWarningGivenPositiveFeedbackCount:(id)arg0 negativeFeedbackCount:(id)arg1 ;
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
-(NSInteger)warningStatsCount;
-(id)_columnFromDate:(id)arg0 ;
-(id)_dateFormatter;
-(id)_dateFromColumn:(id)arg0 ;
-(id)_db;
-(id)_featuresForDatabase:(id)arg0 ;
-(id)_getSGMIStoredAddressesUsingDatabase:(id)arg0 ;
-(id)_highlyDiscriminantTokensForFeature:(NSInteger)arg0 minCount:(NSUInteger)arg1 minRatio:(CGFloat)arg2 domains:(id)arg3 limit:(id)arg4 usingDatabase:(id)arg5 ;
-(id)_journalQueue;
-(id)_keyForField:(NSInteger)arg0 ;
-(id)_naiveBayesModelQueryResultForFeature:(NSInteger)arg0 unigramTokens:(id)arg1 bigramTokens:(id)arg2 usingDatabase:(id)arg3 ;
-(id)_stringForFeatureName:(NSInteger)arg0 ;
// -(id)_subModelsStatsWithShouldContinueBlock:(id)arg0 usingDatabase:(unk)arg1  ;
-(id)databaseHandle;
-(id)followUpWarningStats;
-(id)getDoubleNSNumberForKey:(id)arg0 ;
-(id)getForKey:(id)arg0 binder:(id)arg1 ;
-(id)getInt64NSNumberForKey:(id)arg0 ;
-(id)getNSDateForKey:(id)arg0 ;
-(id)getNSStringForKey:(id)arg0 ;
-(id)getSGMIStoredAddresses;
-(id)getUnsubscriptionOpportunitiesSuggestionsDenyListForField:(NSInteger)arg0 ;
-(id)highlyDiscriminantTokensForFeature:(NSInteger)arg0 minCount:(NSUInteger)arg1 minRatio:(CGFloat)arg2 ;
-(id)incrementUserEngagement:(BOOL)arg0 forWarning:(id)arg1 ;
-(id)init;
// -(id)initWithDatabaseGetter:(id)arg0 journalPath:(unk)arg1  ;
-(id)knownEmailAddressesForNickname:(id)arg0 ;
-(id)migrations;
-(id)naiveBayesModelQueryResultForFeature:(NSInteger)arg0 unigramTokens:(id)arg1 bigramTokens:(id)arg2 ;
-(id)queriesToSkipFromEmptyToVersion:(*unsigned int)arg0 ;
-(id)shouldExposeWarning:(id)arg0 ;
-(id)shouldExposeWarning:(id)arg0 updateAction:(NSInteger)arg1 ;
-(id)sortedUnsubscriptionOpportunitiesForField:(NSInteger)arg0 minCount:(NSUInteger)arg1 minScore:(CGFloat)arg2 limit:(NSUInteger)arg3 ;
-(id)subModelsStats;
-(id)subModelsStatsWithShouldContinueBlock:(id)arg0 ;
-(id)submodelsAgesInDays;
-(id)warningStatsForLogging:(BOOL)arg0 ;
-(int)_effectiveLockState;
-(unsigned char)migration_createFeaturesTable;
-(unsigned char)migration_createFollowUpTable;
-(unsigned char)migration_createFollowUpTableWithAppleMailMessageIdAsPrimaryKey;
-(unsigned char)migration_createKVTable;
-(unsigned char)migration_createSignatureStatsTable;
-(void)_clearBucketForColumn:(id)arg0 ;
-(void)_clearBucketForColumn:(id)arg0 usingDatabase:(id)arg1 ;
-(void)_clearKVStoreUsingDatabase:(id)arg0 ;
-(void)_clearSignatureStatsTableUsingDatabase:(id)arg0 ;
-(void)_clearSubModelsTablesUsingDatabase:(id)arg0 ;
-(void)_commitNaiveBayesModel:(id)arg0 probabilityFeatureName:(NSInteger)arg1 updateDate:(id)arg2 usingDatabase:(id)arg3 ;
-(void)_deleteNaiveBayesModelForProbabilityFeatureName:(NSInteger)arg0 usingDatabase:(id)arg1 ;
-(void)_deleteTokensForDeletedEmailAddresses:(id)arg0 usingDatabase:(id)arg1 ;
-(void)_handleDeviceLockStateEvent:(int)arg0 ;
-(void)_runJournal;
-(void)clearBucketForDate:(id)arg0 ;
-(void)clearBucketsForDates:(id)arg0 ;
-(void)clearKVStoreTable;
-(void)clearMailIntelligenceSaliencyDetection;
-(void)clearNicknameMappingTable;
-(void)clearSignatureStatsTable;
-(void)clearSubModelsTables;
-(void)commitNaiveBayesModel:(id)arg0 probabilityFeatureName:(NSInteger)arg1 ;
-(void)commitNaiveBayesModel:(id)arg0 probabilityFeatureName:(NSInteger)arg1 updateDate:(id)arg2 ;
-(void)dealloc;
-(void)deleteNaiveBayesModelForProbabilityFeatureName:(NSInteger)arg0 ;
-(void)deleteTokensForDeletedEmailAddresses:(id)arg0 ;
-(void)deleteValueForKey:(id)arg0 ;
-(void)incrementInt64NSNumber:(id)arg0 forKey:(id)arg1 ;
-(void)incrementUserEngagement:(BOOL)arg0 forFollowUpWarning:(id)arg1 ;
-(void)insertToken:(id)arg0 forFeatureName:(NSInteger)arg1 salientCount:(NSInteger)arg2 regularCount:(NSInteger)arg3 time:(id)arg4 ;
-(void)purgeOldNicknameMappingRecords;
-(void)recordMappingFromNickname:(id)arg0 toEmailAddress:(id)arg1 ;
-(void)recordMappingFromNickname:(id)arg0 toEmailAddress:(id)arg1 withDateOfMatch:(id)arg2 ;
-(void)reset;
-(void)setDoubleNSNumber:(id)arg0 forKey:(id)arg1 ;
-(void)setInt64NSNumber:(id)arg0 forKey:(id)arg1 ;
-(void)setNSDate:(id)arg0 forKey:(id)arg1 ;
-(void)setNSString:(id)arg0 forKey:(id)arg1 ;
-(void)setUnsubscriptionOpportunitiesSuggestionsDenyListForField:(NSInteger)arg0 toValues:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 binder:(id)arg2 ;
-(void)updateAttachmentDetectionStatsOnMailWithTextContent:(id)arg0 attachments:(id)arg1 warningRaised:(BOOL)arg2 attachmentPredicted:(BOOL)arg3 isIncomingMail:(BOOL)arg4 ;
-(void)updateFollowUpDetectionStatsWithWarning:(id)arg0 ;
-(void)updateRecipientDetectionStatsWarningRaised:(BOOL)arg0 ;


@end


#endif