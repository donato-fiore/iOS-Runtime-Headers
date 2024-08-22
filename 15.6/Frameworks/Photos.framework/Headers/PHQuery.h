// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHQUERY_H
#define PHQUERY_H

@class NSPredicate, NSFetchRequest, NSRelationshipDescription, NSManagedObjectID, NSString, NSMutableSet, NSMutableDictionary, NSSet, NSDictionary, NSArray;
@protocol NSPredicateVisitor, NSCopying;

#import <Foundation/Foundation.h>

#import "PHCollection.h"
#import "PHFetchOptions.h"
#import "PHPhotoLibrary.h"

@interface PHQuery : NSObject <NSPredicateVisitor, NSCopying>

 {
    NSPredicate *_cachedFetchOptionsPredicate;
    NSPredicate *_filterPredicate;
    NSFetchRequest *_fetchRequest;
    NSInteger _collectionFetchType;
    BOOL _preparedContainerInfo;
    NSRelationshipDescription *_containerRelationship;
    NSManagedObjectID *_containerIdentifier;
    PHCollection *_containerCollection;
    BOOL _preparedCombinedQueryKeys;
    id *_combinedQueryGroupKey;
    NSString *_combinedQueryKeyPath;
    NSManagedObjectID *_combinedQuerySeparatingIdentifier;
    BOOL _preparedFilteringAttributes;
    NSMutableSet *_filteringKeys;
    NSUInteger _filteringAttributesIndexValue;
    NSUInteger _filteringRelationshipsIndexValue;
    NSUInteger _objectToContainerRelationshipIndexValue;
    NSUInteger _containerToObjectRelationshipIndexValue;
    NSUInteger _containerSortingAttributesIndexValue;
    NSUInteger _containerUserQueryIndexValue;
    NSMutableSet *_filteringOids;
    NSMutableSet *_filteringObjectKeyPaths;
    NSMutableDictionary *_filteringRelationshipsIndexValueByBaseEntityName;
    id *_identificationBlock;
}


@property (nonatomic, setter=_setIncludesCameraRoll:) BOOL _includesCameraRoll; // ivar: __includesCameraRoll
@property (readonly) NSPredicate *basePredicate; // ivar: _basePredicate
@property (readonly) id *combinedQueryGroupKey;
@property (readonly) NSString *combinedQueryKeyPath;
@property (readonly) NSManagedObjectID *combinedQuerySeparatingIdentifier;
@property (readonly, nonatomic) NSRelationshipDescription *containerRelationship;
@property (copy, nonatomic) PHFetchOptions *fetchOptions; // ivar: _fetchOptions
@property (readonly) NSFetchRequest *fetchRequest;
@property (readonly) NSString *fetchType; // ivar: _fetchType
@property (readonly) NSPredicate *filterPredicate;
@property (readonly, nonatomic) NSSet *filteringOids;
@property (readonly, nonatomic) NSDictionary *filteringRelationshipsIndexValueByBaseEntityName;
@property (readonly) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain) NSArray *propertiesToFetchWhenGrouping; // ivar: _propertiesToFetchWhenGrouping
@property (retain) NSArray *propertiesToGroupBy; // ivar: _propertiesToGroupBy
@property (readonly) NSArray *seedOIDs; // ivar: _seedOIDs
@property (readonly, nonatomic) NSString *shortDescription;


