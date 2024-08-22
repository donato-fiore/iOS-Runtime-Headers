// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCRECORDSOURCE_H
#define FCRECORDSOURCE_H

@class NFUnfairLock, NSString, NSArray, NSDictionary;
@protocol FCCacheCoordinatorDelegate, FCFetchCoordinatorDelegate, FCCacheFlushing, FCJSONEncodableObjectProviding, FCAppActivityMonitor, FCBackgroundTaskable;

#import <Foundation/Foundation.h>

#import "FCCKContentDatabase.h"
#import "FCKeyValueStore.h"
#import "FCCacheCoordinator.h"
#import "FCFetchCoordinator.h"
#import "FCThreadSafeMutableDictionary.h"

@interface FCRecordSource : NSObject <FCCacheCoordinatorDelegate, FCFetchCoordinatorDelegate, FCCacheFlushing, FCJSONEncodableObjectProviding>

 {
    os_unfair_lock_s _derivedKeysLock;
    NFUnfairLock *_initializationLock;
    FCCKContentDatabase *_contentDatabase;
    NSString *_contentDirectory;
    id<FCAppActivityMonitor> *_appActivityMonitor;
    id<FCBackgroundTaskable> *_backgroundTaskable;
    FCKeyValueStore *_localStore;
    FCCacheCoordinator *_cacheCoordinator;
    FCFetchCoordinator *_fetchCoordinator;
}


@property (readonly, nonatomic) NSString *activeTreatmentID; // ivar: _activeTreatmentID
@property (readonly, nonatomic) NSArray *alwaysLocalizedKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (readonly, nonatomic) NSString *experimentalizableFieldsPostfix; // ivar: _experimentalizableFieldsPostfix
@property (readonly, nonatomic) NSArray *experimentalizableKeys;
@property (readonly, nonatomic) NSDictionary *experimentalizedKeysByOriginalKey; // ivar: _experimentalizedKeysByOriginalKey
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *fetchErrorsByKey; // ivar: _fetchErrorsByKey
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *localizableExperimentalizableKeys;
@property (readonly, nonatomic) NSArray *localizableKeys;
@property (readonly, nonatomic) NSArray *localizableLanguageSpecificKeys;
@property (readonly, nonatomic) NSDictionary *localizedExperimentalizedKeysByOriginalKey; // ivar: _localizedExperimentalizedKeysByOriginalKey
@property (readonly, nonatomic) NSDictionary *localizedKeysByOriginalKey; // ivar: _localizedKeysByOriginalKey
@property (readonly, nonatomic) NSDictionary *localizedLanguageSpecificKeysByOriginalKey; // ivar: _localizedLanguageSpecificKeysByOriginalKey
@property (readonly, nonatomic) NSArray *nonLocalizableKeys;
@property (readonly) Class superclass;


+(BOOL)supportsDeletions;
+(id)canaryRecordName;
+(id)changeTagFromCKRecord:(id)arg0 ;
+(id)defaultCachePolicy;
+(id)identifierFromCKRecord:(id)arg0 ;
+(id)modificationDateFromCKRecord:(id)arg0 ;
-(BOOL)isRecordStale:(id)arg0 withCachePolicy:(id)arg1 ;
-(BOOL)recognizesRecordID:(id)arg0 ;
-(NSUInteger)cacheCoordinatorCurrentSizeWithReadLock:(id)arg0 ;
-(NSUInteger)highThresholdDataSizeLimit;
-(NSUInteger)lowThresholdDataSizeLimit;
-(NSUInteger)storeVersion;
-(id)_experimentalizedKeysByOriginalKeyForExperimentPostfix:(id)arg0 ;
-(id)_localizedExperimentalizedKeysByOriginalKeyForContentStoreFrontID:(id)arg0 experimentPostfix:(id)arg1 ;
-(id)_localizedKeysByOriginalKeyForContentStoreFrontID:(id)arg0 ;
-(id)cachedRecordsWithIDs:(id)arg0 ;
-(id)convertRecords:(id)arg0 ;
-(id)deleteRecordsWithIDs:(id)arg0 ;
-(id)fetchCoordinator:(id)arg0 fetchOperationForKeys:(id)arg1 context:(id)arg2 qualityOfService:(NSInteger)arg3 relativePriority:(NSInteger)arg4 ;
-(id)fetchOperationForRecordsWithIDs:(id)arg0 ;
-(id)fetchOperationForRecordsWithIDs:(id)arg0 ignoreCacheForRecordIDs:(id)arg1 ;
-(id)init;
-(id)initWithContentDatabase:(id)arg0 contentDirectory:(id)arg1 appActivityMonitor:(id)arg2 backgroundTaskable:(id)arg3 ;
-(id)initWithContentDatabase:(id)arg0 contentDirectory:(id)arg1 appActivityMonitor:(id)arg2 backgroundTaskable:(id)arg3 experimentalizableFieldsPostfix:(id)arg4 activeTreatmentID:(id)arg5 ;
-(id)interestTokenForRecordIDs:(id)arg0 ;
-(id)jsonEncodableObject;
-(id)keyValueRepresentationOfRecord:(id)arg0 ;
-(id)recordFromCKRecord:(id)arg0 base:(id)arg1 ;
-(id)recordIDPrefixes;
-(id)recordType;
-(id)savePBRecords:(id)arg0 ;
-(id)saveRecords:(id)arg0 ;
-(id)storeFilename;
-(int)pbRecordType;
-(void)cacheCoordinator:(id)arg0 flushKeysWithWriteLock:(id)arg1 ;
-(void)enableFlushingWithFlushingThreshold:(NSUInteger)arg0 ;
-(void)fetchCoordinator:(id)arg0 addFetchOperation:(id)arg1 context:(id)arg2 ;
-(void)fetchCoordinator:(id)arg0 filterKeysToFetch:(id)arg1 isFirstAttempt:(BOOL)arg2 context:(id)arg3 ;
-(void)forceRefreshDesiredKeys;
-(void)t_startOverridingExperimentalizableFieldsPostfix:(id)arg0 treatmentID:(id)arg1 ;
-(void)t_stopOverridingExperimentalizableFieldsPostfixAndTreatmentID;
-(void)updateFetchDateForRecordIDs:(id)arg0 ;


@end


#endif