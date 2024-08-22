// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBSHARERESULT_H
#define NTPBSHARERESULT_H

@class PBCodable, NSData, NSString, NSMutableArray;
@protocol NSCopying;


#import "NTPBChannelData.h"
#import "NTPBIssueData.h"
#import "NTPBIssueExposureData.h"
#import "NTPBWidgetEngagement.h"

@interface NTPBShareResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *articleSessionId; // ivar: _articleSessionId
@property (nonatomic) int articleType; // ivar: _articleType
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (nonatomic) int backendArticleVersion; // ivar: _backendArticleVersion
@property (nonatomic) NSInteger backendArticleVersionInt64; // ivar: _backendArticleVersionInt64
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NTPBChannelData *channelData; // ivar: _channelData
@property (nonatomic) int characterCount; // ivar: _characterCount
@property (retain, nonatomic) NSString *contentId; // ivar: _contentId
@property (nonatomic) int contentType; // ivar: _contentType
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (retain, nonatomic) NSString *externalWeblinkUrl; // ivar: _externalWeblinkUrl
@property (retain, nonatomic) NSString *feedId; // ivar: _feedId
@property (nonatomic) int feedType; // ivar: _feedType
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // ivar: _fractionalCohortMemberships
@property (nonatomic) BOOL fromNextArticleAffordanceTap; // ivar: _fromNextArticleAffordanceTap
@property (retain, nonatomic) NSString *groupFeedId; // ivar: _groupFeedId
@property (nonatomic) int groupType; // ivar: _groupType
@property (retain, nonatomic) NSData *groupViewExposureId; // ivar: _groupViewExposureId
@property (readonly, nonatomic) BOOL hasArticleSessionId;
@property (nonatomic) BOOL hasArticleType;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) BOOL hasBackendArticleVersionInt64;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (nonatomic) BOOL hasCharacterCount;
@property (readonly, nonatomic) BOOL hasContentId;
@property (nonatomic) BOOL hasContentType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (readonly, nonatomic) BOOL hasExternalWeblinkUrl;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasFromNextArticleAffordanceTap;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (readonly, nonatomic) BOOL hasIadNativeAd;
@property (readonly, nonatomic) BOOL hasIadNativeCampaign;
@property (readonly, nonatomic) BOOL hasIadNativeCampaignAd;
@property (readonly, nonatomic) BOOL hasIadNativeLine;
@property (readonly, nonatomic) BOOL hasIosActivityType;
@property (nonatomic) BOOL hasIsBreakingNewsArticle;
@property (nonatomic) BOOL hasIsCoverArticle;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsFreeArticle;
@property (nonatomic) BOOL hasIsGroupedArticle;
@property (nonatomic) BOOL hasIsNativeAd;
@property (nonatomic) BOOL hasIsNotificationArticle;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL hasIsSearchResult;
@property (nonatomic) BOOL hasIsTopStoryArticle;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasNativeCampaignData;
@property (nonatomic) BOOL hasNextArticleAffordanceType;
@property (readonly, nonatomic) BOOL hasNextArticleAffordanceTypeFeedId;
@property (readonly, nonatomic) BOOL hasNotificationId;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (readonly, nonatomic) BOOL hasPreviousArticleId;
@property (nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic) BOOL hasPublisherArticleVersionInt64;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (nonatomic) BOOL hasResultType;
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (nonatomic) BOOL hasShareLocation;
@property (nonatomic) BOOL hasShareMethod;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property (readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property (nonatomic) BOOL hasTopStoryType;
@property (readonly, nonatomic) BOOL hasWidgetEngagement;
@property (retain, nonatomic) NSString *iadNativeAd; // ivar: _iadNativeAd
@property (retain, nonatomic) NSString *iadNativeCampaign; // ivar: _iadNativeCampaign
@property (retain, nonatomic) NSString *iadNativeCampaignAd; // ivar: _iadNativeCampaignAd
@property (retain, nonatomic) NSString *iadNativeLine; // ivar: _iadNativeLine
@property (retain, nonatomic) NSString *iosActivityType; // ivar: _iosActivityType
@property (nonatomic) BOOL isBreakingNewsArticle; // ivar: _isBreakingNewsArticle
@property (nonatomic) BOOL isCoverArticle; // ivar: _isCoverArticle
@property (nonatomic) BOOL isDigitalReplicaAd; // ivar: _isDigitalReplicaAd
@property (nonatomic) BOOL isFreeArticle; // ivar: _isFreeArticle
@property (nonatomic) BOOL isGroupedArticle; // ivar: _isGroupedArticle
@property (nonatomic) BOOL isNativeAd; // ivar: _isNativeAd
@property (nonatomic) BOOL isNotificationArticle; // ivar: _isNotificationArticle
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel; // ivar: _isPaidSubscriberToSourceChannel
@property (nonatomic) BOOL isSearchResult; // ivar: _isSearchResult
@property (nonatomic) BOOL isTopStoryArticle; // ivar: _isTopStoryArticle
@property (nonatomic) BOOL isUserSubscribedToFeed; // ivar: _isUserSubscribedToFeed
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData; // ivar: _issueExposureData
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSMutableArray *namedEntities; // ivar: _namedEntities
@property (retain, nonatomic) NSString *nativeCampaignData; // ivar: _nativeCampaignData
@property (nonatomic) int nextArticleAffordanceType; // ivar: _nextArticleAffordanceType
@property (retain, nonatomic) NSString *nextArticleAffordanceTypeFeedId; // ivar: _nextArticleAffordanceTypeFeedId
@property (retain, nonatomic) NSString *notificationId; // ivar: _notificationId
@property (nonatomic) NSInteger personalizationTreatmentId; // ivar: _personalizationTreatmentId
@property (retain, nonatomic) NSString *previousArticleId; // ivar: _previousArticleId
@property (nonatomic) NSInteger previousArticlePublisherArticleVersion; // ivar: _previousArticlePublisherArticleVersion
@property (retain, nonatomic) NSString *previousArticleVersion; // ivar: _previousArticleVersion
@property (nonatomic) int publisherArticleVersion; // ivar: _publisherArticleVersion
@property (nonatomic) NSInteger publisherArticleVersionInt64; // ivar: _publisherArticleVersionInt64
@property (retain, nonatomic) NSString *referencedArticleId; // ivar: _referencedArticleId
@property (nonatomic) int resultType; // ivar: _resultType
@property (retain, nonatomic) NSString *sectionHeadlineId; // ivar: _sectionHeadlineId
@property (nonatomic) int shareLocation; // ivar: _shareLocation
@property (nonatomic) int shareMethod; // ivar: _shareMethod
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (retain, nonatomic) NSString *surfacedByChannelId; // ivar: _surfacedByChannelId
@property (retain, nonatomic) NSString *surfacedBySectionId; // ivar: _surfacedBySectionId
@property (retain, nonatomic) NSString *surfacedByTopicId; // ivar: _surfacedByTopicId
@property (nonatomic) int topStoryType; // ivar: _topStoryType
@property (retain, nonatomic) NSMutableArray *topicIds; // ivar: _topicIds
@property (retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // ivar: _widgetEngagement


+(Class)fractionalCohortMembershipType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articleTypeAsString:(int)arg0 ;
-(id)contentTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg0 ;
-(id)fractionalCohortMembershipAtIndex:(NSUInteger)arg0 ;
-(id)groupTypeAsString:(int)arg0 ;
-(id)namedEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)nextArticleAffordanceTypeAsString:(int)arg0 ;
-(id)topStoryTypeAsString:(int)arg0 ;
-(id)topicIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsArticleType:(id)arg0 ;
-(int)StringAsContentType:(id)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsNextArticleAffordanceType:(id)arg0 ;
-(int)StringAsTopStoryType:(id)arg0 ;
-(void)addFractionalCohortMembership:(id)arg0 ;
-(void)addNamedEntities:(id)arg0 ;
-(void)addTopicIds:(id)arg0 ;
-(void)clearFractionalCohortMemberships;
-(void)clearNamedEntities;
-(void)clearTopicIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif