// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBARTICLEHOSTVIEWEXPOSURE_H
#define NTPBARTICLEHOSTVIEWEXPOSURE_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "NTPBAlternateHeadline.h"
#import "NTPBChannelData.h"
#import "NTPBIssueData.h"
#import "NTPBIssueExposureData.h"
#import "NTPBIssueViewContextData.h"
#import "NTPBIssueViewData.h"
#import "NTPBWidgetEngagement.h"

@interface NTPBArticleHostViewExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int activeTimeSpent; // ivar: _activeTimeSpent
@property (nonatomic) BOOL adSupportedChannel; // ivar: _adSupportedChannel
@property (nonatomic) CGFloat agedPersonalizationScore; // ivar: _agedPersonalizationScore
@property (nonatomic) CGFloat agedUserFeedbackScore; // ivar: _agedUserFeedbackScore
@property (retain, nonatomic) NTPBAlternateHeadline *alternateHeadline; // ivar: _alternateHeadline
@property (retain, nonatomic) NSString *anfComponentId; // ivar: _anfComponentId
@property (nonatomic) int articleDisplayRankInGroup; // ivar: _articleDisplayRankInGroup
@property (nonatomic) int articleHostViewType; // ivar: _articleHostViewType
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (nonatomic) BOOL articleLoaded; // ivar: _articleLoaded
@property (retain, nonatomic) NSData *articleSessionId; // ivar: _articleSessionId
@property (nonatomic) int articleSuggestionOrigin; // ivar: _articleSuggestionOrigin
@property (nonatomic) int articleType; // ivar: _articleType
@property (nonatomic) int articleViewPresentationReason; // ivar: _articleViewPresentationReason
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (nonatomic) CGFloat autoSubscribeCtr; // ivar: _autoSubscribeCtr
@property (nonatomic) int backendArticleVersion; // ivar: _backendArticleVersion
@property (nonatomic) NSInteger backendArticleVersionInt64; // ivar: _backendArticleVersionInt64
@property (nonatomic) BOOL badgeExposure; // ivar: _badgeExposure
@property (nonatomic) int breakingNewsArticleCount; // ivar: _breakingNewsArticleCount
@property (nonatomic) int breakingNewsArticlePosition; // ivar: _breakingNewsArticlePosition
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (retain, nonatomic) NTPBChannelData *channelData; // ivar: _channelData
@property (nonatomic) int characterCount; // ivar: _characterCount
@property (nonatomic) CGFloat computedGlobalScoreCoefficient; // ivar: _computedGlobalScoreCoefficient
@property (nonatomic) int coverArticleDisplayRank; // ivar: _coverArticleDisplayRank
@property (nonatomic) int coverArticleFeatureType; // ivar: _coverArticleFeatureType
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (retain, nonatomic) NSString *curatedBatchId; // ivar: _curatedBatchId
@property (nonatomic) int curatedContentType; // ivar: _curatedContentType
@property (nonatomic) BOOL didBounce; // ivar: _didBounce
@property (nonatomic) BOOL didExpandDuringView; // ivar: _didExpandDuringView
@property (nonatomic) BOOL didOpenInSafari; // ivar: _didOpenInSafari
@property (nonatomic) int displayRank; // ivar: _displayRank
@property (nonatomic) CGFloat diversifiedPersonalizationScore; // ivar: _diversifiedPersonalizationScore
@property (retain, nonatomic) NSString *exposedGroupSourceChannelId; // ivar: _exposedGroupSourceChannelId
@property (retain, nonatomic) NSString *exposedInLocationId; // ivar: _exposedInLocationId
@property (nonatomic) CGFloat featureCtr; // ivar: _featureCtr
@property (nonatomic) int feedAutoSubscribeType; // ivar: _feedAutoSubscribeType
@property (nonatomic) int feedCellHostType; // ivar: _feedCellHostType
@property (nonatomic) int feedPresentationReason; // ivar: _feedPresentationReason
@property (retain, nonatomic) NSString *feedPresentationReasonSearchString; // ivar: _feedPresentationReasonSearchString
@property (nonatomic) int feedSubscriptionOrigin; // ivar: _feedSubscriptionOrigin
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // ivar: _fractionalCohortMemberships
@property (nonatomic) CGFloat globalScore; // ivar: _globalScore
@property (nonatomic) int groupArticleCountInForYou; // ivar: _groupArticleCountInForYou
@property (nonatomic) int groupDisplayRankInForYou; // ivar: _groupDisplayRankInForYou
@property (retain, nonatomic) NSString *groupFeedId; // ivar: _groupFeedId
@property (nonatomic) int groupFormationReason; // ivar: _groupFormationReason
@property (nonatomic) int groupLocation; // ivar: _groupLocation
@property (nonatomic) int groupPresentationReason; // ivar: _groupPresentationReason
@property (nonatomic) int groupType; // ivar: _groupType
@property (retain, nonatomic) NSData *groupViewExposureId; // ivar: _groupViewExposureId
@property (nonatomic) BOOL hasActiveTimeSpent;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL hasAgedPersonalizationScore;
@property (nonatomic) BOOL hasAgedUserFeedbackScore;
@property (readonly, nonatomic) BOOL hasAlternateHeadline;
@property (readonly, nonatomic) BOOL hasAnfComponentId;
@property (nonatomic) BOOL hasArticleDisplayRankInGroup;
@property (nonatomic) BOOL hasArticleHostViewType;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasArticleLoaded;
@property (readonly, nonatomic) BOOL hasArticleSessionId;
@property (nonatomic) BOOL hasArticleSuggestionOrigin;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic) BOOL hasArticleViewPresentationReason;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasAutoSubscribeCtr;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) BOOL hasBackendArticleVersionInt64;
@property (nonatomic) BOOL hasBadgeExposure;
@property (nonatomic) BOOL hasBreakingNewsArticleCount;
@property (nonatomic) BOOL hasBreakingNewsArticlePosition;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (nonatomic) BOOL hasCharacterCount;
@property (nonatomic) BOOL hasComputedGlobalScoreCoefficient;
@property (nonatomic) BOOL hasCoverArticleDisplayRank;
@property (nonatomic) BOOL hasCoverArticleFeatureType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (readonly, nonatomic) BOOL hasCuratedBatchId;
@property (nonatomic) BOOL hasCuratedContentType;
@property (nonatomic) BOOL hasDidBounce;
@property (nonatomic) BOOL hasDidExpandDuringView;
@property (nonatomic) BOOL hasDidOpenInSafari;
@property (nonatomic) BOOL hasDisplayRank;
@property (nonatomic) BOOL hasDiversifiedPersonalizationScore;
@property (readonly, nonatomic) BOOL hasExposedGroupSourceChannelId;
@property (readonly, nonatomic) BOOL hasExposedInLocationId;
@property (nonatomic) BOOL hasFeatureCtr;
@property (nonatomic) BOOL hasFeedAutoSubscribeType;
@property (nonatomic) BOOL hasFeedCellHostType;
@property (nonatomic) BOOL hasFeedPresentationReason;
@property (readonly, nonatomic) BOOL hasFeedPresentationReasonSearchString;
@property (nonatomic) BOOL hasFeedSubscriptionOrigin;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasGlobalScore;
@property (nonatomic) BOOL hasGroupArticleCountInForYou;
@property (nonatomic) BOOL hasGroupDisplayRankInForYou;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupFormationReason;
@property (nonatomic) BOOL hasGroupLocation;
@property (nonatomic) BOOL hasGroupPresentationReason;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (nonatomic) BOOL hasHeroArticleType;
@property (readonly, nonatomic) BOOL hasIadNativeAd;
@property (readonly, nonatomic) BOOL hasIadNativeCampaign;
@property (readonly, nonatomic) BOOL hasIadNativeCampaignAd;
@property (readonly, nonatomic) BOOL hasIadNativeLine;
@property (nonatomic) BOOL hasIsAudioEligible;
@property (nonatomic) BOOL hasIsAudioEngaged;
@property (nonatomic) BOOL hasIsBreakingNewsArticle;
@property (nonatomic) BOOL hasIsCoverArticle;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsExplorationArticle;
@property (nonatomic) BOOL hasIsFreeArticle;
@property (nonatomic) BOOL hasIsGroupedArticle;
@property (nonatomic) BOOL hasIsNativeAd;
@property (nonatomic) BOOL hasIsNewUserToArticle;
@property (nonatomic) BOOL hasIsPaidSubscriberToFeed;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL hasIsSharedSubscriptionOnlyArticle;
@property (nonatomic) BOOL hasIsSubscribedToGroupFeed;
@property (nonatomic) BOOL hasIsSubscribedToSourceChannel;
@property (nonatomic) BOOL hasIsTopStoryArticle;
@property (nonatomic) BOOL hasIsUserSubscribedToParentFeed;
@property (nonatomic) BOOL hasIsVideoInFeed;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (readonly, nonatomic) BOOL hasIssueViewContextData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (nonatomic) BOOL hasLoadFailureReason;
@property (nonatomic) BOOL hasMaxActiveTimeSpent;
@property (nonatomic) BOOL hasMaxVerticalScrollPositionEnding;
@property (nonatomic) BOOL hasModuleEventType;
@property (readonly, nonatomic) BOOL hasModuleExposureId;
@property (nonatomic) BOOL hasModuleItemCount;
@property (nonatomic) BOOL hasModuleItemPosition;
@property (nonatomic) BOOL hasModuleLocation;
@property (readonly, nonatomic) BOOL hasNativeCampaignData;
@property (nonatomic) BOOL hasNextArticleAffordanceType;
@property (readonly, nonatomic) BOOL hasNextArticleAffordanceTypeFeedId;
@property (readonly, nonatomic) BOOL hasNotificationId;
@property (nonatomic) BOOL hasPaidNonpaidSubscriptionCtr;
@property (nonatomic) BOOL hasPaidSubscriberToFeedType;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (nonatomic) BOOL hasParentFeedType;
@property (nonatomic) BOOL hasPersonalizationScore;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (nonatomic) BOOL hasPreviousArticleHostViewTypeIfSwipe;
@property (readonly, nonatomic) BOOL hasPreviousArticleId;
@property (nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property (readonly, nonatomic) BOOL hasPreviousWebEmbedId;
@property (nonatomic) BOOL hasPreviousWebEmbedLocation;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic) BOOL hasPublisherArticleVersionInt64;
@property (nonatomic) BOOL hasRankInVideoPlaylist;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (readonly, nonatomic) BOOL hasReferringSourceApplication;
@property (readonly, nonatomic) BOOL hasReferringUrl;
@property (nonatomic) BOOL hasRole;
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (readonly, nonatomic) BOOL hasSourceBinId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasStoryType;
@property (nonatomic) BOOL hasSubscribedChannelCtr;
@property (nonatomic) BOOL hasSubscriptionOnlyArticle;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property (readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property (nonatomic) BOOL hasTopStoryMandatoryArticleCount;
@property (nonatomic) BOOL hasTopStoryOptionalArticleCount;
@property (nonatomic) BOOL hasTopStoryType;
@property (readonly, nonatomic) BOOL hasUserActivityType;
@property (nonatomic) BOOL hasUserFeedbackScore;
@property (readonly, nonatomic) BOOL hasViewFrameInScreen;
@property (nonatomic) BOOL hasViewFromNotificationDirectOpen;
@property (readonly, nonatomic) BOOL hasWebEmbedId;
@property (nonatomic) BOOL hasWidgetArticleRank;
@property (readonly, nonatomic) BOOL hasWidgetEngagement;
@property (nonatomic) BOOL hasWidgetSection;
@property (nonatomic) BOOL hasWidgetSectionArticleRank;
@property (nonatomic) int heroArticleType; // ivar: _heroArticleType
@property (retain, nonatomic) NSString *iadNativeAd; // ivar: _iadNativeAd
@property (retain, nonatomic) NSString *iadNativeCampaign; // ivar: _iadNativeCampaign
@property (retain, nonatomic) NSString *iadNativeCampaignAd; // ivar: _iadNativeCampaignAd
@property (retain, nonatomic) NSString *iadNativeLine; // ivar: _iadNativeLine
@property (nonatomic) BOOL isAudioEligible; // ivar: _isAudioEligible
@property (nonatomic) BOOL isAudioEngaged; // ivar: _isAudioEngaged
@property (nonatomic) BOOL isBreakingNewsArticle; // ivar: _isBreakingNewsArticle
@property (nonatomic) BOOL isCoverArticle; // ivar: _isCoverArticle
@property (nonatomic) BOOL isDigitalReplicaAd; // ivar: _isDigitalReplicaAd
@property (nonatomic) BOOL isExplorationArticle; // ivar: _isExplorationArticle
@property (nonatomic) BOOL isFreeArticle; // ivar: _isFreeArticle
@property (nonatomic) BOOL isGroupedArticle; // ivar: _isGroupedArticle
@property (nonatomic) BOOL isNativeAd; // ivar: _isNativeAd
@property (nonatomic) BOOL isNewUserToArticle; // ivar: _isNewUserToArticle
@property (nonatomic) BOOL isPaidSubscriberToFeed; // ivar: _isPaidSubscriberToFeed
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel; // ivar: _isPaidSubscriberToSourceChannel
@property (nonatomic) BOOL isSharedSubscriptionOnlyArticle; // ivar: _isSharedSubscriptionOnlyArticle
@property (nonatomic) BOOL isSubscribedToGroupFeed; // ivar: _isSubscribedToGroupFeed
@property (nonatomic) BOOL isSubscribedToSourceChannel; // ivar: _isSubscribedToSourceChannel
@property (nonatomic) BOOL isTopStoryArticle; // ivar: _isTopStoryArticle
@property (nonatomic) BOOL isUserSubscribedToParentFeed; // ivar: _isUserSubscribedToParentFeed
@property (nonatomic) BOOL isVideoInFeed; // ivar: _isVideoInFeed
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData; // ivar: _issueExposureData
@property (retain, nonatomic) NTPBIssueViewContextData *issueViewContextData; // ivar: _issueViewContextData
@property (retain, nonatomic) NTPBIssueViewData *issueViewData; // ivar: _issueViewData
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) int loadFailureReason; // ivar: _loadFailureReason
@property (nonatomic) int maxActiveTimeSpent; // ivar: _maxActiveTimeSpent
@property (nonatomic) float maxVerticalScrollPositionEnding; // ivar: _maxVerticalScrollPositionEnding
@property (nonatomic) int moduleEventType; // ivar: _moduleEventType
@property (retain, nonatomic) NSData *moduleExposureId; // ivar: _moduleExposureId
@property (nonatomic) int moduleItemCount; // ivar: _moduleItemCount
@property (nonatomic) int moduleItemPosition; // ivar: _moduleItemPosition
@property (nonatomic) int moduleLocation; // ivar: _moduleLocation
@property (retain, nonatomic) NSMutableArray *namedEntities; // ivar: _namedEntities
@property (retain, nonatomic) NSString *nativeCampaignData; // ivar: _nativeCampaignData
@property (nonatomic) int nextArticleAffordanceType; // ivar: _nextArticleAffordanceType
@property (retain, nonatomic) NSString *nextArticleAffordanceTypeFeedId; // ivar: _nextArticleAffordanceTypeFeedId
@property (retain, nonatomic) NSString *notificationId; // ivar: _notificationId
@property (nonatomic) CGFloat paidNonpaidSubscriptionCtr; // ivar: _paidNonpaidSubscriptionCtr
@property (nonatomic) int paidSubscriberToFeedType; // ivar: _paidSubscriberToFeedType
@property (retain, nonatomic) NSString *parentFeedId; // ivar: _parentFeedId
@property (nonatomic) int parentFeedType; // ivar: _parentFeedType
@property (nonatomic) CGFloat personalizationScore; // ivar: _personalizationScore
@property (nonatomic) NSInteger personalizationTreatmentId; // ivar: _personalizationTreatmentId
@property (nonatomic) int previousArticleHostViewTypeIfSwipe; // ivar: _previousArticleHostViewTypeIfSwipe
@property (retain, nonatomic) NSString *previousArticleId; // ivar: _previousArticleId
@property (nonatomic) NSInteger previousArticlePublisherArticleVersion; // ivar: _previousArticlePublisherArticleVersion
@property (retain, nonatomic) NSString *previousArticleVersion; // ivar: _previousArticleVersion
@property (retain, nonatomic) NSString *previousWebEmbedId; // ivar: _previousWebEmbedId
@property (nonatomic) int previousWebEmbedLocation; // ivar: _previousWebEmbedLocation
@property (nonatomic) int publisherArticleVersion; // ivar: _publisherArticleVersion
@property (nonatomic) NSInteger publisherArticleVersionInt64; // ivar: _publisherArticleVersionInt64
@property (retain, nonatomic) NSMutableArray *purchaseOffersItems; // ivar: _purchaseOffersItems
@property (nonatomic) int rankInVideoPlaylist; // ivar: _rankInVideoPlaylist
@property (retain, nonatomic) NSString *referencedArticleId; // ivar: _referencedArticleId
@property (retain, nonatomic) NSString *referringSourceApplication; // ivar: _referringSourceApplication
@property (retain, nonatomic) NSString *referringUrl; // ivar: _referringUrl
@property (nonatomic) int role; // ivar: _role
@property (retain, nonatomic) NSString *sectionHeadlineId; // ivar: _sectionHeadlineId
@property (retain, nonatomic) NSString *sourceBinId; // ivar: _sourceBinId
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (retain, nonatomic) NSString *storyType; // ivar: _storyType
@property (nonatomic) CGFloat subscribedChannelCtr; // ivar: _subscribedChannelCtr
@property (nonatomic) BOOL subscriptionOnlyArticle; // ivar: _subscriptionOnlyArticle
@property (retain, nonatomic) NSString *surfacedByChannelId; // ivar: _surfacedByChannelId
@property (retain, nonatomic) NSString *surfacedBySectionId; // ivar: _surfacedBySectionId
@property (retain, nonatomic) NSMutableArray *surfacedByTagIds; // ivar: _surfacedByTagIds
@property (retain, nonatomic) NSString *surfacedByTopicId; // ivar: _surfacedByTopicId
@property (nonatomic) int topStoryMandatoryArticleCount; // ivar: _topStoryMandatoryArticleCount
@property (nonatomic) int topStoryOptionalArticleCount; // ivar: _topStoryOptionalArticleCount
@property (nonatomic) int topStoryType; // ivar: _topStoryType
@property (retain, nonatomic) NSMutableArray *topicIds; // ivar: _topicIds
@property (retain, nonatomic) NSString *userActivityType; // ivar: _userActivityType
@property (nonatomic) CGFloat userFeedbackScore; // ivar: _userFeedbackScore
@property (retain, nonatomic) NSString *viewFrameInScreen; // ivar: _viewFrameInScreen
@property (nonatomic) BOOL viewFromNotificationDirectOpen; // ivar: _viewFromNotificationDirectOpen
@property (retain, nonatomic) NSString *webEmbedId; // ivar: _webEmbedId
@property (nonatomic) int widgetArticleRank; // ivar: _widgetArticleRank
@property (retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // ivar: _widgetEngagement
@property (nonatomic) int widgetSection; // ivar: _widgetSection
@property (nonatomic) int widgetSectionArticleRank; // ivar: _widgetSectionArticleRank


+(Class)fractionalCohortMembershipType;
+(Class)purchaseOffersItemType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articleTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)curatedContentTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedAutoSubscribeTypeAsString:(int)arg0 ;
-(id)feedCellHostTypeAsString:(int)arg0 ;
-(id)feedPresentationReasonAsString:(int)arg0 ;
-(id)feedSubscriptionOriginAsString:(int)arg0 ;
-(id)fractionalCohortMembershipAtIndex:(NSUInteger)arg0 ;
-(id)groupFormationReasonAsString:(int)arg0 ;
-(id)groupLocationAsString:(int)arg0 ;
-(id)groupPresentationReasonAsString:(int)arg0 ;
-(id)groupTypeAsString:(int)arg0 ;
-(id)moduleEventTypeAsString:(int)arg0 ;
-(id)moduleLocationAsString:(int)arg0 ;
-(id)namedEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)nextArticleAffordanceTypeAsString:(int)arg0 ;
-(id)paidSubscriberToFeedTypeAsString:(int)arg0 ;
-(id)parentFeedTypeAsString:(int)arg0 ;
-(id)previousWebEmbedLocationAsString:(int)arg0 ;
-(id)purchaseOffersItemAtIndex:(NSUInteger)arg0 ;
-(id)surfacedByTagIdsAtIndex:(NSUInteger)arg0 ;
-(id)topStoryTypeAsString:(int)arg0 ;
-(id)topicIdsAtIndex:(NSUInteger)arg0 ;
-(id)widgetSectionAsString:(int)arg0 ;
-(int)StringAsArticleType:(id)arg0 ;
-(int)StringAsCuratedContentType:(id)arg0 ;
-(int)StringAsFeedAutoSubscribeType:(id)arg0 ;
-(int)StringAsFeedCellHostType:(id)arg0 ;
-(int)StringAsFeedPresentationReason:(id)arg0 ;
-(int)StringAsFeedSubscriptionOrigin:(id)arg0 ;
-(int)StringAsGroupFormationReason:(id)arg0 ;
-(int)StringAsGroupLocation:(id)arg0 ;
-(int)StringAsGroupPresentationReason:(id)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsModuleEventType:(id)arg0 ;
-(int)StringAsModuleLocation:(id)arg0 ;
-(int)StringAsNextArticleAffordanceType:(id)arg0 ;
-(int)StringAsPaidSubscriberToFeedType:(id)arg0 ;
-(int)StringAsParentFeedType:(id)arg0 ;
-(int)StringAsPreviousWebEmbedLocation:(id)arg0 ;
-(int)StringAsTopStoryType:(id)arg0 ;
-(int)StringAsWidgetSection:(id)arg0 ;
-(void)addFractionalCohortMembership:(id)arg0 ;
-(void)addNamedEntities:(id)arg0 ;
-(void)addPurchaseOffersItem:(id)arg0 ;
-(void)addSurfacedByTagIds:(id)arg0 ;
-(void)addTopicIds:(id)arg0 ;
-(void)clearFractionalCohortMemberships;
-(void)clearNamedEntities;
-(void)clearPurchaseOffersItems;
-(void)clearSurfacedByTagIds;
-(void)clearTopicIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif