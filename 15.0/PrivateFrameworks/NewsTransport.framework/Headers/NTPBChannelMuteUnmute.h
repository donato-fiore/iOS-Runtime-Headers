// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBCHANNELMUTEUNMUTE_H
#define NTPBCHANNELMUTEUNMUTE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NTPBChannelMuteUnmute : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleSessionId; // ivar: _articleSessionId
@property (retain, nonatomic) NSString *articleSessionIdDeprecated; // ivar: _articleSessionIdDeprecated
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (retain, nonatomic) NSString *articleViewingSessionIdDeprecated; // ivar: _articleViewingSessionIdDeprecated
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NSString *channelMuteUnmuteFeedId; // ivar: _channelMuteUnmuteFeedId
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (nonatomic) int feedType; // ivar: _feedType
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (retain, nonatomic) NSString *feedViewExposureIdDeprecated; // ivar: _feedViewExposureIdDeprecated
@property (nonatomic) int feedViewPresentationReason; // ivar: _feedViewPresentationReason
@property (nonatomic) int groupType; // ivar: _groupType
@property (retain, nonatomic) NSData *groupViewExposureId; // ivar: _groupViewExposureId
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleSessionId;
@property (readonly, nonatomic) BOOL hasArticleSessionIdDeprecated;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionIdDeprecated;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasChannelMuteUnmuteFeedId;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureIdDeprecated;
@property (nonatomic) BOOL hasFeedViewPresentationReason;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (nonatomic) BOOL hasIsSearchResultArticle;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL hasMuteUnmuteLocation;
@property (readonly, nonatomic) BOOL hasPreviousArticleId;
@property (nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL isSearchResultArticle; // ivar: _isSearchResultArticle
@property (nonatomic) BOOL isUserSubscribedToFeed; // ivar: _isUserSubscribedToFeed
@property (nonatomic) int muteUnmuteLocation; // ivar: _muteUnmuteLocation
@property (retain, nonatomic) NSString *previousArticleId; // ivar: _previousArticleId
@property (nonatomic) NSInteger previousArticlePublisherArticleVersion; // ivar: _previousArticlePublisherArticleVersion
@property (retain, nonatomic) NSString *previousArticleVersion; // ivar: _previousArticleVersion
@property (retain, nonatomic) NSString *referencedArticleId; // ivar: _referencedArticleId
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (nonatomic) int userAction; // ivar: _userAction


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg0 ;
-(id)feedViewPresentationReasonAsString:(int)arg0 ;
-(id)groupTypeAsString:(int)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(int)StringAsFeedViewPresentationReason:(id)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif