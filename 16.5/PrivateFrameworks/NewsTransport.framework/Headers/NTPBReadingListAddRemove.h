// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBREADINGLISTADDREMOVE_H
#define NTPBREADINGLISTADDREMOVE_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;


#import "NTPBChannelData.h"
#import "NTPBIssueData.h"
#import "NTPBIssueExposureData.h"

@interface NTPBReadingListAddRemove : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int addRemoveReadingListLocation; // ivar: _addRemoveReadingListLocation
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (nonatomic) int articleType; // ivar: _articleType
@property (nonatomic) int backendArticleVersion; // ivar: _backendArticleVersion
@property (nonatomic) NSInteger backendArticleVersionInt64; // ivar: _backendArticleVersionInt64
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NTPBChannelData *channelData; // ivar: _channelData
@property (nonatomic) int characterCount; // ivar: _characterCount
@property (nonatomic) int contentType; // ivar: _contentType
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (nonatomic) int feedType; // ivar: _feedType
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // ivar: _fractionalCohortMemberships
@property (nonatomic) BOOL fromNextArticleAffordanceTap; // ivar: _fromNextArticleAffordanceTap
@property (retain, nonatomic) NSString *groupFeedId; // ivar: _groupFeedId
@property (nonatomic) int groupType; // ivar: _groupType
@property (retain, nonatomic) NSData *groupViewExposureId; // ivar: _groupViewExposureId
@property (nonatomic) BOOL hasAddRemoveReadingListLocation;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) BOOL hasBackendArticleVersionInt64;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (nonatomic) BOOL hasCharacterCount;
@property (nonatomic) BOOL hasContentType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) BOOL hasFromNextArticleAffordanceTap;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (readonly, nonatomic) BOOL hasIadNativeAd;
@property (readonly, nonatomic) BOOL hasIadNativeCampaign;
@property (readonly, nonatomic) BOOL hasIadNativeCampaignAd;
@property (readonly, nonatomic) BOOL hasIadNativeLine;
@property (nonatomic) BOOL hasIsBreakingNewsArticle;
@property (nonatomic) BOOL hasIsCoverArticle;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsFreeArticle;
@property (nonatomic) BOOL hasIsGroupedArticle;
@property (nonatomic) BOOL hasIsNativeAd;
@property (nonatomic) BOOL hasIsNotificationArticle;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL hasIsSearchResultArticle;
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
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property (readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property (nonatomic) BOOL hasTopStoryType;
@property (nonatomic) BOOL hasUserAction;
@property (retain, nonatomic) NSString *iadNativeAd; // ivar: _iadNativeAd
@property (retain, nonatomic) NSString *iadNativeCampaign; // ivar: _iadNativeCampaign
@property (retain, nonatomic) NSString *iadNativeCampaignAd; // ivar: _iadNativeCampaignAd
@property (retain, nonatomic) NSString *iadNativeLine; // ivar: _iadNativeLine
@property (nonatomic) BOOL isBreakingNewsArticle; // ivar: _isBreakingNewsArticle
@property (nonatomic) BOOL isCoverArticle; // ivar: _isCoverArticle
@property (nonatomic) BOOL isDigitalReplicaAd; // ivar: _isDigitalReplicaAd
@property (nonatomic) BOOL isFreeArticle; // ivar: _isFreeArticle
@property (nonatomic) BOOL isGroupedArticle; // ivar: _isGroupedArticle
@property (nonatomic) BOOL isNativeAd; // ivar: _isNativeAd
@property (nonatomic) BOOL isNotificationArticle; // ivar: _isNotificationArticle
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel; // ivar: _isPaidSubscriberToSourceChannel
@property (nonatomic) BOOL isSearchResultArticle; // ivar: _isSearchResultArticle
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
@property (retain, nonatomic) NSString *sectionHeadlineId; // ivar: _sectionHeadlineId
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (retain, nonatomic) NSString *surfacedByChannelId; // ivar: _surfacedByChannelId
@property (retain, nonatomic) NSString *surfacedBySectionId; // ivar: _surfacedBySectionId
@property (retain, nonatomic) NSString *surfacedByTopicId; // ivar: _surfacedByTopicId
@property (nonatomic) int topStoryType; // ivar: _topStoryType
@property (retain, nonatomic) NSMutableArray *topicIds; // ivar: _topicIds
@property (nonatomic) int userAction; // ivar: _userAction


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