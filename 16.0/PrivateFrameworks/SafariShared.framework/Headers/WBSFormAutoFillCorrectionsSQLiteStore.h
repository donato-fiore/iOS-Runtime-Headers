// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFORMAUTOFILLCORRECTIONSSQLITESTORE_H
#define WBSFORMAUTOFILLCORRECTIONSSQLITESTORE_H

@class NSURL, WBSSQLiteDatabase, NSString;
@protocol WBSFormAutoFillCorrectionsStore, WBSCrowdsourcedFeedbackAllowList, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSCrowdsourcedFeedbackDomainNormalizer.h"

@interface WBSFormAutoFillCorrectionsSQLiteStore : NSObject <WBSFormAutoFillCorrectionsStore, WBSCrowdsourcedFeedbackAllowList>

 {
    NSURL *_localDatabaseURL;
    NSURL *_parsecDatabaseURL;
    WBSSQLiteDatabase *_localDatabase;
    WBSSQLiteDatabase *_parsecDatabase;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_defaultLocalDatabaseURL;
+(id)_defaultParsecDatabaseURL;
+(id)standardStore;
-(BOOL)_isDatabaseOpen:(id)arg0 ;
-(BOOL)_migrateToSchemaVersion:(int)arg0 forDatabase:(id)arg1 ;
-(BOOL)_removeAllLocalClassifications;
-(BOOL)_removeLocalClassificationsForDomain:(id)arg0 recordedOnOrAfter:(id)arg1 ;
-(BOOL)_replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)arg0 retrievalURLString:(id)arg1 ;
-(BOOL)_replaceDomainAllowListWithDomains:(id)arg0 retrievalURLString:(id)arg1 ;
-(BOOL)_setCrowdsourcedClassification:(id)arg0 forFieldWithFingerprint:(id)arg1 onDomain:(id)arg2 ;
-(BOOL)_setDomain:(id)arg0 isAllowListedForFeedback:(BOOL)arg1 ;
-(BOOL)_setLocalClassification:(id)arg0 forFieldWithFingerprint:(id)arg1 onDomain:(id)arg2 dateReclassified:(id)arg3 ;
-(BOOL)_setParsecMetadataStringValue:(id)arg0 forKey:(id)arg1 ;
-(BOOL)_tryToPerformTransactionOnDatabase:(id)arg0 inBlock:(id)arg1 ;
-(id)_classificationForFieldWithFingerprint:(id)arg0 onDomain:(id)arg1 ;
-(id)_normalizeDomain:(id)arg0 ;
-(id)_parsecMetadataStringValueForKey:(id)arg0 ;
-(id)init;
-(id)initWithLocalDatabaseURL:(id)arg0 parsecDatabaseURL:(id)arg1 ;
-(int)_createFreshLocalDatabaseSchema;
-(int)_createFreshParsecDatabaseSchema;
-(int)_migrateToCurrentSchemaVersionIfNeededForDatabase:(id)arg0 ;
-(int)_migrateToSchemaVersion_2;
-(int)_migrateToSchemaVersion_3;
-(int)_migrateToSchemaVersion_4;
-(int)_schemaVersionForDatabase:(id)arg0 ;
-(int)_setDatabaseSchemaVersion:(int)arg0 forDatabase:(id)arg1 ;
-(void)_closeDatabases;
-(void)_configureDatabase:(id)arg0 currentSchemaVersion:(int)arg1 ;
-(void)_openDatabasesIfNeeded;
-(void)_openLocalDatabase;
-(void)_openParsecDatabase;
-(void)_setLocalClassification:(id)arg0 forFieldWithFingerprint:(id)arg1 onDomain:(id)arg2 date:(id)arg3 completionHandler:(id)arg4 ;
-(void)closeDatabase;
-(void)getAllowListStatusForDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)getClassificationForFieldWithFingerprint:(id)arg0 onDomain:(id)arg1 completionHandler:(id)arg2 ;
-(void)getLastAllowListRetrievalURLStringWithCompletionHandler:(id)arg0 ;
-(void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(id)arg0 ;
-(void)removeAllLocalClassificationsWithCompletionHandler:(id)arg0 ;
-(void)removeLocalClassificationsForDomain:(id)arg0 recordedOnOrAfter:(id)arg1 completionHandler:(id)arg2 ;
-(void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)arg0 retrievalURLString:(id)arg1 completionHandler:(id)arg2 ;
-(void)replaceDomainAllowListWithDomains:(id)arg0 retrievalURLString:(id)arg1 completionHandler:(id)arg2 ;
-(void)setCrowdsourcedClassification:(id)arg0 forFieldWithFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(id)arg3 ;
-(void)setDomain:(id)arg0 isAllowListedForFeedback:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)setLastAllowListRetrievalURLString:(id)arg0 completionHandler:(id)arg1 ;
-(void)setLastCrowdsourcedCorrectionsRetrievalURLString:(id)arg0 completionHandler:(id)arg1 ;
-(void)setLocalClassification:(id)arg0 forFieldWithFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif