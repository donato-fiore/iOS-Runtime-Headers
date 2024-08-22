// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHMEMORY_H
#define PHMEMORY_H

@class NSString, NSData, NSDictionary, NSDate, NSArray, NSSet;


#import "PHAssetCollection.h"
#import "PHMemoryFeature.h"

@interface PHMemory : PHAssetCollection {
    NSString *_title;
    NSString *_localizedSubtitle;
    NSData *_photosGraphData;
    NSDictionary *_transientMemoryProperties;
    NSDate *_creationDate;
    NSDictionary *_movieAssetState;
    NSInteger _storyColorGradeKind;
    NSString *_storyTitleCategory;
    NSString *_titleFontName;
    NSInteger _syncedPlayCount;
    NSInteger _syncedShareCount;
    NSInteger _syncedViewCount;
    NSInteger _pendingPlayCount;
    NSInteger _pendingShareCount;
    NSInteger _pendingViewCount;
    BOOL _didLoadPhotosGraphProperties;
    NSInteger _titleCategory;
}


@property (readonly, copy, nonatomic) NSString *URLNavigationSourceIdentifier;
@property (readonly, nonatomic) NSData *assetListPredicate; // ivar: _assetListPredicate
@property (readonly, nonatomic) PHMemoryFeature *blacklistedFeature; // ivar: _blacklistedFeature
@property (readonly, nonatomic) NSArray *blockableFeatures;
@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (readonly, nonatomic) CGFloat currentRelevanceScore;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite; // ivar: _favorite
@property (readonly, nonatomic) NSSet *featuredPeopleIdentifiers;
@property (readonly, nonatomic) NSSet *featuredPersonLocalIdentifiers;
@property (readonly, nonatomic) NSInteger featuredState; // ivar: _featuredState
@property (readonly, nonatomic) NSString *graphMemoryIdentifier; // ivar: _graphMemoryIdentifier
@property (readonly, nonatomic) BOOL isBadgeable;
@property (readonly, nonatomic) BOOL isContiguous;
@property (readonly, nonatomic) BOOL isCurrentlyRelevant;
@property (readonly, nonatomic) BOOL isGreat;
@property (readonly, nonatomic) BOOL isMustSee;
@property (readonly, nonatomic) BOOL isStellar;
@property (readonly, nonatomic) NSDate *lastEnrichmentDate; // ivar: _lastEnrichmentDate
@property (readonly, nonatomic) NSDate *lastMoviePlayedDate; // ivar: _lastMoviePlayedDate
@property (readonly, nonatomic) NSDate *lastViewedDate; // ivar: _lastViewedDate
@property (readonly, nonatomic) NSData *movieData; // ivar: _movieData
@property (readonly, nonatomic) NSDictionary *musicGenreDistribution;
@property (readonly, nonatomic) NSUInteger notificationState; // ivar: _notificationState
@property (readonly, nonatomic) unsigned short pendingState; // ivar: _pendingState
@property (readonly, nonatomic) NSDictionary *photosGraphProperties; // ivar: _photosGraphProperties
@property (readonly, nonatomic) NSInteger photosGraphVersion; // ivar: _photosGraphVersion
@property (readonly, nonatomic) NSInteger playCount;
@property (readonly, nonatomic, getter=isPresentedFromURLNavigation) BOOL presentedFromURLNavigation;
@property (readonly, nonatomic, getter=isRejected) BOOL rejected; // ivar: _rejected
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) NSInteger shareCount;
@property (readonly, nonatomic) unsigned short sharingComposition; // ivar: _sharingComposition
@property (readonly, nonatomic) NSInteger storyColorGradeKind;
@property (readonly, nonatomic) NSInteger storyColorGradeKindRaw;
@property (readonly, nonatomic) NSString *storyTitleCategory;
@property (readonly, nonatomic) NSString *storyTitleCategoryRaw;
@property (readonly, nonatomic) NSUInteger subcategory; // ivar: _subcategory
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) unsigned short syndicatedContentState; // ivar: _syndicatedContentState
@property (readonly, nonatomic) NSArray *triggerTypes;
@property (readonly, nonatomic, getter=isUserCreated) BOOL userCreated; // ivar: _userCreated
@property (readonly, nonatomic) NSInteger viewCount;


+(BOOL)isTriggeredMemoryCategory:(NSUInteger)arg0 ;
+(BOOL)managedObjectSupportsPendingState;
+(BOOL)managedObjectSupportsRejectedState;
+(BOOL)managedObjectSupportsSharingComposition;
+(BOOL)managedObjectSupportsTrashedState;
+(Class)propertySetClassForPropertySet:(id)arg0 ;
+(NSUInteger)_contextualScoreForMemory:(id)arg0 ;
+(NSUInteger)propertyFetchHintsForPropertySets:(id)arg0 ;
+(id)_composePropertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)_fetchOptionsForTransientMemoryAssetsWithOptions:(id)arg0 ;
+(id)assetListPredicateFromQueryHintObjects:(id)arg0 ;
+(id)blockedPersonLocalIdentifiersInPhotoLibrary:(id)arg0 ;
+(id)corePropertiesToFetch;
+(id)entityKeyMap;
+(id)fetchBestRecentMemoryWithOptions:(id)arg0 ;
+(id)fetchBlockedMemoriesWithOptions:(id)arg0 ;
+(id)fetchMemoriesWithGraphMemoryIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchMemoriesWithNilLastEnrichmentDateWithOptions:(id)arg0 ;
+(id)fetchMemoriesWithUserFeedbackWithOptions:(id)arg0 ;
+(id)fetchMemoryWithGraphMemoryIdentifier:(id)arg0 options:(id)arg1 ;
+(id)fetchMostRelevantMemoryAtDate:(id)arg0 options:(id)arg1 ;
+(id)fetchMostRelevantMemoryWithOptions:(id)arg0 ;
+(id)fetchPredicateForSharingFilter:(unsigned short)arg0 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg0 options:(id)arg1 ;
+(id)fetchPredicateFromUserCreatedComparisonPredicate:(id)arg0 ;
+(id)fetchType;
+(id)identifierCode;
+(id)managedEntityName;
+(id)memoriesWithBlockedPersonFeatureInPhotoLibrary:(id)arg0 ;
+(id)mostRelevantMemoryInMemories:(id)arg0 atDate:(id)arg1 ;
+(id)movieDataWithTitleFontName:(id)arg0 ;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)propertySetAccessorsByPropertySet;
+(id)propertySetsForPropertyFetchHints:(NSUInteger)arg0 ;
+(id)stringForCategory:(NSUInteger)arg0 ;
+(id)stringForFeaturedState:(NSInteger)arg0 ;
+(id)stringForNotificationState:(NSUInteger)arg0 ;
+(id)stringForSubcategory:(NSUInteger)arg0 ;
+(id)stringForTriggerType:(NSUInteger)arg0 ;
+(id)titleFontNameFromMovieData:(id)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
+(id)transientMemoryWithInfo:(id)arg0 photoLibrary:(id)arg1 ;
+(void)clearCurrentMemoryForURLNavigation;
+(void)generateMemoriesWithOptions:(id)arg0 completion:(id)arg1 ;
+(void)setCurrentMemoryForURLNavigation:(id)arg0 ;
-(BOOL)canContainAssets;
-(BOOL)canPerformEditOperation:(NSInteger)arg0 ;
-(BOOL)canShowAvalancheStacks;
-(BOOL)collectionHasFixedOrder;
-(BOOL)hasBlockableFeature;
-(BOOL)isPending;
-(BOOL)isRelevantAtDate:(id)arg0 ;
-(BOOL)isTransient;
-(CGFloat)_evaluatedDurationWithNumberOfStillPhotos:(NSUInteger)arg0 numberOfLivePhotos:(NSUInteger)arg1 numberOfVideos:(NSUInteger)arg2 options:(id)arg3 ;
-(CGFloat)relevanceScoreAtDate:(id)arg0 ;
-(Class)changeRequestClass;
-(NSInteger)titleCategory;
-(NSUInteger)_fetchNumberOfAssetsWithType:(NSUInteger)arg0 predicate:(id)arg1 ;
-(NSUInteger)_numberOfAssetsWithType:(NSUInteger)arg0 optionsValue:(id)arg1 predicate:(id)arg2 ;
-(NSUInteger)availableCurationLengthsWithOptions:(id)arg0 ;
-(NSUInteger)currentCurationLengthWithOptions:(id)arg0 ;
-(NSUInteger)suggestedMood;
-(NSUInteger)titleFontNameHash;
-(id)_createPropertyObjectOfClass:(Class)arg0 ;
-(id)_createPropertyObjectOfClass:(Class)arg0 preFetchedProperties:(id)arg1 ;
-(id)_curatedAssetIDsWithLibrary:(id)arg0 ;
-(id)_extendedCuratedAssetIDsWithLibrary:(id)arg0 ;
-(id)_predicateForImages;
-(id)_predicateForLivePhotos;
-(id)_predicateForVideos;
-(id)_representativeAndCuratedAssetIDs;
-(id)creationDate;
-(id)curationOfLength:(NSUInteger)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)defaultSortDescriptor;
-(id)description;
-(id)fetchAssetsWithCurationOfLength:(NSUInteger)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)fetchPreviewAssetForLength:(NSUInteger)arg0 targetSize:(struct CGSize )arg1 ;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)localizedSubtitle;
-(id)meaningLabels;
-(id)moodKeywords;
-(id)movieStateDataForAsset:(id)arg0 ;
-(id)predicateForAllAssetsWithLibrary:(id)arg0 ;
-(id)predicateForAllMomentsFromRepresentativeAssets;
-(id)presentationHints;
-(id)query;
-(id)queryForCuratedAssetsWithOptions:(id)arg0 ;
-(id)queryForExtendedCuratedAssetsWithOptions:(id)arg0 ;
-(id)queryForKeyAssetWithOptions:(id)arg0 ;
-(id)rankedPreviewAssetsForLength:(NSUInteger)arg0 targetSize:(struct CGSize )arg1 ;
-(id)rejectionCause;
-(id)titleFontName;
-(id)transientMemoryStartDate;
-(id)transientRepresentativeAndCuratedAssetIDs;
-(id)userFeedbackProperties;
-(void)_loadValuesFromPhotosGraphProperties;
-(void)fetchPropertySetsIfNeeded;
-(void)setupTransientMemory;


@end


#endif