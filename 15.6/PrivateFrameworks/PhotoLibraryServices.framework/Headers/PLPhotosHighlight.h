// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPHOTOSHIGHLIGHT_H
#define PLPHOTOSHIGHLIGHT_H

@class NSSet, NSString, NSDate, NSArray;
@protocol PLPhotosHighlightData, PLMomentAssetData, NSCopying;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"
#import "PLPhotosHighlight.h"

@interface PLPhotosHighlight : PLManagedObject <PLPhotosHighlightData>



@property (retain, nonatomic) NSSet *assets;
@property (nonatomic) int assetsCount;
@property (nonatomic) unsigned short category;
@property (retain, nonatomic) NSSet *childDayGroupPhotosHighlights;
@property (retain, nonatomic) NSSet *childPhotosHighlights;
@property (retain, nonatomic) NSSet *dayGroupAssets;
@property (nonatomic) int dayGroupAssetsCount;
@property (retain, nonatomic) NSSet *dayGroupExtendedAssets;
@property (nonatomic) int dayGroupExtendedAssetsCount;
@property (retain, nonatomic) PLManagedAsset *dayGroupKeyAsset;
@property (retain, nonatomic) NSSet *dayGroupSummaryAssets;
@property (nonatomic) int dayGroupSummaryAssetsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) int endTimeZoneOffset;
@property (nonatomic) unsigned short enrichmentState;
@property (nonatomic) short enrichmentVersion;
@property (retain, nonatomic) NSSet *extendedAssets;
@property (nonatomic) int extendedCount;
@property (readonly, nonatomic) NSObject<PLMomentAssetData> *firstAsset;
@property (readonly) NSUInteger hash;
@property (nonatomic) short highlightVersion;
@property (readonly, nonatomic) BOOL isPromoted;
@property (readonly, nonatomic) BOOL isRecent;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (retain, nonatomic) PLManagedAsset *keyAssetForKind;
@property (nonatomic) unsigned short kind;
@property (readonly, retain, nonatomic) NSDate *localEndDate;
@property (readonly, retain, nonatomic) NSDate *localStartDate;
@property (retain, nonatomic) NSSet *moments;
@property (readonly, retain, nonatomic) NSArray *momentsSortedByTime;
@property (retain, nonatomic) PLManagedAsset *monthFirstAsset;
@property (retain, nonatomic) PLManagedAsset *monthKeyAsset;
@property (nonatomic) NSUInteger mood;
@property (readonly, nonatomic) NSUInteger numberOfAssetsInExtended;
@property (retain, nonatomic) PLPhotosHighlight *parentDayGroupPhotosHighlight;
@property (retain, nonatomic) PLPhotosHighlight *parentPhotosHighlight;
@property (nonatomic) CGFloat promotionScore;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) int startTimeZoneOffset;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSSet *summaryAssets;
@property (nonatomic) int summaryCount;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned short type;
@property (readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *verboseSmartDescription;
@property (nonatomic) unsigned short visibilityState;
@property (retain, nonatomic) PLManagedAsset *yearKeyAsset;


+(id)_kindDescription:(unsigned short)arg0 ;
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
+(id)predicateForAllAssetsInPhotosHighlight:(id)arg0 ;
+(id)predicateForEmptyHighlightsOfKind:(unsigned short)arg0 ;
+(id)predicateForInvalidDayGroupHighlights;
+(id)predicateForInvalidDayHighlights;
+(id)predicateForInvalidHighlightsOfAllKinds;
+(id)predicateForInvalidMonthOrYearHighlights;
+(id)sortByTimeSortDescriptors;
-(BOOL)supportsDiagnosticInformation;
-(id)assetUUIDsForPreviewWithCount:(NSUInteger)arg0 ;
-(id)bestAsset;
-(id)diagnosticInformation;
-(int)searchAssetsCountForKind;
-(void)_appendBusinessCategories:(id)arg0 toCollection:(id)arg1 ;
-(void)_appendBusinessNames:(id)arg0 toCollection:(id)arg1 ;
-(void)_appendDates:(id)arg0 withDateFormatter:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3 ;
-(void)_appendHolidays:(id)arg0 toCollection:(id)arg1 ;
-(void)_appendHomeToCollection:(id)arg0 ;
-(void)_appendLocationsInfo:(id)arg0 toCollection:(id)arg1 ;
-(void)_appendMeanings:(id)arg0 withSynonyms:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendPOIs:(id)arg0 withSynonyms:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendPersonsWithUUIDs:(id)arg0 toCollection:(id)arg1 ;
-(void)_appendPublicEventCategories:(id)arg0 withSynonyms:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendPublicEventStrings:(id)arg0 toCollection:(id)arg1 forSearchIndexCategory:(NSUInteger)arg2 ;
-(void)_appendROIs:(id)arg0 withSynonyms:(id)arg1 toCollection:(id)arg2 ;
-(void)_appendScenesWithIdentifiers:(id)arg0 toCollection:(id)arg1 sceneTaxonomy:(id)arg2 ;
-(void)_appendSocialGroupIdentifiers:(id)arg0 toCollection:(id)arg1 ;
-(void)_appendWorkText:(id)arg0 toCollection:(id)arg1 ;
-(void)awakeFromInsert;
-(void)bumpHighlightVersion;
-(void)delete;
-(void)getSearchIndexContentsForCollection:(id)arg0 fromDictionary:(id)arg1 withDateFormatter:(id)arg2 synonymsDictionaries:(id)arg3 sceneTaxonomy:(id)arg4 ;
-(void)refreshAssets;
-(void)refreshCuratedAssetsForCurationType:(unsigned short)arg0 ;
-(void)removeAssetData:(id)arg0 ;
-(void)willSave;


@end


#endif