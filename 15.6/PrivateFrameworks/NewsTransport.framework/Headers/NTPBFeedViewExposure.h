// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBFEEDVIEWEXPOSURE_H
#define NTPBFEEDVIEWEXPOSURE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NTPBFeedViewExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL adSupportedChannel; // ivar: _adSupportedChannel
@property (nonatomic) int areaPresentationReason; // ivar: _areaPresentationReason
@property (nonatomic) BOOL cameFromGroup; // ivar: _cameFromGroup
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (nonatomic) int countOfTotalGroupExposures; // ivar: _countOfTotalGroupExposures
@property (nonatomic) int countOfTotalGroupsExposed; // ivar: _countOfTotalGroupsExposed
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (nonatomic) int feedCellHostType; // ivar: _feedCellHostType
@property (nonatomic) int feedCellSection; // ivar: _feedCellSection
@property (retain, nonatomic) NSString *feedId; // ivar: _feedId
@property (nonatomic) int feedType; // ivar: _feedType
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (nonatomic) int groupType; // ivar: _groupType
@property (retain, nonatomic) NSData *groupViewExposureId; // ivar: _groupViewExposureId
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL hasAreaPresentationReason;
@property (nonatomic) BOOL hasCameFromGroup;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (nonatomic) BOOL hasCountOfTotalGroupExposures;
@property (nonatomic) BOOL hasCountOfTotalGroupsExposed;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasFeedCellHostType;
@property (nonatomic) BOOL hasFeedCellSection;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (nonatomic) BOOL hasIsNewUserToFeed;
@property (nonatomic) BOOL hasIsPaidSubscriberToFeed;
@property (nonatomic) BOOL hasIsSubscribedToGroupFeed;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL hasPresentationReason;
@property (readonly, nonatomic) BOOL hasPresentationReasonSearchString;
@property (readonly, nonatomic) BOOL hasPreviousArticleId;
@property (nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property (nonatomic) BOOL hasRankInToc;
@property (readonly, nonatomic) BOOL hasReferringSourceApplication;
@property (readonly, nonatomic) BOOL hasReferringUrl;
@property (nonatomic) BOOL hasSessionEndReason;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasUserActivityType;
@property (readonly, nonatomic) BOOL hasViewFrameInScreen;
@property (nonatomic) BOOL isNewUserToFeed; // ivar: _isNewUserToFeed
@property (nonatomic) BOOL isPaidSubscriberToFeed; // ivar: _isPaidSubscriberToFeed
@property (nonatomic) BOOL isSubscribedToGroupFeed; // ivar: _isSubscribedToGroupFeed
@property (nonatomic) BOOL isUserSubscribedToFeed; // ivar: _isUserSubscribedToFeed
@property (nonatomic) int presentationReason; // ivar: _presentationReason
@property (retain, nonatomic) NSString *presentationReasonSearchString; // ivar: _presentationReasonSearchString
@property (retain, nonatomic) NSString *previousArticleId; // ivar: _previousArticleId
@property (nonatomic) NSInteger previousArticlePublisherArticleVersion; // ivar: _previousArticlePublisherArticleVersion
@property (retain, nonatomic) NSString *previousArticleVersion; // ivar: _previousArticleVersion
@property (nonatomic) int rankInToc; // ivar: _rankInToc
@property (retain, nonatomic) NSString *referringSourceApplication; // ivar: _referringSourceApplication
@property (retain, nonatomic) NSString *referringUrl; // ivar: _referringUrl
@property (nonatomic) int sessionEndReason; // ivar: _sessionEndReason
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (retain, nonatomic) NSString *userActivityType; // ivar: _userActivityType
@property (retain, nonatomic) NSString *viewFrameInScreen; // ivar: _viewFrameInScreen


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)areaPresentationReasonAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedCellHostTypeAsString:(int)arg0 ;
-(id)feedCellSectionAsString:(int)arg0 ;
-(id)feedTypeAsString:(int)arg0 ;
-(id)groupTypeAsString:(int)arg0 ;
-(id)presentationReasonAsString:(int)arg0 ;
-(id)sessionEndReasonAsString:(int)arg0 ;
-(int)StringAsAreaPresentationReason:(id)arg0 ;
-(int)StringAsFeedCellHostType:(id)arg0 ;
-(int)StringAsFeedCellSection:(id)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsPresentationReason:(id)arg0 ;
-(int)StringAsSessionEndReason:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif