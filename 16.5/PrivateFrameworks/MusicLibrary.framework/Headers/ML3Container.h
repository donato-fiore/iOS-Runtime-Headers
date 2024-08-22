// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3CONTAINER_H
#define ML3CONTAINER_H

@class NSArray, NSString;


#import "ML3Entity.h"
#import "ML3Predicate.h"

@interface ML3Container : ML3Entity

@property (readonly, copy, nonatomic) NSArray *cloudDisplayOrderingTerms;
@property (readonly, copy, nonatomic) NSArray *displayOrderingTerms;
@property (readonly, nonatomic, getter=isLimitOrderingDescending) BOOL limitOrderingDescending;
@property (readonly, copy, nonatomic) NSArray *limitOrderingTerms;
@property (readonly, nonatomic) NSInteger limitValue;
@property (readonly, nonatomic, getter=isLimitedByCount) BOOL limitedByCount;
@property (readonly, copy, nonatomic) NSString *limitingProperty;
@property (readonly, nonatomic) ML3Predicate *smartCriteriaPredicate;


+(BOOL)_reloadContainedMediaTypes:(BOOL)arg0 removedMediaTypes:(id)arg1 addedMediaTypes:(id)arg2 notify:(BOOL)arg3 incrementEntityRevision:(BOOL)arg4 usingLibrary:(id)arg5 connection:(id)arg6 forContainerPersistentID:(NSInteger)arg7 ;
+(BOOL)assistantLibraryContentsChangeForProperty:(id)arg0 ;
+(BOOL)deleteFromLibrary:(id)arg0 deletionType:(int)arg1 persistentIDs:(*NSInteger)arg2 count:(NSUInteger)arg3 ;
+(BOOL)hasCriterionInCriteriaList:(struct SearchCriteriaList *)arg0 forITDBTrackField:(int)arg1 ;
+(BOOL)libraryContentsChangeForProperty:(id)arg0 ;
+(BOOL)libraryDynamicChangeForProperty:(id)arg0 ;
+(BOOL)smartCriteriaCanBeEvaluated:(id)arg0 ;
+(BOOL)updateBuiltInSmartPlaylistNamesForCurrentLanguageInLibrary:(id)arg0 ;
+(NSInteger)revisionTrackingCode;
+(id)_allStaticItemContainersInLibrary:(id)arg0 usingConnection:(id)arg1 ;
+(id)_mediaTypesForTracksInContainerWithPersistentID:(NSInteger)arg0 connection:(id)arg1 ;
+(id)_mediaTypesForTracksWithPersistentIDs:(id)arg0 usingConnection:(id)arg1 ;
+(id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)arg0 ;
+(id)currentDeviceFavoritesPlaylistInLibrary:(id)arg0 usingConnection:(id)arg1 ;
+(id)databaseTable;
+(id)defaultFilterPredicates;
+(id)defaultOrderingTerms;
+(id)extraTablesToDelete;
+(id)foreignColumnForProperty:(id)arg0 ;
+(id)foreignDatabaseTableForProperty:(id)arg0 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)nextFilepathForPlaylistType:(int)arg0 withPersistentID:(NSUInteger)arg1 inLibrary:(id)arg2 ;
+(id)persistentIDColumnForTable:(id)arg0 ;
+(id)predicateForCriteriaList:(struct SearchCriteriaList *)arg0 parentMatchedAny:(BOOL)arg1 ;
+(id)sectionPropertyForProperty:(id)arg0 ;
+(int)protocolSortTypeFromTrackOrder:(unsigned int)arg0 ;
+(unsigned int)trackOrderFromProtocolSortType:(int)arg0 ;
+(void)_addMediaTypesToContainerWithPersistentID:(NSInteger)arg0 mediaTypes:(id)arg1 connection:(id)arg2 ;
+(void)_clearContainerMediaTypeInContainerWithPersistentID:(NSInteger)arg0 connection:(id)arg1 ;
+(void)_insertNewSmartPlaylist:(id)arg0 criteriaBlob:(id)arg1 evaluationOrder:(unsigned int)arg2 limited:(BOOL)arg3 trackOrder:(unsigned int)arg4 distinguishedKind:(int)arg5 inLibrary:(id)arg6 cachedNameOrders:(id)arg7 ;
+(void)_lovedPlaylistContainerPID:(*id)arg0 trackPositions:(*id)arg1 forTrackWithPersistentID:(id)arg2 usingConnection:(id)arg3 ;
+(void)_removeMediaTypesFromContainerWithPersistentID:(NSInteger)arg0 mediaTypes:(id)arg1 connection:(id)arg2 ;
+(void)_updateContainedMediaTypeInContainerWithPersistentID:(NSInteger)arg0 connection:(id)arg1 itemUpdateBlock:(id)arg2 ;
+(void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)arg0 inLibrary:(id)arg1 ;
+(void)initialize;
+(void)populateMediaTypesOfStaticContainersInLibrary:(id)arg0 ;
+(void)populateSortOrdersOfPropertyValues:(id)arg0 inLibrary:(id)arg1 cachedNameOrders:(id)arg2 ;
+(void)reloadContainedMediaTypesForContainerWithPersistID:(NSInteger)arg0 usingConnection:(id)arg1 ;
+(void)removeAnyNonLibraryItemsInPersistentIDs:(id)arg0 fromContainersInLibrary:(id)arg1 usingConnection:(id)arg2 ;
+(void)removeNonLibraryItemsFromContainer:(id)arg0 usingConnection:(id)arg1 ;
+(void)removeNonLibraryItemsFromContainersInLibrary:(id)arg0 usingConnection:(id)arg1 ;
-(BOOL)_reloadContainedMediaTypes:(BOOL)arg0 removedMediaTypes:(id)arg1 addedMediaTypes:(id)arg2 notify:(BOOL)arg3 incrementEntityRevision:(BOOL)arg4 usingConnection:(id)arg5 ;
-(BOOL)_removeTracksAtIndexes:(id)arg0 notify:(BOOL)arg1 usingConnection:(id)arg2 ;
-(BOOL)_setItemPersistentIDs:(id)arg0 reloadContainedMediaTypes:(BOOL)arg1 removedMediaTypes:(id)arg2 addedMediaTypes:(id)arg3 notify:(BOOL)arg4 incrementEntityRevision:(BOOL)arg5 usingConnection:(id)arg6 ;
-(BOOL)_supportsOrderedTrackOperations;
-(BOOL)appendTracksWithPersistentIDs:(id)arg0 notify:(BOOL)arg1 ;
-(BOOL)isBuiltInSmartPlaylist;
-(BOOL)isEvaluationOrderingDescending;
-(BOOL)moveTrackFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(BOOL)removeAllTracks;
-(BOOL)removeFirstTrack;
-(BOOL)removeTracksAtIndexes:(id)arg0 notify:(BOOL)arg1 ;
-(BOOL)setTracksWithPersistentIDs:(id)arg0 notify:(BOOL)arg1 ;
-(NSInteger)_maxPositionForTracksUsingConnection:(id)arg0 ;
-(id)_addUnitesForCriterionInfo:(struct ? )arg0 ;
-(id)_booleanStringForCriteriaInfo:(struct ? )arg0 ;
-(id)_convertNumericValueFromCriterionMatchKey:(unsigned int)arg0 criteriaValue:(NSInteger)arg1 ;
-(id)_criteriaListDescription:(struct SearchCriteriaList *)arg0 level:(NSInteger)arg1 ;
-(id)_dateStringForCriteriaInfo:(struct ? )arg0 ;
-(id)_formatTime:(NSInteger)arg0 ;
-(id)_nonzeroStringForCriteriaInfo:(struct ? )arg0 ;
-(id)_numericStringForCriteriaInfo:(struct ? )arg0 ;
-(id)_stringForCriterionBuffer:(struct ? )arg0 ;
-(id)_stringForCriterionMatchKey:(struct ? )arg0 ;
-(id)_stringForCriterionMatchType:(struct ? )arg0 ;
-(id)_stringForTrackFieldCloudStatus:(NSInteger)arg0 ;
-(id)_stringForTrackFieldMediaKind:(NSInteger)arg0 ;
-(id)_stringStringForCriteriaInfo:(struct ? )arg0 ;
-(id)childPlaylistPersistentIds;
-(id)criteriaListDescription;
-(id)evaluationOrderingTerms;
-(id)initWithDictionary:(id)arg0 inLibrary:(id)arg1 cachedNameOrders:(id)arg2 usingConnection:(id)arg3 ;
-(id)multiverseIdentifier;
-(id)protocolItem;
-(id)trackPersistentIds;
-(struct SearchCriteriaList *)importedCriteriaList;
-(void)_setContainerSeedItemPersistentIDValue:(id)arg0 ;
-(void)setValues:(id)arg0 forProperties:(id)arg1 async:(BOOL)arg2 withCompletionBlock:(id)arg3 ;


@end


#endif