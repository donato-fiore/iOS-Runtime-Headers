// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBSEARCHRESULTSELECT_H
#define NTPBSEARCHRESULTSELECT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NTPBSearchResultSelect : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *articleResultArticleIds; // ivar: _articleResultArticleIds
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NSMutableArray *channelResultFeedIds; // ivar: _channelResultFeedIds
@property (retain, nonatomic) NSString *completedSearchString; // ivar: _completedSearchString
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (nonatomic) BOOL didSelectResult; // ivar: _didSelectResult
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasCompletedSearchString;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasDidSelectResult;
@property (nonatomic) BOOL hasSearchExecutionMethod;
@property (nonatomic) BOOL hasSearchLocation;
@property (nonatomic) BOOL hasSearchResultSelectLocation;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (nonatomic) BOOL hasSelectedResultActionType;
@property (readonly, nonatomic) BOOL hasSelectedResultArticleId;
@property (readonly, nonatomic) BOOL hasSelectedResultFeedId;
@property (nonatomic) BOOL hasSelectedResultRankInSection;
@property (nonatomic) BOOL hasSelectedResultSection;
@property (nonatomic) BOOL hasSelectedResultShowMore;
@property (readonly, nonatomic) BOOL hasSelectedResultString;
@property (nonatomic) BOOL hasSelectedResultType;
@property (readonly, nonatomic) BOOL hasStoreFrontId;
@property (readonly, nonatomic) BOOL hasTopResultArticleId;
@property (readonly, nonatomic) BOOL hasTopResultChannelId;
@property (readonly, nonatomic) BOOL hasTopResultFeedId;
@property (readonly, nonatomic) BOOL hasTopResultTopicId;
@property (nonatomic) BOOL hasTotalResults;
@property (nonatomic) BOOL hasTotalResultsInSelectedSection;
@property (retain, nonatomic) NSMutableArray *nonSelectedResultFeedIds; // ivar: _nonSelectedResultFeedIds
@property (nonatomic) int searchExecutionMethod; // ivar: _searchExecutionMethod
@property (nonatomic) int searchLocation; // ivar: _searchLocation
@property (nonatomic) int searchResultSelectLocation; // ivar: _searchResultSelectLocation
@property (retain, nonatomic) NSMutableArray *searchResults; // ivar: _searchResults
@property (retain, nonatomic) NSString *searchString; // ivar: _searchString
@property (nonatomic) int selectedResultActionType; // ivar: _selectedResultActionType
@property (retain, nonatomic) NSString *selectedResultArticleId; // ivar: _selectedResultArticleId
@property (retain, nonatomic) NSString *selectedResultFeedId; // ivar: _selectedResultFeedId
@property (nonatomic) int selectedResultRankInSection; // ivar: _selectedResultRankInSection
@property (nonatomic) int selectedResultSection; // ivar: _selectedResultSection
@property (nonatomic) BOOL selectedResultShowMore; // ivar: _selectedResultShowMore
@property (retain, nonatomic) NSString *selectedResultString; // ivar: _selectedResultString
@property (nonatomic) int selectedResultType; // ivar: _selectedResultType
@property (retain, nonatomic) NSString *storeFrontId; // ivar: _storeFrontId
@property (retain, nonatomic) NSString *topResultArticleId; // ivar: _topResultArticleId
@property (retain, nonatomic) NSString *topResultChannelId; // ivar: _topResultChannelId
@property (retain, nonatomic) NSString *topResultFeedId; // ivar: _topResultFeedId
@property (retain, nonatomic) NSString *topResultTopicId; // ivar: _topResultTopicId
@property (retain, nonatomic) NSMutableArray *topicResultFeedIds; // ivar: _topicResultFeedIds
@property (nonatomic) int totalResults; // ivar: _totalResults
@property (nonatomic) int totalResultsInSelectedSection; // ivar: _totalResultsInSelectedSection


+(Class)nonSelectedResultFeedIdType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articleResultArticleIdsAtIndex:(NSUInteger)arg0 ;
-(id)channelResultFeedIdsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)nonSelectedResultFeedIdAtIndex:(NSUInteger)arg0 ;
-(id)searchExecutionMethodAsString:(int)arg0 ;
-(id)searchLocationAsString:(int)arg0 ;
-(id)searchResultsAtIndex:(NSUInteger)arg0 ;
-(id)topicResultFeedIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsSearchExecutionMethod:(id)arg0 ;
-(int)StringAsSearchLocation:(id)arg0 ;
-(void)addArticleResultArticleIds:(id)arg0 ;
-(void)addChannelResultFeedIds:(id)arg0 ;
-(void)addNonSelectedResultFeedId:(id)arg0 ;
-(void)addSearchResults:(id)arg0 ;
-(void)addTopicResultFeedIds:(id)arg0 ;
-(void)clearArticleResultArticleIds;
-(void)clearChannelResultFeedIds;
-(void)clearNonSelectedResultFeedIds;
-(void)clearSearchResults;
-(void)clearTopicResultFeedIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif