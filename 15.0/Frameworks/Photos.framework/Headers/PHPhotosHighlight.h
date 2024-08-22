// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHPHOTOSHIGHLIGHT_H
#define PHPHOTOSHIGHLIGHT_H

@class NSString, NSManagedObjectID, NSDate;


#import "PHAssetCollection.h"

@interface PHPhotosHighlight : PHAssetCollection {
    NSUInteger _assetsCount;
}


@property (readonly, nonatomic) unsigned short category; // ivar: _category
@property (readonly, nonatomic) NSString *dateDescription;
@property (readonly, nonatomic) NSUInteger dayGroupAssetsCount; // ivar: _dayGroupAssetsCount
@property (readonly, nonatomic) NSUInteger dayGroupExtendedAssetsCount; // ivar: _dayGroupExtendedAssetsCount
@property (readonly, nonatomic) NSManagedObjectID *dayGroupKeyAsset; // ivar: _dayGroupKeyAsset
@property (readonly, nonatomic) NSUInteger dayGroupSummaryAssetsCount; // ivar: _dayGroupSummaryAssetsCount
@property (readonly, nonatomic) NSInteger endTimeZoneOffset; // ivar: _endTimeZoneOffset
@property (nonatomic, getter=isEnriched) BOOL enriched; // ivar: _enriched
@property (readonly, nonatomic) unsigned short enrichmentState; // ivar: _enrichmentState
@property (readonly, nonatomic) short enrichmentVersion; // ivar: _enrichmentVersion
@property (readonly, nonatomic) NSUInteger extendedCount; // ivar: _extendedCount
@property (readonly, nonatomic) short highlightVersion; // ivar: _highlightVersion
@property (readonly, nonatomic) NSManagedObjectID *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) NSManagedObjectID *keyAssetForKind;
@property (readonly, nonatomic) unsigned short kind; // ivar: _kind
@property (retain, nonatomic) NSDate *localEndDate; // ivar: _localEndDate
@property (retain, nonatomic) NSDate *localStartDate; // ivar: _localStartDate
@property (readonly, nonatomic) NSManagedObjectID *monthKeyAsset; // ivar: _monthKeyAsset
@property (readonly, nonatomic) NSUInteger mood; // ivar: _mood
@property (readonly, nonatomic) NSManagedObjectID *parentPhotosHighlight; // ivar: _parentPhotosHighlight
@property (readonly, nonatomic) unsigned short preferredCurationType;
@property (readonly, nonatomic) CGFloat promotionScore; // ivar: _promotionScore
@property (nonatomic, getter=isRecent) BOOL recent; // ivar: _recent
@property (readonly, nonatomic) NSString *smartDescription;
@property (readonly, nonatomic) NSInteger startTimeZoneOffset; // ivar: _startTimeZoneOffset
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSUInteger summaryCount; // ivar: _summaryCount
@property (readonly, nonatomic) unsigned short type; // ivar: _type
@property (readonly, nonatomic) NSString *verboseSmartDescription; // ivar: _verboseSmartDescription
@property (readonly, nonatomic) unsigned short visibilityState; // ivar: _visibilityState
@property (readonly, nonatomic) NSManagedObjectID *yearKeyAsset; // ivar: _yearKeyAsset


+(BOOL)cleanupEmptyHighlights;
+(BOOL)invalidateHighlightSubtitlesAndRegenerateHighlightTitles;
+(BOOL)managedObjectSupportsTrashedState;
+(BOOL)processRecentHighlights;
+(BOOL)processUnprocessedMomentLocations;
+(BOOL)updateHighlightTitles;
+(id)_fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)arg0 photoLibrary:(id)arg1 ;
+(id)dateRangeTitleGenerator;
+(id)entityKeyMap;
+(id)fetchChildDayGroupHighlightsForHighlight:(id)arg0 options:(id)arg1 ;
+(id)fetchChildHighlightsForHighlight:(id)arg0 options:(id)arg1 ;
+(id)fetchParentDayGroupHighlightForHighlight:(id)arg0 options:(id)arg1 ;
+(id)fetchParentHighlightForHighlight:(id)arg0 options:(id)arg1 ;
+(id)fetchParentHighlightsForHighlights:(id)arg0 options:(id)arg1 ;
+(id)fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)arg0 options:(id)arg1 ;
+(id)fetchPhotosHighlightUUIDByAssetUUIDForAssets:(id)arg0 options:(id)arg1 ;
+(id)fetchPhotosHighlightUUIDByMomentUUIDForMomentUUIDs:(id)arg0 options:(id)arg1 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg0 options:(id)arg1 ;
+(id)fetchType;
+(id)identifierCode;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
-(BOOL)canPerformEditOperation:(NSInteger)arg0 ;
-(BOOL)canShowAvalancheStacks;
-(NSUInteger)countForCurationType:(unsigned short)arg0 ;
-(NSUInteger)estimatedAssetCount;
-(id)dateDescriptionWithOptions:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)localizedSubtitle;
-(id)title;


@end


#endif