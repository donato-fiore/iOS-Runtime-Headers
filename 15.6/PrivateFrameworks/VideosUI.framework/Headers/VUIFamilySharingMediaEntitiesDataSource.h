// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIFAMILYSHARINGMEDIAENTITIESDATASOURCE_H
#define VUIFAMILYSHARINGMEDIAENTITIESDATASOURCE_H

@class NSNumber, NSMutableArray, NSString, NSURLRequest;


#import "VUIMediaEntitiesDataSource.h"
#import "VUIMediaAPIClient.h"
#import "VUIMediaAPIResponseMetadata.h"

@interface VUIFamilySharingMediaEntitiesDataSource : VUIMediaEntitiesDataSource

@property (retain, nonatomic) NSNumber *desiredBatchSize; // ivar: _desiredBatchSize
@property (nonatomic) BOOL fetchAllEntities; // ivar: _fetchAllEntities
@property (nonatomic) BOOL loadingNextBatch; // ivar: _loadingNextBatch
@property (retain, nonatomic) VUIMediaAPIClient *mediaClient; // ivar: _mediaClient
@property (nonatomic) NSUInteger numberOfEntitiesProcessedInBatch; // ivar: _numberOfEntitiesProcessedInBatch
@property (nonatomic) BOOL orderEpisodesByEpisodeNumber; // ivar: _orderEpisodesByEpisodeNumber
@property (retain, nonatomic) NSMutableArray *processedEntities; // ivar: _processedEntities
@property (retain, nonatomic) VUIMediaAPIResponseMetadata *responseMetadata; // ivar: _responseMetadata
@property (retain, nonatomic) NSNumber *resultLimit; // ivar: _resultLimit
@property (retain, nonatomic) NSString *seasonIdentifierFilter; // ivar: _seasonIdentifierFilter
@property (nonatomic) BOOL shouldCoalesceEpisodesToSeasons; // ivar: _shouldCoalesceEpisodesToSeasons
@property (nonatomic) BOOL shouldCoalesceEpisodesToShows; // ivar: _shouldCoalesceEpisodesToShows
@property (nonatomic) BOOL shouldGroupBySeason; // ivar: _shouldGroupBySeason
@property (retain, nonatomic) NSURLRequest *urlRequest; // ivar: _urlRequest


-(BOOL)_grouping:(id)arg0 containsMediaEntity:(id)arg1 ;
-(BOOL)_hasNextBatch;
-(BOOL)_isAllowedToShowMediaItem:(id)arg0 ;
-(BOOL)_processedEntitiesContainsEntityWithIdentifier:(id)arg0 ;
-(id)_addSeasonNumber:(id)arg0 toCollectionSeasonNumbers:(id)arg1 ;
-(id)_applyContentRestrictionsFilterToMediaEntities:(id)arg0 ;
-(id)_episodeOrderingComparator:(SEL)arg0 ;
-(id)_getEntityInProcessedEntitiesWithIdentifier:(id)arg0 ;
-(id)_getGroupingFrom:(id)arg0 groupingIdentifier:(id)arg1 ;
-(id)_getLimitFromURLRequest;
-(id)_mediaCollectionWithAMSMediaItem:(id)arg0 ;
-(id)_updateOffsetQueryItemForQueryItems:(id)arg0 ;
-(id)initWithNSURLRequest:(id)arg0 ;
-(void)_appendNextOffsetToURLRequest;
-(void)_applyContentRestrictionsFilter;
-(void)_applyContentRestrictionsFilterToGroupings;
-(void)_coalesceEpisodesToSeasonsFromParsedEntities:(id)arg0 ;
-(void)_coalesceEpisodesToShowsFromParsedEntities:(id)arg0 ;
-(void)_filterEntitiesBySeasonIdentifierIfNecessary;
-(void)_filterGroupingsBySeasonIdentifierIfNecessary;
-(void)_groupEpisodesbySeason:(id)arg0 ;
-(void)_limitEntitiesReturnedIfNecessary;
-(void)_orderEpisodesIfNecessary;
-(void)_orderEpisodesInGroupings;
-(void)_orderSeasonsBySeasonNumber;
-(void)loadNextEntityBatch;
-(void)startFetch;


@end


#endif