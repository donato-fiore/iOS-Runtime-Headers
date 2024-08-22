// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBFEEDSUBSCRIBEUNSUBSCRIBE_H
#define NTPBFEEDSUBSCRIBEUNSUBSCRIBE_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;



@interface NTPBFeedSubscribeUnsubscribe : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (nonatomic) BOOL cameFromGroup; // ivar: _cameFromGroup
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (nonatomic) int displayRank; // ivar: _displayRank
@property (nonatomic) int feedCellHostType; // ivar: _feedCellHostType
@property (nonatomic) int feedCellSection; // ivar: _feedCellSection
@property (retain, nonatomic) NSString *feedId; // ivar: _feedId
@property (nonatomic) int feedSubscriptionOrigin; // ivar: _feedSubscriptionOrigin
@property (nonatomic) int feedType; // ivar: _feedType
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (nonatomic) int feedViewPresentationReason; // ivar: _feedViewPresentationReason
@property (retain, nonatomic) NSString *groupFeedId; // ivar: _groupFeedId
@property (nonatomic) int groupType; // ivar: _groupType
@property (retain, nonatomic) NSData *groupViewExposureId; // ivar: _groupViewExposureId
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasCameFromGroup;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasDisplayRank;
@property (nonatomic) BOOL hasFeedCellHostType;
@property (nonatomic) BOOL hasFeedCellSection;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedSubscriptionOrigin;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasFeedViewPresentationReason;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (nonatomic) BOOL hasIsPaidSubscriberToFeed;
@property (readonly, nonatomic) BOOL hasPreviousArticleId;
@property (nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property (nonatomic) BOOL hasRecommendationBrickType;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (nonatomic) BOOL hasSubscribeUnsubscribeLocation;
@property (nonatomic) BOOL hasSubscribeUnsubscribeSurfaceReason;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL isPaidSubscriberToFeed; // ivar: _isPaidSubscriberToFeed
@property (retain, nonatomic) NSString *previousArticleId; // ivar: _previousArticleId
@property (nonatomic) NSInteger previousArticlePublisherArticleVersion; // ivar: _previousArticlePublisherArticleVersion
@property (retain, nonatomic) NSString *previousArticleVersion; // ivar: _previousArticleVersion
@property (nonatomic) int recommendationBrickType; // ivar: _recommendationBrickType
@property (retain, nonatomic) NSString *searchString; // ivar: _searchString
@property (nonatomic) int subscribeUnsubscribeLocation; // ivar: _subscribeUnsubscribeLocation
@property (nonatomic) int subscribeUnsubscribeSurfaceReason; // ivar: _subscribeUnsubscribeSurfaceReason
@property (retain, nonatomic) NSMutableArray *subscribedFeedIds; // ivar: _subscribedFeedIds
@property (nonatomic) int userAction; // ivar: _userAction


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedCellHostTypeAsString:(int)arg0 ;
-(id)feedCellSectionAsString:(int)arg0 ;
-(id)feedSubscriptionOriginAsString:(int)arg0 ;
-(id)feedTypeAsString:(int)arg0 ;
-(id)feedViewPresentationReasonAsString:(int)arg0 ;
-(id)groupTypeAsString:(int)arg0 ;
-(id)recommendationBrickTypeAsString:(int)arg0 ;
-(id)subscribedFeedIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsFeedCellHostType:(id)arg0 ;
-(int)StringAsFeedCellSection:(id)arg0 ;
-(int)StringAsFeedSubscriptionOrigin:(id)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(int)StringAsFeedViewPresentationReason:(id)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsRecommendationBrickType:(id)arg0 ;
-(void)addSubscribedFeedIds:(id)arg0 ;
-(void)clearSubscribedFeedIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif