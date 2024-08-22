// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBMEDIAENGAGECOMPLETE_H
#define NTPBMEDIAENGAGECOMPLETE_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "NTPBAlternateHeadline.h"
#import "NTPBIssueData.h"
#import "NTPBIssueExposureData.h"
#import "NTPBIssueViewData.h"
#import "NTPBWidgetEngagement.h"

@interface NTPBMediaEngageComplete : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL adSupportedChannel; // ivar: _adSupportedChannel
@property (retain, nonatomic) NTPBAlternateHeadline *alternateHeadline; // ivar: _alternateHeadline
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleSessionId; // ivar: _articleSessionId
@property (nonatomic) int articleType; // ivar: _articleType
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (nonatomic) int backendArticleVersion; // ivar: _backendArticleVersion
@property (nonatomic) NSInteger backendArticleVersionInt64; // ivar: _backendArticleVersionInt64
@property (nonatomic) int feedCellSection; // ivar: _feedCellSection
@property (retain, nonatomic) NSString *feedId; // ivar: _feedId
@property (nonatomic) int feedType; // ivar: _feedType
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // ivar: _fractionalCohortMemberships
@property (retain, nonatomic) NSString *groupFeedId; // ivar: _groupFeedId
@property (nonatomic) int groupType; // ivar: _groupType
@property (retain, nonatomic) NSData *groupViewExposureId; // ivar: _groupViewExposureId
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (readonly, nonatomic) BOOL hasAlternateHeadline;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleSessionId;
@property (nonatomic) BOOL hasArticleType;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) BOOL hasBackendArticleVersionInt64;
@property (nonatomic) BOOL hasFeedCellSection;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (readonly, nonatomic) BOOL hasIadNativeAd;
@property (readonly, nonatomic) BOOL hasIadNativeCampaign;
@property (readonly, nonatomic) BOOL hasIadNativeCampaignAd;
@property (readonly, nonatomic) BOOL hasIadNativeLine;
@property (nonatomic) BOOL hasIsBreakingNewsArticle;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsNativeAd;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL hasIsVideoInFeed;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (nonatomic) BOOL hasMediaDuration;
@property (readonly, nonatomic) BOOL hasMediaId;
@property (nonatomic) BOOL hasMediaPlayLocation;
@property (nonatomic) BOOL hasMediaTimePlayed;
@property (nonatomic) BOOL hasMediaType;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasNativeCampaignData;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (readonly, nonatomic) BOOL hasPreviousArticleId;
@property (nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic) BOOL hasPublisherArticleVersionInt64;
@property (nonatomic) BOOL hasRankInVideoPlaylist;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property (readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property (nonatomic) BOOL hasVideoType;
@property (readonly, nonatomic) BOOL hasWidgetEngagement;
@property (retain, nonatomic) NSString *iadNativeAd; // ivar: _iadNativeAd
@property (retain, nonatomic) NSString *iadNativeCampaign; // ivar: _iadNativeCampaign
@property (retain, nonatomic) NSString *iadNativeCampaignAd; // ivar: _iadNativeCampaignAd
@property (retain, nonatomic) NSString *iadNativeLine; // ivar: _iadNativeLine
@property (nonatomic) BOOL isBreakingNewsArticle; // ivar: _isBreakingNewsArticle
@property (nonatomic) BOOL isDigitalReplicaAd; // ivar: _isDigitalReplicaAd
@property (nonatomic) BOOL isNativeAd; // ivar: _isNativeAd
@property (nonatomic) BOOL isUserSubscribedToFeed; // ivar: _isUserSubscribedToFeed
@property (nonatomic) BOOL isVideoInFeed; // ivar: _isVideoInFeed
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData; // ivar: _issueExposureData
@property (retain, nonatomic) NTPBIssueViewData *issueViewData; // ivar: _issueViewData
@property (nonatomic) NSInteger mediaDuration; // ivar: _mediaDuration
@property (retain, nonatomic) NSString *mediaId; // ivar: _mediaId
@property (nonatomic) int mediaPlayLocation; // ivar: _mediaPlayLocation
@property (nonatomic) NSInteger mediaTimePlayed; // ivar: _mediaTimePlayed
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSString *metadata; // ivar: _metadata
@property (retain, nonatomic) NSMutableArray *namedEntities; // ivar: _namedEntities
@property (retain, nonatomic) NSString *nativeCampaignData; // ivar: _nativeCampaignData
@property (nonatomic) NSInteger personalizationTreatmentId; // ivar: _personalizationTreatmentId
@property (retain, nonatomic) NSString *previousArticleId; // ivar: _previousArticleId
@property (nonatomic) NSInteger previousArticlePublisherArticleVersion; // ivar: _previousArticlePublisherArticleVersion
@property (retain, nonatomic) NSString *previousArticleVersion; // ivar: _previousArticleVersion
@property (nonatomic) int publisherArticleVersion; // ivar: _publisherArticleVersion
@property (nonatomic) NSInteger publisherArticleVersionInt64; // ivar: _publisherArticleVersionInt64
@property (nonatomic) int rankInVideoPlaylist; // ivar: _rankInVideoPlaylist
@property (retain, nonatomic) NSString *referencedArticleId; // ivar: _referencedArticleId
@property (retain, nonatomic) NSString *sectionHeadlineId; // ivar: _sectionHeadlineId
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId
@property (retain, nonatomic) NSString *surfacedByChannelId; // ivar: _surfacedByChannelId
@property (retain, nonatomic) NSString *surfacedBySectionId; // ivar: _surfacedBySectionId
@property (retain, nonatomic) NSString *surfacedByTopicId; // ivar: _surfacedByTopicId
@property (retain, nonatomic) NSMutableArray *topicIds; // ivar: _topicIds
@property (nonatomic) int videoType; // ivar: _videoType
@property (retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // ivar: _widgetEngagement


+(Class)fractionalCohortMembershipType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articleTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedCellSectionAsString:(int)arg0 ;
-(id)feedTypeAsString:(int)arg0 ;
-(id)fractionalCohortMembershipAtIndex:(NSUInteger)arg0 ;
-(id)groupTypeAsString:(int)arg0 ;
-(id)mediaTypeAsString:(int)arg0 ;
-(id)namedEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)topicIdsAtIndex:(NSUInteger)arg0 ;
-(id)videoTypeAsString:(int)arg0 ;
-(int)StringAsArticleType:(id)arg0 ;
-(int)StringAsFeedCellSection:(id)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(int)StringAsMediaType:(id)arg0 ;
-(int)StringAsVideoType:(id)arg0 ;
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