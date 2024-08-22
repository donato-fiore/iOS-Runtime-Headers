// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBSEARCHEXECUTE_H
#define NTPBSEARCHEXECUTE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NTPBSearchExecute : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *articleResultIds; // ivar: _articleResultIds
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NSMutableArray *channelResultFeedIds; // ivar: _channelResultFeedIds
@property (retain, nonatomic) NSString *completedSearchString; // ivar: _completedSearchString
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasCompletedSearchString;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasSearchExecutionMethod;
@property (nonatomic) BOOL hasSearchLocation;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (readonly, nonatomic) BOOL hasStoreFrontId;
@property (readonly, nonatomic) BOOL hasTopResultArticleId;
@property (readonly, nonatomic) BOOL hasTopResultChannelId;
@property (readonly, nonatomic) BOOL hasTopResultFeedId;
@property (readonly, nonatomic) BOOL hasTopResultTopicId;
@property (nonatomic) BOOL hasTotalResults;
@property (nonatomic) int searchExecutionMethod; // ivar: _searchExecutionMethod
@property (nonatomic) int searchLocation; // ivar: _searchLocation
@property (retain, nonatomic) NSString *searchString; // ivar: _searchString
@property (retain, nonatomic) NSString *storeFrontId; // ivar: _storeFrontId
@property (retain, nonatomic) NSString *topResultArticleId; // ivar: _topResultArticleId
@property (retain, nonatomic) NSString *topResultChannelId; // ivar: _topResultChannelId
@property (retain, nonatomic) NSString *topResultFeedId; // ivar: _topResultFeedId
@property (retain, nonatomic) NSString *topResultTopicId; // ivar: _topResultTopicId
@property (retain, nonatomic) NSMutableArray *topicResultFeedIds; // ivar: _topicResultFeedIds
@property (nonatomic) int totalResults; // ivar: _totalResults


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articleResultIdsAtIndex:(NSUInteger)arg0 ;
-(id)channelResultFeedIdsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)searchExecutionMethodAsString:(int)arg0 ;
-(id)searchLocationAsString:(int)arg0 ;
-(id)topicResultFeedIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsSearchExecutionMethod:(id)arg0 ;
-(int)StringAsSearchLocation:(id)arg0 ;
-(void)addArticleResultIds:(id)arg0 ;
-(void)addChannelResultFeedIds:(id)arg0 ;
-(void)addTopicResultFeedIds:(id)arg0 ;
-(void)clearArticleResultIds;
-(void)clearChannelResultFeedIds;
-(void)clearTopicResultFeedIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif