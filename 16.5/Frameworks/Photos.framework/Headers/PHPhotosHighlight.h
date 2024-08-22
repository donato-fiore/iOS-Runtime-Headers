// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHPHOTOSHIGHLIGHT_H
#define PHPHOTOSHIGHLIGHT_H

@class NSString, NSManagedObjectID, NSDate;


#import "PHAssetCollection.h"

@interface PHPhotosHighlight : PHAssetCollection {
    NSUInteger _assetsCount;
}


@property (readonly, nonatomic) NSUInteger assetsCount;
@property (readonly, nonatomic) NSUInteger assetsCountMixed;
@property (readonly, nonatomic) NSUInteger assetsCountPrivate;
@property (readonly, nonatomic) NSUInteger assetsCountShared; // ivar: _assetsCountShared
@property (readonly, nonatomic) unsigned short category; // ivar: _category
@property (readonly, nonatomic) NSString *dateDescription;
@property (readonly, nonatomic) NSString *dateDescriptionMixed; // ivar: _dateDescriptionMixed
@property (readonly, nonatomic) NSString *dateDescriptionPrivate;
@property (readonly, nonatomic) NSString *dateDescriptionShared; // ivar: _dateDescriptionShared
@property (readonly, nonatomic) NSUInteger dayGroupAssetsCount; // ivar: _dayGroupAssetsCount
@property (readonly, nonatomic) NSUInteger dayGroupAssetsCountMixed;
@property (readonly, nonatomic) NSUInteger dayGroupAssetsCountPrivate;
@property (readonly, nonatomic) NSUInteger dayGroupAssetsCountShared; // ivar: _dayGroupAssetsCountShared
@property (readonly, nonatomic) NSUInteger dayGroupExtendedAssetsCount; // ivar: _dayGroupExtendedAssetsCount
@property (readonly, nonatomic) NSUInteger dayGroupExtendedAssetsCountMixed;
@property (readonly, nonatomic) NSUInteger dayGroupExtendedAssetsCountPrivate;
@property (readonly, nonatomic) NSUInteger dayGroupExtendedAssetsCountShared; // ivar: _dayGroupExtendedAssetsCountShared
@property (readonly, nonatomic) NSManagedObjectID *dayGroupKeyAssetPrivate; // ivar: _dayGroupKeyAssetPrivate
@property (readonly, nonatomic) NSManagedObjectID *dayGroupKeyAssetShared; // ivar: _dayGroupKeyAssetShared
@property (readonly, nonatomic) NSUInteger dayGroupSummaryAssetsCount; // ivar: _dayGroupSummaryAssetsCount
@property (readonly, nonatomic) NSUInteger dayGroupSummaryAssetsCountMixed;
@property (readonly, nonatomic) NSUInteger dayGroupSummaryAssetsCountPrivate;
@property (readonly, nonatomic) NSUInteger dayGroupSummaryAssetsCountShared; // ivar: _dayGroupSummaryAssetsCountShared
@property (readonly, nonatomic) NSInteger endTimeZoneOffset; // ivar: _endTimeZoneOffset
@property (nonatomic, getter=isEnriched) BOOL enriched; // ivar: _enriched
@property (readonly, nonatomic) unsigned short enrichmentState; // ivar: _enrichmentState
@property (readonly, nonatomic) short enrichmentVersion; // ivar: _enrichmentVersion
@property (readonly, nonatomic) NSUInteger extendedCount; // ivar: _extendedCount
@property (readonly, nonatomic) NSUInteger extendedCountMixed;
@property (readonly, nonatomic) NSUInteger extendedCountPrivate;
@property (readonly, nonatomic) NSUInteger extendedCountShared; // ivar: _extendedCountShared
@property (readonly, nonatomic) short highlightVersion; // ivar: _highlightVersion
@property (readonly, nonatomic) BOOL isSharingSuggestion; // ivar: _isSharingSuggestion
@property (readonly, nonatomic) NSManagedObjectID *keyAssetObjectIDForKind; // ivar: _keyAssetObjectIDForKind
@property (readonly, nonatomic) NSManagedObjectID *keyAssetPrivate; // ivar: _keyAssetPrivate
@property (readonly, nonatomic) NSManagedObjectID *keyAssetShared; // ivar: _keyAssetShared
@property (readonly, nonatomic) unsigned short kind; // ivar: _kind
@property (retain, nonatomic) NSDate *localEndDate; // ivar: _localEndDate
@property (retain, nonatomic) NSDate *localStartDate; // ivar: _localStartDate
@property (readonly, nonatomic) unsigned short mixedSharingCompositionKeyAssetRelationship; // ivar: _mixedSharingCompositionKeyAssetRelationship
@property (readonly, nonatomic) NSManagedObjectID *monthKeyAssetPrivate; // ivar: _monthKeyAssetPrivate
@property (readonly, nonatomic) NSManagedObjectID *monthKeyAssetShared; // ivar: _monthKeyAssetShared
@property (readonly, nonatomic) NSUInteger mood; // ivar: _mood
@property (readonly, nonatomic) NSManagedObjectID *parentPhotosHighlight; // ivar: _parentPhotosHighlight
@property (readonly, nonatomic) NSUInteger photoAssetsSuggestedByPhotosCount; // ivar: _photoAssetsSuggestedByPhotosCount
@property (readonly, nonatomic) unsigned short preferredCurationType;
@property (readonly, nonatomic) CGFloat promotionScore; // ivar: _promotionScore
@property (nonatomic, getter=isRecent) BOOL recent; // ivar: _recent
@property (readonly, nonatomic) unsigned short sharingComposition; // ivar: _sharingComposition
@property (readonly, nonatomic) unsigned short sharingFilter; // ivar: _sharingFilter
@property (readonly, nonatomic) NSString *smartDescription;
@property (readonly, nonatomic) NSString *smartDescriptionMixed;
@property (readonly, nonatomic) NSString *smartDescriptionPrivate;
@property (readonly, nonatomic) NSString *smartDescriptionShared;
@property (readonly, nonatomic) NSInteger startTimeZoneOffset; // ivar: _startTimeZoneOffset
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *subtitleMixed; // ivar: _subtitleMixed
@property (readonly, nonatomic) NSString *subtitlePrivate;
@property (readonly, nonatomic) NSString *subtitleShared; // ivar: _subtitleShared
@property (readonly, nonatomic) NSUInteger summaryCount; // ivar: _summaryCount
@property (readonly, nonatomic) NSUInteger summaryCountMixed;
@property (readonly, nonatomic) NSUInteger summaryCountPrivate;
@property (readonly, nonatomic) NSUInteger summaryCountShared; // ivar: _summaryCountShared
@property (readonly, nonatomic) NSString *titleMixed; // ivar: _titleMixed
@property (readonly, nonatomic) NSString *titleShared; // ivar: _titleShared
@property (readonly, nonatomic) unsigned short type; // ivar: _type
@property (readonly, nonatomic) NSString *verboseSmartDescription; // ivar: _verboseSmartDescription
@property (readonly, nonatomic) NSString *verboseSmartDescriptionMixed; // ivar: _verboseSmartDescriptionMixed
@property (readonly, nonatomic) NSString *verboseSmartDescriptionPrivate;
@property (readonly, nonatomic) NSString *verboseSmartDescriptionShared; // ivar: _verboseSmartDescriptionShared
@property (readonly, nonatomic) NSUInteger videoAssetsSuggestedByPhotosCount; // ivar: _videoAssetsSuggestedByPhotosCount
@property (readonly, nonatomic) unsigned short visibilityState; // ivar: _visibilityState
@property (readonly, nonatomic) unsigned short visibilityStateMixed; // ivar: _visibilityStateMixed
@property (readonly, nonatomic) unsigned short visibilityStatePrivate;
@property (readonly, nonatomic) unsigned short visibilityStateShared; // ivar: _visibilityStateShared
@property (readonly, nonatomic) NSManagedObjectID *yearKeyAssetPrivate; // ivar: _yearKeyAssetPrivate
@property (readonly, nonatomic) NSManagedObjectID *yearKeyAssetShared; // ivar: _yearKeyAssetShared


+(BOOL)cleanupEmptyHighlights;
+(BOOL)invalidateHighlightSubtitlesAndRegenerateHighlightTitles;
+(BOOL)managedObjectSupportsSharingComposition;
+(BOOL)managedObjectSupportsTrashedState;
+(BOOL)processRecentHighlights;
+(BOOL)processUnprocessedMomentLocations;
+(BOOL)updateHighlightTitles;
+(Class)propertySetClassForPropertySet:(id)arg0 ;
+(NSUInteger)propertyFetchHintsForPropertySets:(id)arg0 ;
// +(id)_choosePrivateOrSharedRelationshipForHighlight:(id)arg0 givenFilter:(unsigned short)arg1 privateHandler:(id)arg2 sharedHandler:(unk)arg3  ;
+(id)_fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)arg0 photoLibrary:(id)arg1 ;
+(id)_keyAssetObjectIDForHighlight:(id)arg0 filter:(unsigned short)arg1 ;
+(id)dateRangeTitleGenerator;
+(id)entityKeyMap;
+(id)fetchAllSharedLibrarySharingSuggestionHighlightsWithOptions:(id)arg0 ;
+(id)fetchChildDayGroupHighlightsForHighlight:(id)arg0 options:(id)arg1 ;
+(id)fetchChildHighlightsForHighlight:(id)arg0 options:(id)arg1 ;
+(id)fetchHighlightsInSharedLibrarySharingSuggestions:(id)arg0 ;
+(id)fetchParentDayGroupHighlightForHighlight:(id)arg0 options:(id)arg1 ;
+(id)fetchParentHighlightForHighlight:(id)arg0 options:(id)arg1 ;
+(id)fetchParentHighlightsForHighlights:(id)arg0 options:(id)arg1 ;
+(id)fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)arg0 options:(id)arg1 ;
+(id)fetchPhotosHighlightUUIDByAssetUUIDForAssets:(id)arg0 options:(id)arg1 ;
+(id)fetchPhotosHighlightUUIDByMomentUUIDForMomentUUIDs:(id)arg0 options:(id)arg1 ;
+(id)fetchPredicateForSharingFilter:(unsigned short)arg0 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg0 options:(id)arg1 ;
+(id)fetchSharedLibrarySharingSuggestionsWithOptions:(id)arg0 ;
+(id)fetchType;
+(id)identifierCode;
+(id)keyAssetInverseRelationshipPredicateForHighlight:(id)arg0 forHighlightFilter:(unsigned short)arg1 ;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)propertySetAccessorsByPropertySet;
+(id)propertySetsForPropertyFetchHints:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
-(BOOL)canPerformEditOperation:(NSInteger)arg0 ;
-(BOOL)canShowAvalancheStacks;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countForCurationType:(unsigned short)arg0 ;
-(NSUInteger)estimatedAssetCount;
-(NSUInteger)estimatedPhotosCount;
-(NSUInteger)estimatedVideosCount;
-(id)dateDescriptionWithOptions:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)keyAssetForKind;
-(id)keyAssetObjectIDForKindWithFilter:(unsigned short)arg0 ;
-(id)localizedSubtitle;
-(id)localizedTitle;
-(id)title;


@end


#endif