+(BOOL)_isKindOfMomentOrAlbumEntity:(id)arg0 ;
+(BOOL)_validateLocalIdentifiers:(id)arg0 compatibilityWithFetchType:(id)arg1 ;
+(id)_containerIdentifierForFetchType:(id)arg0 predicate:(id)arg1 outRelationship:(*id)arg2 ;
+(id)_defaultFetchOptionsForIdentifiedAssetsQueryInPhotoLibrary:(id)arg0 ;
+(id)_fetchOptionsForFetchingAssetsFromAssetCollection:(id)arg0 options:(id)arg1 changeDetectionCriteria:(id)arg2 ;
+(id)_fetchOptionsForFetchingAssetsFromImportSessions:(id)arg0 options:(id)arg1 ;
+(id)_fetchTypeForLocalIdentifiers:(id)arg0 ;
+(id)_filterPredicateFromFetchOptionsPredicate:(id)arg0 options:(id)arg1 phClass:(Class)arg2 ;
+(id)_guestAssetOnlyPredicate;
+(id)_queryForAssetsWithIdentifiers:(id)arg0 local:(BOOL)arg1 options:(id)arg2 ;
+(id)_queryForPersonsInAssetsWithObjectIDs:(id)arg0 withOptions:(id)arg1 ;
+(id)_queryForPersonsWithFaceRelationshipPredicate:(id)arg0 options:(id)arg1 ;
+(id)_queryForRootCollectionListWithRootFolder:(id)arg0 options:(id)arg1 ;
+(id)_relationshipForFetchType:(id)arg0 predicate:(id)arg1 ;
+(id)_transformedSortDescriptors:(id)arg0 forFetchType:(id)arg1 ;
+(id)combinedFetchRequestForQueries:(id)arg0 ;
+(id)defaultSortDescriptorForFetchType:(id)arg0 predicate:(id)arg1 ;
+(id)fetchRootFolderIDForAlbumKind:(int)arg0 photoLibrary:(id)arg1 ;
+(id)identificationBlockForAlbumSortKey:(SEL)arg0 ;
+(id)identificationBlockForSmartAlbumKind:(SEL)arg0 ;
+(id)queryForAllAssetsAssociatedWithMemory:(id)arg0 options:(id)arg1 ;
+(id)queryForAllAssetsInYearRepresentedByYearHighlight:(id)arg0 options:(id)arg1 ;
+(id)queryForAnsweredQuestionsWithOptions:(id)arg0 ;
+(id)queryForAnsweredYesOrNoQuestionsWithOptions:(id)arg0 ;
+(id)queryForAssetCollectionsContainingAsset:(id)arg0 withType:(NSInteger)arg1 options:(id)arg2 ;
+(id)queryForAssetCollectionsContainingAssets:(id)arg0 withType:(NSInteger)arg1 options:(id)arg2 ;
+(id)queryForAssetCollectionsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForAssetCollectionsWithObjectIDs:(id)arg0 options:(id)arg1 ;
+(id)queryForAssetCollectionsWithType:(NSInteger)arg0 localIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetCollectionsWithType:(NSInteger)arg0 subtype:(NSInteger)arg1 options:(id)arg2 ;
+(id)queryForAssetsAllowedForSceneProcessingWithOptions:(id)arg0 ;
+(id)queryForAssetsForBehavioralCurationWithOptions:(id)arg0 ;
+(id)queryForAssetsForFaceGroups:(id)arg0 options:(id)arg1 ;
+(id)queryForAssetsForFaces:(id)arg0 options:(id)arg1 ;
+(id)queryForAssetsForKeywords:(id)arg0 options:(id)arg1 ;
+(id)queryForAssetsForPersons:(id)arg0 options:(id)arg1 ;
+(id)queryForAssetsFromCameraSinceDate:(id)arg0 options:(id)arg1 ;
+(id)queryForAssetsInAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)queryForAssetsInBoundingBoxWithTopLeftLocation:(id)arg0 bottomRightLocation:(id)arg1 options:(id)arg2 ;
+(id)queryForAssetsInImportSessions:(id)arg0 options:(id)arg1 ;
+(id)queryForAssetsNeedingSceneProcessingWithOptions:(id)arg0 ;
+(id)queryForAssetsWithBurstIdentifier:(id)arg0 options:(id)arg1 ;
+(id)queryForAssetsWithCloudIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForAssetsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForAssetsWithMediaType:(NSInteger)arg0 options:(id)arg1 ;
+(id)queryForAssetsWithObjectIDs:(id)arg0 options:(id)arg1 ;
+(id)queryForAssetsWithOptions:(id)arg0 ;
+(id)queryForAssetsWithUUIDs:(id)arg0 options:(id)arg1 ;
+(id)queryForAssociatedPersonForFaceGroup:(id)arg0 withOptions:(id)arg1 ;
+(id)queryForChildrenDayGroupHighlightsForPhotosHighlight:(id)arg0 options:(id)arg1 ;
+(id)queryForChildrenHighlightsForPhotosHighlight:(id)arg0 options:(id)arg1 ;
+(id)queryForCollectionListContainingCollection:(id)arg0 options:(id)arg1 ;
+(id)queryForCollectionListsWithType:(NSInteger)arg0 localIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)queryForCollectionListsWithType:(NSInteger)arg0 subtype:(NSInteger)arg1 options:(id)arg2 ;
+(id)queryForCollectionsInCollectionList:(id)arg0 options:(id)arg1 ;
+(id)queryForContributorForAsset:(id)arg0 options:(id)arg1 ;
+(id)queryForCuratedAssetsInMemory:(id)arg0 options:(id)arg1 ;
+(id)queryForCuratedAssetsInMomentShare:(id)arg0 options:(id)arg1 ;
+(id)queryForCuratedAssetsInPhotosHighlight:(id)arg0 options:(id)arg1 ;
+(id)queryForCustomKeyAssetsInAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)queryForEmptyFaceGroupsWithOptions:(id)arg0 ;
+(id)queryForExtendedCuratedAssetsInMemory:(id)arg0 options:(id)arg1 ;
+(id)queryForFaceCropsForPerson:(id)arg0 options:(id)arg1 ;
+(id)queryForFaceCropsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForFaceCropsWithOptions:(id)arg0 ;
+(id)queryForFaceGroupsForPerson:(id)arg0 options:(id)arg1 ;
+(id)queryForFaceGroupsWithFace:(id)arg0 options:(id)arg1 ;
+(id)queryForFaceGroupsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForFaceGroupsWithOptions:(id)arg0 ;
+(id)queryForFacesForPerson:(id)arg0 options:(id)arg1 ;
+(id)queryForFacesInAsset:(id)arg0 options:(id)arg1 ;
+(id)queryForFacesInAssets:(id)arg0 options:(id)arg1 ;
+(id)queryForFacesInFaceGroup:(id)arg0 options:(id)arg1 ;
+(id)queryForFacesOnAssetWithFace:(id)arg0 options:(id)arg1 ;
+(id)queryForFacesOnFaceCrop:(id)arg0 options:(id)arg1 ;
+(id)queryForFacesWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForFacesWithOptions:(id)arg0 ;
+(id)queryForGuestAssetsInCollectionContainingAsset:(id)arg0 options:(id)arg1 ;
+(id)queryForGuestAssetsWithOptions:(id)arg0 ;
+(id)queryForImportSessionsWithOptions:(id)arg0 ;
+(id)queryForInvalidMergeCandidatePersonsForPerson:(id)arg0 options:(id)arg1 ;
+(id)queryForKeyAssetInMemory:(id)arg0 options:(id)arg1 ;
+(id)queryForKeyAssetInPhotosHighlight:(id)arg0 options:(id)arg1 ;
+(id)queryForKeyAssetInPhotosHighlightWithLocalIdentifier:(id)arg0 options:(id)arg1 ;
+(id)queryForKeyAssetsInAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)queryForKeyAssetsInMomentShare:(id)arg0 options:(id)arg1 ;
+(id)queryForKeyAssetsInSuggestion:(id)arg0 options:(id)arg1 ;
+(id)queryForKeyFaceForFaceGroup:(id)arg0 options:(id)arg1 ;
+(id)queryForKeyFaceOnPerson:(id)arg0 options:(id)arg1 ;
+(id)queryForKeywordsForAsset:(id)arg0 options:(id)arg1 ;
+(id)queryForKeywordsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForKeywordsWithOptions:(id)arg0 ;
+(id)queryForKeywordsWithTitles:(id)arg0 options:(id)arg1 ;
+(id)queryForMergeCandidatePersonsForPerson:(id)arg0 options:(id)arg1 ;
+(id)queryForMomentListsWithSubType:(NSInteger)arg0 containingMoment:(id)arg1 ;
+(id)queryForMomentListsWithSubType:(NSInteger)arg0 options:(id)arg1 ;
+(id)queryForMomentsBackingMemory:(id)arg0 ;
+(id)queryForMomentsBackingSuggestion:(id)arg0 ;
+(id)queryForMomentsContainingAssetsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForMomentsContainingAssetsWithOIDs:(id)arg0 options:(id)arg1 ;
+(id)queryForMomentsForFacesWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForMomentsForPersonsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForMomentsInMomentList:(id)arg0 options:(id)arg1 ;
+(id)queryForMomentsInPhotosHighlight:(id)arg0 ;
+(id)queryForMomentsWithOptions:(id)arg0 ;
+(id)queryForMovieCuratedAssetsInMemory:(id)arg0 options:(id)arg1 ;
+(id)queryForParentDayGroupHighlightForPhotosHighlight:(id)arg0 options:(id)arg1 ;
+(id)queryForParentHighlightForPhotosHighlight:(id)arg0 options:(id)arg1 ;
+(id)queryForParentHighlightsForPhotosHighlights:(id)arg0 options:(id)arg1 ;
+(id)queryForPersonsInAsset:(id)arg0 options:(id)arg1 ;
+(id)queryForPersonsInAssets:(id)arg0 withOptions:(id)arg1 ;
+(id)queryForPersonsWithContactIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForPersonsWithFace:(id)arg0 options:(id)arg1 ;
+(id)queryForPersonsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForPersonsWithNonNilUserFeedbackWithOptions:(id)arg0 ;
+(id)queryForPersonsWithOptions:(id)arg0 ;
+(id)queryForPersonsWithQuestionType:(unsigned short)arg0 options:(id)arg1 ;
+(id)queryForPersonsWithType:(NSInteger)arg0 options:(id)arg1 ;
+(id)queryForPhotosHighlightsContainingMoments:(id)arg0 ;
+(id)queryForProjectsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForQuestionsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForQuestionsWithOptions:(id)arg0 ;
+(id)queryForQuestionsWithState:(unsigned short)arg0 options:(id)arg1 ;
+(id)queryForReferencedAssetsWithOptions:(id)arg0 ;
+(id)queryForRejectedFacesOnPerson:(id)arg0 options:(id)arg1 ;
+(id)queryForRejectedPersonsForFace:(id)arg0 options:(id)arg1 ;
+(id)queryForRepresentativeAssetsInMemory:(id)arg0 options:(id)arg1 ;
+(id)queryForRepresentativeAssetsInSuggestion:(id)arg0 options:(id)arg1 ;
+(id)queryForRootAlbumCollectionListWithOptions:(id)arg0 ;
+(id)queryForRootProjectCollectionListWithOptions:(id)arg0 ;
+(id)queryForShareParticipantsInShare:(id)arg0 options:(id)arg1 ;
+(id)queryForShareParticipantsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)queryForSingletonFacesWithOptions:(id)arg0 ;
+(id)queryForSuggestionsWithOptions:(id)arg0 ;
+(id)queryForSuggestionsWithState:(unsigned short)arg0 options:(id)arg1 ;
+(id)queryForSuggestionsWithState:(unsigned short)arg0 type:(unsigned short)arg1 options:(id)arg2 ;
+(id)queryForTopLevelCollectionsMatchingPredicate:(id)arg0 options:(id)arg1 ;
+(id)queryForTopLevelUserCollectionsWithOptions:(id)arg0 ;
+(id)queryForType:(id)arg0 withBasePredicate:(id)arg1 inLibrary:(id)arg2 ;
+(id)queryForType:(id)arg0 withBasePredicate:(id)arg1 seedOIDs:(id)arg2 inLibrary:(id)arg3 ;
+(id)queryForType:(id)arg0 withIdentifiers:(id)arg1 identiferKeyPath:(id)arg2 options:(id)arg3 ;
+(id)queryForType:(id)arg0 withIdentifiers:(id)arg1 local:(BOOL)arg2 options:(id)arg3 ;
+(id)queryForUserCuratedAssetsInMemory:(id)arg0 options:(id)arg1 ;
-(BOOL)_isAlbumContentSort;
-(BOOL)_isAlbumContentTitleSort;
-(BOOL)_isUserSmartAlbum;
-(BOOL)overrideResultClassWithFetchType;
-(NSInteger)collectionFetchType;
-(NSUInteger)containerSortingAttributesIndexValue;
-(NSUInteger)containerToObjectRelationshipIndexValue;
-(NSUInteger)containerUserQueryIndexValue;
-(NSUInteger)filteringAttributesIndexValue;
-(NSUInteger)filteringRelationshipsIndexValue;
-(NSUInteger)objectToContainerRelationshipIndexValue;
-(id)_createFetchRequestIncludingBasePredicate:(BOOL)arg0 ;
-(id)_effectiveDefaultSortDescriptor;
-(id)_effectiveSortDescriptors;
-(id)_globalPredicatesForPHClass:(Class)arg0 ;
-(id)_substitutedChangeTrackingKeyPathFromKeyPath:(id)arg0 ;
-(id)containerIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)effectivePredicateForPHClass:(Class)arg0 request:(id)arg1 includingBasePredicate:(BOOL)arg2 ;
-(id)executeQuery;
-(id)initForType:(id)arg0 withBasePredicate:(id)arg1 inLibrary:(id)arg2 ;
-(id)initForType:(id)arg0 withBasePredicate:(id)arg1 seedOIDs:(id)arg2 inLibrary:(id)arg3 ;
-(id)updatedQueryWithChange:(id)arg0 ;
-(void)_prepareCombinedQueryKeys;
-(void)_prepareContainerInfo;
-(void)_prepareFilteringAttributes;
-(void)_setCollectionFetchType:(NSInteger)arg0 ;
-(void)_setContainerCollection:(id)arg0 ;
-(void)_setIdentificationBlock:(id)arg0 ;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif