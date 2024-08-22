// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBMEDIAEXPOSURE_H
#define NTPBMEDIAEXPOSURE_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "NTPBIssueData.h"
#import "NTPBIssueExposureData.h"
#import "NTPBIssueViewData.h"
#import "NTPBWidgetEngagement.h"

@interface NTPBMediaExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL adSupportedChannel; // ivar: _adSupportedChannel
@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSData *articleSessionId; // ivar: _articleSessionId
@property (nonatomic) int articleType; // ivar: _articleType
@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (nonatomic) int backendArticleVersion; // ivar: _backendArticleVersion
@property (nonatomic) NSInteger backendArticleVersionInt64; // ivar: _backendArticleVersionInt64
@property (nonatomic) int countOfImagesExposed; // ivar: _countOfImagesExposed
@property (nonatomic) int countOfImagesInGallery; // ivar: _countOfImagesInGallery
@property (nonatomic) int feedCellSection; // ivar: _feedCellSection
@property (retain, nonatomic) NSString *feedId; // ivar: _feedId
@property (nonatomic) int feedType; // ivar: _feedType
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // ivar: _fractionalCohortMemberships
@property (retain, nonatomic) NSString *galleryId; // ivar: _galleryId
@property (nonatomic) int galleryType; // ivar: _galleryType
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleSessionId;
@property (nonatomic) BOOL hasArticleType;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) BOOL hasBackendArticleVersionInt64;
@property (nonatomic) BOOL hasCountOfImagesExposed;
@property (nonatomic) BOOL hasCountOfImagesInGallery;
@property (nonatomic) BOOL hasFeedCellSection;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (readonly, nonatomic) BOOL hasGalleryId;
@property (nonatomic) BOOL hasGalleryType;
@property (readonly, nonatomic) BOOL hasIadNativeAd;
@property (readonly, nonatomic) BOOL hasIadNativeCampaign;
@property (readonly, nonatomic) BOOL hasIadNativeCampaignAd;
@property (readonly, nonatomic) BOOL hasIadNativeLine;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsNativeAd;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL hasIsVideoInFeed;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (readonly, nonatomic) BOOL hasMediaId;
@property (nonatomic) BOOL hasMediaLocation;
@property (nonatomic) BOOL hasMediaType;
@property (readonly, nonatomic) BOOL hasMetadata;
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
@property (nonatomic) BOOL hasVideoType;
@property (readonly, nonatomic) BOOL hasWidgetEngagement;
@property (retain, nonatomic) NSString *iadNativeAd; // ivar: _iadNativeAd
@property (retain, nonatomic) NSString *iadNativeCampaign; // ivar: _iadNativeCampaign
@property (retain, nonatomic) NSString *iadNativeCampaignAd; // ivar: _iadNativeCampaignAd
@property (retain, nonatomic) NSString *iadNativeLine; // ivar: _iadNativeLine
@property (nonatomic) BOOL isDigitalReplicaAd; // ivar: _isDigitalReplicaAd
@property (nonatomic) BOOL isNativeAd; // ivar: _isNativeAd
@property (nonatomic) BOOL isUserSubscribedToFeed; // ivar: _isUserSubscribedToFeed
@property (nonatomic) BOOL isVideoInFeed; // ivar: _isVideoInFeed
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData; // ivar: _issueExposureData
@property (retain, nonatomic) NTPBIssueViewData *issueViewData; // ivar: _issueViewData
@property (retain, nonatomic) NSString *mediaId; // ivar: _mediaId
@property (nonatomic) int mediaLocation; // ivar: _mediaLocation
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSString *metadata; // ivar: _metadata
@property (retain, nonatomic) NSMutableArray *namedEntities; // ivar: _namedEntities
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
-(id)galleryTypeAsString:(int)arg0 ;
-(id)mediaTypeAsString:(int)arg0 ;
-(id)namedEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)videoTypeAsString:(int)arg0 ;
-(int)StringAsArticleType:(id)arg0 ;
-(int)StringAsFeedCellSection:(id)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(int)StringAsGalleryType:(id)arg0 ;
-(int)StringAsMediaType:(id)arg0 ;
-(int)StringAsVideoType:(id)arg0 ;
-(void)addFractionalCohortMembership:(id)arg0 ;
-(void)addNamedEntities:(id)arg0 ;
-(void)clearFractionalCohortMemberships;
-(void)clearNamedEntities;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif