// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPHOTOSHIGHLIGHT_H
#define PLPHOTOSHIGHLIGHT_H

@class NSSet, NSString, NSDate, NSArray;
@protocol PLPhotosHighlightData, NSCopying;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"
#import "PLPhotosHighlight.h"

@interface PLPhotosHighlight : PLManagedObject <PLPhotosHighlightData>

 {
    BOOL _waitingForSharedAssetContainerRecalc;
}


@property (retain, nonatomic) NSSet *assets;
@property (nonatomic) int assetsCount;
@property (readonly, nonatomic) int assetsCountPrivate;
@property (nonatomic) int assetsCountShared;
@property (readonly, retain, nonatomic) NSSet *assetsPrivate;
@property (readonly, retain, nonatomic) NSSet *assetsShared;
@property (nonatomic) unsigned short category;
@property (retain, nonatomic) NSSet *childDayGroupPhotosHighlights;
@property (retain, nonatomic) NSSet *childPhotosHighlights;
@property (retain, nonatomic) NSSet *dayGroupAssets;
@property (nonatomic) int dayGroupAssetsCount;
@property (readonly, nonatomic) int dayGroupAssetsCountPrivate;
@property (nonatomic) int dayGroupAssetsCountShared;
@property (readonly, retain, nonatomic) NSSet *dayGroupAssetsPrivate;
@property (readonly, retain, nonatomic) NSSet *dayGroupAssetsShared;
@property (retain, nonatomic) NSSet *dayGroupExtendedAssets;
@property (nonatomic) int dayGroupExtendedAssetsCount;
@property (readonly, nonatomic) int dayGroupExtendedAssetsCountPrivate;
@property (nonatomic) int dayGroupExtendedAssetsCountShared;
@property (readonly, retain, nonatomic) NSSet *dayGroupExtendedAssetsPrivate;
@property (readonly, retain, nonatomic) NSSet *dayGroupExtendedAssetsShared;
@property (retain, nonatomic) PLManagedAsset *dayGroupKeyAssetPrivate;
@property (retain, nonatomic) PLManagedAsset *dayGroupKeyAssetShared;
@property (retain, nonatomic) NSSet *dayGroupSummaryAssets;
@property (nonatomic) int dayGroupSummaryAssetsCount;
@property (readonly, nonatomic) int dayGroupSummaryAssetsCountPrivate;
@property (nonatomic) int dayGroupSummaryAssetsCountShared;
@property (readonly, retain, nonatomic) NSSet *dayGroupSummaryAssetsPrivate;
@property (readonly, retain, nonatomic) NSSet *dayGroupSummaryAssetsShared;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) int endTimeZoneOffset;
@property (nonatomic) unsigned short enrichmentState;
@property (nonatomic) short enrichmentVersion;
@property (retain, nonatomic) NSSet *extendedAssets;
@property (readonly, retain, nonatomic) NSSet *extendedAssetsPrivate;
@property (readonly, retain, nonatomic) NSSet *extendedAssetsShared;
@property (nonatomic) int extendedCount;
@property (readonly, nonatomic) int extendedCountPrivate;
@property (nonatomic) int extendedCountShared;
@property (readonly) NSUInteger hash;
@property (nonatomic) short highlightVersion;
@property (readonly, nonatomic) BOOL isRecent;
@property (retain, nonatomic) PLManagedAsset *keyAssetForKindPrivate;
@property (retain, nonatomic) PLManagedAsset *keyAssetForKindShared;
@property (retain, nonatomic) PLManagedAsset *keyAssetPrivate;
@property (retain, nonatomic) PLManagedAsset *keyAssetShared;
@property (nonatomic) unsigned short kind;
@property (readonly, retain, nonatomic) NSDate *localEndDate;
@property (readonly, retain, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) BOOL missingKeyAssetForKindPrivate;
@property (readonly, nonatomic) BOOL missingKeyAssetForKindShared;
@property (nonatomic) unsigned short mixedSharingCompositionKeyAssetRelationship;
@property (retain, nonatomic) NSSet *moments;
@property (readonly, retain, nonatomic) NSArray *momentsSortedByTime;
@property (retain, nonatomic) PLManagedAsset *monthKeyAssetPrivate;
@property (retain, nonatomic) PLManagedAsset *monthKeyAssetShared;
@property (nonatomic) NSUInteger mood;
@property (retain, nonatomic) PLPhotosHighlight *parentDayGroupPhotosHighlight;
@property (retain, nonatomic) PLPhotosHighlight *parentPhotosHighlight;
@property (readonly, nonatomic) int photoAssetsSuggestedByPhotosCount;
@property (nonatomic) CGFloat promotionScore;
@property (nonatomic) short searchIndexRebuildState;
@property (readonly, nonatomic) short sharingComposition;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) int startTimeZoneOffset;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *subtitleMixed;
@property (retain, nonatomic) NSString *subtitleShared;
@property (retain, nonatomic) NSSet *summaryAssets;
@property (readonly, retain, nonatomic) NSSet *summaryAssetsPrivate;
@property (readonly, retain, nonatomic) NSSet *summaryAssetsShared;
@property (nonatomic) int summaryCount;
@property (readonly, nonatomic) int summaryCountPrivate;
@property (nonatomic) int summaryCountShared;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *titleMixed;
@property (retain, nonatomic) NSString *titleShared;
@property (nonatomic) unsigned short type;
@property (readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *verboseSmartDescription;
@property (retain, nonatomic) NSString *verboseSmartDescriptionMixed;
@property (retain, nonatomic) NSString *verboseSmartDescriptionShared;
@property (readonly, nonatomic) int videoAssetsSuggestedByPhotosCount;
@property (nonatomic) unsigned short visibilityState;
@property (nonatomic) unsigned short visibilityStateMixed;
@property (nonatomic) unsigned short visibilityStateShared;
@property (retain, nonatomic) PLManagedAsset *yearKeyAssetPrivate;
@property (retain, nonatomic) PLManagedAsset *yearKeyAssetShared;


+(id)_kindDescription:(unsigned short)arg0 ;
+(id)_libraryScopePredicateForSharingConsideration:(NSInteger)arg0 ;
+(id)_predicateForHighlightsOfKind:(unsigned short)arg0 ;
+(id)allPhotosHighlightsInManagedObjectContext:(id)arg0 predicate:(id)arg1 keyPathsForPrefetching:(id)arg2 error:(*id)arg3 ;
+(id)allowedPropertiesForMomentList;
+(id)baseSearchIndexPredicate;
+(id)batchFetchPhotosHighlightUUIDsByAssetUUIDsWithAssetUUIDs:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
+(id)batchFetchPhotosHighlightUUIDsByMomentUUIDsWithMomentUUIDs:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
+(id)defaultPropertiesToFetchForMomentList;
+(id)entityName;
+(id)fetchRequest;
+(id)insertIntoPhotoLibrary:(id)arg0 withUUID:(id)arg1 title:(id)arg2 ;
+(id)insertNewPhotosHighlightInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)isEligibleForSearchIndexingPredicate;
+(id)needsSearchIndexingForRebuildPredicate;
+(id)predicateForAllAssetsInPhotosHighlight:(id)arg0 ;
+(id)predicateForAllTripHighlights;
+(id)predicateForEmptyHighlightsOfKind:(unsigned short)arg0 ;
+(id)predicateForInvalidDayGroupHighlights;
+(id)predicateForInvalidDayHighlights;
+(id)predicateForInvalidHighlightsOfAllKinds;
+(id)predicateForInvalidMonthOrYearHighlights;
+(id)sortByTimeSortDescriptors;
+(short)calculateSharingCompositionForPhotosHighlight:(id)arg0 ;
-(BOOL)_isGoldilocksEnabled;
-(BOOL)isEligibleForSearchIndexing;
-(BOOL)supportsDiagnosticInformation;
-(NSUInteger)numberOfAssetsInExtendedForSharingConsideration:(NSInteger)arg0 ;
-(NSUInteger)searchAssetsCountPrivate;
-(NSUInteger)searchAssetsCountShared;
-(id)diagnosticInformation;
-(int)_cachedAssetCountForCountKey:(id)arg0 collectionKey:(id)arg1 isShared:(BOOL)arg2 ;
-(int)_cachedSharedAssetContainerValueWithRecalcIfNeededForKey:(id)arg0 ;
-(void)_appendBusinessCategories:(id)arg0 toCollection:(id)arg1 ;
-(void)_appendBusinessNames:(id)arg0 toCollection:(id)arg1 ;
-(void)_appendDates:(id)arg0 withDateFormatter:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(void)_appendHolidays:(id)arg0 toCollection:(id)arg1 ;
-(void)_appendHomeToCollection:(id)arg0 ;
-(void)_appendLibraryScopeToCollection:(id)arg0 ;
-(void)_appendLocationsInfo:(id)arg0 toCollection:(id)arg1 ;
-(void)_appendMeanings:(id)arg0 withSynonyms:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendPOIs:(id)arg0 withSynonyms:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendPersonsWithUUIDs:(id)arg0 toCollection:(id)arg1 ;
-(void)_appendPublicEventCategories:(id)arg0 withSynonyms:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendPublicEventStrings:(id)arg0 toCollection:(id)arg1 forSearchIndexCategory:(NSUInteger)arg2 ;
-(void)_appendROIs:(id)arg0 withSynonyms:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendScenesWithIdentifiers:(id)arg0 toCollection:(id)arg1 sceneTaxonomyProvider:(id)arg2 ;
-(void)_appendSocialGroupIdentifiers:(id)arg0 toCollection:(id)arg1 ;
-(void)_appendWorkText:(id)arg0 toCollection:(id)arg1 ;
-(void)_notifyChildPhotoOrVideoAssetsSuggestedByPhotosCountDidChangeFrom:(int)arg0 to:(int)arg1 forKeyPath:(id)arg2 ;
-(void)_notifyChildSharingCompositionDidChangeFrom:(short)arg0 to:(short)arg1 ;
-(void)addSearchIndexContentsToCollection:(id)arg0 fromDictionary:(id)arg1 withDateFormatter:(id)arg2 synonymsDictionaries:(id)arg3 sceneTaxonomyProvider:(id)arg4 ;
-(void)awakeFromInsert;
-(void)bumpHighlightVersion;
-(void)delete;
-(void)recalculateSharedAssetContainerCachedValues;
-(void)removeAssetData:(id)arg0 ;
-(void)reportSharedAssetContainerIncrementalChange:(id)arg0 forAllAssetsCountKey:(id)arg1 ;
-(void)willSave;


@end


#endif