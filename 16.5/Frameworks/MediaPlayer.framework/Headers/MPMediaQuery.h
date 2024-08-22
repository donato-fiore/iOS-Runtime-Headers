// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMEDIAQUERY_H
#define MPMEDIAQUERY_H

@class NSArray, NSSet, NSString, NSDictionary;
@protocol MPPProtobufferCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "MPMediaLibrary.h"
#import "MPMediaQueryCriteria.h"
#import "MPMediaItemCollection.h"
#import "MPMediaQuerySectionInfo.h"
#import "MPMediaPlaylist.h"

@interface MPMediaQuery : NSObject <MPPProtobufferCoding, NSSecureCoding, NSCopying>

 {
    MPMediaLibrary *_mediaLibrary;
    MPMediaQueryCriteria *_criteria;
    int _isFilteringDisabled;
    NSArray *_staticEntities;
    NSInteger _staticEntityType;
}


@property (readonly, nonatomic) NSUInteger _countOfCollections;
@property (readonly, nonatomic) NSUInteger _countOfItems;
@property (readonly, nonatomic) BOOL _hasCollections;
@property (readonly, nonatomic) BOOL _hasItems;
@property (readonly, nonatomic) BOOL _hasStaticEntities;
@property (readonly, nonatomic) MPMediaItemCollection *_representativeCollection;
@property (readonly, nonatomic) NSInteger _representativeCollectionGroupingType;
@property (readonly, nonatomic) MPMediaItemCollection *collectionByJoiningCollections;
@property (readonly, nonatomic) NSArray *collectionPersistentIdentifiers;
@property (copy, nonatomic) NSSet *collectionPropertiesToFetch;
@property (readonly, nonatomic) MPMediaQuerySectionInfo *collectionSectionInfo;
@property (readonly, nonatomic) NSArray *collectionSections;
@property (readonly, nonatomic) NSArray *collections;
@property (readonly, nonatomic) MPMediaPlaylist *containingPlaylist;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger entityLimit;
@property (readonly, nonatomic) BOOL excludesEntitiesWithBlankNames;
@property (retain, nonatomic) NSSet *filterPredicates;
@property (nonatomic) NSInteger groupingType;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreRestrictionsPredicates;
@property (nonatomic) BOOL ignoreSystemFilterPredicates;
@property (nonatomic) BOOL includeEntitiesWithBlankNames;
@property (readonly, nonatomic) NSArray *itemPersistentIdentifiers;
@property (copy, nonatomic) NSSet *itemPropertiesToFetch;
@property (readonly, nonatomic) MPMediaQuerySectionInfo *itemSectionInfo;
@property (readonly, nonatomic) NSArray *itemSections;
@property (readonly, nonatomic) NSArray *items;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (copy, nonatomic, getter=_orderingDirectionMappings, setter=_setOrderingDirectionMappings:) NSDictionary *orderingDirectionMappings;
@property (copy, nonatomic, getter=_orderingProperties, setter=_setOrderingProperties:) NSArray *orderingProperties;
@property (readonly, nonatomic, getter=isPlaylistItemsQuery) BOOL playlistItemsQuery;
@property (nonatomic) BOOL shouldIncludeNonLibraryEntities;
@property (nonatomic) BOOL sortItems;
@property (readonly, nonatomic) BOOL specifiesPlaylistItems;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useSections;
@property (readonly, nonatomic) BOOL willGroupEntities;


+(BOOL)isFilteringDisabled;
+(BOOL)supportsSecureCoding;
+(id)ITunesUAudioQuery;
+(id)ITunesUQuery;
+(id)activeGeniusPlaylist;
+(id)albumArtistsQuery;
+(id)albumsQuery;
+(id)artistsQuery;
+(id)audibleAudiobooksQuery;
+(id)audioPodcastsQuery;
+(id)audiobooksQuery;
+(id)compilationsQuery;
+(id)composersQuery;
+(id)currentDevicePurchasesPlaylist;
+(id)geniusMixesQuery;
+(id)genresQuery;
+(id)homeVideosQuery;
+(id)movieRentalsQuery;
+(id)moviesQuery;
+(id)musicVideosQuery;
+(id)playbackHistoryPlaylist;
+(id)playlistsQuery;
+(id)playlistsRecentlyAddedQuery;
+(id)podcastsQuery;
+(id)songsQuery;
+(id)tvShowsQuery;
+(id)videoITunesUQuery;
+(id)videoPodcastsQuery;
+(id)videosQuery;
+(void)initFilteringDisabled;
+(void)initialize;
+(void)setFilteringDisabled:(BOOL)arg0 ;
-(BOOL)MPSD_hasDownloadableEntities;
-(BOOL)MPSD_hasDownloadingEntities;
-(BOOL)_isFilteringDisabled;
-(BOOL)_updatePredicateForProperty:(id)arg0 withPropertyPredicate:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_playlistItemPersistentIDForItemPersistentID:(NSUInteger)arg0 ;
-(NSUInteger)groupingThreshold;
-(id)MPSD_mediaQueryForDownloadableEntities;
-(id)MPSD_mediaQueryForDownloadingEntities;
-(id)_valueForAggregateFunction:(id)arg0 onProperty:(id)arg1 entityType:(NSInteger)arg2 ;
-(id)copyByRemovingStaticEntities;
-(id)copyBySanitizingStaticEntities;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)criteria;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCriteria:(id)arg0 library:(id)arg1 ;
-(id)initWithEntities:(id)arg0 entityType:(NSInteger)arg1 ;
-(id)initWithFilterPredicates:(id)arg0 ;
-(id)initWithFilterPredicates:(id)arg0 library:(id)arg1 ;
-(id)initWithProtobufferDecodableObject:(id)arg0 ;
-(id)initWithProtobufferDecodableObject:(id)arg0 library:(id)arg1 ;
-(id)predicateForProperty:(id)arg0 ;
-(id)protobufferEncodableObject;
-(id)protobufferEncodableObjectFromLibrary:(id)arg0 ;
-(id)valueForAggregateFunction:(id)arg0 onCollectionsForProperty:(id)arg1 ;
-(id)valueForAggregateFunction:(id)arg0 onItemsForProperty:(id)arg1 ;
-(void)_enumerateCollectionPersistentIDsInOrder:(BOOL)arg0 usingBlock:(id)arg1 ;
-(void)_enumerateCollectionPersistentIDsUsingBlock:(id)arg0 ;
-(void)_enumerateCollectionsInOrder:(BOOL)arg0 usingBlock:(id)arg1 ;
-(void)_enumerateCollectionsUsingBlock:(id)arg0 ;
-(void)_enumerateItemPersistentIDsInOrder:(BOOL)arg0 usingBlock:(id)arg1 ;
-(void)_enumerateItemPersistentIDsUsingBlock:(id)arg0 ;
-(void)_enumerateItemsInOrder:(BOOL)arg0 usingBlock:(id)arg1 ;
-(void)_enumerateItemsUsingBlock:(id)arg0 ;
-(void)_enumerateUnorderedCollectionPersistentIDsUsingBlock:(id)arg0 ;
-(void)_enumerateUnorderedCollectionsUsingBlock:(id)arg0 ;
-(void)_enumerateUnorderedItemPersistentIDsUsingBlock:(id)arg0 ;
-(void)_enumerateUnorderedItemsUsingBlock:(id)arg0 ;
-(void)_getRepresentativeCollectionGrouping:(*NSInteger)arg0 propertyPredicate:(*id)arg1 ;
-(void)addFilterPredicate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeFilterPredicate:(id)arg0 ;
-(void)removePredicatesForProperty:(id)arg0 ;
-(void)setCriteria:(id)arg0 ;
-(void)setFilterPredicate:(id)arg0 forProperty:(id)arg1 ;
-(void)setFilterPropertyPredicate:(id)arg0 ;
-(void)setStaticEntities:(id)arg0 entityType:(NSInteger)arg1 ;


@end


#endif