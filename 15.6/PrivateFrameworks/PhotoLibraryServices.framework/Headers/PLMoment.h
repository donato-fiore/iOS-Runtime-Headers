// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMOMENT_H
#define PLMOMENT_H

@class CLLocation, NSSet, NSArray, NSString, NSDate;
@protocol PLMomentData, PLDiagnosticsProvider, PLPhotosHighlightData, NSCopying;


#import "PLManagedObject.h"

@interface PLMoment : PLManagedObject <PLMomentData, PLDiagnosticsProvider>

 {
    BOOL _loadedNameInfo;
    CLLocation *_cachedApproximateLocation;
    BOOL _didCacheApproximateLocation;
    CLLocationCoordinate2D _cachedCoordinate;
    BOOL _didCacheCoordinate;
}


@property (nonatomic) float aggregationScore;
@property (nonatomic) CGFloat approximateLatitude;
@property (retain, nonatomic) CLLocation *approximateLocation;
@property (nonatomic) CGFloat approximateLongitude;
@property (retain, nonatomic) NSSet *assets;
@property (readonly, retain, nonatomic) NSArray *batchedAssets;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRegisteredWithUserInterfaceContext; // ivar: didRegisteredWithUserInterfaceContext
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) CGFloat gpsHorizontalAccuracy;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PLPhotosHighlightData> *highlight;
@property (nonatomic) BOOL isRegisteredForChanges; // ivar: isRegisteredForChanges
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (retain, nonatomic) NSDate *modificationDate;
@property (nonatomic) short originatorState;
@property (readonly, nonatomic) CLLocationCoordinate2D pl_coordinate;
@property (readonly, nonatomic) NSDate *pl_endDate;
@property (readonly, nonatomic) CLLocation *pl_location;
@property (readonly, nonatomic) NSUInteger pl_numberOfAssets;
@property (readonly, nonatomic) short pl_originatorState;
@property (readonly, nonatomic) NSDate *pl_startDate;
@property (nonatomic) unsigned short processedLocation;
@property (retain, nonatomic) NSDate *representativeDate;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic) int timeZoneOffset;
@property (retain, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property (retain, nonatomic) NSString *uuid;


+(id)allAssetsInManagedObjectContext:(id)arg0 predicate:(id)arg1 IDsOnly:(BOOL)arg2 error:(*id)arg3 ;
+(id)allAssetsIncludedInMomentsInLibrary:(id)arg0 ;
+(id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg0 IDsOnly:(BOOL)arg1 error:(*id)arg2 ;
+(id)allInvalidAssetsInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)allInvalidMomentIDsInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)allInvalidMomentsInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)allMomentIDsInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)allMomentsInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)allMomentsInManagedObjectContext:(id)arg0 predicate:(id)arg1 idsOnly:(BOOL)arg2 error:(*id)arg3 ;
+(id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)baseSearchIndexPredicate;
+(id)batchFetchMomentObjectIDsByAssetObjectIDsWithAssetObjectIDs:(id)arg0 andAssetPredicate:(id)arg1 inManagedObjectContext:(id)arg2 error:(*id)arg3 ;
+(id)batchFetchMomentObjectIDsByAssetObjectIDsWithAssetObjectIDs:(id)arg0 inManagedObjectContext:(id)arg1 error:(*id)arg2 ;
+(id)entityName;
+(id)insertNewMomentInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)invalidAssetsIgnoringAssetIdentifiers:(id)arg0 inManagedObjectContext:(id)arg1 error:(*id)arg2 ;
+(id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)momentsWithLocationTypeUnprocessedInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(id)predicateForAssetsIncludedInMoments;
+(id)predicateForInvalidAssets;
+(id)predicateForInvalidAssetsIgnoringAssetsWithIdentifiers:(id)arg0 ;
+(id)predicateForInvalidMoments;
+(id)sortByTimeSortDescriptors;
+(void)batchFetchMomentUUIDsByAssetUUIDsWithAssetUUIDs:(id)arg0 library:(id)arg1 completion:(id)arg2 ;
-(BOOL)isCloudSharedAlbum;
-(BOOL)supportsDiagnosticInformation;
-(NSUInteger)countForAssetsOfKind:(short)arg0 ;
-(NSUInteger)fetchedAssetsCount;
-(id)assetUUIDsForPreviewWithCount:(NSUInteger)arg0 ;
-(id)bestAsset;
-(id)diagnosticInformation;
-(id)displayTitleWithDateFormatter:(id)arg0 ;
-(id)groupURL;
-(id)mutableAssets;
-(struct CGImage *)posterImage;
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
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)dealloc;
-(void)delete;
-(void)didTurnIntoFault;
-(void)getSearchIndexContentsForCollection:(id)arg0 fromDictionary:(id)arg1 withDateFormatter:(id)arg2 synonymsDictionaries:(id)arg3 sceneTaxonomy:(id)arg4 ;
-(void)insertAssetData:(id)arg0 ;
-(void)registerForChanges;
-(void)removeAssetData:(id)arg0 ;
-(void)removeAssetsObject:(id)arg0 ;
-(void)replaceObjectInAssets:(id)arg0 withObject:(id)arg1 ;
-(void)unregisterForChanges;
-(void)willSave;
-(void)willTurnIntoFault;


@end


#endif